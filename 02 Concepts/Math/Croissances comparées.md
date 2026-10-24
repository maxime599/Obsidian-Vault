---
type: concept
matière: math
tags:
  - concepts
  - math/fonction
  - math/limites
  - math
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Limites]]"
date_creation: 2026-07-26
---

# Croissances comparées

> [!info] Définition courte
> Les croissances comparées étudient la vitesse de croissance respective de la fonction exponentielle $e^x$ et des fonctions puissances $x^n$. Au voisinage de $+\infty$ et $-\infty$, l'exponentielle l'emporte toujours sur les fonctions puissances.
```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```


## Explication intuitive

Au voisinage de $+\infty$, l'exponentielle $e^x$ grandit beaucoup plus vite que n'importe quelle puissance $x, x^2, x^n$.
- Dans un quotient $\frac{e^x}{x^n}$, l'exponentielle au numérateur domine largement $\to$ le résultat tend vers $+\infty$.
- En $-\infty$, dans un produit $x^n e^x$, la fonction $e^x$ s'écrase vers $0$ bien plus vite que $x^n$ ne tend vers l'infini $\to$ le produit tend vers $0$.


## Fonctionnement

Pour lever les formes indéterminées associant $e^x$ et $x^n$ :
1. Mettre en facteur le terme prépondérant ($e^x$).
2. Utiliser les formules de croissances comparées de référence.
3. En $-\infty$, faire si besoin un changement de variable $X = -x$ pour vous ramener aux limites usuelles.


## Exemple simple

Calculer $\lim_{x \to +\infty} \frac{e^x + x}{e^x - x^2}$ :

1. Factorisation par $e^x$ au numérateur et au dénominateur :
   $$f(x) = \frac{e^x \left(1 + \frac{x}{e^x}\right)}{e^x \left(1 - \frac{x^2}{e^x}\right)} = \frac{1 + \frac{x}{e^x}}{1 - \frac{x^2}{e^x}}$$
2. Par croissances comparées, $\lim_{x \to +\infty} \frac{x}{e^x} = 0$ et $\lim_{x \to +\infty} \frac{x^2}{e^x} = 0$.
3. On en déduit : $\lim_{x \to +\infty} f(x) = \frac{1 + 0}{1 - 0} = 1$.


## Formules / Algorithmes / Propriétés

> [!theorem] Limites fondamentales de l'exponentielle & Croissances comparées
> **Limites aux bornes :**
> $$\lim_{x \to +\infty} e^x = +\infty \quad \text{et} \quad \lim_{x \to -\infty} e^x = 0$$
>
> **Propriétés des croissances comparées (pour tout $n \in \mathbb{N}^*$) :**
> $$\lim_{x \to +\infty} \frac{e^x}{x^n} = +\infty$$
> $$\lim_{x \to -\infty} x^n e^x = 0$$
>
> **Limite utile en $0$ :**
> $$\lim_{x \to 0} \frac{e^x - 1}{x} = 1$$

> [!theorem] Démonstration clé du cours : $\lim_{x \to +\infty} \frac{e^x}{x} = +\infty$
> 1. Soit la fonction auxiliaire $g(x) = e^x - \frac{x^2}{2}$ définie sur $\mathbb{R}$.
> 2. $g'(x) = e^x - x$. Or pour tout $x \in \mathbb{R}$, $e^x \ge x + 1 > x$, donc $g'(x) > 0$.
> 3. $g$ est strictement croissante sur $[0; +\infty[$ et $g(0) = 1 > 0$.
> 4. Ainsi, pour tout $x \ge 0, \ e^x - \frac{x^2}{2} \ge 0 \implies e^x \ge \frac{x^2}{2}$.
> 5. Pour $x > 0$, en divisant par $x$ : $\frac{e^x}{x} \ge \frac{x}{2}$.
> 6. Comme $\lim_{x \to +\infty} \frac{x}{2} = +\infty$, par théorème de comparaison, **$\lim_{x \to +\infty} \frac{e^x}{x} = +\infty$**.


## Concepts liés

- [[Limites de fonctions et asymptotes]]
- [[Opérations sur les limites et formes indéterminées]]
- [[Limite d'une fonction composée]]
- [[Fonction exponentielle et logarithme népérien]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


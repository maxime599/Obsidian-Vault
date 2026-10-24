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

# Limite d'une fonction composée

> [!info] Définition courte
> La composée de la fonction $f$ suivie de la fonction $g$ est la fonction notée $g \circ f$ définie par $(g \circ f)(x) = g(f(x))$. La limite d'une fonction composée s'obtient en enchaînant successivement les limites des deux fonctions.
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

C'est un calcul en deux étapes (en chaîne) :
$$x \xrightarrow{\quad f \quad} u = f(x) \xrightarrow{\quad g \quad} g(u)$$
Quand $x$ s'approche de $a$, la valeur intermédiaire $f(x)$ s'approche d'un nombre $b$. On regarde ensuite vers quoi tend la fonction $g(u)$ lorsque $u$ s'approche de ce nombre $b$.


## Fonctionnement

Pour calculer $\lim_{x \to a} g(f(x))$ :

1. Décomposer l'expression globale sous la forme $g(f(x))$.
2. Poser $u = f(x)$ et calculer la limite intermédiaire : $\lim_{x \to a} f(x) = b$.
3. Calculer la limite finale : $\lim_{u \to b} g(u) = c$.
4. Conclure par composition : $\lim_{x \to a} (g \circ f)(x) = c$.


## Exemple simple

Soit la fonction $h(x) = \sqrt{2 - \frac{1}{x^2}}$ définie sur $]0; +\infty[$ :

1. On décompose : $h(x) = g(f(x))$ avec $f(x) = 2 - \frac{1}{x^2}$ et $g(u) = \sqrt{u}$.
2. **Étape 1** : $\lim_{x \to +\infty} \left(2 - \frac{1}{x^2}\right) = 2$.
3. **Étape 2** : $\lim_{u \to 2} \sqrt{u} = \sqrt{2}$.
4. **Conclusion** : D'après le théorème sur la limite d'une fonction composée, $\lim_{x \to +\infty} h(x) = \sqrt{2}$.


## Formules / Algorithmes / Propriétés

> [!theorem] Théorème de la limite d'une composée
> Soient $a, b, c$ des réels ou $+\infty$ ou $-\infty$.
> Si $\lim_{x \to a} f(x) = b$ et $\lim_{X \to b} g(X) = c$, alors :
> $$\lim_{x \to a} (g \circ f)(x) = c$$

> [!theorem] Conséquence : Composée d'une suite et d'une fonction
> Soit $f$ une fonction définie sur un intervalle $I$ et $(u_n)$ une suite dont tous les termes appartiennent à $I$.
> Si $\lim_{n \to +\infty} u_n = b$ et si $\lim_{x \to b} f(x) = c$, alors :
> $$\lim_{n \to +\infty} f(u_n) = c$$


## Concepts liés

- [[Limites de fonctions et asymptotes]]
- [[Croissances comparées]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

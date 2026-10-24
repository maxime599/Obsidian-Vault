---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/suite
  - math/theoreme
  - math/fonction
  - math/limites
MOC:
  - "[[MOC Suite]]"
  - "[[MOC Theoreme]]"
  - "[[MOC Fonction]]"
  - "[[MOC Limites]]"
date_creation: 2026-07-27
---
# Théorème du point fixe

> [!info] Définition courte
> Le **Théorème du point fixe** établit que si une suite récurrente $u_{n+1} = f(u_n)$ converge vers une limite $\ell$, et si la fonction $f$ est **continue**, alors la limite $\ell$ est nécessairement une solution de l'équation $f(x) = x$ (appelée point fixe de $f$).
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

Une suite récurrente fait passer chaque terme au terme suivant via la fonction $f$ ($u_0 \to u_1 \to u_2 \to \dots$). Si la suite converge vers un nombre $\ell$, les termes deviennent extrêmement proches de $\ell$. 

Par continuité de $f$, passer de $u_n$ à $u_{n+1}$ revient à calculer $f(\ell) \approx \ell$. À la limite, le terme ne « bouge plus » quand on lui applique $f$ : il est donc **fixe** par la fonction $f$.


## Fonctionnement

Pour déterminer la limite $\ell$ d'une suite récurrente $u_{n+1} = f(u_n)$ :

1. Justifier la convergence de la suite (ex: suite monotone et bornée).
2. Vérifier que la fonction $f$ est **continue** sur l'intervalle d'étude $I$.
3. Poser l'équation du point fixe : **$f(\ell) = \ell$**.
4. Résoudre l'équation pour trouver la (ou les) valeur(s) candidate(s) de $\ell$.
5. Sélectionner la bonne valeur de $\ell$ en utilisant les propriétés de la suite (par exemple son sens de variation ou ses minorants/majorants).


## Exemple simple

**Soit la suite $(u_n)$ définie par $u_0 = 3$ et $u_{n+1} = \frac{2 + 3u_n}{4 + u_n}$ pour tout $n \in \mathbb{N}$.**
*(On admet que $u_n \ge 1$ pour tout $n$ et que $(u_n)$ converge vers une limite $\ell$.)*

1. On pose $f(x) = \frac{2 + 3x}{4 + x}$, définie et continue sur $]-4 \,; +\infty[$.
2. Comme $(u_n)$ converge vers $\ell$ et que $f$ est continue, $\ell$ est solution de $f(\ell) = \ell$ :
   $$\frac{2 + 3\ell}{4 + \ell} = \ell \iff 2 + 3\ell = \ell(4 + \ell) \iff 2 + 3\ell = 4\ell + \ell^2 \iff \ell^2 + \ell - 2 = 0$$
3. Résolution du second degré : 
   $\Delta = 1^2 - 4(1)(-2) = 9 \implies \ell_1 = -2$ et $\ell_2 = 1$.
4. Choix de la limite : Comme pour tout $n$, $u_n \ge 1$, par passage à la limite on a $\ell \ge 1$.
5. **Conclusion** : La limite de la suite est **$\ell = 1$**.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> Soit $f$ une fonction définie et **continue** sur un intervalle $I$.
> Soit $(u_n)$ une suite définie par $u_0 \in I$ et pour tout entier $n$, $u_{n+1} = f(u_n)$ avec $u_n \in I$.
> 
> Si la suite $(u_n)$ converge vers une limite $\ell$, alors $\ell \in I$ et :
> $$f(\ell) = \ell$$

**Démonstration (Principe) :**
- On sait que $\lim_{n \to +\infty} u_n = \ell$, donc $\lim_{n \to +\infty} u_{n+1} = \ell$.
- Comme $f$ est continue en $\ell$, $\lim_{n \to +\infty} f(u_n) = f(\ell)$.
- Or $u_{n+1} = f(u_n)$. Par unicité de la limite, on en déduit que $\ell = f(\ell)$.


## Concepts liés

- [[Continuité d'une fonction]]
- [[Limite d'une suite]]
- [[Suites majorées, minorées, bornées]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

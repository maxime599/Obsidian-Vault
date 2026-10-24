---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/arithmetique
MOC:
  - "[[MOC Arithmetique]]"
date_creation: 2026-07-28
---
# PGCD et algorithme d'Euclide

> [!info] Définition courte
> Le **PGCD** de deux entiers $a$ et $b$, non tous deux nuls, est leur plus grand diviseur commun positif. Il est noté $\operatorname{pgcd}(a,b)$ ou $a\wedge b$.
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

Le PGCD est la plus grande taille de paquet permettant de répartir simultanément $a$ et $b$ objets sans reste. Deux entiers sont **premiers entre eux** lorsque leur PGCD vaut $1$.

## Fonctionnement

L'algorithme d'Euclide repose sur le fait que :
$$\operatorname{pgcd}(a,b)=\operatorname{pgcd}(b,r),$$
si $r$ est le reste de la division euclidienne de $a$ par $b$.

1. Diviser le plus grand entier par l'autre.
2. Remplacer le couple par le diviseur et le reste.
3. Recommencer jusqu'à obtenir un reste nul.
4. Le dernier reste non nul est le PGCD.

> [!example] Calculer $\operatorname{pgcd}(252,105)$.
> $$252=2\times105+42$$
> $$105=2\times42+21$$
> $$42=2\times21+0.$$
> Donc $\operatorname{pgcd}(252,105)=21$.

## Propriétés

> [!theorem] Propriétés du PGCD
> Pour $d=\operatorname{pgcd}(a,b)$ :
> - $d\mid a$ et $d\mid b$ ;
> - tout diviseur commun de $a$ et $b$ divise $d$ ;
> - $\operatorname{pgcd}(a,b)=1$ équivaut à « $a$ et $b$ sont premiers entre eux » ;
> - $\operatorname{pgcd}(a,b)=\operatorname{pgcd}(b,a-bq)$ pour tout $q\in\mathbb{Z}$.

## Concepts liés

- [[Division euclidienne dans Z]]
- [[Théorèmes de Bézout et de Gauss]]
- [[Équations diophantiennes linéaires]]
- [[Nombres premiers]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/arithmetique
  - math/theoreme
MOC:
  - "[[MOC Arithmetique]]"
  - "[[MOC Theoreme]]"
date_creation: 2026-07-28
---
# Théorèmes de Bézout et de Gauss

> [!info] Définition courte
> Le théorème de **Bézout** caractérise les entiers premiers entre eux par une combinaison linéaire. Le théorème de **Gauss** permet d'extraire un facteur premier entre lui-même et un autre facteur dans une divisibilité.
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

## Théorème de Bézout

> [!theorem] Identité de Bézout
> Pour tous entiers $a$ et $b$, non tous deux nuls, il existe des entiers $u$ et $v$ tels que :
> $$au+bv=\operatorname{pgcd}(a,b).$$
> En particulier :
> $$\operatorname{pgcd}(a,b)=1\iff\exists(u,v)\in\mathbb{Z}^2,\ au+bv=1.$$

> [!example] Avec $252=2\times105+42$ et $105=2\times42+21$, on remonte :
> $$21=105-2\times42=105-2(252-2\times105)=5\times105-2\times252.$$
> Ainsi, $(-2)\times252+5\times105=21$.

## Théorème de Gauss

> [!theorem] Théorème de Gauss
> Si $a\mid bc$ et si $\operatorname{pgcd}(a,b)=1$, alors $a\mid c$.

Un cas fondamental est le lemme d'Euclide : si $p$ est premier et $p\mid bc$, alors $p\mid b$ ou $p\mid c$.

## Concepts liés

- [[PGCD et algorithme d'Euclide]]
- [[Nombres premiers]]
- [[Équations diophantiennes linéaires]]
- [[Divisibilité dans Z]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/principe
MOC:
  - "[[07 MOC/Concepts/Optique_géometrique/MOC Principe|MOC Principe]]"
date_creation: 2026-10-18
Ressources:
  - "[[OPTIQUE GEOMETRIQUE I-II-III.pdf]]"
---

# Principe de Fermat et indépendance des rayons lumineux

> [!info] Définition courte
> Le **principe de Fermat** énonce que la lumière emprunte la trajectoire dont le temps de parcours est extrémal, constituant le fondement variationnel de l'optique géométrique, tandis que le principe d'**indépendance des rayons** postule que les faisceaux lumineux se croisent sans s'altérer.

```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        if (h.level === 1) continue;
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```

## 1. Principe de Fermat (Temps extrémal)

Pour aller d'un point $A$ à un point $B$, la lumière suit, parmi toutes les trajectoires possibles, celle dont le temps de parcours $T_{AB}$ est extrémal (minimal ou maximal) ($T_{AB}$)::$$T_{AB} = \frac{AI}{v_1} + \frac{IB}{v_2}$$
<!--SR:!2026-12-01,26,290-->
- **Conséquences** : Ce principe fondamental permet de démontrer la propagation rectiligne de la lumière dans un milieu homogène ainsi que de retrouver les lois de Snell-Descartes.
- **Dépendance** : La durée du trajet dépend de la position du point d'incidence $I$ et, par conséquent, des angles d'incidence.


## 2. Indépendance des rayons lumineux

- En un point où plusieurs rayons lumineux se croisent, ils **ne se modifient pas les uns les autres**.
- Le résultat de leur croisement correspond à la superposition des effets de chacun d'eux (le phénomène d'interférence n'est pas pris en compte dans le cadre de l'optique géométrique).


## Concepts liés

- [[Principes fondamentaux de propagation de la lumière]]
- [[Lois de Snell-Descartes et réflexion totale]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

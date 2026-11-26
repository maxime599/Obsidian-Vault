---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
MOC:
date_creation: 2026-11-21
Ressources:
  - "[[OPTIQUE GEOMETRIQUE IV.pdf]]"
---

# Miroir plan et miroir sphérique

> [!info] Définition courte
> Un miroir est une surface réfléchissante permettant de former des images par réflexion. Le miroir sphérique possède une courbure caractérisée par son rayon $\overline{SC}$, tandis que le miroir plan correspond au cas limite d'un rayon de courbure infini.

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

## 1. Miroir sphérique

### A. Paramètres et typologie
- $S$ : Sommet du miroir.
- $C$ : Centre de courbure du miroir.
- **Miroir concave :** $\overline{SC}$ ::< $0$.
<!--SR:!2026-11-26,4,270-->
- **Miroir convexe :** $\overline{SC}$ ::> $0$.
<!--SR:!2026-11-26,4,270-->

### B. Relation de conjugaison et foyers
- **Relation de conjugaison (origine au sommet)** (Miroir sphérique)::$$\frac{1}{\overline{SA}} + \frac{1}{\overline{SA'}} = \frac{2}{\overline{SC}}$$
<!--SR:!2026-11-26,4,270-->
- **Positions des foyers $F$ et $F'$** :
  Les foyers objet et image sont **==confondus==** pour le miroir sphérique ($\overline{SF} = \overline{SF'} = \frac{\overline{SC}}{2}$).
<!--SR:!2026-11-26,4,270-->

### C. Construction géométrique et grandissement
- **Construction géométrique** :
  - Le rayon issu de $B$ parallèle à l'axe se réfléchit en passant par $F$.
  - Le rayon issu de $B$ passant par $C$ se réfléchit sur lui-même (non dévié).
  - Le rayon issu de $B$ passant par $F$ se réfléchit parallèlement à l'axe.
- **Grandissement transversal** (Miroir sphérique)::$$\gamma = -\frac{\overline{SA'}}{\overline{SA}}$$
<!--SR:!2026-11-26,4,270-->


## 2. Miroir plan

Le rayon de courbure d'un miroir plan est infini ($\overline{SC} = \infty$) :
La relation de conjugaison devient alors (miroir plan)::$$\frac{1}{\overline{SA}} + \frac{1}{\overline{SA'}} = 0 \implies \overline{SA} = -\overline{SA'}$$
<!--SR:!2026-11-26,4,270-->

- $A$ et $A'$ sont **symétriques** par rapport au miroir.
- **Grandissement transversal :** $\gamma = 1$.


## Concepts liés

- [[Dioptre sphérique, dioptre plan et vergence]]
- [[Nature des objets, des images et foyers optiques]]
- [[Stigmatisme et conditions de Gauss]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date ASC
```
---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/model
MOC:
  - "[[MOC Model]]"
date_creation: 2026-10-14
Ressources:
  - "[[OPTIQUE GEOMETRIQUE I-II-III.pdf]]"
---

# Cadre et modèle du rayon en optique géométrique

> [!info] Définition courte
> L'**optique géométrique** étudie la ==formation des images et la propagation de la lumière à l'aide de la notion de **rayon lumineux**, en s'affranchissant des phénomènes ondulatoires complexes sous certaines conditions d'échelle.==
<!--SR:!2026-11-04,15,290-->

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

## 1. Cadre de l'étude et approximations

- L'optique géométrique s'intéresse aux phénomènes perçus par l'œil ou les détecteurs (formation d'images, miroirs, lentilles).
- **Phénomènes négligés** : Les interférences, la diffraction, la polarisation, la diffusion, ainsi que les processus microscopiques d'émission et d'absorption par la matière.


## 2. Le modèle du rayon lumineux

- En optique géométrique, le **rayon lumineux** est défini comme la ligne géométrique suivant laquelle se propage l'énergie lumineuse (analogue au point matériel en mécanique classique).
- Dans la théorie corpusculaire newtonienne, il correspond à la trajectoire des particules lumineuses.


## 3. Limites du modèle et diffraction

Pour isoler un rayon expérimentalement, il faudrait le faire passer par une ouverture très petite. 
- Si la taille de l'ouverture $a$ est du même ordre de grandeur que la longueur d'onde $\lambda$ ($a \approx \lambda$), le modèle du rayon lumineux montre ses limites et l'on observe un **phénomène de diffraction**.


## Concepts liés

- [[Modèle des ondes électromagnétiques et indice de réfraction]]
- [[Principes fondamentaux de propagation de la lumière]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
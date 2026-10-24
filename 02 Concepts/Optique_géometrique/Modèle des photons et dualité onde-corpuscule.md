---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/quantique
  - Optique_géometrique/model
MOC:
  - "[[07 MOC/Concepts/Optique_géometrique/MOC Quantique|MOC Quantique]]"
  - "[[MOC Model]]"
date_creation: 2026-10-14
Ressources:
  - "[[OPTIQUE GEOMETRIQUE I-II-III.pdf]]"
---

# Modèle des photons et dualité onde-corpuscule

> [!info] Définition courte
> Le **modèle des photons** introduit la quantification de l'énergie lumineuse (Max Planck, Albert Einstein), décrivant la lumière à la fois comme une onde et comme un flux de corpuscules, incarnant la **dualité onde-corpuscule**.

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

## 1. Quantification de l'énergie et les photons

- L'énergie d'une onde électromagnétique est quantifiée : elle est composée de quanta énergétiques appelés **photons**.
- Un photon est une particule de masse nulle et de charge nulle se déplaçant à la vitesse de la lumière. Il n'est détecté que lors de ==son interaction avec la matière==.
- **Énergie d'un photon** ::$$E = h \cdot f$$
<!--SR:!2026-10-22,2,250-->
  *(où $h \approx 6{,}6 \cdot 10^{-34}\text{ J}\cdot\text{s}$ est la constante de Planck, et $f$ la fréquence).*


## 2. La dualité onde-corpuscule

La lumière présente un comportement **dual** selon les expériences menées :
1. **Comportement ondulatoire** : mis en évidence par ==les phénomènes d'interférence et de diffraction==.
2. **Comportement corpusculaire** : mis en évidence par ==l'effet photoélectrique (interaction photon-matière avec éjection d'électrons)==.
<!--SR:!2026-10-27,7,250!2026-11-01,12,270-->


## Concepts liés

- [[Modèle des ondes électromagnétiques et indice de réfraction]]
- [[Cadre et modèle du rayon en optique géométrique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
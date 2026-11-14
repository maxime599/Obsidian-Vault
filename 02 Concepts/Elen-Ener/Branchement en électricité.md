---
type: concept
tags:
  - concepts
  - Elen1
MOC:
date_creation: 2026-09-03
Ressources: "[[Fascicule TD ELEN1 CITISE.pdf]]"
---

# Branchement en électricité

> [!info] Définition courte
> 
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

## Ampèremètre
un ampèremètre se branche en ==série==
![[IMG_20260903_150223.jpg]]{transform="translate(18.3%, -33%) rotate(0deg) scale(1.648)" aspect-ratio=698/393 width=306}
## Voltmètre
Un voltmètre se branche ==en dérivation sur un récepteur==
![[IMG_20260903_150228.jpg]]{transform="translate(1.3%, 27.4%) rotate(0deg) scale(1.643)" aspect-ratio=698/393 width=281}



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

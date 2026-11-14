---
type: concept
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
MOC:
date_creation: 2026-09-03
Ressources: "[[Fascicule TD ELEN1 CITISE.pdf]]"
---

# Conventions
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

## Sens du courant et de la tension
> [!info] Sens du courant
> **Convention gérérateur** : Le courant $I$ est fléché dans le ==même sens== de la flèche de la tension
> **Convention récepteur** : La tension aux bornes du récepeteur est fléchée dans le ==sens inverse== de celle du courant
<!--SR:!2026-12-09,62,310!2026-11-30,55,310--> 

Exemple en vert :
![[IMG_20260903_150223.jpg]]{transform="translate(-4%, -23.5%) rotate(0deg) scale(1)" aspect-ratio=698/393 width=698}



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

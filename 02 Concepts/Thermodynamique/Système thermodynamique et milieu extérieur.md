---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
MOC:
  - "[[MOC Systeme]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Système thermodynamique et milieu extérieur

> [!info] Définition courte
> Un **système thermodynamique** est une quantité de matière ou une région de l'espace délimitée par une frontière et isolée par la pensée de son **milieu extérieur** pour étudier ses échanges d'énergie et de matière.
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


## 1. Classification des systèmes thermodynamiques

Selon la nature de la frontière séparant le système du milieu extérieur, on distingue trois types fondamentaux :

| Type de système | Échange de matière | Échange d'énergie | Exemple                             |
| :-------------- | :----------------: | :---------------: | :---------------------------------- |
| **Fermé**       |      ==Non==       |      ==Oui==      | Fluide étanche dans un piston       |
| **Ouvert**      |      ==Oui==       |      ==Oui==      | Turbine, moteur, corps humain       |
| **Isolé**       |      ==Non==       |      ==Non==      | Bouteille isotherme idéale, Univers |
<!--SR:!2026-12-10,63,310!2026-12-05,58,310!2026-12-09,62,310!2026-12-01,56,310!2026-12-07,60,310!2026-12-03,58,310-->


## 2. Interaction avec le milieu extérieur

Le milieu extérieur représente ==tout ce qui n'appartient pas au système==.
<!--SR:!2026-12-07,60,310--> 

Les échanges s'effectuent à travers la frontière sous deux formes majeures :
?
- **Matière** : Transfert de masse (systèmes ouverts).
- **Énergie** : Transfert mécanique (travail $W$) ou transfert thermique (chaleur $Q$).
<!--SR:!2026-12-06,54,270-->


## Concepts liés

- [[Variables d'état et équilibre thermodynamique]]
- [[Énergie interne et formes d'énergie]]
- [[Travail des forces de pression et transfert thermique]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

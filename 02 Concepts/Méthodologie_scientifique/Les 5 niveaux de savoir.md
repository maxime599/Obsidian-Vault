---
type: concept
tags:
  - concepts
  - Méthodologie_scientifique
  - Méthodologie_scientifique/théorie
MOC:
  - "[[MOC Théorie]]"
date_creation: 2026-09-06
Ressources:
---
# Les 5 niveaux de savoir

> [!info] Définition courte  
> Les cinq étapes de maîtrise d’un savoir, du plus simple au plus complexe.
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

Ces niveaux permettent de situer où on en est dans l’apprentissage d’un concept. Ils vont de la simple reconnaissance à la capacité de transférer ses connaissances dans de nouveaux contextes.

## Fonctionnement

1. Reconnaitre
2. Restituer
3. Expliquer
4. Utiliser
5. Transférer/Adapter

## Exemple simple

- Reconnaitre une formule dans un QCM.
- Restituer la définition d’un concept.
- Expliquer pourquoi une méthode fonctionne.
- Utiliser une formule pour résoudre un exercice.
- Adapter une méthode à un problème inédit.

## Concepts liés

- [[Méthodes d’apprentissage efficaces et fausses bonnes idées]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

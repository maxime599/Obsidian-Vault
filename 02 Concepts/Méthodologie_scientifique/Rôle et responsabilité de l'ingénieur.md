---
type: concept
matière: methodologie_scientifique
tags:
  - concepts
  - methodologie_scientifique
MOC:
date_creation: 2026-09-02
Ressources:
---

# Rôle et responsabilité de l'ingénieur

> [!info] Définition courte
> Le **rôle de l'ingénieur** consiste à concevoir des solutions techniques innovantes pour résoudre des problèmes complexes et inédits. Sa **responsabilité** implique une prise en compte directe des impacts éthiques, sociétaux, écologiques et sécuritaires de ses réalisations sur le monde réel.
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


## 1. La nature du travail de l'ingénieur

- **Résolution de problèmes complexes** : Traiter des défis techniques souvent mal définis, nouveaux et soumis à des contraintes physiques, financières et industrielles.
- **Posture d'intermédiaire** : Se situer à la jonction entre la science fondamentale (compréhension des lois de la nature) et l'informatique ou l'industrie (mise en œuvre concrète).


## 2. La responsabilité éthique et sociétale

- **Conséquences réelles** : Les choix d'un ingénieur (ouvrages, algorithmes, systèmes énergétiques) ont un impact direct sur les personnes et la société.
- **Exigence de rigueur** : Un raisonnement défaillant ou mal vérifié peut entraîner des défaillances systémiques graves.
- **Autonomie de pensée** : Capacité à faire des choix éclairés, à critiquer les outils utilisés et à assumer la portée de ses décisions technologiques.


## Concepts liés

- [[La démarche scientifique et réfutabilité]]
- [[Usage critique des intelligences artificielles]]
- [[Techniques d'apprentissage et rappel actif]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

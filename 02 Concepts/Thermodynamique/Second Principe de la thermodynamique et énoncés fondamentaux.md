---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
MOC:
  - "[[07 MOC/Concepts/Thermodynamique/MOC Principe]]"
date_creation: 2026-09-18
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
---

# Second Principe de la thermodynamique et énoncés fondamentaux

> [!info] Définition courte
> Le **Second Principe de la thermodynamique** est un principe d'évolution qui définit le sens spontané des transformations physiques, quantifie la dégradation de la qualité de l'énergie et introduit la notion d'entropie.
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


## 1. Objectifs du Second Principe et approche statistique

Le premier principe établit la conservation de l'énergie sans imposer de contrainte sur le sens des échanges. Le second principe permet de :
?
- **Prévoir le sens des évolutions spontanées** et déterminer l'état d'équilibre final.
- **Quantifier la dégradation de l'énergie** lors d'une conversion (évaluation du rendement et de l'optimisation des transferts).
- **Interpréter statistiquement l'organisation** : l'état macroscopique le plus probable (désordre maximal à l'échelle microscopique) correspond à l'état d'équilibre.
<!--SR:!2026-11-13,30,270-->


## 2. Formes d'énergie : Ordonnée vs Désordonnée

La thermodynamique cherche à optimiser la conversion entre deux catégories d'énergie :
- **Énergie ordonnée** : Énergie dont la forme est directement exploitable sous forme de ==travail== (ex. énergie potentielle ou cinétique d'un pendule pesant, énergie électrostatique ou magnétostatique d'un circuit RLC).
- **Énergie désordonnée** : Énergie associée à ==l'agitation thermique aléatoire des particules (ex. agitation moléculaire dans un gaz parfait).==
<!--SR:!2026-10-29,18,270!2026-11-12,29,270-->


## 3. Énoncés fondamentaux

### Énoncé de Kelvin-Planck
> Un système subissant une transformation monotherme ne peut, au cours d'un cycle, qu'absorber du travail et fournir de la chaleur au milieu extérieur.
- **Conséquence** : Il est impossible de construire un moteur thermique monotherme fonctionnant en cycle qui convertirait intégralement de ==la chaleur reçue en travail mécanique.==
<!--SR:!2026-11-28,44,290-->

### Énoncé de Clausius
> Une quantité de chaleur ne peut jamais être transférée spontanément d'une ==source froide vers une source chaude== sans apport de travail extérieur.
<!--SR:!2026-12-24,65,310-->


## Concepts liés

- [[Premier principe de la thermodynamique]]
- [[Travail des forces de pression et transfert thermique]]
- [[Mesure de pression et échelles de température]]
## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

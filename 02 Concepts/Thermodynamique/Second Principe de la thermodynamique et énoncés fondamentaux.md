---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
MOC:
  - "[[MOC Principe]]"
date_creation: 2026-09-18
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
---

# Second Principe de la thermodynamique et énoncés fondamentaux

> [!info] Définition courte
> Le **Second Principe de la thermodynamique** est un principe d'évolution qui définit le sens spontané des transformations physiques, quantifie la dégradation de la qualité de l'énergie et introduit la notion d'entropie.


## 1. Objectifs du Second Principe et approche statistique

Le premier principe établit la conservation de l'énergie sans imposer de contrainte sur le sens des échanges. Le second principe permet de :
?
- **Prévoir le sens des évolutions spontanées** et déterminer l'état d'équilibre final.
- **Quantifier la dégradation de l'énergie** lors d'une conversion (évaluation du rendement et de l'optimisation des transferts).
- **Interpréter statistiquement l'organisation** : l'état macroscopique le plus probable (désordre maximal à l'échelle microscopique) correspond à l'état d'équilibre.
<!--SR:!2026-10-14,11,270-->


## 2. Formes d'énergie : Ordonnée vs Désordonnée

La thermodynamique cherche à optimiser la conversion entre deux catégories d'énergie :
- **Énergie ordonnée** : Énergie dont la forme est directement exploitable sous forme de ==travail== (ex. énergie potentielle ou cinétique d'un pendule pesant, énergie électrostatique ou magnétostatique d'un circuit RLC).
- **Énergie désordonnée** : Énergie associée à ==l'agitation thermique aléatoire des particules (ex. agitation moléculaire dans un gaz parfait).==
<!--SR:!2026-10-11,5,250!2026-10-14,11,270-->


## 3. Énoncés fondamentaux

### Énoncé de Kelvin-Planck
> Un système subissant une transformation monotherme ne peut, au cours d'un cycle, qu'absorber du travail et fournir de la chaleur au milieu extérieur.
- **Conséquence** : Il est impossible de construire un moteur thermique monotherme fonctionnant en cycle qui convertirait intégralement de ==la chaleur reçue en travail mécanique.==
<!--SR:!2026-10-15,12,270-->

### Énoncé de Clausius
> Une quantité de chaleur ne peut jamais être transférée spontanément d'une ==source froide vers une source chaude== sans apport de travail extérieur.
<!--SR:!2026-10-19,16,290-->


## Concepts liés

- [[Énergie interne et formes d'énergie]]
- [[Typologie des transformations et réversibilité - Premier Principe de la thermodynamique]]
- [[Entropie et bilan entropique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

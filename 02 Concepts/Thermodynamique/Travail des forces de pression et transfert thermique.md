---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/transfert
  - flashcards/thermodynamique
MOC:
  - "[[MOC Transfert]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Travail des forces de pression et transfert thermique

> [!info] Définition courte
> Le **travail mécanique** $W$ et le **transfert thermique** $Q$ (chaleur) constituent les deux modes exclusifs d'échange d'énergie entre un système thermodynamique et son milieu extérieur.


## 1. Travail des forces de pression ($W$)

Lors d'une variation élémentaire de volume $\mathrm{d}V$ exercée sous une pression $P$, le travail infinitésimal recu s'écrit ::$$\delta W = -P \mathrm{d}V$$
<!--SR:!2026-12-12,65,310-->

Pour une transformation d'un état initial ($V_i$) à un état final ($V_f$), le travail s'écrit ::$$W = -\int_{V_i}^{V_f} P \mathrm{d}V$$
<!--SR:!2026-12-07,60,310-->

- **Convention de signe centrée sur le système** :
  - **Compression** ($\mathrm{d}V < 0$) : $W$ ==$>$== $0$, le système reçoit de l'énergie sous forme mécanique.
  - **Expansion / Détente** ($\mathrm{d}V > 0$) : $W$ ==$<$== $0$, le système fournit du travail au milieu extérieur.
<!--SR:!2026-12-09,62,310!2026-12-14,67,310-->


## 2. Transfert thermique ($Q$)

- **Définition** : Échange d'énergie désordonné s'effectuant à l'échelle microscopique sous l'effet d'un écart de température.
- **Transformation adiabatique** ::: Transformation réalisée sans aucun échange thermique avec le milieu extérieur ($Q = 0$).
<!--SR:!2026-12-13,66,310!2026-12-06,59,310-->

> [!warning] Attention aux idées reçues
> Une transformation adiabatique ($Q = 0$) n'implique pas que la température du système reste constante ; la température peut varier en raison du travail $W$ reçu ou fourni.


## Concepts liés

- [[Énergie interne et formes d'énergie]]
- [[Variables d'état et équilibre thermodynamique]]
- [[Statique des fluides et poussée d'Archimède]]


## 📐 Outils Mathématiques et Prérequis

- [[Notion d'intégrale et aire sous une courbe]]
- [[Lien entre intégrale et primitives]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

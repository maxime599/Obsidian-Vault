---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/variables
  - flashcards/thermodynamique
MOC:
  - "[[MOC Variables]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Variables d'état et équilibre thermodynamique

> [!info] Définition courte
> Les **variables d'état** sont les grandeurs macroscopiques mesurables qui caractérisent l'état d'un système. Un **état d'équilibre** est atteint lorsque l'ensemble de ces variables restent constantes au cours du temps sans évolution spontanée.


## 1. Classification des paramètres d'état

Les variables macroscopiques ($P$, $V$, $T$, $m$) se divisent en deux catégories distinctes :
?
- **Paramètres intensifs** : Indépendants de la taille et de la masse du système. Ils ne s'additionnent pas lors de la réunion de deux systèmes identiques.
  - *Exemples* : Pression $P$, Température $T$, Masse volumique $\rho$.
- **Paramètres extensifs** : Proportionnels à la taille ou à la quantité de matière du système. Ils s'additionnent lors de la réunion de deux sous-systèmes.
  - *Exemples* : Volume $V$, Masse $m$, Énergie interne $U$, Charge électrique.
<!--SR:!2026-11-19,47,290-->


## 2. États d'équilibre et régimes d'évolution

- **État d'équilibre thermodynamique** : Les variables sont uniformes et constantes dans le temps. Le système n'évolue plus spontanément.
- **Régime stationnaire** : Les variables restent constantes au cours du temps, mais le système est traversé par des flux continus de matière ou d'énergie avec l'extérieur.
- **Transformation quasi-statique** : Évolution suffisamment lente pour que le système soit considéré à chaque instant dans un état proche de l'équilibre.


## Concepts liés

- [[Système thermodynamique et milieu extérieur]]
- [[Mesure de pression et échelles de température]]
- [[Travail des forces de pression et transfert thermique]]
- [[Entropie et bilan entropique]]


## 📐 Outils Mathématiques et Prérequis

- [[Fonctions de plusieurs variables et dérivées partielles]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

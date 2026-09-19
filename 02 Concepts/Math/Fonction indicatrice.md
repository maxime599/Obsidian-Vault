---
type: concept
tags:
  - concepts
  - Math
  - math/ensemble
  - math/fonction
  - math/analyse
  - flashcards/Math
MOC:
  - "[[MOC Ensemble]]"
  - "[[MOC Fonction]]"
  - "[[MOC Analyse]]"
date_creation: 2026-09-04
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---
# Fonction indicatrice

> [!info] Définition courte
> La **fonction indicatrice** (ou caractéristique) :: d'une partie $A \subset E$, notée $\mathbb{1}_A$, est l'application de $E$ dans $\{0, 1\}$ qui vaut $1$ sur $A$ et $0$ en dehors.
<!--SR:!2026-09-21,3,250-->


## 1. Définition formelle

Pour un ensemble $E$ et $A \subset E$ :

$$\mathbb{1}_A : E \to \{0, 1\}, \quad x \mapsto \begin{cases} 1 & \text{si } x \in A \\ 0 & \text{si } x \notin A \end{cases}$$


## 2. Propriétés algébriques

Soient $A$ et $B$ deux parties d'un même ensemble $E$ :

- **Égalité d'ensembles** : $A = B \iff \mathbb{1}_A = \mathbb{1}_B$
- **Intersection** : $\mathbb{1}_{A \cap B}$ = ==$\mathbb{1}_A \times \mathbb{1}_B$==
- **Réunion** : $\mathbb{1}_{A \cup B} =$ ==$\mathbb{1}_A + \mathbb{1}_B - \mathbb{1}_A \times \mathbb{1}_B$==
- **Réunion disjointe** ($A \cap B = \emptyset$) : $\mathbb{1}_{A \cup B}$ = ==$\mathbb{1}_A + \mathbb{1}_B$==
- **Complémentaire** : $\mathbb{1}_{\bar{A}}$ = ==$1 - \mathbb{1}_A$==
<!--SR:!2026-09-22,4,270!2026-09-22,4,270!2026-09-22,4,270!2026-09-22,4,270-->


## Concepts liés

- [[Théorie des ensembles et opérations de base]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````
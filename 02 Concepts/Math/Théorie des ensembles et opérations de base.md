---
type: concept
tags:
  - concepts
  - Math
  - math/ensemble
  - flashcards/Math
MOC:
  - "[[MOC Ensemble]]"
date_creation: 2026-09-04
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---
# Théorie des ensembles et opérations de base

> [!info] Définition courte
> Un **ensemble** est une collection d'objets distincts appelés éléments. La **théorie des ensembles** définit les règles d'appartenance, d'inclusion et de manipulation algébrique entre ces collections.


## 1. Appartenance, inclusion et égalité

- **Appartenance ($\in$)** : Pour tout élément $x$ et tout ensemble $E$, l'assertion $x \in E$ est soit vraie, soit fausse.
  - La négation est notée $x \notin E \iff \text{non}(x \in E)$.
  - **Ensemble vide ($\emptyset$)** : L'ensemble ne contenant aucun élément.
- **Inclusion ($\subset$)** : $A \subset B \iff (\forall x \in A, \, x \in B)$. On dit que $A$ est une partie ou un sous-ensemble de $B$.
- **Égalité de deux ensembles** : Deux ensembles $A$ et $B$ sont égaux si et seulement si :: ils s'incluent mutuellement :$$A = B \iff (A \subset B \text{ et } B \subset A)$$
<!--SR:!2026-10-08,16,290-->


## 2. Opérations fondamentales sur les parties

Soit $E$ un ensemble, $A \subset E$ et $B \subset E$ :

- **Complémentaire** : $\bar{A} = E \setminus A = \{x \in E, \, x \notin A\}$
- **Intersection** : $A \cap B = \{x \in E, \, x \in A \text{ et } x \in B\}$
- **Réunion** : $A \cup B = \{x \in E, \, x \in A \text{ ou } x \in B\}$
- **Différence** : $A \setminus B = \{x \in A \text{ et } x \notin B\} = A \cap \bar{B}$

> [!note] Parties disjointes
> Deux parties $A$ et $B$ sont dites **disjointes** si :: leur intersection est vide :$A \cap B = \emptyset$.
<!--SR:!2026-11-18,45,290-->


## 3. Lois de De Morgan

Soient $A$ et $B$ deux parties d'un ensemble $E$ :

- $\overline{A \cup B} = \bar{A} \cap \bar{B}$
- $\overline{A \cap B} = \bar{A} \cup \bar{B}$
[[Propriétés de l'algèbre de Boole#3. Lois de De Morgan]]

## Concepts liés

- [[Ensemble des parties d'un ensemble]]
- [[Produit cartésien et p-uplets]]
- [[Quantificateurs logiques]]
- [[Fonction indicatrice]]
- [[Propriétés de l'algèbre de Boole#3. Lois de De Morgan]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

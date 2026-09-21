---
type: concept
matière: math
tags:
  - concepts
  - math
  - Électronique_numérique/boole
  - flashcards/Math
MOC:
  - "[[MOC Boole]]"
date_creation: 2026-09-02
Ressources: "[[S1_cours_math_chap1.pdf]]"
---
# Logique mathématique et booléenne

> [!info] Définition courte
> La **logique mathématique** est l'étude des assertions et des règles formelles permettant de combiner des propositions pour déterminer leur valeur de vérité (**Vrai** ou **Faux**, notés $1$ ou $0$ en informatique et électronique).


## 1. Assertions et connecteurs élémentaires

Une **assertion** (ou proposition) est un énoncé mathématique qui est soit exclusivement Vrai (V), soit exclusivement Faux (F).

- **Négation ($\text{non}(P)$ ou $\bar{P}$)** : Inverse la valeur de vérité de $P$.
- **Conjonction ($P \text{ et } Q$ ou $P \land Q$)** : Vraie si et seulement si $P$ et $Q$ sont simultanément vraies.
- **Disjonction ($P \text{ ou } Q$ ou $P \lor Q$)** : Vraie si au moins l'une des deux assertions est vraie (**OU inclusif**).

| $P$ | $Q$ | $\text{non}(P)$ | $P \text{ et } Q$ | $P \text{ ou } Q$ |
| :---: | :---: | :---: | :---: | :---: |
| 0 | 0 | 1 | 0 | 0 |
| 0 | 1 | 1 | 0 | 1 |
| 1 | 0 | 0 | 0 | 1 |
| 1 | 1 | 0 | 1 | 1 |


## 2. Implication et Équivalence

### L'implication ($P \implies Q$)
L'assertion « Si $P$ alors $Q$ » est **fausse uniquement lorsque $P$ est vraie et $Q$ est fausse**.
- $P$ est une **condition suffisante** pour avoir $Q$.
- $Q$ est une **condition nécessaire** pour avoir $P$.
- **Réciproque** : La réciproque de $P \implies Q$ est l'implication :: $Q \implies P$ (une implication vraie n'implique pas que sa réciproque le soit).
<!--SR:!2026-09-22,4,270-->

### L'équivalence ($P \iff Q$)
L'assertion « $P$ si et seulement si $Q$ » est vraie si :: $P$ et $Q$ ont exactement la même valeur de vérité.$$[P \iff Q] \iff [(P \implies Q) \text{ et } (Q \implies P)]$$
<!--SR:!2026-09-22,4,270-->


## 3. Théorèmes et lois équivalentes

> [!theorem] Lois de De Morgan
> La négation d'une disjonction est la conjonction des négations, et inversement :
> $\text{non}(P \text{ ou } Q) \iff$::$\text{non}(P) \text{ et } \text{non}(Q)$
<!--SR:!2026-09-22,4,270-->
> $\text{non}(P \text{ et } Q) \iff$::$\text{non}(P) \text{ ou } \text{non}(Q)$
<!--SR:!2026-09-22,4,270-->

> [!theorem] Équivalences fondamentales de l'implication
> - Forme disjonctive : $[P \implies Q] \iff$::$[\text{non}(P) \text{ ou } Q]$
<!--SR:!2026-09-25,5,230-->
> - Négation de l'implication : $\text{non}(P \implies Q) \iff$::$[P \text{ et } \text{non}(Q)]$
<!--SR:!2026-09-21,3,250-->
> - Contraposée : $[P \implies Q] \iff$::$[\text{non}(Q) \implies \text{non}(P)]$
<!--SR:!2026-09-22,4,270-->


## Concepts liés


- [[Modes de raisonnement mathématique]]
- [[Portes logiques et algèbre de Boole]]
- [[Types de données élémentaires]]



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

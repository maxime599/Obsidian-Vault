---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/denombrement
  - math/combinatoire
  - math/ensemble
MOC:
  - "[[MOC Dénombrement]]"
  - "[[MOC Combinatoire]]"
  - "[[MOC Ensemble]]"
date_creation: 2026-07-26
---
# Arrangements et permutations

> [!info] Définition courte
> Un **arrangement** de $k$ éléments parmi $n$ est un choix ordonné de $k$ éléments distincts pris dans un ensemble à $n$ éléments. Une **permutation** de $n$ éléments est un arrangement de tous les $n$ éléments (un réordonnancement).


## Explication intuitive

- **Arrangement** : Pensez au podium d'une course de 9 athlètes. L'ordre compte (1ère, 2ème et 3ème place) et un athlète ne peut pas être à la fois 1er et 2ème. Les combinaisons de podiums sont des arrangements.
- **Permutation** : Pensez au placement de 5 personnes sur 5 chaises dans une salle d'attente. On utilise tous les éléments et seul l'ordre de rangement change.


## Fonctionnement

1. **Vérifier les critères** :
   - L'ordre compte-t-il ? **Oui**.
   - Y a-t-il répétition ? **Non** (éléments distincts).
2. **Arrangement ($k$ parmi $n$)** :
   - On choisit le 1er élément ($n$ possibilités), le 2ème ($n-1$ possibilités), ..., jusqu'au $k$-ième ($n-k+1$ possibilités).
   - Formule : $A_n^k = \frac{n!}{(n-k)!}$
3. **Permutation ($n$ éléments parmi $n$)** :
   - C'est un cas particulier d'arrangement où $k = n$.
   - Formule : $n! = 1 \times 2 \times 3 \times \dots \times n$


## Exemple simple

1. **Exemple d'arrangement** :
   Dans une course opposant 9 athlètes, combien de podiums (médaille d'or, d'argent, de bronze) sont possibles ?
   $$\text{Nombre de podiums} = \frac{9!}{(9-3)!} = \frac{9!}{6!} = 9 \times 8 \times 7 = 504$$

2. **Exemple de permutation** :
   De combien de façons différentes 5 personnes peuvent-elles s'asseoir sur 5 sièges alignés ?
   $$\text{Nombre d'alignements} = 5! = 5 \times 4 \times 3 \times 2 \times 1 = 120$$


## Formules / Algorithmes / Propriétés

> [!theorem] Formules fondamentales
> - **Factorielle d'un entier $n$** : $n! = \prod_{i=1}^{n} i$ avec par convention $0! = 1$.
> - **Nombre d'arrangements** : $A_n^k = n(n-1)(n-2)\dots(n-k+1) = \frac{n!}{(n-k)!}$
> - **Nombre de permutations** : $n!$


## Concepts liés

- [[Combinaisons et coefficients binomiaux]]
- [[Principes additif et multiplicatif en dénombrement]]
- [[Nombre de parties d'un ensemble]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

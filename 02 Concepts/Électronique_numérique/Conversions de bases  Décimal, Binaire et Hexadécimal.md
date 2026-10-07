---
type: concept
tags:
  - concepts
  - Électronique_numérique
  - flashcards/Électronique_numérique 
MOC:
date_creation: 2026-09-28
Ressources:
---

# Conversions de bases : Décimal, Binaire et Hexadécimal

> [!info] Définition courte
> Les **conversions de bases** permettent de transposer la représentation d'un nombre d'un système de numération à un autre (décimal en base 10, binaire en base 2 et hexadécimal en base 16) afin de faciliter la manipulation des données par les circuits logiques et les processeurs.


## 1. Table de correspondance de base (0 à 15)

L'hexadécimal utilise 16 symboles ($0$ à $9$ puis $A$ à $F$). Chaque symbole hexadécimal correspond exactement à un groupe de 4 bits (quartet).

| Décimal (Base 10) | Binaire (Base 2) | Hexadécimal (Base 16) |
| :---: | :---: | :---: |
| 0 | `0000` | `0` |
| 1 | `0001` | `1` |
| 2 | `0010` | `2` |
| 3 | `0011` | `3` |
| 4 | `0100` | `4` |
| 5 | `0101` | `5` |
| 6 | `0110` | `6` |
| 7 | `0111` | `7` |
| 8 | `1000` | `8` |
| 9 | `1001` | `9` |
| 10 | `1010` | `A` |
| 11 | `1011` | `B` |
| 12 | `1100` | `C` |
| 13 | `1101` | `D` |
| 14 | `1110` | `E` |
| 15 | `1111` | `F` |


## 2. Conversions Décimal $\leftrightarrow$ Binaire

### A. Décimal vers Binaire : Méthode des divisions successives par 2
On divise le nombre par 2, puis le quotient obtenu par 2, et ainsi de suite jusqu'à obtenir un quotient nul. Le résultat s'obtient en lisant les **restes de bas en haut** (du poids faible LSB au poids fort MSB).

> [!example] Exemple : $45_{10} \to \text{Binaire}$
> - $45 / 2 = 22$, reste **1** (LSB)
> - $22 / 2 = 11$, reste **0**
> - $11 / 2 = 5$, reste **1**
> - $5 / 2 = 2$, reste **1**
> - $2 / 2 = 1$, reste **0**
> - $1 / 2 = 0$, reste **1** (MSB)
> 
> $\implies 45_{10} = 101101_2$

### B. Binaire vers Décimal : Méthode des puissances de 2
On multiplie chaque bit $b_i$ par sa puissance de 2 associée ($2^i$) et on somme les résultats :
$$N_{10} = \sum_{i=0}^{n-1} b_i \cdot 2^i$$


## 3. Conversions Décimal $\leftrightarrow$ Hexadécimal

### A. Décimal vers Hexadécimal : Méthode des divisions successives par 16
Même méthode que pour le binaire, mais en divisant par 16. Les restes supérieurs à 9 sont remplacés par leur lettre équivalente ($10 \to A, \dots, 15 \to F$).

> [!example] Exemple : $189_{10} \to \text{Hexadécimal}$
> - $189 / 16 = 11$, reste **13** ($\to D$)
> - $11 / 16 = 0$, reste **11** ($\to B$)
> 
> $\implies 189_{10} = B D_{16}$

### B. Hexadécimal vers Décimal : Méthode des puissances de 16
On multiplie chaque chiffre hexadécimal $h_i$ par sa puissance de 16 associée ($16^i$) :
$$N_{10} = \sum_{i=0}^{n-1} h_i \cdot 16^i$$


## 4. Conversion directe Binaire $\leftrightarrow$ Hexadécimal

Comme $16 = 2^4$, il existe une équivalence directe entre 1 symbole hexadécimal et 4 bits (1 quartet).

### A. Binaire vers Hexadécimal
1. Découper le nombre binaire en **paquets de 4 bits** à partir de la droite (en complétant par des `0` à gauche si nécessaire).
2. Remplacer chaque quartet par son équivalent hexadécimal.

> [!example] Exemple : $11010110_2 \to \text{Hexadécimal}$
> - Découpage : `1101` | `0110`
> - Conversion : `1101` $= 13 \to D$ et `0110` $= 6 \to 6$
> 
> $\implies 11010110_2 = D6_{16}$

### B. Hexadécimal vers Binaire
Remplacer simplement chaque symbole hexadécimal par son équivalent binaire codé **sur 4 bits**.

> [!example] Exemple : $A5_{16} \to \text{Binaire}$
> - $A \to$ `1010`
> - $5 \to$ `0101`
> 
> $\implies A5_{16} = 10100101_2$


## Concepts liés

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
---
type: concept
matière: Électronique_numérique
tags:
  - concepts
  - "#Électronique_numérique"
  - "#Électronique_numérique/boole"
  - "#flashcards/Électronique_numérique"
MOC:
  - "[[MOC Boole]]"
date_creation: 2026-09-01
Ressources: "[[diapo_CITISE_AutoSIN.pdf]]"
---
# Portes logiques et algèbre de Boole

> [!info] Définition courte
> L'**algèbre de Boole** est le cadre mathématique manipulant des variables binaire à deux états ($0$ ou $1$, Faux ou Vrai). Les **portes logiques** sont les composants électroniques élémentaires qui réalisent matériellement ces opérations logiques sur des signaux électriques.


## 1. Principes de l'électronique numérique

L'électronique numérique traite l'information de manière discrète sous forme de tensions électriques.

- **Convention de niveau logique** :
  - Si la tension $V > \frac{V_{\text{max}}}{2} \implies \text{État logique } 1 \text{ (VRAI)}$.
  - Si la tension $V \le \frac{V_{\text{max}}}{2} \implies \text{État logique } 0 \text{ (FAUX)}$.
- **Approche ascendante (Bottom-Up)** : Étude des composants de base (transistors) pour former des portes logiques, puis assemblage de ces portes en blocs complexes (ALU, processeurs, FPGA).


## 2. Portes logiques élémentaires

### Fonction Identité (Buffer / OUI)
La sortie recopie exactement l'état de l'entrée.
- **Équation** : $s = a$
- **Table de vérité**:

| $a$ | $s$ |
| :-: | :-: |
|  0  |  0  |
|  1  |  1  |

---

### Fonction NOT (Inverseur / NON)
La sortie prend l'état complémentaire (inverse) de l'entrée.
- **Équation** porte NOT ::: $s = \bar{a}$
<!--SR:!2026-11-30,55,310!2026-12-10,63,310-->
- **Table de vérité** porte NOT :
??
| $a$ | $s$ |
| :-: | :-: |
|  0  |  1  |
|  1  |  0  |
<!--SR:!2026-12-01,56,310!2026-12-07,62,310-->

| $a$ | $s$ |
| :-: | :-: |
|  0  |  1  |
|  1  |  0  |
Symbole porte not ::: ![[Pasted image 20260901152027.png|153]]
<!--SR:!2026-12-04,59,310!2026-12-06,61,310-->


---

### Fonction AND (Conjonction / ET)
La sortie est vraie ($1$) si et seulement si **toutes** les entrées sont vraies ($1$).
- **Équation** porte AND ::: $s = a \cdot b$
<!--SR:!2026-12-05,60,310!2026-12-01,56,310-->
- **Table de vérité** porte AND :
??
| $a$ | $b$ | $s$ |
| :-: | :-: | :-: |
|  0  |  0  |  0  |
|  0  |  1  |  0  |
|  1  |  0  |  0  |
|  1  |  1  |  1  |
<!--SR:!2026-12-08,61,310!2026-12-01,56,310-->

| $a$ | $b$ | $s$ |
| :-: | :-: | :-: |
|  0  |  0  |  0  |
|  0  |  1  |  0  |
|  1  |  0  |  0  |
|  1  |  1  |  1  |

Symbole porte AND ::: ![[Pasted image 20260901152755.png|170]]
<!--SR:!2026-12-04,59,310!2026-11-30,55,310-->

Chronogramme (voir fascicule)

--- 

### Fonction OR (Disjonction / OU)
La sortie est vraie ($1$) si au moins une des entrées est vraie ($1$).
- **Équation** porte OR ::: $s = a \lor b$
<!--SR:!2026-12-03,58,310!2026-12-03,58,310-->
- **Table de vérité** porte OR :
??
| $a$ | $b$ | $s$ |
| :-: | :-: | :-: |
|  0  |  0  |  0  |
|  0  |  1  |  1  |
|  1  |  0  |  1  |
|  1  |  1  |  1  |
<!--SR:!2026-12-05,60,310!2026-12-02,57,310-->

| $a$ | $b$ | $s$ |
| :-: | :-: | :-: |
|  0  |  0  |  0  |
|  0  |  1  |  1  |
|  1  |  0  |  1  |
|  1  |  1  |  1  |

---

### Fonction XOR (Disjonction exclusive / OU Exclusif)
La sortie est vraie ($1$) si et seulement si les deux entrées ont des états logiques différents.
- **Équation** porte XOR ::: $s = a \oplus b$
<!--SR:!2026-10-27,28,270!2026-12-11,64,310-->
- **Table de vérité** porte XOR :
??
| $a$ | $b$ | $s$ |
| :-: | :-: | :-: |
|  0  |  0  |  0  |
|  0  |  1  |  1  |
|  1  |  0  |  1  |
|  1  |  1  |  0  |
<!--SR:!2026-12-08,63,310!2026-12-08,63,310-->

| $a$ | $b$ | $s$ |
| :-: | :-: | :-: |
|  0  |  0  |  0  |
|  0  |  1  |  1  |
|  1  |  0  |  1  |
|  1  |  1  |  0  |

### Fonction NAND (NON-ET)

La sortie est fausse (0) si et seulement si toutes les entrées sont vraies (1). Elle correspond à l'inverse de la fonction ET.
- Équation porte NAND ::: $s = \overline{a \cdot b}$
<!--SR:!2026-11-30,55,310!2026-12-05,60,310-->
- Table de vérité porte NAND:
??
| **a** | **b** | **s** |
| ----- | ----- | ----- |
| 0     | 0     | 1     |
| 0     | 1     | 1     |
| 1     | 0     | 1     |
| 1     | 1     | 0     |
<!--SR:!2026-12-08,61,310!2026-12-13,66,310-->

| **a** | **b** | **s** |
| ----- | ----- | ----- |
| 0     | 0     | 1     |
| 0     | 1     | 1     |
| 1     | 0     | 1     |
| 1     | 1     | 0     |

Cette fonction est appelée ==universelle== car elle permet de créer toutes les autres à partir de celle ci
<!--SR:!2026-12-08,63,310-->


### Fonction NOR (NON-OU)

La sortie est vraie (1) si et seulement si toutes les entrées sont fausses (0). Elle correspond à l'inverse de la fonction OU.
- Équation porte NOR ::: $s = \overline{a \lor b}$
<!--SR:!2026-12-06,61,310!2026-11-29,54,310-->
- Table de vérité porte NOR:
??
| **a** | **b** | **s** |
| ----- | ----- | ----- |
| 0     | 0     | 1     |
| 0     | 1     | 0     |
| 1     | 0     | 0     |
| 1     | 1     | 0     |
<!--SR:!2026-12-08,61,310!2026-12-12,65,310-->

| **a** | **b** | **s** |
| ----- | ----- | ----- |
| 0     | 0     | 1     |
| 0     | 1     | 0     |
| 1     | 0     | 0     |
| 1     | 1     | 0     |

### Fonction XNOR (NON-OU Exclusif / Équivalence)

La sortie est vraie (1) si et seulement si les deux entrées ont le même état logique.
- Équation porte XNOR ::: $s = \overline{a \oplus b}$
<!--SR:!2026-11-29,54,310!2026-11-30,55,310-->
- Table de vérité porte XNOR:
??
| **a** | **b** | **s** |
| ----- | ----- | ----- |
| 0     | 0     | 1     |
| 0     | 1     | 0     |
| 1     | 0     | 0     |
| 1     | 1     | 1     |
<!--SR:!2026-12-14,67,310!2026-12-04,59,310-->

| **a** | **b** | **s** |
| ----- | ----- | ----- |
| 0     | 0     | 1     |
| 0     | 1     | 0     |
| 1     | 0     | 0     |
| 1     | 1     | 1     |



## Concepts liés

- [[Représentations d'une fonction logique]]
- [[Propriétés de l'algèbre de Boole]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````





## Concepts liés

- [[Représentations d'une fonction logique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

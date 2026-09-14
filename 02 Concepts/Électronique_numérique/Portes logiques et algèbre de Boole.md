---
type: concept
matière: Électronique_numérique
tags:
  - concepts
  - "#Électronique_numérique"
  - "#Électronique_numérique/boole"
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
- **Table de vérité** :

| $a$ | $s$ |
| :-: | :-: |
|  0  |  0  |
|  1  |  1  |

---

### Fonction NOT (Inverseur / NON)
La sortie prend l'état complémentaire (inverse) de l'entrée.
- **Équation** : $s = \bar{a}$
- **Table de vérité** :

| $a$ | $s$ |
| :---: | :---: |
| 0 | 1 |
| 1 | 0 |
Symbole :
![[Pasted image 20260901152027.png|153]]

Chronogramme 
![[Pasted image 20260901152133.png|89]]

---

### Fonction AND (Conjonction / ET)
La sortie est vraie ($1$) si et seulement si **toutes** les entrées sont vraies ($1$).
- **Équation** : $s = a \cdot b$ (ou $s = a \text{ ET } b$)
- **Table de vérité** :

| $a$ | $b$ | $s$ |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

Symbole
![[Pasted image 20260901152755.png|170]]

Chronogramme (voir fascicule)

--- 

### Fonction OR (Disjonction / OU)
La sortie est vraie ($1$) si au moins une des entrées est vraie ($1$).
- **Équation** : $s = a \lor b$ (ou $s = a \text{ OU } b$)
- **Table de vérité** :

| $a$ | $b$ | $s$ |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

---

### Fonction XOR (Disjonction exclusive / OU Exclusif)
La sortie est vraie ($1$) si et seulement si les deux entrées ont des états logiques différents.
- **Équation** : $s = a \oplus b$
- **Table de vérité** :

| $a$ | $b$ | $s$ |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

### Fonction NAND (NON-ET)

La sortie est fausse (0) si et seulement si toutes les entrées sont vraies (1). Elle correspond à l'inverse de la fonction ET.
- Équation : $s = \overline{a \cdot b}$
- Table de vérité :

|**a**|**b**|**s**|
|---|---|---|
|0|0|1|
|0|1|1|
|1|0|1|
|1|1|0|
Cette fonction est appelée universelle car elle permet de créer toutes les autres à partir de celle ci


### Fonction NOR (NON-OU)

La sortie est vraie (1) si et seulement si toutes les entrées sont fausses (0). Elle correspond à l'inverse de la fonction OU.
- Équation : $s = \overline{a \lor b}$ (ou $s = \overline{a + b}$)
- Table de vérité : 

|**a**|**b**|**s**|
|---|---|---|
|0|0|1|
|0|1|0|
|1|0|0|
|1|1|0|

### Fonction XNOR (NON-OU Exclusif / Équivalence)

La sortie est vraie (1) si et seulement si les deux entrées ont le même état logique.
- Équation : $s = \overline{a \oplus b}$ (ou $s = a \odot b$)
- Table de vérité :

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

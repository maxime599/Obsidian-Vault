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

Chronogramme (voir fasticule)

## Concepts liés

- [[Représentations d'une fonction logique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

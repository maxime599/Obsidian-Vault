---
type: concept
matière:
tags:
  - concepts
  - math
  - math/denombrement
  - math/ensemble
  - math/combinatoire
MOC:
  - "[[MOC Ensemble]]"
  - "[[MOC Dénombrement]]"
  - "[[MOC Combinatoire]]"
date_creation: 2026-07-26
---
# Principes additif et multiplicatif en dénombrement

> [!info] Définition courte
> Le **principe additif** permet de compter le nombre total d'éléments d'une réunion d'ensembles disjointe ("OU"), tandis que le **principe multiplicatif** permet de compter le nombre de résultats lors d'une succession de choix indépendants ("ET").


## Explication intuitive

- **Principe additif ("OU")** : Si vous pouvez choisir un plat parmi 3 pizzas OU 4 salades, vous avez $3 + 4 = 7$ choix possibles.
- **Principe multiplicatif ("ET")** : Si vous composez un menu avec 1 entrée parmi 3 ET 1 plat parmi 4, vous avez $3 \times 4 = 12$ combinaisons de menus possibles.


## Fonctionnement

### 1. Principe additif
- Si deux ensembles $A$ et $B$ sont **disjoints** ($A \cap B = \emptyset$) :
  $$\text{Card}(A \cup B) = \text{Card}(A) + \text{Card}(B)$$
- Si $A$ et $B$ ne sont **pas disjoints** (principe d'inclusion-exclusion) :
  $$\text{Card}(A \cup B) = \text{Card}(A) + \text{Card}(B) - \text{Card}(A \cap B)$$

### 2. Principe multiplicatif
- Pour un produit cartésien $E \times F$ (un couple de choix $(x, y)$ où $x \in E$ et $y \in F$) :
  $$\text{Card}(E \times F) = \text{Card}(E) \times \text{Card}(F)$$
- Pour une suite de $p$ choix successifs parmi un ensemble $E$ à $n$ éléments (avec remise/répétition possible, formant des $p$-uplets) :
  $$\text{Card}(E^p) = n^p$$


## Exemple simple

**Exemple 1 : Digicode à 2 lettres puis 10 chiffres**
- Choix des 2 lettres dans l'alphabet (26 lettres) : $26 \times 26 = 26^2 = 676$.
- Choix des 10 chiffres (10 chiffres) : $10^{10}$.
- Par le principe multiplicatif, le nombre total de digicodes est :
  $$\text{Nombre de codes} = 26^2 \times 10^{10} = 676 \times 10^{10}$$

**Exemple 2 : Diagramme de Venn (Principe additif)**
Dans une classe, 16 élèves font du latin, 14 du théâtre, 5 font les deux options et 8 n'en font aucune :
- Élèves faisant uniquement du latin : $16 - 5 = 11$.
- Élèves faisant uniquement du théâtre : $14 - 5 = 9$.
- Nombre total d'élèves : $11 + 9 + 5 + 8 = 33$ élèves.


## Formules / Algorithmes / Propriétés

> [!theorem] Formules synthétiques
> - **Réunion quelconque** : $\text{Card}(A \cup B) = \text{Card}(A) + \text{Card}(B) - \text{Card}(A \cap B)$
> - **Produit cartésien** : $\text{Card}(E_1 \times E_2 \times \dots \times E_p) = \text{Card}(E_1) \times \text{Card}(E_2) \times \dots \times \text{Card}(E_p)$
> - **Nombre de $p$-uplets d'un ensemble à $n$ éléments** : $\text{Card}(E^p) = n^p$


## Concepts liés

- [[Nombre de parties d'un ensemble]]
- [[Arrangements et permutations]]
- [[Combinaisons et coefficients binomiaux]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

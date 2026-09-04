---
type: concept
tags:
  - concepts
  - Math
  - math/ensemble
MOC:
  - "[[MOC Ensemble]]"
date_creation: 2026-09-04
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---
# Produit cartésien et p-uplets

> [!info] Définition courte
> Le **produit cartésien** de plusieurs ensembles est l'ensemble de tous les p-uplets ordonnés dont chaque composante appartient à l'ensemble correspondant.


## 1. Produit cartésien de deux ensembles

Soient $E$ et $F$ deux ensembles. Le produit cartésien $E \times F$ est l'ensemble des couples $(x, y)$ :

$$E \times F = \{(x, y), \, x \in E, \, y \in F\}$$


## 2. Généralisation aux p-uplets

Soient $E_1, \dots, E_p$ des ensembles ($p \in \mathbb{N}^*$). Le produit cartésien $E_1 \times \dots \times E_p$ est l'ensemble des $p$-uplets ordonnés :

$$E_1 \times \dots \times E_p = \{(x_1, \dots, x_p), \, x_1 \in E_1, \dots, x_p \in E_p\}$$

- **Notation de puissance** : Si tous les ensembles sont égaux à $E$, on note $E^p$ le produit cartésien de $E$ avec lui-même $p$ fois.


## 3. Exemples usuels

- $\mathbb{R}^2 = \{(x, y), \, x \in \mathbb{R}, \, y \in \mathbb{R}\}$ (plan cartésien)
- $\mathbb{R}^3 = \{(x, y, z), \, x \in \mathbb{R}, \, y \in \mathbb{R}, \, z \in \mathbb{R}\}$ (espace à trois dimensions)


## Concepts liés

- [[Principes additif et multiplicatif en dénombrement]]
- [[Théorie des ensembles et opérations de base]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````

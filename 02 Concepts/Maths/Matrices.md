---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/résolutiondequations
MOC:
  - "[[MOC Résolution d'équations]]"
  - "[[MOC Algèbre]]"
date_creation: 2026-07-27
---
# Matrices

> [!info] Définition courte
> Une **matrice** est un tableau rectangulaire de nombres. Elle permet de représenter compactement un système d'équations linéaires ou une transformation de vecteurs. Une matrice à $m$ lignes et $n$ colonnes est de taille $m\times n$.

## Explication intuitive

Une matrice organise des coefficients. Par exemple, les coefficients du système
$$\begin{cases}2x+y=5\\x-y=1\end{cases}$$
peuvent être rassemblés dans la matrice $A=\begin{pmatrix}2&1\\1&-1\end{pmatrix}$.

Elle permet alors de travailler sur le système dans son ensemble plutôt qu'équation par équation.

## Fonctionnement

### Opérations de base

- Deux matrices peuvent être additionnées seulement si elles ont la même taille.
- Le produit $AB$ est défini si le nombre de colonnes de $A$ est égal au nombre de lignes de $B$.
- En général, $AB\ne BA$.

Pour une matrice carrée $A=\begin{pmatrix}a&b\\c&d\end{pmatrix}$, son déterminant est :
$$\det(A)=ad-bc.$$

Si $\det(A)\ne0$, la matrice est inversible et :
$$A^{-1}=\frac{1}{ad-bc}\begin{pmatrix}d&-b\\-c&a\end{pmatrix}.$$

## Exemple simple : résoudre un système

Résolvons :
$$\begin{cases}2x+y=5\\x-y=1\end{cases}$$

Sous forme matricielle, cela donne :
$$\begin{pmatrix}2&1\\1&-1\end{pmatrix}
\begin{pmatrix}x\\y\end{pmatrix}
=
\begin{pmatrix}5\\1\end{pmatrix}.$$

Le déterminant vaut $2\times(-1)-1\times1=-3\ne0$ : il existe donc une unique solution. En résolvant, on obtient $x=2$ et $y=1$.

## Formules / Propriétés

> [!theorem] Système linéaire et matrice inversible
> Pour un système carré écrit sous la forme $AX=B$, si $A$ est inversible, alors le système admet une unique solution :
> $$X=A^{-1}B.$$

Les matrices sont également utiles pour :

- résoudre des systèmes issus d'intersections de droites ou de plans ;
- représenter des vecteurs par des colonnes de coordonnées ;
- décrire des transformations géométriques linéaires.

## Concepts liés


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

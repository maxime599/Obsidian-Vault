---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/algebre
  - math/combinatoire
  - math/denombrement
MOC:
  - "[[MOC Algèbre]]"
  - "[[MOC Combinatoire]]"
  - "[[MOC Dénombrement]]"
date_creation: 2026-07-28
---
# Binôme de Newton

> [!info] Définition courte
> Le **binôme de Newton** donne le développement de toute puissance entière naturelle d'une somme :
> $$(a+b)^n=\sum_{k=0}^{n}\binom{n}{k}a^{n-k}b^k.$$
> Les coefficients sont les coefficients binomiaux.

## Explication intuitive

Développer $(a+b)^n$ revient à choisir, dans chacun des $n$ facteurs, soit $a$, soit $b$. Pour obtenir le terme $a^{n-k}b^k$, il faut choisir $b$ dans exactement $k$ facteurs : il y a $\binom nk$ façons de le faire.

## Fonctionnement

Pour développer $(a+b)^n$ :

1. Écrire les puissances de $a$ dans l'ordre décroissant : $a^n,a^{n-1},\dots,1$.
2. Écrire les puissances de $b$ dans l'ordre croissant : $1,b,\dots,b^n$.
3. Placer les coefficients $\binom nk$, obtenus avec le triangle de Pascal si besoin.
4. Simplifier les termes semblables.

## Exemple simple

Développons $(x+2)^4$ :
$$\begin{aligned}
(x+2)^4&=\binom40x^4+\binom41x^3\times2+\binom42x^2\times2^2\\
&\quad+\binom43x\times2^3+\binom442^4\\
&=x^4+8x^3+24x^2+32x+16.
\end{aligned}$$

## Propriétés

> [!theorem] Sommes de coefficients binomiaux
> En prenant $a=b=1$, on obtient :
> $$\sum_{k=0}^n\binom nk=2^n.$$
> En prenant $a=1$ et $b=-1$, pour $n\ge1$ :
> $$\sum_{k=0}^n(-1)^k\binom nk=0.$$

## Concepts liés

- [[Combinaisons et coefficients binomiaux]]
- [[Triangle de Pascal]]
- [[Arrangements et permutations]]
- [[Équations polynomiales]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

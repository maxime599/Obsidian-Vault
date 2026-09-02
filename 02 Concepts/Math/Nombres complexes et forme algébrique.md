---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/nombrescomplexes
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Algèbre]]"
date_creation: 2026-07-28
---
# Nombres complexes et forme algébrique

> [!info] Définition courte
> L'ensemble des **nombres complexes**, noté $\mathbb{C}$, contient les nombres de la forme $z=a+ib$, où $a,b\in\mathbb{R}$ et $i$ vérifie $i^2=-1$. Cette écriture est la **forme algébrique** de $z$.

## Explication intuitive

Les nombres complexes prolongent les réels afin que l'équation $x^2+1=0$ ait des solutions : $i$ et $-i$. Un complexe possède deux composantes : une partie réelle, comme l'abscisse, et une partie imaginaire, comme l'ordonnée.

## Fonctionnement

Pour manipuler $z=a+ib$ et $z'=c+id$ :

1. Identifier les parties réelle et imaginaire : $\operatorname{Re}(z)=a$ et $\operatorname{Im}(z)=b$.
2. Additionner ou soustraire les parties correspondantes.
3. Développer les produits en utilisant $i^2=-1$.
4. Pour un quotient, multiplier le numérateur et le dénominateur par le conjugué du dénominateur.

## Formules / Propriétés

> [!theorem] Calcul en forme algébrique
> $$z=z'\iff \operatorname{Re}(z)=\operatorname{Re}(z')\ \text{et}\ \operatorname{Im}(z)=\operatorname{Im}(z')$$
> $$z+z'=(a+c)+i(b+d)$$
> $$zz'=(ac-bd)+i(ad+bc)$$

Les puissances de $i$ sont périodiques de période $4$ :
$$i^0=1,\qquad i^1=i,\qquad i^2=-1,\qquad i^3=-i,\qquad i^4=1.$$

> [!example] Calculer $(2+i)(3-2i)$
> $$6-4i+3i-2i^2=8-i.$$

## Concepts liés

- [[Conjugué et module d'un nombre complexe]]
- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Forme exponentielle et formule d'Euler]]
- [[Équations du second degré dans C]]
- [[Géométrie des nombres complexes]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

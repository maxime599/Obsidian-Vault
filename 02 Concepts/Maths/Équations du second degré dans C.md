---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/nombrescomplexes
  - math/résolutiondequations
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Résolution d'équations]]"
  - "[[MOC Algèbre]]"
date_creation: 2026-07-28
---
# Équations du second degré dans C

> [!info] Définition courte
> Une équation du second degré à coefficients réels s'écrit $az^2+bz+c=0$, avec $a\ne0$. Dans $\mathbb{C}$, elle admet toujours une ou deux solutions, déterminées à partir du discriminant $\Delta=b^2-4ac$.

## Explication intuitive

Dans $\mathbb{R}$, une équation peut ne pas avoir de solution si son discriminant est négatif. Dans $\mathbb{C}$, les nombres imaginaires permettent de prendre la racine carrée d'un nombre négatif : il y a donc toujours des solutions.

## Fonctionnement

1. Identifier $a$, $b$ et $c$, puis calculer $\Delta=b^2-4ac$.
2. Si $\Delta\ge0$, appliquer la formule usuelle dans $\mathbb{R}$.
3. Si $\Delta<0$, poser $\sqrt{\Delta}=i\sqrt{-\Delta}$.
4. Écrire les deux solutions :
   $$z_1=\frac{-b+i\sqrt{-\Delta}}{2a}\qquad\text{et}\qquad z_2=\frac{-b-i\sqrt{-\Delta}}{2a}.$$

## Exemple simple

Résolvons $z^2-2z+5=0$.

$$\Delta=(-2)^2-4\times1\times5=-16.$$
Donc $\sqrt\Delta=4i$ et :
$$z_1=\frac{2+4i}{2}=1+2i\qquad z_2=\frac{2-4i}{2}=1-2i.$$

Les deux solutions sont conjuguées, car les coefficients de l'équation sont réels.

## Formules / Propriétés

> [!theorem] Relations entre les racines
> Si $z_1$ et $z_2$ sont les racines de $az^2+bz+c=0$, alors :
> $$z_1+z_2=-\frac{b}{a}\qquad\text{et}\qquad z_1z_2=\frac{c}{a}.$$
> Par conséquent :
> $$az^2+bz+c=a(z-z_1)(z-z_2).$$

Si $a$, $b$ et $c$ sont réels et si une racine non réelle est $z$, alors $\overline z$ est aussi une racine.

## Concepts liés

- [[Nombres complexes et forme algébrique]]
- [[Conjugué et module d'un nombre complexe]]
- [[Formules de De Moivre et racines n-ièmes]]
- [[Équations et inéquations trigonométriques]]
- [[Équations polynomiales]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/arithmetique
MOC:
  - "[[MOC Arithmetique]]"
date_creation: 2026-07-27
---
# Nombres premiers

> [!info] Définition courte
> Un entier naturel $p\ge2$ est **premier** lorsqu'il admet exactement deux diviseurs positifs : $1$ et lui-même. Tout entier $n\ge2$ se décompose de manière unique, à l'ordre près, en produit de nombres premiers.

## Explication intuitive

Les nombres premiers sont les « briques élémentaires » des entiers : en les multipliant, on reconstitue tous les autres entiers strictement supérieurs à $1$. Par exemple :
$$84=2^2\times3\times7.$$

## Fonctionnement

Pour déterminer si un entier $n\ge2$ est premier :

1. Tester la divisibilité par les nombres premiers inférieurs ou égaux à $\sqrt n$.
2. Si aucun ne divise $n$, alors $n$ est premier.
3. Sinon, écrire $n$ comme un produit et poursuivre la décomposition de chaque facteur.

> [!example] Décomposer $210$ en facteurs premiers.
> $$210=21\times10=(3\times7)\times(2\times5)=2\times3\times5\times7.$$

## Propriétés

> [!theorem] Théorème fondamental de l'arithmétique
> Tout entier $n\ge2$ possède une décomposition en produit de nombres premiers, unique à l'ordre des facteurs près.

- Si $p$ est premier et $p\mid ab$, alors $p\mid a$ ou $p\mid b$ (**lemme d'Euclide**).
- Un entier $n\ge2$ non premier possède un diviseur premier inférieur ou égal à $\sqrt n$.
- Deux entiers sont premiers entre eux lorsque leur seul diviseur commun positif est $1$.

## Exemple simple

Montrons que $97$ est premier. Comme $\sqrt{97}<10$, il suffit de tester les nombres premiers $2$, $3$, $5$ et $7$. Aucun ne divise $97$ ; donc $97$ est premier.

## Concepts liés
- [[Divisibilité dans Z]]
- [[PGCD et algorithme d'Euclide]]
- [[Théorèmes de Bézout et de Gauss]]
- [[Congruences]]
- [[Petit théorème de Fermat]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

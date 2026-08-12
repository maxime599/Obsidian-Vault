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
# Congruences

> [!info] Définition courte
> Deux entiers $a$ et $b$ sont **congrus modulo $n$** ($n\ge2$), noté $a\equiv b\ [n]$, lorsqu'ils ont le même reste dans la division par $n$. Cela équivaut à dire que $n$ divise $a-b$.

## Explication intuitive

Travailler modulo $n$, c'est ne retenir que le reste après division par $n$. Par exemple, les heures d'une horloge sont calculées modulo $12$ : après $11$ heures, une heure plus tard il est $0$ heure (ou $12$ heures).

## Fonctionnement

1. Choisir le module $n$ adapté au problème.
2. Remplacer les nombres par des restes plus simples modulo $n$.
3. Effectuer les calculs avec ces restes.
4. Revenir à une conclusion sur la divisibilité ou sur le reste recherché.

> [!example] Calculer le reste de $7^{100}$ dans la division par $5$.
> Comme $7\equiv2\ [5]$ et $2^4=16\equiv1\ [5]$, on a :
> $$7^{100}\equiv2^{100}=\left(2^4\right)^{25}\equiv1^{25}\equiv1\ [5].$$
> Le reste est donc $1$.

## Propriétés

> [!theorem] Calcul modulo $n$
> Si $a\equiv b\ [n]$ et $c\equiv d\ [n]$, alors :
> $$a+c\equiv b+d\ [n]$$
> $$ac\equiv bd\ [n]$$
> $$a^p\equiv b^p\ [n]\quad\text{pour tout }p\in\mathbb{N}.$$

Autres critères utiles :

- $a\equiv0\ [n]$ si et seulement si $n\mid a$ ;
- $a\equiv b\ [n]$ si et seulement si $a-b$ est un multiple de $n$ ;
- on peut réduire chaque terme d'une somme ou d'un produit avant de calculer.

> [!warning] On ne peut pas toujours simplifier une congruence par un même facteur. Par exemple, de $2a\equiv2b\ [6]$, on déduit seulement $a\equiv b\ [3]$, pas nécessairement modulo $6$.

## Concepts liés
- [[Divisibilité dans Z]]
- [[Division euclidienne dans Z]]
- [[PGCD et algorithme d'Euclide]]
- [[Équations diophantiennes linéaires]]
- [[Petit théorème de Fermat]]
- [[Nombres premiers]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

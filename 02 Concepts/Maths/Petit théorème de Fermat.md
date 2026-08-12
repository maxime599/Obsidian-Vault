---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/arithmetique
  - math/theoreme
MOC:
  - "[[MOC Arithmetique]]"
  - "[[MOC Theoreme]]"
date_creation: 2026-07-28
---
# Petit théorème de Fermat

> [!info] Définition courte
> Si $p$ est un nombre premier et si $a$ n'est pas divisible par $p$, alors :
> $$a^{p-1}\equiv1\ [p].$$
> De manière équivalente, pour tout entier $a$ : $a^p\equiv a\ [p]$.

## Explication intuitive

Modulo un nombre premier $p$, les puissances d'un entier non divisible par $p$ suivent un cycle. Le petit théorème de Fermat indique qu'après $p-1$ multiplications, on revient toujours au reste $1$.

## Fonctionnement

Pour calculer $a^N\ [p]$ avec $p$ premier :

1. Vérifier si $p\mid a$ ; dans ce cas, $a^N\equiv0\ [p]$.
2. Sinon, utiliser $a^{p-1}\equiv1\ [p]$.
3. Écrire $N=q(p-1)+r$.
4. Réduire : $a^N\equiv a^r\ [p]$.

## Exemple simple

Calculons $3^{100}\ [7]$.

Comme $7$ est premier et $3^6\equiv1\ [7]$ :
$$3^{100}=\left(3^6\right)^{16}\times3^4\equiv3^4=81\equiv4\ [7].$$

## Propriétés

> [!theorem] Critère de primalité partiel
> Si, pour un entier $n>1$, il existe un entier $a$ tel que :
> $$a^{n-1}\not\equiv1\ [n],$$
> alors $n$ n'est pas premier.

La réciproque est fausse : certains nombres composés peuvent satisfaire la congruence pour certaines bases $a$.

## Concepts liés

- [[Congruences]]
- [[Nombres premiers]]
- [[Division euclidienne dans Z]]
- [[Théorèmes de Bézout et de Gauss]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

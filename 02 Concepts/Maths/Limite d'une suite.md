---
type: concept
matière: math
tags:
  - concepts
  - math
  - "#math/suite"
  - math/limites
MOC:
  - "[[MOC Suite]]"
  - "[[MOC Limites]]"
date_creation: 2026-07-26
---

# Limite d'une suite

> [!info] Soit $U_{n}$ une suite et $l$ un réel. On dit que la suite tend vers l quand $n$ tend vers $+\infty$ si tout intervalle ouverts contenant $l$ contient toutes les valeurs $U_{n}$ à partir d'un certain rang
> 
On note alors $$\lim_{x\to+\infty} U_{n}=l$$




## Propriété 
Une suite converge si elle a une limite unique. Si ce n'est pas le cas, elle est divergente.
Exemples : 

La suite $U_{n}=(-1)^n$ et la suite $U_{n} =n^2$ divergent (l'une n'a pas de limite et l'autre un une limite infinie)




## Opérations sur les limites
### Somme de deux suites

| Si $\lim_{ n \to \infty }U_{n}=$            | $l$    | $l$       | $l$       | $+\infty$ | $-\infty$ | $+\infty$ |
| ------------------------------------------- | ------ | --------- | --------- | --------- | --------- | --------- |
| Si $\lim_{ n \to \infty }V_{n}=$            | $l'$   | $+\infty$ | $-\infty$ | $+\infty$ | $-\infty$ | $-\infty$ |
| Alors $\lim_{ n \to \infty }(U_{n}+V_{n})=$ | $l+l'$ | $+\infty$ | $-\infty$ | $+\infty$ | $-\infty$ | FI        |

### Produit de deux suites

| Si $\lim_{ n \to \infty }U_{n}=$            | $l$    | $l>0$     | $l<0$     | $l>0$     | $l<0$     | $+\infty$ | $+\infty$ | $+\infty$ | 0            |
| ------------------------------------------- | ------ | --------- | --------- | --------- | --------- | --------- | --------- | --------- | ------------ |
| Si $\lim_{ n \to \infty }V_{n}=$            | $l'$   | $+\infty$ | $+\infty$ | $-\infty$ | $-\infty$ | $+\infty$ | $-\infty$ | $-\infty$ | $\pm \infty$ |
| Alors $\lim_{ n \to \infty }(U_{n}*V_{n})=$ | $l*l'$ | $+\infty$ | $-\infty$ | $-\infty$ | $+\infty$ | $+\infty$ | $-\infty$ | $+\infty$ | FI           |


Si on a une FI, on factorise par le terme prépondérant



## Comportement d'une suite à $+\infty$ de la suite $q^n$

1.  Si $q>1$, alors $\lim_{ n \to \infty }q^n =+\infty$ 
2. Si $-1<q<1$, alors $\lim_{ n \to \infty }q^n =0$ 
3. Si $-1<q$, alors la suite n'a pas de limite




## Concepts liés

- [[Suites]] 
- [[Théorème de comparaison pour les suites]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

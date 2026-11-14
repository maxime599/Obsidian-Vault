---
semestre: S1
type de cours: CM
date: 2026-11-04T16:10:15
End Date: 2026-11-04T16:40:15
Calendar Title: "[[01 Cours/Math/début Chapitre 6, Math 2026-11-04|début Chapitre 6, Math]]"
prof: Olivier Gipouloux
tags:
  - cours
  - Math
Concepts:
  - "[[Définition, degré et opérations sur les polynômes]]"
  - "[[Dérivation et formule de Taylor pour les polynômes]]"
  - "[[Division euclidienne et racines d'un polynôme]]"
  - "[[Décomposition en facteurs irréductibles (C[X] et R[X])]]"
Ressources:
  - "[[Math chapitre6.pdf]]"
---

```dataviewjs
let current = dv.current();
let pages = dv.pages(`"${current.file.folder}"`)
  .where(p => p.date)
  .sort(p => p.date, 'asc');

let idx = pages.findIndex(p => p.file.path === current.file.path);
let prev = idx > 0 ? pages[idx - 1] : null;
let next = (idx !== -1 && idx < pages.length - 1) ? pages[idx + 1] : null;

let getCleanLink = (page) => {
  if (!page) return "Aucun";
  let cleanTitle = page.file.name.split(',')[0].trim();
  return `[[${page.file.name}|${cleanTitle}]]`;
};

dv.paragraph(`**Précédent :** ${getCleanLink(prev)} | **Suivant :** ${getCleanLink(next)}`);
```
# début Chapitre 6


## Objectifs

-

## Notes

### Définition et notations

Un polynôme à coefficients dans $\mathbb{R}$ est toute suite $(a_{k})_{k\in\mathbb{N}}$ d'éléments de $\mathbb{R}$ nulle à partir d'un certain rang. On le représente par :

$$P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$$

La somme se limite à un nombre fini de termes car il existe $n\in\mathbb{N}$ tel que, pour tout $k>n$, $a_{k}=0$. On peut donc écrire :

$$P(X)=\sum_{k=0}^{n}a_{k}X^{k}=a_{0}+a_{1}X+a_{2}X^{2}+a_{3}X^{3}+\cdots+a_{n}X^{n}$$

* **Indéterminée** : $X$ est l'indéterminée du polynôme.
* **Monôme** : Polynôme qui ne comprend qu'un seul terme non nul.
* **Ensembles** : On note $\mathbb{R}[X]$ l'ensemble des polynômes à coefficients dans $\mathbb{R}$ et $\mathbb{C}[X]$ celui à coefficients dans $\mathbb{C}$. On a $\mathbb{R}[X]\subset\mathbb{C}[X]$.
* **Polynôme nul** : Polynôme dont tous les coefficients sont nuls, noté $0$.

**Exemples** :
* $P(X)=-2+5X+X^{2}+6X^{3} \in \mathbb{R}[X]$
* $Q(X)=1-jX \in \mathbb{C}[X]$
* $R(X)=-6X^{3}$ est un monôme de $\mathbb{R}[X]$

---

### Identification

Deux polynômes sont égaux si et seulement s'ils ont les mêmes coefficients.

Soient $P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$ et $Q(X)=\sum_{k=0}^{+\infty}b_{k}X^{k}$ deux polynômes :

$$P(X)=Q(X)\Leftrightarrow\forall k\in\mathbb{N}, \quad a_{k}=b_{k}$$

Un polynôme $P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$ est nul si et seulement si $\forall k\in\mathbb{N}$, $a_{k}=0$.

**Exemple** : Déterminer $(a,b,c,d)\in\mathbb{R}^{4}$ tel que $a+bX+cX^{2}+dX^{3}=-2+X^{2}-6X^{3}$.
Par identification :
* $a = -2$
* $b = 0$
* $c = 1$
* $d = -6$

---

### Évaluation

Soit $P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$ un polynôme et $x\in\mathbb{C}$. On appelle valeur de $P(X)$ en $x$ le nombre :

$$P(x)=\sum_{k=0}^{+\infty}a_{k}x^{k}$$

À tout polynôme $P(X)$, on associe la fonction polynomiale $x\mapsto\sum_{k=0}^{+\infty}a_{k}x^{k}$ définie sur $\mathbb{C}$ et à valeurs dans $\mathbb{C}$.

**Exemple** : Soit $P(X)=a+bX+cX^{2}+dX^{3}$.
* $P(0) = a$
* $P(1) = a + b + c + d$
* $P(2) = a + 2b + 4c + 8d$

---

### Degré d'un polynôme

Soit $P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$ un polynôme non nul. Son degré est le plus grand entier $n$ tel que $a_{n}\neq 0$. On le note $n=\deg(P(X))$.

* **Polynôme nul** : Par convention, $\deg(0) = -\infty$. On a $-\infty < n$ et $-\infty + n = -\infty$ pour tout $n\in\mathbb{N}$.
* **Polynômes constants** : Polynômes de degré inférieur ou égal à $0$.

Un polynôme de degré $n\in\mathbb{N}^{*}$ peut être ordonné :
* Selon les puissances croissantes : $P(X)=a_{0}+a_{1}X+\cdots+a_{n-1}X^{n-1}+a_{n}X^{n}$
* Selon les puissances décroissantes : $P(X)=a_{n}X^{n}+a_{n-1}X^{n-1}+\cdots+a_{2}X^{2}+a_{1}X+a_{0}$

---

### Opérations sur les polynômes

#### Somme et produit par un scalaire

Soient $P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$ et $Q(X)=\sum_{k=0}^{+\infty}b_{k}X^{k}$ deux polynômes et $\lambda\in\mathbb{C}$ :

$$(P+Q)(X) = \sum_{k=0}^{+\infty}(a_{k}+b_{k})X^{k}$$

$$(\lambda P)(X) = \sum_{k=0}^{+\infty}\lambda a_{k}X^{k}$$

L'opposé de $P(X)$ est $-P(X) = (-1)P(X)$, vérifiant $P(X) + (-P(X)) = 0$.

#### Produit de deux polynômes

$$(PQ)(X) = P(X)Q(X) = \sum_{k=0}^{+\infty}c_{k}X^{k}$$

où $c_{k}=\sum_{i=0}^{k}a_{i}b_{k-i}=a_{0}b_{k}+a_{1}b_{k-1}+\cdots+a_{k}b_{0}$.

**Propriété fondamentale** : $(PQ)(X)=0 \Leftrightarrow P(X)=0 \text{ ou } Q(X)=0$.

#### Puissance d'un polynôme

Pour tout $k\in\mathbb{N}^*$, $P^{k}(X)=(P(X))^{k}$. Par convention, $P^{0}(X)=1$.

#### Formule du binôme de Newton

Pour tout entier naturel $n$ et tous polynômes $P(X)$ et $Q(X)$ :

$$(P(X)+Q(X))^{n}=\sum_{k=0}^{n}\binom{n}{k}P^{k}(X)Q^{n-k}(X)$$

#### Composition de polynômes

Soient $P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$ et $Q(X)$ deux polynômes :

$$(P\circ Q)(X)=P(Q(X))=\sum_{k=0}^{+\infty}a_{k}(Q(X))^{k}$$

La composition $(P\circ Q)(X)$ est un polynôme, mais la composition n'est **pas commutative** ($(P\circ Q)(X) \neq (Q\circ P)(X)$ en général).

---

### Dérivation

#### Polynôme dérivé

Soit $P(X)=\sum_{k=0}^{+\infty}a_{k}X^{k}$. Le polynôme dérivé est :

$$P^{\prime}(X)=\sum_{k=1}^{+\infty}ka_{k}X^{k-1} = \sum_{i=0}^{+\infty}(i+1)a_{i+1}X^{i}$$

#### Propriétés de la dérivation

* $P(X)$ est constant $\Leftrightarrow P^{\prime}(X)=0$
* **Linéarité** : $(\lambda P)^{\prime}(X) = \lambda P^{\prime}(X)$ et $(P+Q)^{\prime}(X) = P^{\prime}(X)+Q^{\prime}(X)$
* **Produit** : $(PQ)^{\prime}(X) = P^{\prime}(X)Q(X) + P(X)Q^{\prime}(X)$
* **Puissance** : $\forall n\in\mathbb{N}, \ (P^{n})^{\prime}(X) = n P^{n-1}(X) P^{\prime}(X)$
* **Composée** : $(P\circ Q)^{\prime}(X) = P^{\prime}(Q(X))Q^{\prime}(X)$

#### Formule de Leibniz

Pour l'ordre de dérivation $n\in\mathbb{N}$ :

$$(PQ)^{(n)}(X)=\sum_{k=0}^{n}\binom{n}{k}P^{(k)}(X)Q^{(n-k)}(X)$$

#### Formule de Taylor

Soit $P(X)$ un polynôme de degré $n$ et $\alpha\in\mathbb{C}$ :

$$P(X)=\sum_{k=0}^{n}\frac{P^{(k)}(\alpha)}{k!}(X-\alpha)^{k} = P(\alpha)+\frac{P^{\prime}(\alpha)}{1!}(X-\alpha)+\frac{P^{\prime\prime}(\alpha)}{2!}(X-\alpha)^{2}+\cdots+\frac{P^{(n)}(\alpha)}{n!}(X-\alpha)^{n}$$

En particulier, pour $\alpha=0$ :

$$P(X)=\sum_{k=0}^{n}\frac{P^{(k)}(0)}{k!}X^{k}$$

---

### Division euclidienne

Soient $A(X)$ et $B(X)$ deux polynômes avec $B(X) \neq 0$. Il existe un **unique** couple $(Q(X), R(X))$ tel que :

$$\begin{cases} A(X) = B(X)Q(X) + R(X) \\ \deg(R(X)) < \deg(B(X)) \end{cases}$$

* $Q(X)$ est le **quotient** et $R(X)$ est le **reste**.
* Si $\deg(A(X)) < \deg(B(X))$, alors $Q(X)=0$ et $R(X)=A(X)$.
* Si $R(X)=0$, alors $A(X)=Q(X)B(X)$ : on dit que $A(X)$ est un **multiple** de $B(X)$ ou est **divisible** par $B(X)$.

---

### Racines d'un polynôme

#### Définition et divisibilité

$\alpha\in\mathbb{C}$ est une **racine** de $P(X)$ si $P(\alpha)=0$.

* $P(X)$ est divisible par $X-\alpha \Leftrightarrow P(\alpha)=0$.
* $P(X)$ admet $\alpha_{1}, \alpha_{2}, \dots, \alpha_{n}$ comme racines distinctes $\Leftrightarrow P(X)$ est divisible par $\prod_{i=1}^{n}(X-\alpha_{i})$.
* Un polynôme de degré $n$ admet **au plus $n$ racines distinctes**.
* Si un polynôme admet une infinité de racines, alors c'est le **polynôme nul**.

#### Ordre de multiplicité

L'ordre de multiplicité d'une racine $\alpha$ est le plus grand entier $k$ tel que $(X-\alpha)^{k}$ divise $P(X)$.
* $k=1$ : racine **simple**
* $k \ge 2$ : racine **multiple**

**Caractérisation par les dérivées** :
$\alpha$ est une racine d'ordre de multiplicité $n$ de $P(X)$ si et seulement si :

$$\begin{cases} P(\alpha)=P^{\prime}(\alpha)=P^{\prime\prime}(\alpha)=\cdots=P^{(n-1)}(\alpha)=0 \\ P^{(n)}(\alpha)\neq 0 \end{cases}$$

---

### Décomposition en facteurs irréductibles

#### Dans $\mathbb{C}[X]$

**Théorème de D'Alembert-Gauss** : Tout polynôme non constant de $\mathbb{C}[X]$ admet au moins une racine dans $\mathbb{C}$.

Tout polynôme $P(X)\in\mathbb{C}[X]$ de degré $n$ se décompose de manière unique (à l'ordre près des facteurs) sous la forme :

$$P(X)=a_{n}\prod_{i=1}^{p}(X-\alpha_{i})^{r_{i}}$$

où $a_{n}$ est le coefficient dominant, $\alpha_{i}$ sont les racines distinctes d'ordres $r_{i}$, et $\sum_{i=1}^{p}r_{i}=n$.

#### Dans $\mathbb{R}[X]$

Si $P(X)\in\mathbb{R}[X]$ et $\alpha\in\mathbb{C}$ est une racine de $P(X)$, alors son conjugué $\overline{\alpha}$ est aussi racine de $P(X)$ avec le même ordre de multiplicité.

Tout polynôme $P(X)\in\mathbb{R}[X]$ de degré $n$ se décompose de manière unique sous la forme :

$$P(X)=a_{n}\prod_{i=1}^{p}(X-\alpha_{i})^{r_{i}} \times \prod_{k=1}^{q}(Q_{k}(X))^{s_{k}}$$

* $a_{n}\in\mathbb{R}$ est le coefficient dominant.
* $\alpha_{1}, \dots, \alpha_{p}$ sont les racines réelles de multiplicités $r_{1}, \dots, r_{p}$.
* $Q_{k}(X) = X^2 + b_k X + c_k$ sont des polynômes du second degré à coefficients réels sans racine réelle ($\Delta < 0$).
* $\sum_{i=1}^{p}r_{i} + 2\sum_{k=1}^{q}s_{k} = n$.

## Exercices


## À retenir
-
## Travail à faire




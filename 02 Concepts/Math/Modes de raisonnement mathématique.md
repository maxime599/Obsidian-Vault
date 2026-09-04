---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/Démonstration
MOC:
  - "[[MOC Démonstration]]"
date_creation: 2026-09-02
Ressources: "[[S1_cours_math_chap1.pdf]]"
---
# Modes de raisonnement mathématique

> [!info] Définition courte
> Les **modes de raisonnement** sont les structures logiques employées en mathématiques pour démontrer la véracité d'une assertion ou d'un théorème à partir d'hypothèses et d'axiomes établis.


## 1. Raisonnement par Contraposition

Basé sur l'équivalence logique $[P \implies Q] \iff [\text{non}(Q) \implies \text{non}(P)]$. Pour prouver que $P \implies Q$, on démontre que la falsité de $Q$ entraîne la falsité de $P$.

> [!example] Exemple classique
> Pour montrer que « Si $n^2$ est pair, alors $n$ est pair », il suffit de prouver sa contraposée : « Si $n$ est impair ($\text{non } Q$), alors $n^2$ est impair ($\text{non } P$) ».
> - $n = 2k + 1 \implies n^2 = (2k + 1)^2 = 4k^2 + 4k + 1 = 2(2k^2 + k) + 1$, qui est bien impair.


## 2. Raisonnement par l'Absurde

Pour démontrer qu'une proposition $P$ est vraie, on suppose que sa négation $\text{non}(P)$ est vraie, puis on déduit une contradiction logique (de la forme $Q \text{ et } \text{non}(Q)$).

> [!example] Démonstration de l'irrationnalité de $\sqrt{2}$
> 1. **Hypothèse par l'absurde** : On suppose que $\sqrt{2}$ est rationnel, c'est-à-dire qu'il s'écrit $\sqrt{2} = \frac{p}{q}$ avec $p \in \mathbb{N}, q \in \mathbb{N}^*$ et $\text{PGCD}(p, q) = 1$ (fraction irréductible).
> 2. **Développement** : $2 = \frac{p^2}{q^2} \implies p^2 = 2q^2$. Donc $p^2$ est pair, ce qui implique que $p$ est pair ($p = 2k$).
> 3. **Substitution** : $(2k)^2 = 2q^2 \implies 4k^2 = 2q^2 \implies q^2 = 2k^2$. Donc $q^2$ est pair, ce qui implique que $q$ est pair.
> 4. **Contradiction** : $p$ et $q$ sont tous deux pairs, ils admettent donc $2$ comme diviseur commun. Cela contredit l'hypothèse $\text{PGCD}(p, q) = 1$.
> 5. **Conclusion** : L'hypothèse est fausse, $\sqrt{2}$ est donc irrationnel.


## 3. Raisonnement par Disjonction des cas

Lorsque la véracité d'une assertion dépend de différentes situations ou structures (par exemple la parité d'un entier ou le reste d'une division euclidienne), on sépare la démonstration en plusieurs cas étanches couvrant l'ensemble des possibles.

> [!example] Condition de divisibilité par 3 de $n^2 + 3n + 2$
> Soit $n \in \mathbb{N}$. On cherche à quelle condition sur $n$ l'expression $E(n) = n^2 + 3n + 2$ est divisible par $3$. Tout entier $n$ s'écrit sous la forme $3k$, $3k+1$ ou $3k+2$ ($k \in \mathbb{N}$).
> 
> - **Cas 1 : $n = 3k$ ($n$ est un multiple de 3)**
>   $$E(n) = (3k)^2 + 3(3k) + 2 = 9k^2 + 9k + 2 = 3(3k^2 + 3k) + 2$$
>   Le reste de la division par 3 est $2$ ; $E(n)$ **n'est pas divisible par 3**.
> 
> - **Cas 2 : $n = 3k + 1$ ($n \equiv 1 \pmod 3$)**
>   $$E(n) = (3k+1)^2 + 3(3k+1) + 2 = 9k^2 + 6k + 1 + 9k + 3 + 2 = 9k^2 + 15k + 6 = 3(3k^2 + 5k + 2)$$
>   L'expression **est divisible par 3**.
> 
> - **Cas 3 : $n = 3k + 2$ ($n \equiv 2 \pmod 3$)**
>   $$E(n) = (3k+2)^2 + 3(3k+2) + 2 = 9k^2 + 12k + 4 + 9k + 6 + 2 = 9k^2 + 21k + 12 = 3(3k^2 + 7k + 4)$$
>   L'expression **est divisible par 3**.
> 
> **Conclusion** : $n^2 + 3n + 2$ est divisible par 3 si et seulement si $n$ n'est pas un multiple de 3.


## 4. Raisonnement par Analyse-Synthèse

Méthode structurée en deux phases qui permet de trouver et valider les solutions d'un problème (équations, équations différentielles, recherche de fonctions).

1. **Phase d'Analyse** : On suppose le problème résolu (soit $x$ une solution). On en déduit des conditions nécessaires sur $x$ pour restreindre l'ensemble des candidats potentiels.
2. **Phase de Synthèse** : On teste un par un les candidats trouvés lors de l'analyse pour vérifier s'ils satisfont effectivement le problème initial (condition suffisante).

> [!example] Résolution dans $\mathbb{R}$ de l'équation $\sqrt{x+2} = x$
> 
> - **Analyse** :
>   Supposons que $x \in \mathbb{R}$ soit solution.
>   - Pour que la racine soit définie, il faut $x + 2 \ge 0 \implies x \ge -2$.
>   - Comme une racine carrée est toujours positive, $x = \sqrt{x+2} \implies x \ge 0$.
>   - En élevant au carré : 
>     $$(\sqrt{x+2})^2 = x^2 \implies x + 2 = x^2 \implies x^2 - x - 2 = 0$$
>   - Résolution du second degré : $\Delta = (-1)^2 - 4(1)(-2) = 9$.
>   - Les racines sont $x_1 = \frac{1 - 3}{2} = -1$ et $x_2 = \frac{1 + 3}{2} = 2$.
>   - Les seuls candidats possibles sont $-1$ et $2$.
> 
> - **Synthèse** :
>   - Pour $x = -1$ : $\sqrt{-1 + 2} = \sqrt{1} = 1 \neq -1$. Donc $-1$ n'est pas solution.
>   - Pour $x = 2$ : $\sqrt{2 + 2} = \sqrt{4} = 2$. La condition est vérifiée, $2$ est solution.
> 
> **Conclusion** : L'unique solution de l'équation est $S = \{2\}$.


## 5. Autre structure : La double implication

Pour démontrer une équivalence logique $P \iff Q$, on réalise la démonstration en deux temps :
1. Implication directe : On suppose $P$ vraie et on démontre $Q$ ($P \implies Q$).
2. Réciproque : On suppose $Q$ vraie et on démontre $P$ ($Q \implies P$).


## Concepts liés

- [[Logique mathématique et booléenne]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

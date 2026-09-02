---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/probabilites
  - math/statistiques
MOC:
  - "[[MOC Probabilites]]"
  - "[[MOC Statistiques]]"
date_creation: 2026-07-27
---
# Échantillons et sommes de variables aléatoires

> [!info] Définition courte
> Un **échantillon** de taille $n$ d'une loi de probabilité est une liste $(X_1, X_2, \dots, X_n)$ de $n$ variables aléatoires **indépendantes et identiques** (i.i.d.) suivant cette même loi. On s'intéresse à leur somme $S_n$ et à leur moyenne $M_n$.


## Explication intuitive

- **Variables indépendantes** : Le résultat de l'une n'influence en rien le résultat des autres (ex. lancer plusieurs fois un dé équilibré).
- **Somme $S_n$** : Cumul de toutes les réalisations obtenues.
- **Moyenne $M_n$** : Moyenne arithmétique de l'échantillon. Plus l'échantillon est grand, plus la moyenne varie peu.


## Fonctionnement et Propriétés

### 1. Opérations sur deux variables aléatoires
Pour deux variables aléatoires $X$ et $Y$ définies sur un même univers :
- **Linéarité de l'espérance** :
  $$E(X + Y) = E(X) + E(Y) \quad \text{et} \quad E(aX + b) = aE(X) + b$$
- **Variance et écart-type** :
  $$V(aX + b) = a^2 V(X) \quad \text{et} \quad \sigma(aX + b) = |a| \sigma(X)$$
- **Condition d'indépendance** : $X$ et $Y$ sont indépendantes si pour tous réels $a$ et $b$ :
  $$P(\{X = a\} \cap \{Y = b\}) = P(X = a) \times P(Y = b)$$
  Si $X$ et $Y$ sont indépendantes, alors :
  $$V(X + Y) = V(X) + V(Y)$$

---

### 2. Échantillon de taille $n$
Soit $(X_1, X_2, \dots, X_n)$ un échantillon i.i.d. d'une variable aléatoire $X$ :

- **Somme de l'échantillon** : $S_n = X_1 + X_2 + \dots + X_n$
  - Espérance : $E(S_n) = n \times E(X)$
  - Variance : $V(S_n) = n \times V(X)$

- **Moyenne de l'échantillon** : $M_n = \frac{S_n}{n} = \frac{X_1 + X_2 + \dots + X_n}{n}$
  - Espérance : $E(M_n) = E(X)$
  - Variance : $V(M_n) = \frac{V(X)}{n}$


## Application à la loi Binomiale

Une variable aléatoire $S$ suivant la loi binomiale $\mathcal{B}(n, p)$ correspond à la somme d'un échantillon de $n$ variables de Bernoulli $X_1, \dots, X_n$ indépendantes et de paramètre $p$ ($E(X_i) = p$ et $V(X_i) = p(1-p)$).

On en déduit directement :
- $E(S) = n \times p$
- $V(S) = n \times p(1 - p)$
- $\sigma(S) = \sqrt{n p (1 - p)}$


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> Pour un échantillon $(X_1, \dots, X_n)$ de variables indépendantes et de même loi que $X$ :
> - $E(M_n) = E(X)$
> - $V(M_n) = \frac{V(X)}{n}$
> - $\sigma(M_n) = \frac{\sigma(X)}{\sqrt{n}}$


## Concepts liés

- [[Inégalité de Bienaymé-Tchebychev]]
- [[Inégalité de concentration et loi des grands nombres]]
- [[Loi binomiale]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

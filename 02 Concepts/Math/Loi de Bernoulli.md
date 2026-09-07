---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/probabilites
  - math/lois
MOC:
  - "[[MOC Probabilites]]"
  - "[[07 MOC/Concepts/Math/MOC Lois]]"
date_creation: 2026-07-27
---
# Loi de Bernoulli

> [!info] Définition courte
> Une **épreuve de Bernoulli** est une expérience aléatoire ne comportant que deux issues possibles : le **succès** ($S$) de probabilité $p$ et l'**échec** ($\bar{S}$) de probabilité $1-p$. La **loi de Bernoulli** est la loi de la variable aléatoire $X$ qui prend la valeur $1$ en cas de succès et $0$ en cas d'échec.


## Explication intuitive

C'est le modèle mathématique de toute expérience à deux résultats mutuellement exclusifs ("oui/non", "pile/face", "gagné/perdu"). On ne s'intéresse qu'à la réalisation d'un seul événement cible (le « succès »), tout autre résultat étant comptabilisé comme un « échec ».


## Fonctionnement

1. **Identifier l'épreuve** et vérifier qu'il n'y a que deux résultats possibles (ou que les résultats peuvent être séparés en deux catégories).
2. **Définir le succès $S$** et mesurer sa probabilité $p \in [0 ; 1]$.
3. **Définir l'échec $\bar{S}$** dont la probabilité associée est $1-p$.
4. **Associer la variable aléatoire $X$** :
   - $X = 1$ si le succès $S$ est réalisé.
   - $X = 0$ si l'échec $\bar{S}$ est réalisé.
5. Dresser le tableau de la loi de probabilité de $X$.


## Exemple simple

**Lancer d'un dé équilibré à 6 faces :**
- On définit le **succès $S$** par : « Obtenir le chiffre 6 ».
- La probabilité du succès est $p = P(S) = \frac{1}{6}$.
- L'**échec $\bar{S}$** correspond à : « Obtenir 1, 2, 3, 4 ou 5 ».
- La probabilité de l'échec est $1 - p = \frac{5}{6}$.
- La variable aléatoire $X$ suit la loi de Bernoulli de paramètre $p = \frac{1}{6}$.

## Méthode 
- Épreuve de Bernoulli : "....."
- Succès : "....", $p(S) =$...

- On répété 10x l'épreuve de B dans les même conditions et de manière indépendante
- Soit X la va qui compte le nombre de succès
- X prend les valeurs 0,1,2,....10
- X suit la loi binomiale de paramètre n = 10 et p = ...
- $\forall k \in \mathbb{N}~tq~0\leq k\leq 10$, $p(X=k) = \binom{10}{k} * \left(\frac{1}{5}\right)^k* \left(\frac{4}{5}\right)^{10-k}$



## Formules / Algorithmes / Propriétés

> [!theorem] Tableau de la loi de Bernoulli
> Si $X$ suit une loi de Bernoulli de paramètre $p$ :
> 
> | $x_i$ | $1$ | $0$ |
> | :---: | :---: | :---: |
> | $P(X = x_i)$ | $p$ | $1 - p$ |

**Indicateurs statistiques :**
- **Espérance** : $E(X) = p$
- **Variance** : $V(X) = p(1 - p)$
- **Écart-type** : $\sigma(X) = \sqrt{p(1 - p)}$

> [!abstract] Démonstrations
> - **Espérance** :
>   $$E(X) = 1 \times p + 0 \times (1 - p) = p$$
> - **Variance** :
>   $$\begin{aligned} V(X) &= \sum (x_i - E(X))^2 \cdot P(X = x_i) \\ &= (1 - p)^2 \times p + (0 - p)^2 \times (1 - p) \\ &= p(1 - p)(1 - p + p) \\ &= p(1 - p) \end{aligned}$$


## Concepts liés

- [[Succession d'épreuves indépendantes et Schéma de Bernoulli]]
- [[Loi binomiale]]
- [[Variables aléatoires discrètes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

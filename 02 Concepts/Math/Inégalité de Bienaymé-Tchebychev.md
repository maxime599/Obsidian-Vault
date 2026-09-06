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
# Inégalité de Bienaymé-Tchebychev

> [!info] Définition courte
> L'**inégalité de Bienaymé-Tchebychev** permet de majorer la probabilité qu'une variable aléatoire $X$ s'écarte de son espérance $E(X)$ d'une valeur supérieure ou égale à une distance $\delta > 0$, connaissant uniquement sa variance $V(X)$.


## Explication intuitive

Cette inégalité montre que plus la variance d'une variable est petite, plus les valeurs de cette variable ont de fortes chances d'être proches de son espérance. Elle donne une borne supérieure stricte à la dispersion, quelle que soit la loi de la variable aléatoire $X$.


## Formules / Énoncés formels

> [!theorem] Théorème de Bienaymé-Tchebychev
> Soit $X$ une variable aléatoire d'espérance $E(X)$ et de variance $V(X)$. Pour tout réel $\delta > 0$ :
> 
> $$P(|X - E(X)| \ge \delta) \le \frac{V(X)}{\delta^2}$$
> 
> De façon équivalente (forme complémentaire) :
> $$P(E(X) - \delta < X < E(X) + \delta) \ge 1 - \frac{V(X)}{\delta^2}$$

### Généralisation sous la forme $\delta = k \sigma(X)$
Pour tout entier $k \ge 1$, en posant $\delta = k \sigma(X)$ (où $\sigma(X) = \sqrt{V(X)}$) :

$$P(|X - E(X)| \ge k \sigma(X)) \le \frac{1}{k^2}$$

- Pour $k = 2$ : $P(|X - E(X)| \ge 2\sigma) \le \frac{1}{4} = 0{,}25$
- Pour $k = 3$ : $P(|X - E(X)| \ge 3\sigma) \le \frac{1}{9} \approx 0{,}111$
- Pour $k = 4$ : $P(|X - E(X)| \ge 4\sigma) \le \frac{1}{16} = 0{,}0625$


## Exemple d'application

**Problème :** Soit $X$ le nombre de succès dans une répétition de $n = 20$ tirages indépendants avec une probabilité de succès $p = 0{,}1$.
$X$ suit la loi binomiale $\mathcal{B}(20; 0{,}1)$.

1. **Calcul des paramètres** :
   - $E(X) = n p = 20 \times 0{,}1 = 2$
   - $V(X) = n p (1 - p) = 20 \times 0{,}1 \times 0{,}9 = 1{,}8$

2. **Application avec $\delta = 2 \sigma(X)$** :
   - $\sigma(X) = \sqrt{1{,}8}$
   - $P(|X - 2| \ge 2\sqrt{1{,}8}) \le \frac{1}{2^2} = \frac{1}{4}$


## Concepts liés

- [[Échantillons et sommes de variables aléatoires]]
- [[Inégalité de concentration et loi des grands nombres]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

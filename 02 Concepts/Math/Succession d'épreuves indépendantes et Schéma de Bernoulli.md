---
type: concept
matière: math
tags:
  - concepts
  - math/probabilites
  - math
MOC:
  - "[[MOC Probabilites]]"
date_creation: 2026-07-27
---

# Succession d'épreuves indépendantes et Schéma de Bernoulli

> [!info] Définition courte
> Dans une succession d'épreuves aléatoires, les épreuves sont dites **indépendantes** lorsque l'issue de l'une ne dépend pas des résultats des précédentes. Un **schéma de Bernoulli** est la répétition de $n$ épreuves de Bernoulli **identiques et indépendantes**.


## Explication intuitive

- **Indépendance** : C'est comme lancer un dé plusieurs fois de suite ou effectuer des tirages *avec remise* dans une urne : le résultat du premier lancer n'a aucun impact sur le deuxième.
- **Schéma de Bernoulli** : C'est la répétition exacte de la même épreuve à deux issues ($S$ et $\bar{S}$) plusieurs fois d'affilée dans les mêmes conditions exactes.


## Fonctionnement

1. **Vérifier l'indépendance** : S'assurer que les conditions de chaque épreuve restent strictement inchangées (par exemple, remise des boules tirées).
2. **Modéliser par un arbre de probabilités (arbre pondéré)** :
   - Chaque niveau de l'arbre représente une étape (une épreuve).
   - Chaque nœud se sépare en deux branches : Succès ($S$) de probabilité $p$ et Échec ($\bar{S}$) de probabilité $1-p$.
3. **Calculer la probabilité d'un chemin** : Dans un arbre, la probabilité associée à une succession d'issues (un chemin) est égale au **produit** des probabilités portées par ses branches.


## Exemple simple

**Tirage successif de boules avec remise :**
- Une urne contient 3 boules Rouges et 1 boule Verte. On tire successivement et **avec remise** 3 boules dans l'urne.
- Succès $S$ : « Obtenir une boule Verte », de probabilité $p = \frac{1}{4}$.
- Échec $\bar{S}$ : « Obtenir une boule Rouge », de probabilité $1-p = \frac{3}{4}$.
- La répétition de ces 3 tirages identiques et indépendants constitue un **schéma de Bernoulli** de paramètres $n = 3$ et $p = \frac{1}{4}$.
- Probabilité d'obtenir 3 succès consécutifs $(S, S, S)$ :
  $$P(S, S, S) = \left(\frac{1}{4}\right)^3 = \frac{1}{64}$$


## Formules / Algorithmes / Propriétés

> [!theorem] Univers d'une succession de $n$ épreuves indépendantes
> Soit $n$ épreuves d'univers respectifs $E_1, E_2, \dots, E_n$.
> L'univers global est le produit cartésien :
> $$\Omega = E_1 \times E_2 \times \dots \times E_n$$
> 
> Pour toute issue $(x_1 ; x_2 ; \dots ; x_n) \in \Omega$, la probabilité est donnée par :
> $$P((x_1 ; x_2 ; \dots ; x_n)) = P(x_1) \times P(x_2) \times \dots \times P(x_n)$$

**Propriété de l'arbre :**
Un schéma de Bernoulli de $n$ épreuves génère un arbre possédant $2^n$ chemins possibles.


## Concepts liés

- [[Loi de Bernoulli]]
- [[Loi binomiale]]
- [[Arbres de probabilités]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

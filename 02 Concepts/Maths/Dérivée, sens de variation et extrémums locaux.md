---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/dérivation
  - math/fonction
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Dérivation]]"
date_creation: 2026-07-27
---
# Dérivée, sens de variation et extrémums locaux

> [!info] Définition courte
> Le **signe de la dérivée** $f'(x)$ détermine le **sens de variation** de la fonction $f$. Un changement de signe de $f'$ en un point $x_0$ indique la présence d'un **extrémum local** (maximum ou minimum).


## Explication intuitive

- **$f'(x) > 0$** : La pente de la tangente est positive $\implies$ La courbe "monte" ($f$ est strictement croissante).
- **$f'(x) < 0$** : La pente de la tangente est négative $\implies$ La courbe "descend" ($f$ est strictement décroissante).
- **$f'(x_0) = 0$** : La tangente est horizontale. Si la fonction passe de croissante à décroissante (ou inversement), on a atteint un sommet (maximum) ou un creux (minimum).


## Fonctionnement

Pour étudier les variations et extremums d'une fonction $f$ :

1. Calculer la fonction dérivée $f'(x)$.
2. Étudier le signe de $f'(x)$ sur l'intervalle de définition (en résolvant $f'(x) = 0$ et $f'(x) > 0$).
3. Dresser le **tableau de variations** associant le signe de $f'$ aux flèches de variation de $f$.
4. Identifier les extremums aux points où $f'$ s'annule en changeant de signe.


## Exemple simple

**Soit $f(x) = x e^{-\frac{x}{2}}$ sur $\mathbb{R}$ :**

1. **Dérivée** : $f'(x) = \left(1 - \frac{1}{2}x\right)e^{-\frac{x}{2}}$.
2. **Signe de $f'(x)$** :
   - $e^{-\frac{x}{2}} > 0$ pour tout $x \in \mathbb{R}$.
   - $1 - \frac{1}{2}x = 0 \iff x = 2$.
   - $1 - \frac{1}{2}x > 0 \iff x < 2$.
1. **Variations et extremum** :
   - Sur $]-\infty ; 2]$, $f'(x) \ge 0 \implies f$ est croissante.
   - Sur $[2 ; +\infty[$, $f'(x) \le 0 \implies f$ est décroissante.
   - En $x_0 = 2$, $f'$ s'annule et change de signe ($+ \to -$), donc $f(2) = 2e^{-1} = \frac{2}{e}$ est un **maximum local**.


## Formules / Algorithmes / Propriétés

> [!theorem] Théorèmes fondamentaux
> **1. Lien Signe / Variation :**
> - $f'(x) > 0$ sur $I \implies f$ strictement croissante sur $I$.
> - $f'(x) < 0$ sur $I \implies f$ strictement décroissante sur $I$.
> - $f'(x) = 0$ sur $I \implies f$ constante sur $I$.
>
> **2. Extrémum local :**
> Si $f$ est dérivable sur un intervalle ouvert $I$ contenant $x_0$ :
> - $f'(x_0) = 0$ et $f'$ **change de signe** en $x_0 \iff f$ admet un **extrémum local** en $x_0$.
> 
> *Attention : La réciproque du premier point est fausse (ex: $f(x)=x^3$ a $f'(0)=0$ mais n'a pas d'extrémum en $0$).*


## Concepts liés

- [[Nombre dérivé et équation de la tangente]]
- [[Dérivation des fonctions composées et opérations]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/fonction
  - math/dérivation
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Dérivation]]"
date_creation: 2026-07-27
---
# Point d'inflexion

> [!info] Définition courte
> Un **point d'inflexion** est un point de la courbe représentative d'une fonction où la courbe **traverse sa tangente**. En ce point, la fonction change de convexité (elle passe de convexe à concave, ou inversement).


## Explication intuitive

- C'est le point de bascule de la courbe : le virage change de sens.
- Avant le point d'inflexion, la courbe était « creuse », après elle devient « en dôme » (ou inversement).
- La tangente en ce point particulier ne fait pas que frôler la courbe : elle la **coupe** / la **traverse**.


## Fonctionnement

Pour déterminer algébriquement les points d'inflexion d'une fonction $f$ :

1. Calculer la dérivée seconde $f''(x)$.
2. Chercher les valeurs de $x$ où $f''(x) = 0$.
3. **Condition suffisante** : Vérifier que $f''(x)$ **s'annule en changeant de signe** en $x = a$.
4. Les coordonnées du point d'inflexion sont alors $A(a ; f(a))$.


## Exemple simple

**Soit la fonction cube $f(x) = x^3$ sur $\mathbb{R}$ :**

1. $f'(x) = 3x^2$
2. $f''(x) = 6x$
3. $f''(x) = 0 \iff 6x = 0 \iff x = 0$.
4. Pour $x < 0$, $f''(x) < 0$ ($f$ concave). Pour $x > 0$, $f''(x) > 0$ ($f$ convexe).
5. $f''$ s'annule et change de signe en $0$.
6. Le point $(0 ; 0)$ est donc un **point d'inflexion** de la courbe de la fonction cube.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> Soit $f$ une fonction deux fois dérivable sur un intervalle $I$ et $a \in I$.
> 
> La courbe $\mathcal{C}_f$ admet un point d'inflexion d'abscisse $a$ si et seulement si l'une des conditions suivantes est vérifiée :
> - La dérivée seconde $f''$ **s'annule en $a$ en changeant de signe**.
> - La dérivée première $f'$ **change de sens de variation** en $a$ (atteint un extremum local).
> - La courbe $\mathcal{C}_f$ **traverse sa tangente** au point d'abscisse $a$.


## Concepts liés

- [[Convexité et concavité d'une fonction]]
- [[Nombre dérivé et équation de la tangente]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
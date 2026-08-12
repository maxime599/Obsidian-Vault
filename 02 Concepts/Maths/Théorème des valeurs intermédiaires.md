---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/theoreme
  - math/fonction
  - math/résolutiondequations
MOC:
  - "[[MOC Theoreme]]"
  - "[[MOC Fonction]]"
  - "[[MOC Résolution d'équations]]"
date_creation: 2026-07-27
---

# Théorème des valeurs intermédiaires (TVI)

> [!info] Définition courte
> Le **Théorème des Valeurs Intermédiaires (TVI)** affirme que si une fonction $f$ est **continue** sur un intervalle $[a \,; b]$, elle prend au moins une fois toute valeur comprise entre $f(a)$ et $f(b)$. Son corollaire (avec la stricte monotonie) garantit l'**unicité** de la solution.


## Explication intuitive

Si vous marchez le long d'un chemin continu entre une altitude $f(a)$ et une altitude $f(b)$, vous êtes obligé de passer au moins une fois par toutes les altitudes intermédiaires $k$ situées entre les deux.

- **TVI simple** : Garantit l'**existence** d'au moins une solution $c$ à l'équation $f(x) = k$.
- **Corollaire (Stricte monotonie)** : Si la fonction ne fait que monter (strictement croissante) ou que descendre (strictement décroissante), elle ne repasse jamais par la même altitude. La solution $c$ est donc **unique**.



## Fonctionnement

1. **Pour prouver qu'il existe au moins une solution à $f(x) = k$ sur $[a \,; b]$** :
   - Vérifier que $f$ est **continue** sur $[a \,; b]$.
   - Vérifier que $k$ est compris entre $f(a)$ et $f(b)$ (ou entre leurs limites si l'intervalle est ouvert/infini).
1. **Pour prouver l'existence et l'unicité (équation $f(x) = k$)** : (= Corollaire du TVI)
   - Vérifier la **continuité** de $f$ sur $[a \,; b]$.
   - Vérifier la **stricte monotonie** de $f$ sur $[a \,; b]$ (grâce au tableau de variations / signe de la dérivée).
   - Vérifier que $k \in [f(a) \,; f(b)]$ (ou $k \in [f(b) \,; f(a)]$).
   - Conclure : d'après le corollaire du TVI, l'équation $f(x) = k$ admet une **unique solution** $\alpha \in [a \,; b]$.


## Exemple simple

**Soit $f(x) = x^3 - 3x^2 + 2$ sur $I = [2{,}5 \,; 3]$ :**

1. $f$ est une fonction polynôme, donc **continue** et **dérivable** sur $I$.
2. Sa dérivée $f'(x) = 3x^2 - 6x = 3x(x - 2)$ est strictement positive sur $[2{,}5 \,; 3]$. Donc $f$ est **strictement croissante** sur $I$.
3. On calcule les images aux bornes :
   - $f(2{,}5) = -1{,}125$
   - $f(3) = 2$
4. Le nombre $0$ est compris entre $f(2{,}5)$ et $f(3)$ (car $-1{,}125 < 0 < 2$).
5. **Conclusion** : D'après le corollaire du TVI, l'équation $f(x) = 0$ admet une **unique solution** $\alpha$ dans l'intervalle $[2{,}5 \,; 3]$.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **TVI (Existence)** : Soit $f$ une fonction continue sur $[a \,; b]$. Pour tout réel $k$ compris entre $f(a)$ et $f(b)$, il existe au moins un réel $c \in [a \,; b]$ tel que $f(c) = k$.
> - **Corollaire du TVI (Existence et Unicité)** : Si $f$ est **continue** et **strictement monotone** sur $[a \,; b]$, alors pour tout réel $k$ compris entre $f(a)$ et $f(b)$, l'équation $f(x) = k$ admet une **unique solution** dans $[a \,; b]$.

**Remarques pratiques :**
- Le TVI est un théorème d'**existence** : il indique qu'une solution existe, mais ne donne pas sa valeur exacte.
- Pour déterminer une valeur approchée de la solution, on utilise un **algorithme d'encadrement** (méthode de balayage ou méthode par dichotomie).


## Concepts liés

- [[Continuité d'une fonction]]
- [[Théorème du point fixe]]
- [[Dichotomie et Balayage]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

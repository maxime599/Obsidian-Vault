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
# Nombre dérivé et équation de la tangente

> [!info] Définition courte
> Le **nombre dérivé** d'une fonction $f$ en un point $a$, noté $f'(a)$, est la limite du taux de variation de $f$ entre $a$ et $a+h$ lorsque $h$ tend vers $0$. Graphiquement, il représente le **coefficient directeur de la tangente** à la courbe au point d'abscisse $a$.


## Explication intuitive

- **Taux de variation** : Mesure la pente de la droite sécante passant par deux points de la courbe.
- **Nombre dérivé** : En rapprochant infiniment ces deux points ($h \to 0$), la sécante devient la **tangente**. Le nombre dérivé est la pente exacte de la courbe à cet instant précis.


## Fonctionnement

Pour déterminer l'équation de la tangente à la courbe $\mathcal{C}_f$ au point d'abscisse $a$ :

1. Calculer la dérivée $f'(x)$ de la fonction.
2. Évaluer la fonction et sa dérivée en $a$ pour obtenir $f(a)$ et $f'(a)$.
3. Appliquer la formule de la tangente : $y = f'(a)(x - a) + f(a)$.


## Exemple simple

**Soit $f(x) = x^2 + 3x - 1$. Déterminer l'équation de la tangente en $a = 2$ :**

1. **Calcul de la dérivée** : $f'(x) = 2x + 3$.
2. **Évaluation en $a = 2$** :
   - $f(2) = 2^2 + 3(2) - 1 = 4 + 6 - 1 = 9$
   - $f'(2) = 2(2) + 3 = 7$
3. **Équation de la tangente** :
   $$y = f'(2)(x - 2) + f(2)$$
   $$y = 7(x - 2) + 9 = 7x - 14 + 9 \implies y = 7x - 5$$


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **Nombre dérivé (forme en $h$)** :
>   $$f'(a) = \lim_{h \to 0} \frac{f(a+h) - f(a)}{h}$$
> - **Nombre dérivé (forme en $x$)** :
>   $$f'(a) = \lim_{x \to a} \frac{f(x) - f(a)}{x - a}$$
> - **Équation de la tangente** au point $A(a ; f(a))$ :
>   $$y = f'(a)(x - a) + f(a)$$


## Concepts liés

- [[Dérivée, sens de variation et extrémums locaux]]
- [[Dérivation des fonctions composées et opérations]]
- [[Convexité et concavité d'une fonction]]
- [[Point d'inflexion]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

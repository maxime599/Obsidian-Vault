---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/fonction
  - math/limites
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Limites]]"
date_creation: 2026-07-27
---
# Continuité d'une fonction

> [!info] Définition courte
> Une fonction $f$ est **continue sur un intervalle $I$** si sa courbe représentative peut être tracée « sans lever le crayon », c'est-à-dire si en tout point $a \in I$, la limite de $f(x)$ lorsque $x$ tend vers $a$ est égale à $f(a)$.


## Explication intuitive

- **Continuité en un point** : Lorsque $x$ s'approche de $a$, les valeurs de $f(x)$ se rapprochent sans "saut" de la valeur $f(a)$.
- **Continuité sur un intervalle** : Le tracé de la courbe ne présente aucune rupture ni saut brusque sur l'intervalle.
- **Discontinuité** : Il y a une rupture dans le tracé (par exemple, un saut de valeur à un endroit précis).



## Fonctionnement

1. **Pour prouver la continuité en un point $a$** :
   - Calculer la limite à gauche $\lim_{x \to a^-} f(x)$ et la limite à droite $\lim_{x \to a^+} f(x)$.
   - Vérifier que ces deux limites sont égales et valent $f(a)$.
2. **Pour les fonctions usuelle** :
   - On utilise le cours : les fonctions polynômes, rationnelles, racine carrée, exponentielle, etc., sont continues sur leur ensemble de définition.
3. **Pour une fonction définie par morceaux** :
   - On étudie la continuité sur chaque intervalle ouvert, puis spécifiquement aux "points de raccordement".


## Exemple simple

**Soit la fonction $f$ définie sur $\mathbb{R}$ par :**
$$f(x) = \begin{cases} x - 1 & \text{si } x < 1 \\ -x^2 + 4x + 1 & \text{si } x \ge 1 \end{cases}$$

- **Étude en $x = 1$** :
  - $f(1) = -(1)^2 + 4(1) + 1 = 4$
  - $\lim_{x \to 1^-} f(x) = \lim_{x \to 1^-} (x - 1) = 0$
  - $\lim_{x \to 1^+} f(x) = \lim_{x \to 1^+} (-x^2 + 4x + 1) = 4$

Comme la limite à gauche ($0$) est différente de la limite à droite ($4$), la fonction n'admet pas de limite en $1$. Donc **$f$ n'est pas continue en $1$**.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **Continuité en un point $a$** : $\lim_{x \to a} f(x) = f(a)$
> - **Continuité sur un intervalle $I$** : $f$ est continue en tout réel $a \in I$.

**Propriétés fondamentales :**
- **Dérivabilité et continuité** : Si $f$ est dérivable en $a$, alors $f$ est continue en $a$. 
  *(Attention : La réciproque est **fausse** ! Exemple : $x \mapsto |x|$ est continue en $0$ mais pas dérivable en $0$).*
- **Continuité des fonctions usuelles** :
  - Les fonctions polynômes, $|x|$ et $x \mapsto e^x$ sont continues sur $\mathbb{R}$.
  - La fonction $x \mapsto \sqrt{x}$ est continue sur $[0 \,; +\infty[$.
  - Toute fonction rationnelle est continue sur chaque intervalle de son ensemble de définition.
- **Exemple classique de fonction discontinue** : La *fonction partie entière* $E(x)$ (saute d'une unité à chaque entier).


## Concepts liés

- [[Théorème des valeurs intermédiaires]]
- [[Limites de fonctions et asymptotes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

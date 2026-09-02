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
date_creation: 2026-07-26
---
# Limites de fonctions et asymptotes

> [!info] Définition courte
> La limite d'une fonction $f$ en un point $a$ ou en $\pm\infty$ décrit la valeur vers laquelle tend $f(x)$ lorsque $x$ se rapproche de $a$ ou s'éloigne vers l'infini. Si cette limite est infinie en un point ou finie à l'infini, la courbe représentative admet des **asymptotes**.


## Explication intuitive

- **Limite à l'infini** : On regarde ce que devient la courbe tout au bout à droite ($+\infty$) ou à gauche ($-\infty$). Soit elle se stabilise le long d'une droite horizontale (asymptote horizontale), soit elle s'envole vers $+\infty$ ou $-\infty$.
- **Limite en un point** : On observe le comportement de la courbe au voisinage d'une valeur particulière $a$ (souvent une valeur interdite). Si la courbe s'échappe vers le haut ou vers le bas en frôlant une droite verticale, il y a une asymptote verticale.



## Fonctionnement

1. **Rechercher les limites aux bornes du domaine de définition** :
   - Si $\lim_{x \to \pm\infty} f(x) = l$ (avec $l \in \mathbb{R}$) $\implies$ La droite d'équation $y = l$ est une **asymptote horizontale** en $\pm\infty$.
   - Si $\lim_{x \to a} f(x) = \pm\infty$ (ou à droite/gauche de $a$) $\implies$ La droite d'équation $x = a$ est une **asymptote verticale**.

2. **Étude de la position relative** :
   - Pour déterminer la position de la courbe $\mathcal{C}_f$ par rapport à son asymptote horizontale $y = l$, on étudie le signe de la différence $f(x) - l$ :
     - Si $f(x) - l > 0$, $\mathcal{C}_f$ est au-dessus de l'asymptote.
     - Si $f(x) - l < 0$, $\mathcal{C}_f$ est en dessous de l'asymptote.


## Exemple simple

Soit la fonction $f$ définie sur $]3; +\infty[$ par $f(x) = 2 + \frac{1}{x - 3}$ :

1. **Limite en $+\infty$** :
   $$\lim_{x \to +\infty} \frac{1}{x - 3} = 0 \implies \lim_{x \to +\infty} f(x) = 2$$
   La courbe $\mathcal{C}_f$ admet une **asymptote horizontale** d'équation $y = 2$ en $+\infty$.

2. **Limite en $3$ (à droite)** :
   $$\lim_{x \to 3^+} (x - 3) = 0^+ \implies \lim_{x \to 3^+} \frac{1}{x - 3} = +\infty \implies \lim_{x \to 3^+} f(x) = +\infty$$
   La courbe $\mathcal{C}_f$ admet une **asymptote verticale** d'équation $x = 3$.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels & Propriétés
> - **Unicité de la limite** : Si une fonction $f$ admet une limite en $a$ (où $a \in \mathbb{R}$ ou $\pm\infty$), cette limite est **unique**.
> - **Limites à gauche et à droite** : Soit $f$ définie sur $\mathbb{R} \setminus \{a\}$. $f$ admet une limite $l$ en $a$ si et seulement si :
>   $$\lim_{x \to a^-} f(x) = \lim_{x \to a^+} f(x) = l$$

**Limites des fonctions de référence :**
- $\lim_{x \to +\infty} \frac{1}{x^n} = 0 \quad (n \ge 1)$
- $\lim_{x \to 0^+} \frac{1}{x^n} = +\infty$
- $\lim_{x \to +\infty} \sqrt{x} = +\infty$ et $\lim_{x \to +\infty} x^n = +\infty$


## Concepts liés

- [[Opérations sur les limites et formes indéterminées]]
- [[Théorèmes de comparaison et d'encadrement pour les fonctions]]
- [[Limite d'une fonction composée]]
- [[Fonction exponentielle et logarithme népérien]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/geometrie3d
  - math/vecteurs
MOC:
  - "[[MOC Géométrie 3d]]"
  - "[[MOC Vecteurs]]"
date_creation: 2026-07-27
---
# Projection orthogonale et distance dans l'espace

> [!info] Définition courte
> La **projection orthogonale** d'un point $A$ sur un plan $P$ (ou une droite $d$) est le point d'intersection $H$ du plan (ou de la droite) avec la droite (ou le plan) passant par $A$ et qui lui est perpendiculaire. Le point $H$ est le point du plan le plus proche de $A$, et la longueur $AH$ est la **distance du point au plan**.


## Explication intuitive

- **Projection orthogonale** : C'est comme l'ombre portée du point par une lumière située verticalement au-dessus. Si vous lâchez une bille d'un point $A$ au-dessus du sol (le plan $P$), la bille tombe perpendiculairement au sol et touche celui-ci exactement au projeté orthogonal $H$.
- **Distance minimale** : Le chemin le plus court pour rejoindre un plan à partir d'un point extérieur est la ligne droite perpendiculaire. Tout autre point $M$ du plan forme un triangle rectangle $AHM$ où l'hypoténuse $AM$ est plus grande que la hauteur $AH$.


## Fonctionnement

1. **Trouver le projeté orthogonal $H$ d'un point $A$ sur un plan $P$** :
   - Identifier le vecteur normal $\vec{n}\begin{pmatrix}a\\b\\c\end{pmatrix}$ du plan $P$.
   - Écrire la représentation paramétrique de la droite $\Delta$ passant par $A(x_A, y_A, z_A)$ et perpendiculaire à $P$ (de vecteur directeur $\vec{n}$) :
     $$\Delta : \begin{cases} x = x_A + k \cdot a \\ y = y_A + k \cdot b \\ z = z_A + k \cdot c \end{cases} \quad (k \in \mathbb{R})$$
   - Substituer $x, y, z$ dans l'équation cartésienne du plan $ax + by + cz + d = 0$ pour déterminer la valeur du paramètre $k$.
   - Remplacer $k$ dans le système pour obtenir les coordonnées précises de $H$.

2. **Calculer la distance du point $A$ au plan $P$** :
   - Calculer la longueur du segment $[AH]$ :
     $$d(A, P) = AH = \sqrt{(x_H - x_A)^2 + (y_H - y_A)^2 + (z_H - z_A)^2}$$


## Exemple simple

**Démonstration du cours (au programme exigible) : $H$ est le point du plan le plus proche de $M$**

Soit $M$ un point du plan $P$ distinct de $H$ (projeté orthogonal de $A$ sur $P$).
1. Par définition, la droite $(AH)$ est orthogonale au plan $P$.
2. Donc $(AH)$ est orthogonale à toute droite de $P$, en particulier à la droite $(HM)$.
3. Le triangle $AHM$ est par conséquent un triangle rectangle en $H$.
4. D'après le théorème de Pythagore :
   $$AM^2 = AH^2 + HM^2$$
5. Comme $M \neq H$, la distance $HM > 0 \implies HM^2 > 0$.
6. On en déduit que $AM^2 > AH^2$, soit **$AM > AH$**.
7. **Conclusion** : Le point $H$ est le point de $P$ le plus proche de $A$, et la longueur $AH$ est la distance de $A$ au plan $P$.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **Projeté orthogonal d'un point sur un plan** :
>   Soit un point $A$ et un plan $(P)$. La projection orthogonale de $A$ sur $(P)$ est l'unique point $H \in (P)$ tel que $(AH) \perp (P)$.
> - **Propriété de la distance** :
>   Pour tout point $M \in (P)$, $AM \ge AH$. Le nombre réel $AH$ est appelé **distance du point $A$ au plan $(P)$**.
> - **Distance entre deux points dans un repère orthonormé** :
>   $$AB = \sqrt{(x_B - x_A)^2 + (y_B - y_A)^2 + (z_B - z_A)^2}$$


## Concepts liés

- [[Vecteur normal et équation cartésienne d'un plan]]
- [[Orthogonalité et positions relatives dans l'espace]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

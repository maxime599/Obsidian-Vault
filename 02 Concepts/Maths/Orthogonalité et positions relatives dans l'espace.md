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
# Orthogonalité et positions relatives dans l'espace

> [!info] Définition courte
> Dans l'espace, deux droites sont **orthogonales** si leurs parallèles passant par un même point sont perpendiculaires. Une droite est **orthogonale à un plan** si elle est orthogonale à toutes les droites de ce plan. Deux plans sont **perpendiculaires** si leurs vecteurs normaux respectifs sont orthogonaux.


## Explication intuitive

- **Orthogonales vs Perpendiculaires (droites)** : Deux droites peuvent être orthogonales dans l'espace sans jamais se croiser (droites non coplanaires). Elles sont "perpendiculaires" seulement si elles sont coplanaires et sécantes en formant un angle droit.
- **Droite et plan orthogonaux** : La droite traverse le plan comme un piquet vertical. Elle forme un angle droit avec toutes les lignes tracées sur ce plan.
- **Plans perpendiculaires** : C'est comme le mur et le sol d'une pièce. Leurs "aiguilles" (vecteurs normaux) forment un angle de 90°.


## Fonctionnement

1. **Déterminer la position relative d'une droite $d$ (vecteur directeur $\vec{u}$) et d'un plan $P$ (vecteur normal $\vec{n}$)** :
   - Calculer le produit scalaire $\vec{u} \cdot \vec{n}$ :
     - Si **$\vec{u} \cdot \vec{n} = 0$** : $\vec{u} \perp \vec{n} \implies$ La droite $d$ et le plan $P$ sont **parallèles** (droite $d$ strictement parallèle à $P$ ou incluse dans $P$).
     - Si **$\vec{u} \cdot \vec{n} \neq 0$** : La droite $d$ et le plan $P$ sont **sécants** en un unique point.
     - Si **$\vec{u}$ et $\vec{n}$ sont colinéaires** : La droite $d$ est **orthogonale (perpendiculaire)** au plan $P$.

2. **Démontrer que deux plans $P$ et $P'$ sont perpendiculaires** :
   - Trouver leurs vecteurs normaux respectifs $\vec{n_1}$ et $\vec{n_2}$.
   - Calculer leur produit scalaire : $P \perp P' \iff \vec{n_1} \cdot \vec{n_2} = 0$.

3. **Démontrer qu'une droite $d$ est orthogonale à un plan $P$** :
   - Montrer qu'un vecteur directeur $\vec{u}$ de $d$ est orthogonal à **deux vecteurs non colinéaires** de $P$.


## Exemple simple

**1. Position relative d'une droite et d'un plan :**
Soit une droite $d$ dirigée par $\vec{u}\begin{pmatrix}1\\2\\1\end{pmatrix}$ et un plan $P$ de vecteur normal $\vec{n}\begin{pmatrix}2\\-1\\3\end{pmatrix}$.
- $\vec{u} \cdot \vec{n} = 1(2) + 2(-1) + 1(3) = 2 - 2 + 3 = 3 \neq 0$.
- Comme le produit scalaire n'est pas nul, la droite $d$ et le plan $P$ sont **sécants**.

**2. Perpendicularité de deux plans :**
Soient $P_1 : 2x - y + 3z - 2 = 0$ ($\vec{n_1}\begin{pmatrix}2\\-1\\3\end{pmatrix}$) et $P_2 : x + 5y + z + 4 = 0$ ($\vec{n_2}\begin{pmatrix}1\\5\\1\end{pmatrix}$).
- $\vec{n_1} \cdot \vec{n_2} = 2(1) + (-1)(5) + 3(1) = 2 - 5 + 3 = 0$.
- Le produit scalaire des vecteurs normaux est nul, donc les plans $P_1$ et $P_2$ sont **perpendiculaires**.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **Distinction Droites Perpendiculaires / Orthogonales** :
>   $$\text{Perpendiculaires} \implies \text{Orthogonales (et coplanaires)}$$
>   $$\text{Orthogonales et coplanaires} \iff \text{Perpendiculaires}$$
> - **Propriété fondamentale droite-plan** :
>   Si une droite $d$ est orthogonale à un plan $P$, elle est **orthogonale à toute droite du plan $P$**.
> - **Tableau récapitulatif (Position Droite / Plan)** :
> 
> | Position relative | Condition vectorielle | Produit scalaire |
> | :--- | :--- | :--- |
> | $d$ et $P$ **sécants** | $\vec{u}$ et $\vec{n}$ non orthogonaux | $\vec{u} \cdot \vec{n} \neq 0$ |
> | $d$ et $P$ **parallèles** | $\vec{u}$ et $\vec{n}$ orthogonaux | $\vec{u} \cdot \vec{n} = 0$ |
> | $d$ et $P$ **orthogonaux** | $\vec{u}$ et $\vec{n}$ colinéaires | $\vec{u} = k \vec{n}$ |

> [!warning] Piège classique
> Si deux plans sont perpendiculaires ($P \perp P'$), une droite de $P$ n'est **pas nécessairement** orthogonale à une droite de $P'$.


## Concepts liés

- [[Vecteur normal et équation cartésienne d'un plan]]
- [[Produit scalaire dans l'espace]]
- [[Projection orthogonale et distance dans l'espace]]
- [[Positions relatives de deux droites dans l'espace]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

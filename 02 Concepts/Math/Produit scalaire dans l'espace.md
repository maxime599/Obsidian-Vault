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
# Produit scalaire dans l'espace

> [!info] Définition courte
> Le **produit scalaire** de deux vecteurs $\vec{u}$ et $\vec{v}$ dans l'espace se ramène à leur produit scalaire usuel dans un plan les contenant tous les deux. Dans un repère orthonormé $(O; \vec{i}, \vec{j}, \vec{k})$, il s'exprime par la formule analytique $\vec{u} \cdot \vec{v} = xx' + yy' + zz'$.
```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```


## Explication intuitive

- **Réduction au plan** : Deux vecteurs de l'espace peuvent toujours être ramenés à une même origine $A$. Trois points $A, B, C$ forment un plan unique. On calcule ainsi le produit scalaire dans ce plan exactement comme en géométrie plane de Première.
- **Rôle en géométrie 3D** : Le produit scalaire permet de vérifier l'orthogonalité de deux vecteurs ($\vec{u} \cdot \vec{v} = 0$), de calculer des longueurs (norme d'un vecteur) et de déterminer des angles dans l'espace.


## Fonctionnement

1. **Expression analytique dans un repère orthonormé** :
   - Soient $\vec{u}\begin{pmatrix}x\\y\\z\end{pmatrix}$ et $\vec{v}\begin{pmatrix}x'\\y'\\z'\end{pmatrix}$.
   - Produit scalaire : $\vec{u} \cdot \vec{v} = xx' + yy' + zz'$.
   - Norme d'un vecteur : $\|\vec{u}\| = \sqrt{x^2 + y^2 + z^2}$.

2. **Critère d'orthogonalité** :
   - Deux vecteurs non nuls $\vec{u}$ et $\vec{v}$ sont orthogonaux si et seulement si :
     $$\vec{u} \cdot \vec{v} = 0 \iff xx' + yy' + zz' = 0$$

3. **Calcul d'un angle dans l'espace** :
   - Utiliser la formule géométrique : $\vec{u} \cdot \vec{v} = \|\vec{u}\| \times \|\vec{v}\| \times \cos(\theta)$.
   - Déduire $\cos(\theta) = \frac{\vec{u} \cdot \vec{v}}{\|\vec{u}\| \times \|\vec{v}\|}$, puis déterminer l'angle avec $\arccos$.


## Exemple simple

**Calcul dans un repère orthonormé avec $A(0;1;2)$, $B(1;-1;3)$ et $C(-1;2;0)$ :**

1. **Coordonnées des vecteurs** :
   - $\vec{AB} = \begin{pmatrix}1 - 0\\-1 - 1\\3 - 2\end{pmatrix} = \begin{pmatrix}1\\-2\\1\end{pmatrix}$
   - $\vec{AC} = \begin{pmatrix}-1 - 0\\2 - 1\\0 - 2\end{pmatrix} = \begin{pmatrix}-1\\1\\-2\end{pmatrix}$

2. **Produit scalaire $\vec{AB} \cdot \vec{AC}$** :
   - $\vec{AB} \cdot \vec{AC} = 1(-1) + (-2)(1) + 1(-2) = -1 - 2 - 2 = -5$.

3. **Normes des vecteurs** :
   - $\|\vec{AB}\| = \sqrt{1^2 + (-2)^2 + 1^2} = \sqrt{6}$
   - $\|\vec{AC}\| = \sqrt{(-1)^2 + 1^2 + (-2)^2} = \sqrt{6}$

4. **Mesure de l'angle $\widehat{BAC}$** :
   - $\cos(\widehat{BAC}) = \frac{\vec{AB} \cdot \vec{AC}}{\|\vec{AB}\| \times \|\vec{AC}\|} = \frac{-5}{\sqrt{6} \times \sqrt{6}} = -\frac{5}{6}$.
   - $\widehat{BAC} = \arccos\left(-\frac{5}{6}\right) \approx 146,4^\circ$.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **Propriétés fondamentales** :
>   - Carré scalaire : $\vec{u} \cdot \vec{u} = \|\vec{u}\|^2 = \vec{u}^2$
>   - Commutativité : $\vec{u} \cdot \vec{v} = \vec{v} \cdot \vec{u}$
>   - Bilinéarité : $(k\vec{u}) \cdot \vec{v} = k(\vec{u} \cdot \vec{v})$ et $\vec{u} \cdot (\vec{v} + \vec{w}) = \vec{u} \cdot \vec{v} + \vec{u} \cdot \vec{w}$
> - **Formules de polarisation** :
>   $$\vec{u} \cdot \vec{v} = \frac{1}{2}\left(\|\vec{u} + \vec{v}\|^2 - \|\vec{u}\|^2 - \|\vec{v}\|^2\right)$$
>   $$\vec{u} \cdot \vec{v} = \frac{1}{4}\left(\|\vec{u} + \vec{v}\|^2 - \|\vec{u} - \vec{v}\|^2\right)$$


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

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
# Vecteur normal et équation cartésienne d'un plan

> [!info] Définition courte
> Dans un repère orthonormé de l'espace, un **vecteur normal** à un plan $(P)$ est un vecteur non nul $\vec{n}$ orthogonal à tout vecteur directeur de ce plan. Tout plan possède une **équation cartésienne** de la forme $ax + by + cz + d = 0$, où les coefficients $(a, b, c)$ sont les coordonnées d'un vecteur normal $\vec{n}\begin{pmatrix}a\\b\\c\end{pmatrix}$.
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

- **Vecteur normal** : C'est comme une "aiguille" plantée perpendiculairement dans une feuille de papier (le plan). Si l'on connaît un point du plan et la direction de cette aiguille, le plan est entièrement fixé dans l'espace.
- **Équation cartésienne** : C'est la relation algébrique que doivent vérifier les coordonnées $(x, y, z)$ de tout point $M$ pour appartenir au plan. Elle traduit le fait géométrique que le vecteur $\vec{AM}$ doit être perpendiculaire à l'aiguille $\vec{n}$.


## Fonctionnement

Pour déterminer ou utiliser l'équation cartésienne d'un plan $(P)$ :

1. **Méthode 1 : Avec un point $A(x_A, y_A, z_A)$ et un vecteur normal $\vec{n}\begin{pmatrix}a\\b\\c\end{pmatrix}$**
   - Écrire la condition d'appartenance : $M(x,y,z) \in (P) \iff \vec{AM} \cdot \vec{n} = 0$.
   - Écrire l'équation sous la forme $ax + by + cz + d = 0$.
   - Remplacer $(x,y,z)$ par les coordonnées de $A$ pour calculer la constante $d = -(ax_A + by_A + cz_A)$.

2. **Méthode 2 : Trouver un vecteur normal à partir de deux vecteurs du plan**
   - Soient $\vec{u}$ et $\vec{v}$ deux vecteurs directeurs non colinéaires du plan.
   - Un vecteur $\vec{n}\begin{pmatrix}a\\b\\c\end{pmatrix}$ est normal au plan si et seulement si $\vec{n} \cdot \vec{u} = 0$ et $\vec{n} \cdot \vec{v} = 0$.
   - On résout le système d'équations pour déterminer un triplet $(a,b,c)$ non nul.

3. **Vérifier l'appartenance d'un point à un plan**
   - Injecter les coordonnées du point dans l'équation cartésienne : si l'égalité est vérifiée ($0 = 0$), le point appartient au plan.


## Exemple simple

**Exemple :** Soit le point $A(1 ; 2 ; 3)$ et le vecteur normal $\vec{n}\begin{pmatrix}-1\\2\\3\end{pmatrix}$.

1. **Déterminer l'équation cartésienne du plan $(P)$ passant par $A$ et de vecteur normal $\vec{n}$ :**
   - L'équation est de la forme $-x + 2y + 3z + d = 0$.
   - Comme $A \in (P)$, ses coordonnées vérifient l'équation :
     $$-x_A + 2y_A + 3z_A + d = 0 \iff -1 + 2(2) + 3(3) + d = 0 \iff 12 + d = 0 \implies d = -12$$
   - L'équation cartésienne de $(P)$ est donc : **$-x + 2y + 3z - 12 = 0$** (ou $x - 2y - 3z + 12 = 0$).

2. **Tester si le point $B(4 ; 5 ; 6)$ appartient au plan $(P)$ :**
   - $-x_B + 2y_B + 3z_B - 12 = -4 + 2(5) + 3(6) - 12 = 12 \neq 0$.
   - Le résultat n'est pas nul, donc **$B \notin (P)$**.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **Caractérisation d'un plan** :
>   $$M(x,y,z) \in (P) \iff \vec{AM} \cdot \vec{n} = 0$$
> - **Critère du vecteur normal** :
>   Un vecteur non nul $\vec{n}$ est normal à un plan $(P)$ s'il est orthogonal à **deux vecteurs non colinéaires** de $(P)$.
> - **Équation cartésienne d'un plan** :
>   Dans un repère orthonormé, tout plan de vecteur normal $\vec{n}\begin{pmatrix}a\\b\\c\end{pmatrix}$ admet une équation cartésienne de la forme :
>   $$ax + by + cz + d = 0 \quad \text{avec } (a,b,c) \neq (0,0,0)$$
> - **Réciproque** :
>   L'ensemble des points $M(x;y;z)$ vérifiant $ax + by + cz + d = 0$ est un plan ayant pour vecteur normal $\vec{n}\begin{pmatrix}a\\b\\c\end{pmatrix}$.


## Concepts liés

- [[Orthogonalité et positions relatives dans l'espace]]
- [[Produit scalaire dans l'espace]]
- [[Représentation paramétrique d'une droite]]
- [[Bases et repères de l'espace]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

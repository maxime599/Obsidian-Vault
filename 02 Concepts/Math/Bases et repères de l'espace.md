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
date_creation: 2026-07-26
---
# Bases et repères de l'espace

> [!info] Définition courte
> 
> Une **base de l'espace** est constituée de 3 vecteurs non coplanaires $(\vec{i}, \vec{j}, \vec{k})$. Un **repère de l'espace** associe une origine $O$ à cette base, noté $(O; \vec{i}, \vec{j}, \vec{k})$.
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

Pour localiser un point ou décrire un déplacement dans un espace en 3D (longueur, largeur, hauteur), nous avons besoin d'un point de départ fixe (l'origine) et de trois directions fondamentales indépendantes qui ne se trouvent pas dans le même plan.

## Fonctionnement

### Démontrer que 4 points $A, B, C, D$ sont coplanaires :

1. Calculer les coordonnées des vecteurs $\vec{AB}$, $\vec{AC}$ et $\vec{AD}$.
    
2. Poser l'égalité vectorielle : $\vec{AB} = \alpha \vec{AC} + \beta \vec{AD}$.
    
3. Résoudre le système à 3 équations pour trouver les réels $\alpha$ et $\beta$.
    
4. Si une solution unique existe et vérifie la 3ᵉ équation, les points sont coplanaires.
    

## Exemple simple

On donne $A(1; 2; 0)$, $B(-1; 1; 1)$, $C(1; 4; 1)$ et $D(3; -1; -3)$.

**1. Calcul des vecteurs :**

$\vec{AB}\begin{pmatrix} -2 \\\\ -1 \\\\ 1 \end{pmatrix}$, $\vec{AC}\begin{pmatrix} 0 \\\\ 2 \\\\ 1 \end{pmatrix}$, $\vec{AD}\begin{pmatrix} 2 \\\\ -3 \\\\ -3 \end{pmatrix}$.

**2. Système $\vec{AB} = \alpha \vec{AC} + \beta \vec{AD}$ :**

$$\begin{cases} -2 = 2\beta \implies \beta = -1 \\\\ -1 = 2\alpha - 3\beta \implies \alpha = -2 \\\\ 1 = \alpha - 3\beta \implies 1 = -2 - 3(-1) \quad (\text{Vrai}) \end{cases}$$

Conclusion : $\vec{AB} = -2\vec{AC} - \vec{AD}$, les points $A, B, C, D$ sont donc coplanaires.

## Formules / Algorithmes / Propriétés

Dans un repère $(O; \vec{i}, \vec{j}, \vec{k})$ :

- **Décomposition d'un vecteur :** $\vec{u} = x\vec{i} + y\vec{j} + z\vec{k}$
    
- **Vecteur entre deux points :** $\vec{AB} = \begin{pmatrix} x_B - x_A \\\\ y_B - y_A \\\\ z_B - z_A \end{pmatrix}$
    
- **Milieu $I$ d'un segment $[AB]$ :** $$I\left(\frac{x_A+x_B}{2} ; \frac{y_A+y_B}{2} ; \frac{z_A+z_B}{2}\right)$$
    
- **Distance / Norme (repère orthonormé) :** $$AB = \sqrt{(x_B-x_A)^2 + (y_B-y_A)^2 + (z_B-z_A)^2}$$
    

## Concepts liés

- [[Représentation paramétrique d'une droite]]
- [[Positions relatives de deux droites dans l'espace]]
- [[Vecteur normal et équation cartésienne d'un plan]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


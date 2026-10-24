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
# Représentation paramétrique d'une droite

> [!info] Définition courte
> 
> Un système d'équations exprime les coordonnées $(x, y, z)$ de tout point d'une droite en fonction d'un paramètre réel $t$, d'un point connu $A$ et d'un vecteur directeur $\vec{u}$.
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

C'est l'équivalent de la trajectoire d'un objet se déplaçant en ligne droite : à chaque valeur du "temps" ou paramètre $t$, correspond une position unique $(x, y, z)$ dans l'espace.

## Fonctionnement

Pour établir la représentation paramétrique d'une droite $(d)$ :

1. Identifier un point de passage $A(x_A, y_A, z_A)$.
    
2. Identifier un vecteur directeur non nul $\vec{u}\begin{pmatrix} a \\\\ b \\\\ c \end{pmatrix}$.
    
3. Écrire le système pour tout réel $t \in \mathbb{R}$ :
    
    $$\begin{cases} x = x_A + a \cdot t \\\\ y = y_A + b \cdot t \\\\ z = z_A + c \cdot t \end{cases}$$
    

## Exemple simple

**Tester si le point $R(9; 5; 6)$ appartient à la droite $(d) : \begin{cases} x = 4 - 5t \\\\ y = -2 + 2t \\\\ z = 1 + 3t \end{cases}$ :**

1. On remplace $x, y, z$ par les coordonnées de $R$ :
    
    $$\begin{cases} 9 = 4 - 5t \implies t = -1 \\\\ 5 = -2 + 2t \implies t = \frac{7}{2} \\\\ 6 = 1 + 3t \implies t = \frac{5}{3} \end{cases}$$
    
2. Les valeurs de $t$ sont différentes ($-1 \neq \frac{7}{2} \neq \frac{5}{3}$), donc le point **$R \notin (d)$**.
    

## Formules / Algorithmes / Propriétés

- **Lecture directe :**
    
    - Les constantes donnent le point de passage $A(x_A, y_A, z_A)$.
        
    - Les coefficients devant le paramètre $t$ donnent le vecteur directeur $\vec{u}\begin{pmatrix} a \\\\ b \\\\ c \end{pmatrix}$.
        
- **Non-unicité :** Une droite possède une infinité de représentations paramétriques possibles (selon le point $A$ ou le vecteur $\vec{u}$ choisi).
    

## Concepts liés

- [[Bases et repères de l'espace]]
- [[Vecteur normal et équation cartésienne d'un plan]]
- [[Positions relatives de deux droites dans l'espace]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


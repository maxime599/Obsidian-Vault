---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/geometrie3d
  - math/vecteurs
  - math/résolutiondequations
MOC:
  - "[[MOC Géométrie 3d]]"
  - "[[MOC Vecteurs]]"
  - "[[MOC Résolution d'équations]]"
date_creation: 2026-07-26
---
# Positions relatives de deux droites dans l'espace

> [!info] Définition courte
> 
> L'étude de la position relative de deux droites consiste à déterminer si elles sont coplanaires (parallèles ou sécantes) ou non coplanaires.

## Explication intuitive

Dans le plan (2D), deux droites non parallèles finissent obligatoirement par se croiser. Mais dans l'espace (3D), deux droites peuvent passer l'une au-dessus de l'autre sans jamais se toucher ni être parallèles (comme une route et un pont au-dessus). On dit alors qu'elles sont non coplanaires.

## Fonctionnement

Pour étudier la position de deux droites $(d)$ et $(d')$ :

1. **Étape 1 - Tester le parallélisme :**
    
    Vérifier si les vecteurs directeurs $\vec{u}$ et $\vec{u}'$ sont colinéaires ($\vec{u}' = k\vec{u}$).
    
    - _Si Oui :_ Les droites sont parallèles (confondues ou strictement parallèles).
        
    - _Si Non :_ Passer à l'Étape 2.
        
2. **Étape 2 - Tester l'intersection :**
    
    Résoudre le système d'équations formé en égalisant leurs représentations paramétriques (avec deux paramètres distincts $t$ et $s$).
    
    - _Si 1 solution $(t, s)$ :_ Les droites sont **sécantes**.
        
    - _Si aucune solution :_ Les droites sont **non coplanaires**.
        

## Exemple simple

Soient $(d) : \begin{cases} x = 2 + t \\\\ y = 1 - t \\\\ z = 5 + 2t \end{cases}$ et $(d') : \begin{cases} x = 3 + 3s \\\\ y = 3 + 2s \\\\ z = 1 - s \end{cases}$.

1. **Vecteurs directeurs :** $\vec{u}\begin{pmatrix} 1 \\\\ -1 \\\\ 2 \end{pmatrix}$ et $\vec{u}'\begin{pmatrix} 3 \\\\ 2 \\\\ -1 \end{pmatrix}$. Non colinéaires $\implies$ Pas parallèles.
    
2. **Système d'intersection :**
    
    $$\begin{cases} 2 + t = 3 + 3s \\\\ 1 - t = 3 + 2s \\\\ 5 + 2t = 1 - s \end{cases}$$
    
    Résolution des deux premières équations : $s = -\frac{3}{5}$ et $t = -\frac{4}{5}$.
    
    Infection dans la 3ᵉ équation : $5 + 2\left(-\frac{4}{5}\right) = \frac{17}{5}$ et $1 - \left(-\frac{3}{5}\right) = \frac{8}{5}$.
    
    Comme $\frac{17}{5} \neq \frac{8}{5}$, le système n'a pas de solution.
    

**Conclusion :** Les droites $(d)$ et $(d')$ sont **non coplanaires**.

## Concepts liés

- [[Représentation paramétrique d'une droite]]
- [[Orthogonalité et positions relatives dans l'espace]]
    
- [[Théorème du toit]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


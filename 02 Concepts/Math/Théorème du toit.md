---
type: concept
matière: math
tags:
  - concepts
  - math/geometrie3d
  - math/theoreme
MOC:
  - "[[MOC Géométrie 3d]]"
  - "[[MOC Theoreme]]"
date_creation: 2026-07-26
---

# Théorème du toit

> [!info] Définition courte
> Le **théorème du toit** permet de déterminer la direction de la droite d'intersection de deux plans sécants lorsqu'ils contiennent chacun une droite parallèle entre elles.
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

Imaginez le toit d'une maison formé de deux pans inclinés (les plans) qui se croisent le long d'une ligne de faîtage (la droite d'intersection). Si les poutres de soutien posées sur chaque pan sont parallèles entre elles, alors l'arête du toit (la ligne de faîtage) sera automatiquement parallèle à ces deux poutres.


## Fonctionnement

Pour appliquer le théorème du toit, il faut suivre ces étapes :

1. Vérifier que la droite $(d_1)$ est contenue dans le plan $(P_1)$.
2. Vérifier que la droite $(d_2)$ est contenue dans le plan $(P_2)$.
3. Vérifier que les droites $(d_1)$ et $(d_2)$ sont parallèles entre elles ($(d_1) \parallel (d_2)$).
4. Vérifier que les plans $(P_1)$ et $(P_2)$ sont sécants selon une droite $(\Delta)$.
5. **Conclusion :** La droite d'intersection $(\Delta)$ est parallèle à $(d_1)$ et à $(d_2)$.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncé formel
> Soient $(P_1)$ et $(P_2)$ deux plans sécants suivant une droite $(\Delta)$.  
> Si $(d_1) \subset (P_1)$, $(d_2) \subset (P_2)$ et $(d_1) \parallel (d_2)$, alors $(\Delta) \parallel (d_1)$ et $(\Delta) \parallel (d_2)$.


## Concepts liés


- [[Positions relatives de deux droites dans l'espace]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

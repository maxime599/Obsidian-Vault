---
type: concept
matière: physique
tags:
  - concepts
  - physique/ondes
  - physique/optique
  - physique
MOC:
  - "[[07 MOC/Concepts/Physique/MOC Ondes]]"
  - "[[MOC Optique]]"
date_creation: 2026-07-28
---
# Interférences ondulatoires

> [!info] Définition courte
> Le phénomène d'**interférences** se produit lorsque deux ondes de même nature, de même fréquence et **cohérentes** (déphasage constant) se superposent dans l'espace, créant des zones d'amplification et d'extinction.
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



## Conditions d'interférence

Pour observer des interférences stables dans le temps, les deux sources doivent être **synchrones** (même longueur d'onde $\lambda$) et **cohérentes** (déphasage constant).



## Types d'interférences & Différence de chemin optique ($\delta$)

Soit $\delta = S_2M - S_1M$ la différence de marche (retard spatial) entre les deux ondes au point $M$ :

> [!theorem] Conditions sur la différence de marche $\delta$
> - **Interférences constructives** (ondes en phase, amplitude maximale) :
>   $$\delta = k \cdot \lambda \quad (k \in \mathbb{Z})$$
> - **Interférences destructives** (ondes en opposition de phase, amplitude nulle) :
>   $$\delta = \left(k + \frac{1}{2}\right)\lambda = (2k + 1)\frac{\lambda}{2} \quad (k \in \mathbb{Z})$$



## Dispositif des Trous / Fentes d'Young

Pour deux fentes séparées d'une distance $e$, éclairées par une source monochromatique et observées sur un écran situé à une distance $D$ :

1. **Différence de marche** en un point d'abscisse $x$ de l'écran :
   $$\delta = \frac{x \cdot e}{D}$$
2. **Interfrange $i$** (distance séparant deux franges brillantes ou sombres consécutives) :
   $$i = \frac{\lambda \cdot D}{e}$$



## Concepts liés

- [[Diffraction des ondes]]
- [[Niveau d'intensité sonore et atténuation]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/analyse
  - math/fonction
MOC:
  - "[[07 MOC/Concepts/Math/MOC Analyse]]"
  - "[[MOC Fonction]]"
date_creation: 2026-09-17
Ressources:
---

# Représentation graphique de la bijection réciproque

> [!info] Définition courte
> Dans un repère orthonormé, les courbes représentatives d'une fonction bijective $f$ et de sa bijection réciproque $f^{-1}$ sont symétriques par rapport à la première bissectrice (la droite d'équation $y = x$).
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


## 1. Graphe et courbe représentative

Soient $E$ et $F$ deux parties de $\mathbb{R}$ et $f$ une application de $E$ dans $F$.

- **Graphe de $f$** : L'ensemble des couples $(x, f(x))$ pour tout $x \in E$.
- **Courbe représentative** : Dans un plan muni d'un repère cartésien, chaque élément $(x, f(x))$ du graphe correspond à un unique point $M(x, y)$ avec $y = f(x)$.


## 2. Théorème de la symétrie

Soit $f$ une application bijective de $E$ dans $F$ ($E, F \subset \mathbb{R}$).

Dans le plan muni d'un repère orthonormé :
$$M(x, y) \in \mathcal{C}_f \iff y = f(x) \iff x = f^{-1}(y) \iff M'(y, x) \in \mathcal{C}_{f^{-1}}$$

Les points $M(x, y)$ et $M'(y, x)$ étant symétriques par rapport à la droite $y = x$, les courbes $\mathcal{C}_f$ et $\mathcal{C}_{f^{-1}}$ sont **géométriquement symétriques par rapport à la première bissectrice**.


## 3. Exemple classique

Dans un repère orthonormé, la fonction exponentielle $\exp : \mathbb{R} \to ]0, +\infty[$ et sa bijection réciproque le logarithme népérien $\ln : ]0, +\infty[ \to \mathbb{R}$ ont des courbes représentatives strictement symétriques par rapport à la droite $y = x$.
```easy-tikz
{
  "dimension": false,
  "documentSetup": true,
  "title": "My graph: \\(\\sum\\)",
  "size_x_cm": 10,
  "size_y_cm": 10,
  "show_axis_label": true,
  "axis_label_x": "x",
  "axis_label_y": "y",
  "documentClose": true,
  "showAxis": true,
  "showLargeGrid": false,
  "showSmallGrid": false,
  "gridSize": 5,
  "xmin": "-3.64139",
  "xmax": "5.97814",
  "ymin": "-2.5713",
  "ymax": "7.04823",
  "axis_style": "middle",
  "functions": [
    {
      "expression": "exp(x)",
      "domain": "-10:10",
      "showLegend": false,
      "fill": false,
      "fillOpacity": 0.2,
      "fillPattern": "solid",
      "tangent": false,
      "dashed": false,
      "tangentPoint": "",
      "extrema": false,
      "color": "black",
      "thickness": "thin",
      "parametric": false,
      "expressionY": "",
      "name": "f1"
    },
    {
      "expression": "log(x)",
      "domain": "-10:10",
      "showLegend": false,
      "fill": false,
      "fillOpacity": 0.2,
      "fillPattern": "solid",
      "tangent": false,
      "dashed": false,
      "tangentPoint": "",
      "extrema": false,
      "color": "black",
      "thickness": "thin",
      "parametric": false,
      "expressionY": "",
      "name": "f2"
    },
    {
      "expression": "x",
      "domain": "-10:10",
      "showLegend": false,
      "fill": false,
      "fillOpacity": 0.2,
      "fillPattern": "solid",
      "tangent": false,
      "dashed": false,
      "tangentPoint": "",
      "extrema": false,
      "color": "black",
      "thickness": "thin",
      "parametric": false,
      "expressionY": "",
      "name": "f3"
    }
  ],
  "zmin": "-5",
  "zmax": "5",
  "axis_label_z": "z",
  "rotationX": 30,
  "rotationZ": 45,
  "zoom3D": 1,
  "boxAspect": "true",
  "functions3D": [],
  "majorTickNum": 8,
  "previewSize": 760,
  "annotations": [],
  "tools": [],
  "coordinateSystem": "cartesian",
  "axis_label_x_polar": "",
  "axis_label_y_polar": "",
  "displayWidth": 410,
  "displayAlign": "left"
}
```


## Concepts liés

- [[Application réciproque d'une bijection]]
- [[Injectivité, surjectivité et bijectivité]]
- [[Fonction exponentielle et logarithme népérien]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

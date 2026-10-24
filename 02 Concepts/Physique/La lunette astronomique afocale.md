---
type: concept
matière: physique
tags:
  - concepts
  - physique/optique
  - physique
MOC:
  - "[[MOC Optique]]"
date_creation: 2026-07-28
---
# La lunette astronomique afocale

> [!info] Définition courte
> Une **lunette afocale** est un système optique formé de deux lentilles convergentes (l'objectif et l'oculaire) modélisant une lunette astronomique qui transforme un faisceau d'un objet situé à l'infini en un faisceau émergeant à l'infini.
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



## Constitution du système

1. **L'objectif $L_1$** : Lentille convergente de grande distance focale $f'_1$ (de l'ordre du mètre) et de grand diamètre $D$ (pour collecter un maximum de lumière).
2. **L'oculaire $L_2$** : Lentille convergente de courte distance focale $f'_2$ (de l'ordre du centimètre).

> [!theorem] Condition d'afocalité
> Le foyer image $F'_1$ de l'objectif coïncide avec le foyer objet $F_2$ de l'oculaire :
> $$O_1O_2 = f'_1 + f'_2$$



## Formation de l'image et Grossissement

- L'objet $AB$ à l'infini forme une **image intermédiaire $A_1B_1$** réelle et renversée dans le plan focal image de $L_1$ (qui est aussi le plan focal objet de $L_2$).
- L'image définitive $A'B'$ est virtuelle, renversée et rejetée à l'infini (ce qui permet une observation par l'œil sans accommodation).

> [!theorem] Grossissement $G$
> Le grossissement $G$ est le rapport entre le diamètre apparent $\theta'$ de l'image vue à travers la lunette et le diamètre apparent $\theta$ de l'objet à l'œil nu :
> $$G = \frac{\theta'}{\theta} = -\frac{f'_1}{f'_2}$$
> *(Remarque : $G < 0$ indique que l'image est renversée).*


## Concepts liés

- [[Diffraction des ondes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

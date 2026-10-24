---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/principe
MOC:
  - "[[07 MOC/Concepts/Optique_géometrique/MOC Principe|MOC Principe]]"
date_creation: 2026-10-14
Ressources:
  - "[[OPTIQUE GEOMETRIQUE I-II-III.pdf]]"
---

# Principes fondamentaux de propagation de la lumière

> [!info] Définition courte
> La propagation de la lumière en optique géométrique repose sur des lois fondamentales : le **principe de propagation rectiligne** dans un milieu transparent homogène et isotrope, et le **principe de retour inverse**.

```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        if (h.level === 1) continue;
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```

## 1. Définitions des milieux de propagation

Un milieu matériel de propagation se caractérise par ses propriétés physiques :
?
- **Homogène** : possède les mêmes propriétés en tout point.
- **Isotrope** : ses propriétés sont indépendantes de la direction de propagation.
- **Transparent** : laisse passer la lumière (par opposition aux milieux opaques ou absorbants).
<!--SR:!2026-11-01,12,270-->


## 2. Principe de propagation rectiligne et milieux inhomogènes

- **Règle générale** : Dans un milieu transparent, homogène et isotrope, la lumière se propage en ==ligne droite de la source au récepteur==.
- **Cas des milieux inhomogènes** : Si l'indice $n$ varie (par exemple en raison d'un gradient de température), les rayons lumineux se ==courbent==. C'est l'origine physique du **phénomène de mirage** (où l'œil, habitué à la ligne droite, interprète faussement la provenance du rayon).
<!--SR:!2026-11-03,14,290!2026-11-04,15,290-->


## 3. Principe de retour inverse de la lumière

- Le trajet suivi par un rayon lumineux est **==indépendant== du sens de propagation**.
- Si un rayon émis par une source $A$ se propage jusqu'en $B$, alors ==une source placée en $B$ émettra un rayon suivant exactement le même chemin en sens inverse jusqu'en $A$, quels que soient les milieux traversés.==
<!--SR:!2026-11-04,15,290!2026-11-05,16,290-->


## Concepts liés

- [[Cadre et modèle du rayon en optique géométrique]]
- [[Modèle des ondes électromagnétiques et indice de réfraction]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/imagerie
MOC:
  - "[[MOC Imagerie]]"
date_creation: 2026-10-18
Ressources:
  - "[[OPTIQUE GEOMETRIQUE IV.pdf]]"
---

# Nature des objets, des images et foyers optiques

> [!info] Définition courte
> La caractérisation d'un système optique repose sur la classification de la nature **réelle ou virtuelle** des objets et des images conjugués par application du principe de retour inverse, ainsi que sur l'utilisation de points particuliers appelés **foyers optiques**.

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

## 1. Nature des objets et des images ponctuels

Un système optique relie un point objet $A$ à un point image $A'$ (points conjugués) selon la provenance et l'orientation des faisceaux :
- **Objet réel / Image réelle** : Les rayons incidents divergent à partir de $A$ (espace réel) et les rayons émergents convergent en $A'$.
- **Objet réel / Image virtuelle** : Les rayons incidents divergent de $A$ et les rayons émergents divergent; leurs prolongements se coupent en $A'$ (derrière le système).
- **Objet virtuel / Image réelle** : Les rayons incidents convergent vers $A$ (situé derrière le système) et les rayons émergents convergent en $A'$.
- **Objet virtuel / Image virtuelle** : Les rayons incidents convergent vers $A$ et les émergents divergent depuis $A'$.

*(Par le principe de retour inverse de la lumière, les rôles de $A$ et $A'$ peuvent s'interchanger).*


## 2. Les foyers d'un système optique

- **Foyer image ($F'$)** :: Point vers lequel convergent les rayons émergents lorsque le faisceau incident arrive parallèle à l'axe optique (un objet à l'infini donne une image en $F'$).
<!--SR:!2027-01-02,55,310-->
- **Foyer objet ($F$)** :: Point source positionné de telle sorte que les rayons émergents du système sortent parallèles à l'axe optique (un objet en $F$ donne une image à l'infini).
<!--SR:!2027-01-11,60,310-->


## Concepts liés

- [[Stigmatisme et conditions de Gauss]]
- [[Principes fondamentaux de propagation de la lumière]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
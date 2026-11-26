---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
MOC:
date_creation: 2026-11-21
Ressources:
  - "[[OPTIQUE GEOMETRIQUE IV.pdf]]"
---
# Dioptre sphérique, dioptre plan et vergence

> [!info] Définition courte
> Un dioptre sphérique est une surface sphérique séparant deux milieux transparents d'indices de réfraction différents. Le dioptre plan en constitue le cas limite à rayon de courbure infini, régi par des relations de conjugaison et un grandissement transversal spécifique.

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

## 1. Dioptre sphérique

### A. Définition et typologie
Surface sphérique séparant deux milieux d'indices $n$ et $n'$, possédant un centre $C$ et un rayon de courbure $R = \overline{SC}$.
- **Dioptre concave :** Rayon de courbure :: $R < 0$.
<!--SR:!2026-11-26,4,270-->
- **Dioptre convexe :** Rayon de courbure :: $R > 0$.
<!--SR:!2026-11-26,4,270-->

### B. Relations de conjugaison, foyers et vergence
- **Origine au sommet $S$** (Relations de conjugaison pour les dioptres sphériques) ::$$\frac{n'}{\overline{SA'}} - \frac{n}{\overline{SA}} = \frac{n' - n}{\overline{SC}}$$
<!--SR:!2026-11-26,3,250-->
- **Origine au centre de courbure $C$** (Relations de conjugaison pour les dioptres sphériques)::$$\frac{n'}{\overline{CA'}} - \frac{n}{\overline{CA}} = \frac{n' - n}{\overline{CS}}$$
<!--SR:!2026-11-25,3,250-->
- **Foyers $F$ et $F'$** :
Méthode de détermination des foyers à partir des relations de conjugaison : :On prend $\overline{SA} = \infty$ pour déterminer $f' =\overline{SF'}=\overline{SA'}$ et $\overline{SA'} = \infty$ pour déterminer le foyer objet $f =\overline{SF}=\overline{SA}$.
  - Foyer image $F'$ : $\overline{SF'} = \frac{n'}{n' - n}\overline{SC} = f'$
  - Foyer objet $F$ : $\overline{SF} = -\frac{n}{n' - n}\overline{SC} = f$
  *(Les foyers ne sont ni symétriques par rapport à $S$, ni conjugués).*
- **Vergence du dioptre ($\Phi$)** ::$$\Phi = \frac{n'}{\overline{SF'}} = -\frac{n}{\overline{SF}} = \frac{n' - n}{\overline{SC}}$$
<!--SR:!2026-11-26,3,250-->
  *(Unité : Dioptrie $\delta$ ou $\text{m}^{-1}$)*
- **Formule de Newton** (origine aux foyers, avec $\overline{FA} = \sigma$ et $\overline{F'A'} = \sigma'$) ::$$f \cdot f' = \sigma \cdot \sigma'$$
<!--SR:!2026-11-26,4,270-->

### C. Construction géométrique et grandissement
- **Dioptre convergent** ($\Phi > 0$) (foyer et image réels ou pas):: foyers réels, objet réel donne image réelle.
<!--SR:!2026-11-26,4,270-->
- **Dioptre divergent** ($\Phi < 0$) (foyer et image réels ou pas):: foyers virtuels, objet réel donne image virtuelle.
<!--SR:!2026-11-26,4,270-->
- **Grandissement transversal ($\gamma$)** (Dioptre sphérique)::$$\gamma = \frac{\overline{A'B'}}{\overline{AB}} = \frac{\overline{CA'}}{\overline{CA}} = \frac{n}{n'} \frac{\overline{SA'}}{\overline{SA}} = -\frac{f}{\sigma} = -\frac{\sigma'}{f'}$$
<!--SR:!2026-11-25,2,230-->


## 2. Le dioptre plan

Le rayon de courbure $\overline{SC}$ d'un dioptre plan est infini ($\frac{1}{\overline{SC}} = 0$).
- **Relation de conjugaison (origine au sommet) (dioptre plan):**:$$\frac{n'}{\overline{SA'}} - \frac{n}{\overline{SA}} = 0 \implies \frac{n'}{\overline{SA'}} = \frac{n}{\overline{SA}}$$
- **Grandissement transversal (dioptre plan):**:$$\gamma = 1$$


## Concepts liés

- [[Miroir plan et miroir sphérique]]
- [[Nature des objets, des images et foyers optiques]]
- [[Stigmatisme et conditions de Gauss]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date ASC
```
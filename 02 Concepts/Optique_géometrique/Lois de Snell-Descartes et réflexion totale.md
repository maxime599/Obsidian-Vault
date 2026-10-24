---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/refraction
MOC:
  - "[[MOC Refraction]]"
date_creation: 2026-10-18
Ressources:
  - "[[OPTIQUE GEOMETRIQUE I-II-III.pdf]]"
---

# Lois de Snell-Descartes et réflexion totale

> [!info] Définition courte
> Les **lois de Snell-Descartes** régissent la réflexion et la réfraction de la lumière lors du passage d'une interface (dioptre ou miroir). Lorsque la lumière passe d'un milieu plus réfringent à un milieu moins réfringent, un phénomène de **réflexion totale** se produit au-delà d'un angle limite.

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
![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=13&rect=75,19,320,201|OPTIQUE GEOMETRIQUE I-II-III, p.13]]
## 1. Réflexion et Réfraction sur une interface
![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=15&rect=150,100,679,313|OPTIQUE GEOMETRIQUE I-II-III, p.15]]
- **Réflexion** : 
  - Réflexion *==spéculaire==* sur une surface polie (miroirs).
  - Réflexion *==diffuse==* sur une surface rugueuse (dispersion aléatoire).
- **Réfraction** :: Changement de direction du rayon lumineux lors de la traversée d'un **dioptre** (surface séparant deux milieux transparents d'indices $n_1$ et $n_2$).
<!--SR:!2026-10-24,4,270-->


## 2. Les 3 lois de Snell-Descartes

1. **1ère loi** : Les rayons réfléchis et réfractés sont ==contenus dans le **plan d'incidence** (formé par le rayon incident et la normale au dioptre).==
2. **2ème loi (Réflexion)** : L'angle de réflexion $r$ est égal à :: l'angle d'incidence $i_1$ :$$r = i_1$$
<!--SR:!2026-10-24,4,270-->
3. **3ème loi (Réfraction)** : La relation entre l'angle d'incidence $i_1$, l'angle de réfraction $i_2$ et les indices optiques s'écrit ::$$n_1 \sin(i_1) = n_2 \sin(i_2)$$
<!--SR:!2026-10-24,4,270-->


## 3. Conséquences et Réflexion totale

- **Cas $n_1 < n_2$** : Le rayon réfracté existe toujours et ==se rapproche== de la normale ($i_2 < i_1$). Le milieu $n_2$ est dit ==plus réfringent.==
- **Cas $n_1 > n_2$** : Le rayon ==s'éloigne== de la normale. La réfraction n'est possible que jusqu'à un **angle limite d'incidence $i_l$** tel que $i_2 = 90^\circ$ ::$$\sin(i_l) = \frac{n_2}{n_1}$$
<!--SR:!2026-10-23,3,250-->
- **Réflexion totale** : Pour tout angle d'incidence supérieur à l'angle limite ($i_1 > i_l$), il n'y a plus de ==rayon réfracté==, toute la lumière est réfléchie (applications : prismes à réflexion totale, fibres optiques).
<!--SR:!2026-10-24,4,270-->


## Concepts liés

- [[Modèle des ondes électromagnétiques et indice de réfraction]]
- [[Principe de Fermat et indépendance des rayons lumineux]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
---
type: concept
tags:
  - concepts
  - Elen1
  - "#elen1/lois"
  - flashcards/Elen1
MOC:
  - "[[07 MOC/Concepts/Elen-Ener/MOC Lois|MOC Lois]]"
date_creation: 2026-09-07
Ressources:
  - "[[Info1_Slides.pdf]]"
---
# Lois fondamentales de l'électricité (Kirchhoff et Ohm)

> [!info] Définition courte
> Les **lois de Kirchhoff** (loi des mailles et loi des nœuds) combinées à la **loi d'Ohm** constituent l'ensemble des règles fondamentales permettant d'analyser et de mettre en équation tout circuit électrique en régime continu.
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


## 1. Loi des mailles

Une **maille** est :: un ensemble d'éléments formant une boucle fermée dans un circuit.
<!--SR:!2026-11-16,44,290-->

Loi des mailles
?
> [!theorem] Principe
> La somme algébrique des tensions le long d'une maille orientée est égale à zéro :
> $$\sum U_k = 0$$
<!--SR:!2026-12-06,61,310-->

En orientant la maille selon un sens de parcours choisi :
- Une tension dans le sens du parcours intervient positivement (ou négativement selon l'orientation choisie des flèches).
- *Exemple (sur le schéma de cours)* : Pour les mailles $M_1$, $M_2$ et $M_3$ :
  - $M_1 : E - U_1 - U_2 = 0$
  - $M_2 : E - U_1 - U_3 = 0$
  - $M_3 : U_2 - U_3 = 0$


## 2. Loi des nœuds

Un **nœud** est ==un point d'interconnexion reliant au moins trois conducteurs==.
<!--SR:!2026-12-04,59,310-->

Loi des nœuds
?
> [!theorem] Principe
> La somme algébrique des courants traversant un nœud est nulle. Les courants entrant dans le nœud sont comptés positivement ($+$) et les courants sortant sont comptés négativement ($-$) :
> $$\sum I_{\text{entrants}} - \sum I_{\text{sortants}} = 0$$
<!--SR:!2026-11-30,55,310-->

- *Exemple (au nœud $N_1$)* : $I_1 - I_2 - I_3 = 0 \iff I_1 = I_2 + I_3$


![[Résistance électrique et loi d'Ohm#2. Loi d'Ohm]]

## Concepts liés

- [[Méthode de résolution d'un circuit électrique]]
- [[Conventions en électricité]]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
tags:
  - concepts
  - Elen1
  - physique/électricité
  - "#elen1/lois"
  - flashcards/Elen1
MOC:
  - "[[07 MOC/Concepts/Elen1/MOC Lois|MOC Lois]]"
  - "[[MOC Électricité]]"
date_creation: 2026-09-07
Ressources:
  - "[[Info1_Slides.pdf]]"
---
# Lois fondamentales de l'électricité (Kirchhoff et Ohm)

> [!info] Définition courte
> Les **lois de Kirchhoff** (loi des mailles et loi des nœuds) combinées à la **loi d'Ohm** constituent l'ensemble des règles fondamentales permettant d'analyser et de mettre en équation tout circuit électrique en régime continu.


## 1. Loi des mailles

Une **maille** est :: un ensemble d'éléments formant une boucle fermée dans un circuit.
<!--SR:!2026-09-20,3,250-->

Loi des mailles
?
> [!theorem] Principe
> La somme algébrique des tensions le long d'une maille orientée est égale à zéro :
> $$\sum U_k = 0$$
<!--SR:!2026-09-21,4,270-->

En orientant la maille selon un sens de parcours choisi :
- Une tension dans le sens du parcours intervient positivement (ou négativement selon l'orientation choisie des flèches).
- *Exemple (sur le schéma de cours)* : Pour les mailles $M_1$, $M_2$ et $M_3$ :
  - $M_1 : E - U_1 - U_2 = 0$
  - $M_2 : E - U_1 - U_3 = 0$
  - $M_3 : U_2 - U_3 = 0$


## 2. Loi des nœuds

Un **nœud** est ==un point d'interconnexion reliant au moins trois conducteurs==.
<!--SR:!2026-09-21,4,270-->

Loi des nœuds
?
> [!theorem] Principe
> La somme algébrique des courants traversant un nœud est nulle. Les courants entrant dans le nœud sont comptés positivement ($+$) et les courants sortant sont comptés négativement ($-$) :
> $$\sum I_{\text{entrants}} - \sum I_{\text{sortants}} = 0$$
<!--SR:!2026-09-21,4,270-->

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

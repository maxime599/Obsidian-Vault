---
type: concept
tags:
  - concepts
  - Thermodynamique
  - physique/fluides
  - flashcards/thermodynamique
MOC:
  - "[[MOC Fluides]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Statique des fluides et poussée d'Archimède

> [!info] Définition courte
> La **statique des fluides** étudie les propriétés et l'équilibre des fluides au repos. Les forces de pression exercées sur tout corps immergé engendrent une résultante appelée **poussée d'Archimède**.


## 1. Force et pression dans un fluide

Dans un fluide au repos, l'interaction avec une surface $\mathrm{d}S$ s'exerce normalement à celle-ci :
?
$$\mathrm{d}\vec{F} = P \mathrm{d}S \, \vec{n}$$
- $P$ est la pression (grandeur scalaire exprimée en Pascal, $\text{Pa} = \text{N}\cdot\text{m}^{-2} = \text{kg}\cdot\text{m}^{-1}\cdot\text{s}^{-2}$).
- $\vec{n}$ est le vecteur unitaire orthogonal à la surface, orienté vers l'extérieur du volume délimité.
<!--SR:!2026-09-21,3,250-->


## 2. Poussée d'Archimède

> [!theorem] Principe d'Archimède
> Tout corps plongé dans un fluide au repos subit une force verticale, orientée vers le haut, dont l'intensité est égale au poids du volume de fluide déplacé.

À l'équilibre statique, cette poussée compense exactement le poids de la colonne ou du volume de fluide considéré.

 Poussée d'Archimède :
 ? $$\boxed{\vec{F}_A=-\rho_{\text{fluide}}\,V_{\text{immergé}}\,\vec{g}}$$
Avec :
- $F_A$ : poussée d'Archimède en **newtons (N)**
- $\rho_{\text{fluide}}$ : masse volumique du fluide en **kg·m⁻³**
- $V_{\text{immergé}}$ : volume de l'objet **immergé** en **m³**
- $g$ : intensité de la pesanteur, environ **$9{,}81\ \text{N·kg}^{-1}$**

## Concepts liés

- [[Mesure de pression et échelles de température]]
- [[Travail des forces de pression et transfert thermique]]
- [[Poussée d'Archimède]]
- [[Vecteur normal et équation cartésienne d'un plan]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

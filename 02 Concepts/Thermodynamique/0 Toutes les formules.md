---
type: concept
tags:
  - concepts
  - Thermodynamique
MOC:
date_creation: 2026-09-05
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Température
- **Celsius ($^\circ\text{C}$)** : $T(\text{K}) = T(^\circ\text{C}) + 273.15$
- **Fahrenheit ($^\circ\text{F}$)** : $T(^\circ\text{C}) = \frac{T(^\circ\text{F}) - 32}{1.8}$


# Fluides
## Force sur une surface plongée dans un fluide
Dans un fluide au repos, l'interaction avec une surface $\mathrm{d}S$ s'exerce normalement à celle-ci :

$$\mathrm{d}\vec{F} = P \mathrm{d}S \, \vec{n}$$

- $P$ est la pression (grandeur scalaire exprimée en Pascal, $\text{Pa} = \text{N}\cdot\text{m}^{-2} = \text{kg}\cdot\text{m}^{-1}\cdot\text{s}^{-2}$).
- $\vec{n}$ est le vecteur unitaire orthogonal à la surface, orienté vers l'extérieur du volume délimité.


## Poussée d'Archimède
À l'équilibre statique, cette poussée compense exactement le poids de la colonne ou du volume de fluide considéré.
$$\boxed{\vec{F}_A=-\rho_{\text{fluide}}\,V_{\text{immergé}}\,\vec{g}}$$
Avec :
- $F_A$ : poussée d'Archimède en **newtons (N)**
- $\rho_{\text{fluide}}$ : masse volumique du fluide en **kg·m⁻³**
- $V_{\text{immergé}}$ : volume de l'objet **immergé** en **m³**
- $g$ : intensité de la pesanteur, environ **$9{,}81\ \text{N·kg}^{-1}$


# Travail des forces de pression ($W$)
Lors d'une variation élémentaire de volume $\mathrm{d}V$ exercée sous une pression $P$, le travail infinitésimal recu s'écrit :

$$\delta W = -P \mathrm{d}V$$

Pour une transformation d'un état initial ($V_i$) à un état final ($V_f$) :

$$W = -\int_{V_i}^{V_f} P \mathrm{d}V$$

- **Convention de signe centrée sur le système** :
  - **Compression** ($\mathrm{d}V < 0$) : $W > 0$, le système reçoit de l'énergie sous forme mécanique.
  - **Expansion / Détente** ($\mathrm{d}V > 0$) : $W < 0$, le système fournit du travail au milieu extérieur.
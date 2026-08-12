---
type: concept
matière: physique
tags:
  - concepts
  - physique
  - physique/thermodynamique
MOC:
  - "[[MOC Thermodynamique]]"
date_creation: 2026-07-28
---
# Modèle du gaz parfait

> [!info] Définition courte
> Un **gaz parfait** est un modèle idéal de gaz dans lequel les molécules n'ont pas d'interaction à distance entre elles (sauf lors de chocs élastiques) et où leur propre volume (volume propre) est négligeable devant le volume total occupé par le gaz.


## Explication intuitive

À l'échelle microscopique, on imagine un gaz comme une multitude de petites billes qui s'agitent dans tous les sens de manière désordonnée. 
- Plus la température augmente, plus l'agitation des molécules est grande (plus elles vont vite).
- Plus les chocs contre les parois du récipient sont fréquents et violents, plus la **pression** est élevée.
- Le **zéro absolu** ($0\text{ K}$ ou $-273{,}15^\circ\text{C}$) correspond à l'immobilité totale des particules.


## Fonctionnement & Échelles de température

Un gaz réel se comporte comme un gaz parfait aux **faibles pressions** (jusqu'à quelques bars) et à des températures suffisamment éloignées du point de condensation.

### Relation entre l'échelle Kelvin et l'échelle Celsius
$$T(\text{K}) = \theta(^\circ\text{C}) + 273{,}15$$

- $T$ : Température thermodynamique en Kelvin ($\text{K}$)
- $\theta$ : Température en degrés Celsius ($^\circ\text{C}$)


## Formules / Propriétés

> [!theorem] Équation d'état du gaz parfait
> $$P \cdot V = n \cdot R \cdot T$$

**Grandeurs et unités :**
- $P$ : Pression du gaz en Pascals ($\text{Pa}$)
- $V$ : Volume du gaz en mètres cubes ($\text{m}^3$)
- $n$ : Quantité de matière en moles ($\text{mol}$)
- $R$ : Constante des gaz parfaits ($8{,}31\text{ J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$)
- $T$ : Température thermodynamique en Kelvin ($\text{K}$)

> [!note] Autre écriture avec la masse volumique
> En reliant la masse volumique $\rho = \frac{m}{V}$ et la masse molaire $M = \frac{m}{n}$, on peut aussi écrire :
> $$P = \frac{\rho \cdot R \cdot T}{M}$$


## Concepts liés

- [[Premier principe de la thermodynamique]]
- [[Transferts thermiques, résistance et loi de Newton]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

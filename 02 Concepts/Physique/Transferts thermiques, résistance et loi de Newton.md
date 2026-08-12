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
# Transferts thermiques, résistance et loi de Newton

> [!info] Définition courte
> Le **transfert thermique** $Q$ (ou chaleur) est un échange spontané et irréversible d'énergie du corps le plus chaud vers le corps le plus froid. L'évolution de la température d'un système au contact d'un milieu extérieur est régie par la **loi phénoménologique de Newton**.


## Modes de transfert thermique

1. **Conduction** : Répartition de proche en proche de l'agitation moléculaire **sans déplacement de matière** (ex: cuillère dans un plat chaud).
2. **Convection** : Transfert par **déplacement global de matière** au sein d'un fluide (ex: eau qui bout, chauffage par radiateur).
3. **Rayonnement** : Propagation par ondes électromagnétiques **sans besoin de milieu matériel** (ex: rayonnement solaire, loi de Stefan-Boltzmann $P_S = \sigma \cdot T^4$).


## Flux et Résistance thermique

### Flux thermique $\Phi$
Le flux thermique représente la vitesse du transfert thermique (la puissance thermique échangée) :
$$\Phi = \frac{Q}{\Delta t}$$
- $\Phi$ en Watts ($\text{W}$) ou $\text{J}\cdot\text{s}^{-1}$
- $Q$ en Joules ($\text{J}$) et $\Delta t$ en secondes ($\text{s}$)

### Résistance thermique $R_{\text{th}}$
Elle traduit l'opposition d'un matériau ou d'une paroi au flux thermique :
$$\Phi = \frac{\Delta T}{R_{\text{th}}} \quad \implies \quad R_{\text{th}} = \frac{e}{\lambda \cdot S}$$
- $e$ : épaisseur de la paroi ($\text{m}$)
- $S$ : surface d'échange ($\text{m}^2$)
- $\lambda$ : conductivité thermique du matériau ($\text{W}\cdot\text{K}^{-1}\cdot\text{m}^{-1}$)


## Établissement de l'équation différentielle (Loi de Newton)

Pour un système incompressible de masse $m$ et de capacité thermique massique $c$, au contact d'un milieu extérieur à température constante $T_{\text{amb}}$ (thermostat) :

1. **Loi de Newton sur le flux** : $\Phi = h \cdot S \cdot (T_{\text{amb}} - T)$
2. **Transfert thermique** : $Q = m \cdot c \cdot \Delta T$
3. **Relation avec le flux** : $\Phi = \frac{Q}{\Delta t} = m \cdot c \cdot \frac{\Delta T}{\Delta t}$

En passant à la limite quand $\Delta t \to 0$ :
$$m \cdot c \cdot \frac{\mathrm{d}T}{\mathrm{d}t} = h \cdot S \cdot (T_{\text{amb}} - T)$$

On obtient l'**équation différentielle du premier ordre** :
$$\frac{\mathrm{d}T}{\mathrm{d}t} + \gamma \cdot T = \gamma \cdot T_{\text{amb}} \quad \text{avec } \gamma = \frac{h \cdot S}{m \cdot c}$$


## Solution analytique

En résolvant cette équation différentielle avec la condition initiale $T(0) = T_0$ :

$$T(t) = (T_0 - T_{\text{amb}}) \cdot \mathrm{e}^{-\gamma \cdot t} + T_{\text{amb}}$$

La température décroît (ou croît) de façon exponentielle jusqu'à atteindre l'équilibre thermique $T_{\text{amb}}$.


## Liens avec les Mathématiques

- [[Équations différentielles du premier ordre]]
- [[Dérivée, sens de variation et extrémums locaux]]


## Concepts liés

- [[Premier principe de la thermodynamique]]
- [[Modèle du gaz parfait]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

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
# Premier principe de la thermodynamique

> [!info] Définition courte
> Le **premier principe de la thermodynamique** traduit la conservation de l'énergie : pour un système fermé et au repos macroscopique, la variation de son énergie interne $\Delta U$ est égale à la somme des énergies échangées avec l'extérieur sous forme de travail $W$ et de transfert thermique $Q$.


## Explication intuitive

Tout système matériel contient de l'énergie à l'échelle microscopique :
1. **L'énergie cinétique microscopique** $E_{\text{c,micro}}$ (agitation thermique des molécules).
2. **L'énergie potentielle microscopique** $E_{\text{p,micro}}$ (interactions entre molécules).

La somme de ces énergies invisibles forme l'**énergie interne** $U$. Un système ne peut pas créer d'énergie à partir de rien : s'il gagne de l'énergie interne, c'est qu'il l'a reçue de l'extérieur sous forme de chaleur ou de travail mécanique.


## Fonctionnement & Conventions

### Énergie totale du système
$$E_{\text{totale}} = E_{\text{c,macro}} + E_{\text{p,macro}} + U$$

Si le système est au repos à l'échelle macroscopique ($\Delta E_{\text{c,macro}} = 0$ et $\Delta E_{\text{p,macro}} = 0$), alors :
$$\Delta E_{\text{totale}} = \Delta U$$

### Convention des signes (grandeurs algébriques)
- Énergie **reçue / gagnée** par le système : $W > 0$ ou $Q > 0$
- Énergie **céder / perdue** par le système : $W < 0$ ou $Q < 0$
- Si le système est **isolé** : $\Delta U = W + Q = 0$


## Formules & Propriétés

> [!theorem] Énoncé du Premier Principe
> $$\Delta U = W + Q$$

### Cas des systèmes incompressibles (solides et liquides)
Pour un système incompressible ou de volume constant, le travail mécanique des forces de pression est nul ($W = 0$). 

La variation d'énergie interne dépend uniquement du transfert thermique $Q$ :
$$\Delta U = Q = m \cdot c \cdot \Delta T = C \cdot \Delta T$$

- $m$ : masse du système ($\text{kg}$)
- $c$ : capacité thermique massique ($\text{J}\cdot\text{K}^{-1}\cdot\text{kg}^{-1}$)
- $C = m \cdot c$ : capacité thermique du système ($\text{J}\cdot\text{K}^{-1}$)
- $\Delta T = T_{\text{finale}} - T_{\text{initiale}}$ : variation de température ($\text{K}$ ou $^\circ\text{C}$)


## Liens avec les Mathématiques

- [[Fonction exponentielle et logarithme népérien]] *(pour la résolution des évolutions thermiques)*


## Concepts liés

- [[Modèle du gaz parfait]]
- [[Transferts thermiques, résistance et loi de Newton]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

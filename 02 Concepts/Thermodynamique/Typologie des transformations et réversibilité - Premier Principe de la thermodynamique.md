---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/transformations
MOC:
  - "[[MOC Transformations]]"
date_creation: 2026-09-09
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---

# Typologie des transformations et réversibilité - Premier Principe de la thermodynamique

> [!info] Définition courte
> La **typologie des transformations** classe les évolutions thermodynamiques selon les contraintes extérieures imposées (pression, volume, température, chaleur) et définit les conditions nécessaires pour qu'une évolution soit réversible.


## 1. Bilan du Premier Principe selon la transformation

Le premier principe s'écrit $\Delta U = Q + W$ (avec $W = -\int P \, dV$).

- **Transformation Isobare ($P = \text{constante}$)** :
  $$Q_P = C_P \Delta T, \qquad W = -P \Delta V$$
- **Transformation Isochore ($V = \text{constante}$)** :
  $$W = 0 \implies \Delta U = Q_V = C_V \Delta T$$
- **Transformation Isotherme ($T = \text{constante}$)** :
  $$\Delta U = 0 \implies Q = -W = nRT \ln\left(\frac{V_F}{V_0}\right) \quad (\text{pour un gaz parfait})$$
- **Transformation Adiabatique ($Q = 0$)** :
  $$\Delta U = W$$


## 2. Classification selon le déroulement temporel

- **Transformation irréversible** : Évolution spontanée, rapide ou brutale au cours de laquelle le système passe par des états intermédiaires hors équilibre.
- **Transformation quasi-statique** : Évolution suffisamment lente pour que le système passe par une suite continue d'états de quasi-équilibre à chaque instant.
- **Transformation réversible** : Transformation quasi-statique pouvant être inversée par une modification infinitésimale des contraintes extérieures, ramenant le système et le milieu extérieur dans leurs états initiaux exacts.

> [!warning] Attention
> Toute transformation réversible est quasi-statique, mais la réciproque n'est pas vraie.


## 3. Causes d'irréversibilité

L'irréversibilité d'un processus est engendrée par :
- Les frottements mécaniques ou fluides.
- Les transferts thermiques à travers une différence finie de température.
- Le mélange spontané de deux substances.
- L'effet Joule au sein d'un conducteur.
- Les déformations inélastiques ou plastiques.
- Les réactions chimiques spontanées.


## Concepts liés

- [[Premier principe de la thermodynamique]]
- [[Détentes de Joule (Joule-Gay-Lussac et Joule-Thomson)]]
- [[Diagramme de Clapeyron]]
- [[Énergie interne et formes d'énergie]]
- [[Travail des forces de pression et transfert thermique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
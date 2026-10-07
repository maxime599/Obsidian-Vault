---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/transformations
  - thermodynamique/principe
  - flashcards/thermodynamique
MOC:
  - "[[MOC Transformations]]"
  - "[[MOC Principe]]"
date_creation: 2026-09-09
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---

# Typologie des transformations et réversibilité - Premier Principe de la thermodynamique

> [!info] Définition courte
> La **typologie des transformations** classe les évolutions thermodynamiques selon les contraintes extérieures imposées (pression, volume, température, chaleur) et définit les conditions nécessaires pour qu'une évolution soit réversible.


## 1. Bilan du Premier Principe selon la transformation

Le premier principe s'écrit :: $\Delta U = Q + W$ (avec $W = -\int P \, dV$).
<!--SR:!2026-10-19,16,290-->

- **Transformation Isobare ($P = \text{constante}$)** ::$$Q_P = C_P \Delta T, \qquad W = -P \Delta V$$
<!--SR:!2026-10-13,10,270-->
- **Transformation Isochore ($V = \text{constante}$)** :: $$W = 0 \implies \Delta U = Q_V = C_V \Delta T$$
<!--SR:!2026-10-15,12,270-->
- **Transformation Isotherme ($T = \text{constante}$)** :: $$\Delta U = 0 \implies Q = -W = nRT \ln\left(\frac{V_F}{V_0}\right) \quad (\text{pour un gaz parfait})$$
<!--SR:!2026-10-13,7,270-->
- **Transformation Adiabatique ($Q = 0$)** :: $$\Delta U = W$$
<!--SR:!2026-10-18,15,290-->


## 2. Classification selon le déroulement temporel

- **Transformation irréversible** ::: Évolution spontanée, rapide ou brutale au cours de laquelle le système passe par des états intermédiaires hors équilibre.
<!--SR:!2026-10-08,5,230!2026-10-17,14,290-->
- **Transformation quasi-statique** ::: Évolution suffisamment lente pour que le système passe par une suite continue d'états de quasi-équilibre à chaque instant.
<!--SR:!2026-10-14,11,270!2026-10-13,7,270-->
- **Transformation réversible** ::: Transformation quasi-statique pouvant être inversée par une modification infinitésimale des contraintes extérieures, ramenant le système et le milieu extérieur dans leurs états initiaux exacts.
<!--SR:!2026-10-15,12,270!2026-10-13,10,270-->

> [!warning] Attention
> Toute transformation réversible est ==quasi-statique==, mais la réciproque n'est pas vraie.
<!--SR:!2026-10-19,16,290-->


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
- [[Second Principe de la thermodynamique et énoncés fondamentaux]]
- [[Calcul de la variation d'entropie]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
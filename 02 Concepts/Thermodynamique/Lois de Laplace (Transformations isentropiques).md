---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
  - thermodynamique/gaz
MOC:
  - "[[MOC Gaz]]"
date_creation: 2026-09-18
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
---

# Lois de Laplace (Transformations isentropiques)

> [!info] Définition courte
> Les **lois de Laplace** relient les variables d'état ($P, V, T$) d'un gaz parfait subissant une transformation **adiabatique et réversible** (isentropique), sous réserve que le coefficient $\gamma = \frac{C_p}{C_v}$ soit constant.


## 1. Hypothèses fondamentales

Les relations de Laplace s'appliquent strictement si les 3 conditions suivantes sont réunies :
?
1. Le fluide étudié est un **gaz parfait**.
2. La transformation est **adiabatique** ($\delta Q = 0$) et **réversible** (soit une transformation isentropique $\Delta S = 0$).
3. Le coefficient isentropique $\gamma = \frac{C_p}{C_v}$ est **constant** sur l'intervalle de température considéré.
<!--SR:!2026-10-17,14,290-->


## 2. Démonstration de la relation (Dégonflage d'un pneu)

Soit une détente adiabatique quasi-statique de l'air (gaz parfait) contenu dans une chambre à air :
- Premier principe : $\delta Q = C_V \, dT + P \, dV = 0$
- Différentiation de l'équation d'état $V = \frac{nRT}{P}$ :
  $$dV = \frac{nR}{P} \, dT - \frac{nRT}{P^2} \, dP$$
- En substituant $C_V = \frac{nR}{\gamma - 1}$ :
  $$\left( \frac{nR}{\gamma - 1} \right) dT + P \left( \frac{nR}{P} dT - \frac{nRT}{P^2} dP \right) = 0$$
  $$\left( \frac{\gamma nR}{\gamma - 1} \right) dT - \frac{nRT}{P} dP = 0$$
- Après séparation des variables et simplification par $nRT$ :
  $$\frac{dT}{T} = \frac{\gamma - 1}{\gamma} \frac{dP}{P}$$
- Par intégration entre l'état initial $(T_i, P_i)$ et l'état final $(T_f, P_f)$ :
  $$T_f = T_i \left( \frac{P_f}{P_i} \right)^{\frac{\gamma - 1}{\gamma}}$$


## 3. Formulations des trois lois de Laplace

Selon le couple de variables retenu :

- **Relation $(P, V)$** ::$$P V^\gamma = \text{constante}$$
<!--SR:!2026-10-17,14,290-->
- **Relation $(T, V)$** ::$$T V^{\gamma-1} = \text{constante}$$
<!--SR:!2026-10-16,10,270-->
- **Relation $(P, T)$** ::$$P^{1-\gamma} \cdot T^\gamma = \text{constante} \quad \iff \quad P^{\frac{1-\gamma}{\gamma}} \cdot T = \text{constante}$$
<!--SR:!2026-10-13,7,250-->


## Concepts liés

- [[Modèle du gaz parfait, lois de Joule et relation de Mayer]]
- [[Typologie des transformations et réversibilité - Premier Principe de la thermodynamique]]
- [[Comparaison des détentes isotherme et adiabatique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
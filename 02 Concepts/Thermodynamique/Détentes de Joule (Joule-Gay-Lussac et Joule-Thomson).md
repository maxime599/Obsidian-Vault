---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/thermodynamique
MOC:
date_creation: 2026-09-09
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---

# Détentes de Joule (Joule-Gay-Lussac et Joule-Thomson)

> [!info] Définition courte
> Les **détentes de Joule** sont deux transformations irréversibles fondamentales caractérisant le comportement des fluides lors d'une expansion : la détente libre dans le vide (isoénergétique) et la détente pécoulante à travers un obstacle (isenthalpique).


## 1. Détente de Joule-Gay-Lussac (détente libre dans le vide)

Un gaz contenu dans un compartiment rigide ($T_0, P_0$) se détend vers un second compartiment vide. L'ensemble est entouré de parois rigides et calorifugées.

- **Conditions** :
  - Parois calorifugées : $Q = 0$
  - Parois rigides : $W = 0$
- **Bilan du 1ᵉʳ principe** :
  Formule de la détente de Joule-Gay-Lussac (détente libre dans le vide)$$\Delta U = W + Q = 0$$
  La détente de Joule-Gay-Lussac est :: **isoénergétique** ($\Delta U = 0$).
<!--SR:!2026-09-20,1,190-->
- **Cas du gaz parfait** : Comme $dU = C_V dT$, $\Delta U = 0 \implies \Delta T = 0$. 
La détente d'un gaz parfait s'effectue sans :: variation de température ($T_{\text{final}} = T_0$).
<!--SR:!2026-09-22,4,270-->


## 2. Détente de Joule-Thomson (détente à travers un tampon poreux)

Un fluide s'écoule en régime permanent à travers un milieu poreux d'une zone à haute pression $P_0$ vers une zone à basse pression $P_1 < P_0$. Le détendeur est calorifugé ($Q = 0$).

- **Travail des forces de pression** :
  - Côté haute pression : le fluide reçoit le travail $W_0 = P_0 V_0$.
  - Côté basse pression : le fluide fournit le travail $W_1 = -P_1 V_1$.
- **Bilan du 1ᵉʳ principe** de la détente de Joule-Thomson :: $$\Delta U = U_1 - U_0 = W_0 + W_1 = P_0 V_0 - P_1 V_1$$$$U_1 + P_1 V_1 = U_0 + P_0 V_0$$
<!--SR:!2026-09-21,2,190-->
- **Enthalpie (==$H = U + PV$==)** :
  $$H_1 = H_0 \implies \Delta H = 0$$
  La détente de Joule-Thomson est **isenthalpique**.
- **Cas du gaz parfait** : Selon la 2ᵈᵉ loi de Joule, $dH = C_P dT$. Ainsi, ==$\Delta H = 0 \implies \Delta T = 0$.==
<!--SR:!2026-09-21,3,250!2026-09-21,3,250-->


## Concepts liés

- [[Modèle du gaz parfait, lois de Joule et relation de Mayer]]
- [[Typologie des transformations et réversibilité - Premier Principe de la thermodynamique]]
- [[Énergie interne et formes d'énergie]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC

```

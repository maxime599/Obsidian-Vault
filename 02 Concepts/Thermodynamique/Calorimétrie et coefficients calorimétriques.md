---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/calorimetrie
  - flashcards/thermodynamique
MOC:
  - "[[MOC Calorimetrie]]"
date_creation: 2026-09-09
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---

# Calorimétrie et coefficients calorimétriques

> [!info] Définition courte
> La **calorimétrie** est l'ensemble des techniques expérimentales et théoriques de mesure des transferts thermiques $Q$, s'appuyant sur les capacités thermiques et les coefficients thermodynamiques des corps.


## 1. Transfert thermique et capacité thermique

Pour une transformation infinitésimale faisant varier la température du système de $dT$, l'élément de chaleur échangé vaut :
?
$$\delta Q = C \, dT$$
- $C$ : **capacité thermique** du système en $\text{J}\cdot\text{K}^{-1}$.
- **Capacité thermique massique** $c$ ($\text{J}\cdot\text{K}^{-1}\cdot\text{kg}^{-1}$) : $c = \frac{C}{m}$
- **Capacité thermique molaire** $C_m$ ($\text{J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$) : $C_m = \frac{C}{n}$
<!--SR:!2026-11-11,38,290-->

> [!note] Transformations particulières
> - À pression constante : $\delta Q_P = C_P \, dT$
> - À volume constant : $\delta Q_V = C_V \, dT$
> - Pour les solides et liquides (incompressibles) : $C_P \approx C_V$.


## 2. Bilan calorimétrique

Pour un système fermé adiabatique (ou isolé) subissant un échange thermique entre plusieurs sous-systèmes sans travail mécanique ($W = 0$) ::$$\sum Q_i = 0$$
<!--SR:!2026-10-08,5,170-->

- *Exemple avec un calorimètre de capacité $C_{\text{cal}}$ contenant une masse $m_1$ d'eau à $\theta_1$ mélangée à une masse $m_2$ d'eau à $\theta_2$* :
  $$(m_1 c_{\text{eau}} + C_{\text{cal}})(\theta_F - \theta_1) + m_2 c_{\text{eau}} (\theta_F - \theta_2) = 0$$


## 3. Coefficients calorimétriques (thermodynamiques)

Pour une transformation infinitésimale décrivant la variation de deux variables d'état, l'échange thermique $\delta Q$ s'exprime sous forme différentielle :
?
- **En variables $(T, V)$** :  $$\delta Q = C_V \, dT + l \, dV$$
- **En variables $(T, P)$** :  $$\delta Q = C_P \, dT + h \, dP$$
$C_V$, $C_P$, $l$ (chaleur latente de dilatation) et $h$ (chaleur latente de compression) sont appelés les **coefficients calorimétriques**.
<!--SR:!2026-10-20,17,250-->


## Concepts liés

- [[Travail des forces de pression et transfert thermique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

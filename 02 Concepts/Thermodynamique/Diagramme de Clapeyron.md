---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/diagrammes
MOC:
  - "[[MOC Diagrammes]]"
date_creation: 2026-09-09
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---

# Diagramme de Clapeyron

> [!info] Définition courte
> Le **diagramme de Clapeyron** est la représentation graphique de l'état d'un fluide dans le plan $(P, V)$, permettant de tracer les trajectoires des transformations thermodynamiques et d'évaluer le travail mécanique.


## 1. Représentation des transformations dans le plan $(P, V)$

Chaque état d'équilibre d'un système est représenté par un point de coordonnées $(V, P)$. Une transformation quasi-statique forme une courbe continue reliant l'état initial à l'état final.

- **Interprétation du travail** : Le travail des forces de pression $W = -\int_{V_A}^{V_B} P \, dV$ correspond à l'aire sous la courbe $P(V)$ au signe près.


## 2. Allure des transformations usuelles

- **Isochore ($dV = 0$)** : Segment de droite **vertical** ($W = 0$).
- **Isobare ($dP = 0$)** : Segment de droite **horizontal** ($W = -P \Delta V$).
- **Isotherme ($dT = 0$)** : Hyperbole d'équation $P = \frac{nRT_0}{V}$.
  - Pente en un point : $\left(\frac{\partial P}{\partial V}\right)_T = -\frac{P}{V}$
- **Adiabatique ($\delta Q = 0$)** : Courbe d'équation de Laplace $P V^\gamma = \text{constante}$.
  - Pente en un point : $\left(\frac{\partial P}{\partial V}\right)_{\text{adiab}} = -\gamma \frac{P}{V}$


## 3. Comparaison Pente Isotherme vs Adiabatique

Comme le coefficient isentropique $\gamma > 1$ pour tout gaz :

$$\left|-\gamma \frac{P}{V}\right| > \left|-\frac{P}{V}\right|$$

> [!important] Règle de la pente
> En un point d'intersection $(P_0, V_0)$ donné dans le plan de Clapeyron, la courbe **adiabatique possède une pente plus raide** que la courbe isotherme.


## Concepts liés

- [[Travail des forces de pression et transfert thermique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
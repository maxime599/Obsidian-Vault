---
type: concept
matière: physique
tags:
  - concepts
  - physique
  - physique/ondes
  - physique/lumière
  - physique/quantique
MOC:
  - "[[MOC Ondes]]"
  - "[[MOC Lumière]]"
  - "[[MOC Quantique]]"
date_creation: 2026-07-29
---
# Effet photoélectrique et modèle du photon

> [!info] Définition courte
> L'**effet photoélectrique** est l'émission d'électrons d'un matériau sous l'effet d'un rayonnement électromagnétique.



## Explication intuitive

En physique classique (modèle ondulatoire), la lumière était assimilée à une onde continue. Cependant, ce modèle était incapable d'expliquer l'existence d'une fréquence seuil en dessous de laquelle aucun électron n'est éjecté, quelle que soit l'intensité lumineuse.

Albert Einstein a repris le modèle particulaire en supposant que la lumière est constituée d'un flux de "paquets d'énergie" indépendants : les **photons**. Chaque photon interagit individuellement avec un seul électron.



## Fonctionnement et principes

### 1. Propriétés expérimentales
* **Fréquence seuil ($\nu_s$)** : Pour un matériau donné, l'effet photoélectrique ne se produit qu'à partir d'une fréquence minimale notée $\nu_s$, quelle que soit l'intensité du rayonnement.
* **Spécificité du matériau** : La fréquence seuil dépend uniquement de la nature du matériau étudié.
* **Longueur d'onde seuil ($\lambda_s$)** : On associe à chaque fréquence seuil une longueur d'onde seuil dans le vide :
  $$\lambda_s = \frac{c}{\nu_s}$$
  L'effet photoélectrique se manifeste uniquement pour une longueur d'onde inférieure ou égale à $\lambda_s$.

### 2. Caractéristiques du photon
Le photon est la particule de lumière associée au rayonnement :
* **Masse au repos** : $m = 0$
* **Charge électrique** : $q = 0\text{ C}$
* **Vitesse dans le vide** : $c = 3{,}00 \times 10^8\text{ m}\cdot\text{s}^{-1}$
* **Énergie** : $E = h\nu$
* **Constante de Planck** : $h = 6{,}63 \times 10^{-34}\text{ J}\cdot\text{s}$



## Exemples

* **Césium** : $\nu_s = 4{,}62 \times 10^{14}\text{ Hz}$ et $\lambda_s = 650\text{ nm}$.
* **Zinc** : $\nu_s = 8{,}11 \times 10^{14}\text{ Hz}$ et $\lambda_s = 370\text{ nm}$. Un rayonnement de fréquence supérieure à $8{,}11 \times 10^{14}\text{ Hz}$ (ou de longueur d'onde inférieure à $370\text{ nm}$) provoque l'effet photoélectrique.



## Formules / Propriétés

> [!theorem] Énoncés formels
> * **Énergie du photon** :
>   $$E = h\nu$$
> * **Condition de déclenchement** :
>   $$\nu \ge \nu_s \iff \lambda \le \lambda_s$$



## Concepts liés

* [[Bilan énergétique et applications de l'effet photoélectrique]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

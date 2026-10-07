---
type: concept
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
  - elen1/composants
MOC:
  - "[[MOC Composants]]"
date_creation: 2026-09-21
Ressources:
---

# Composants réactifs : Condensateur et Inductance

> [!info] Définition courte
> Le **condensateur** et l'**inductance** sont deux dipôles réactifs passifs capables d'emmagasiner et de restituer de l'énergie électrique : sous forme d'énergie électrostatique pour le condensateur et d'énergie magnétique pour l'inductance.


## 1. Le Condensateur

Un condensateur est constitué de deux armatures conductrices séparées par un milieu isolant (diélectrique).
Sa fonction principale est de stocker des charges électriques.

- **Charge électrique ($Q$)** : La quantité de charge accumulée sur ses armatures est proportionnelle à la tension à ses bornes, $Q =$::$$Q = C \cdot U$$
<!--SR:!2026-10-18,15,230-->
  - $Q$ : charge en coulombs ($\text{C}$)
  - $U$ : tension en volts ($\text{V}$)
  - $C$ : capacité du condensateur en farads ($\text{F}$)

- **Relation courant-tension en régime quelconque** :
  Comme l'intensité du courant correspond au débit de charge ($i = \frac{dq}{dt}$) : $i_C(t) =$ :: $C \cdot \frac{du_C(t)}{dt}$
<!--SR:!2026-11-06,31,270-->

> [!note] Propriété de continuité
> Il ne peut **pas y avoir de ==variation brusque de tension==** aux bornes d'un condensateur ($u_C$ est une fonction continue du temps).
<!--SR:!2026-10-08,12,270-->


## 2. L'Inductance (Bobine)

L'inductance est un composant formé d'un enroulement de fil de cuivre (bobine).
Sa fonction principale est de stocker de l'énergie sous forme magnétique et de la restituer au circuit.

- **Grandeur caractéristique ($L$)** :: L'inductance s'exprime en henrys ($\text{H}$).
<!--SR:!2026-10-11,12,210-->
- **Relation tension-courant en régime quelconque** ::$$u_L(t) = L \cdot \frac{di(t)}{dt}$$
<!--SR:!2026-10-17,14,230-->

> [!note] Propriété de continuité
> Il ne peut **pas y avoir de variation brusque d'intensité** traversant une inductance ($i_L$ est une fonction continue du temps).


## Concepts liés

- [[Analyse indicielle et circuit RC du premier ordre]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]
- [[Circuit RC - Charge et décharge]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

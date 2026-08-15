---
type: concept
matière: physique
tags:
  - concepts
  - physique
  - physique/fluides
MOC:
  - "[[MOC Fluides]]"
date_creation: 2026-07-29
---
# Poussée d'Archimède

> [!info] Définition courte
> La **poussée d'Archimède** est la force verticale orientée vers le haut subie par tout corps totalement ou partiellement immergé dans un fluide au repos ou en mouvement.



## Explication intuitive

Lorsqu'un objet est plongé dans un fluide (eau, air, etc.), le fluide exerce des forces pressantes sur toute sa surface. 

Puisque la pression augmente avec la profondeur ($\Delta P = \rho \cdot g \cdot \Delta z$), la pression exercée sur la partie inférieure de l'objet est plus grande que celle exercée sur sa partie supérieure ($P_B > P_A$). Les forces pressantes exercées vers le haut sont donc plus intenses que celles exercées vers le bas ($F_B > F_A$). La résultante de toutes ces forces est une force unique dirigée vers le haut : la poussée d'Archimède.



## Fonctionnement et principes

### 1. Origine microscopique / statique
* **Force pressante** : Sur une surface $S$, la force pressante s'exprime par :
  $$F = P \cdot S$$
* **Gradient de pression** : D'après la loi fondamentale de la statique des fluides, la différence de pression entre deux points s'écrit :
  $$\Delta P = \rho \cdot g \cdot \Delta z$$
* **Résultante** : L'imbrication des forces pressantes sur l'ensemble de la surface crée une force globale verticale dirigée vers le haut.

### 2. Caractéristiques et propriétés
* **Direction et sens** : Légèrement opposée au champ de pesanteur $\vec{g}$ (verticale, vers le haut).
* **Dépendances** :
  * Dépend uniquement de la masse volumique du fluide $\rho_{\text{fluide}}$ et du volume immergé $V$.
  * Plus le corps est volumineux ou plus le fluide est dense, plus la poussée est grande.
* **Indépendances** : La masse de l'objet, sa forme, son orientation et sa profondeur d'immersion (s'il est totalement immergé) n'influencent pas la valeur de la poussée.



## Formules / Propriétés

> [!theorem] Énoncés formels
> * **Expression vectorielle** :
>   $$\vec{\Pi} = -m_{\text{fluide}} \cdot \vec{g} = -\rho_{\text{fluide}} \cdot V \cdot \vec{g}$$
> * **Norme de la poussée d'Archimède** :
>   $$\Pi = \rho_{\text{fluide}} \cdot V \cdot g$$
>   * $\Pi$ : valeur de la poussée d'Archimède ($\text{N}$)
>   * $\rho_{\text{fluide}}$ : masse volumique du fluide ($\text{kg}\cdot\text{m}^{-3}$)
>   * $V$ : volume du fluide déplacé / volume immergé ($\text{m}^3$)
>   * $g$ : intensité du champ de pesanteur ($\text{N}\cdot\text{kg}^{-1}$ ou $\text{m}\cdot\text{s}^{-2}$)



## Concepts liés

* [[Dynamique des fluides et relation de Bernoulli]]
* [[Vecteur normal et équation cartésienne d'un plan]]
## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

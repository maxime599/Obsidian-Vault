---
type: concept
matière: physique
tags:
  - concepts
  - physique/mecanique
  - physique
  - math/vecteurs
MOC:
  - "[[MOC Mécanique]]"
  - "[[MOC Vecteurs]]"
  - "[[MOC Dérivation]]"
date_creation: 2026-07-28
---
# Cinématique et Deuxième loi de Newton

> [!info] Définition courte
> La **cinématique** décrit le mouvement d'un point matériel à l'aide des vecteurs position, vitesse et accélération. La **seconde loi de Newton** relie ces grandeurs cinématiques aux forces extérieures appliquées au système.



## Vecteurs de la cinématique

Dans un repère cartésien $(O, \vec{i}, \vec{j}, \vec{k})$ :

1. **Vecteur position** : $\vec{OG}(t) = x(t)\vec{i} + y(t)\vec{j} + z(t)\vec{k}$
2. **Vecteur vitesse** (dérivée de la position par rapport au temps) :
   $$\vec{v}(t) = \frac{d\vec{OG}}{dt} \implies \begin{cases} v_x = \frac{dx}{dt} \\ v_y = \frac{dy}{dt} \\ v_z = \frac{dz}{dt} \end{cases} \quad \text{et} \quad v = \sqrt{v_x^2 + v_y^2 + v_z^2}$$
3. **Vecteur accélération** (dérivée de la vitesse par rapport au temps) :
   $$\vec{a}(t) = \frac{d\vec{v}}{dt} = \frac{d^2\vec{OG}}{dt^2} \implies \begin{cases} a_x = \frac{dv_x}{dt} = \frac{d^2x}{dt^2} \\ a_y = \frac{dv_y}{dt} = \frac{d^2y}{dt^2} \\ a_z = \frac{dv_z}{dt} = \frac{d^2z}{dt^2} \end{cases}$$



## Repère de Frenet (Mouvement circulaire)

Dans un repère local de Frenet $(M, \vec{\tau}, \vec{n})$ :
$$\vec{a} = a_\tau \vec{\tau} + a_n \vec{n} \quad \text{avec} \quad a_\tau = \frac{dv}{dt} \quad \text{et} \quad a_n = \frac{v^2}{R}$$
* Pour un **mouvement circulaire uniforme** ($v = \text{constante}$) : $a_\tau = 0$ et l'accélération est uniquement centripète ($a = a_n = \frac{v^2}{R}$).



## Seconde loi de Newton

> [!theorem] Énoncé
> Dans un référentiel galiléen, la somme vectorielle des forces extérieures exercées sur un système de masse $m$ constante est égale au produit de sa masse par l'accélération de son centre de masse :
> $$\sum \vec{F}_{\text{ext}} = m \cdot \vec{a}_G$$



## Concepts liés


- [[Bases et repères de l'espace]]
- [[Nombre dérivé et équation de la tangente]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
matière: physique
tags:
  - concepts
  - physique/acoustique
  - physique/ondes
  - physique
MOC:
  - "[[MOC Ondes]]"
  - "[[MOC Acoustique]]"
date_creation: 2026-07-28
---
# Niveau d'intensité sonore et atténuation

> [!info] Définition courte
> L'**intensité sonore** $I$ mesure la puissance acoustique transportée par une onde sonore par unité de surface ($W \cdot m^{-2}$). Le **niveau d'intensité sonore** $L$ exprime cette grandeur sur une échelle logarithmique en décibels ($dB$).


## Explication intuitive

Une onde sonore transporte de l'énergie sans transport de matière. Comme la sensibilité de l'oreille humaine couvre une plage d'intensités extrêmement vaste (du chuchotement au réacteur d'avion), on utilise une **échelle logarithmique** (la fonction log) pour représenter plus fidèlement la sensation auditive.

- Quand l'intensité sonore $I$ est **doublée**, le niveau sonore $L$ augmente de **$3 \text{ dB}$**.
- Les **intensités sonores $I$** provenant de plusieurs sources s'additionnent, mais **pas leurs niveaux d'intensité $L$**.



## Formules et Propriétés

> [!theorem] Formules fondamentales
> - **Niveau d'intensité sonore $L$** :
>   $$L = 10 \cdot \log\left(\frac{I}{I_0}\right) \quad \text{et} \quad I = I_0 \cdot 10^{\frac{L}{10}}$$
>   *avec $I_0 = 1{,}0 \times 10^{-12} \text{ W}\cdot\text{m}^{-2}$ (seuil d'audibilité).*
>
> - **Seuil de douleur** : $I \approx 1{,}0 \text{ W}\cdot\text{m}^{-2} \implies L \approx 120 \text{ dB}$.

### Atténuation d'un signal sonore ($A$)
L'atténuation $A$ (en dB) correspond à la diminution du niveau d'intensité sonore :
$$A = L_1 - L_2$$

1. **Atténuation géométrique** : due à l'éloignement de la source. Pour une onde sphérique ($S = 4\pi d^2$), l'énergie se répartit sur une surface plus grande : le niveau $L$ diminue de **$6 \text{ dB}$** chaque fois que la distance $d$ double.
2. **Atténuation par absorption** : due à l'interposition d'un matériau isolant. Dépend de la nature du matériau, de son épaisseur et de la fréquence de l'onde.



## Exemple d'application

Si deux enceintes identiques émettent chacune un son de niveau $L_1 = 70 \text{ dB}$ au même endroit :
1. Calcul de l'intensité d'une enceinte : $I_1 = I_0 \cdot 10^{70/10} = 10^{-12} \times 10^7 = 10^{-5} \text{ W}\cdot\text{m}^{-2}$.
2. Intensité totale : $I_{\text{tot}} = 2 \times I_1 = 2 \times 10^{-5} \text{ W}\cdot\text{m}^{-2}$.
3. Niveau sonore total : $L_{\text{tot}} = 10 \cdot \log\left(\frac{2 \times 10^{-5}}{10^{-12}}\right) = 70 + 10\log(2) \approx 73 \text{ dB}$.



## Concepts liés

- [[Diffraction des ondes]]
- [[Interférences ondulatoires]]
- [[Effet Doppler]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

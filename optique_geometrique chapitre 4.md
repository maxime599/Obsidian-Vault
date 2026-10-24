### CHAPITRE IV : Image formée par un système optique

---

### I. Le stigmatisme

#### 1° Le stigmatisme rigoureux
Un système est dit **stigmatique** pour un point objet $A$ et un point image $A'$, si tout rayon issu de $A$ converge vers $A'$ à la sortie de ce système.

*   **Cas du stigmatisme :** Tous les rayons issus de $A$ passent exactement par $A'$ (Image stigmatique).
*   **Cas sans stigmatisme :** Les rayons ne convergent pas en un point unique (Image floue).
*   **Exemple de stigmatisme rigoureux :** Le **miroir plan**. Quel que soit le rayon issu de $A$, le miroir donne un rayon réfléchi dont le prolongement passe par $A'$.

#### 2° Le stigmatisme approché
Le stigmatisme rigoureux n'est pas toujours indispensable, en raison de la sensibilité limite des détecteurs :
*   Structure cristalline de l'œil : $\le 5\,\mu\text{m}$
*   Pellicule photo : $10 \text{ à } 100\,\mu\text{m}$

Un système optique présente un **stigmatisme approché** pour un couple de points $A$ et $A'$, si tout rayon issu de $A$ passe au voisinage de $A'$ après avoir traversé le système. L'écart n'est pas sensible au niveau du récepteur.

#### Conditions du stigmatisme approché : Conditions de Gauss
1. Rayons lumineux proches de l'axe optique.
2. Rayons lumineux faiblement inclinés sur l'axe (angles d'incidence petits).

Un système optique centré utilisé dans les conditions de Gauss est dit **aplanétique** : l'image d'un objet plan perpendiculaire à l'axe optique est plane et perpendiculaire à l'axe optique.

#### Condition d'ABBE
$$n \cdot \overline{AB} \cdot \sin(u) = n' \cdot \overline{A'B'} \cdot \sin(u')$$

*(Où $\overline{AB}$ et $\overline{A'B'}$ sont des grandeurs algébriques positives ou négatives suivant l'orientation de l'axe).*

Dans les conditions de Gauss (approximation des petits angles en radians) :
$$u \text{ et } u' \text{ petits} \implies \sin(u) \approx u \quad \text{et} \quad \sin(u') \approx u'$$

$$n \cdot \overline{AB} \cdot u = n' \cdot \overline{A'B'} \cdot u'$$

*   **Grandissement transversal :**
    $$\gamma = \frac{\overline{A'B'}}{\overline{AB}}$$

*   **Grossissement angulaire :**
    $$G = \frac{u'}{u}$$

*   **Relation entre grandissement et grossissement :**
    $$\gamma \cdot G = \frac{n}{n'}$$

---

### II. Nature de l'objet et de l'image dans un système optique

Un **système optique** est un ensemble de dioptres et de miroirs.

#### 1° Cas d'objets ponctuels
*   **Objet réel / Image réelle :** Les rayons incidents divergent à partir de $A$ (espace objet réel) et les rayons émergents convergent en $A'$ (espace image réel).
*   **Objet réel / Image virtuelle :** Les rayons émergents divergent ; leurs prolongements se coupent en $A'$.
*   **Objet virtuel / Image réelle :** Les rayons incidents convergent vers $A$ (derrière le système) ; les rayons émergents convergent en $A'$.
*   **Objet virtuel / Image virtuelle :** Les incidents convergent vers $A$ et les émergents divergent depuis $A'$.

D'après le **principe de retour inverse de la lumière**, $A$ et $A'$ sont interchangeables. On dit que $A$ et $A'$ sont des **points conjugués** par le système optique.

#### 2° Les foyers d'un système optique
*   **Foyer image ($F'$) :** Lorsque le faisceau incident arrive parallèle à l'axe optique sur un système optique dans les conditions de Gauss, les rayons émergents convergent en un point appelé foyer image $F'$.
    $$\text{Objet } A \text{ situé à l'infini} \longrightarrow \text{Image } A' \text{ située au foyer image } F'$$
*   **Foyer objet ($F$) :** Les rayons issus du foyer objet $F$ émergent du système parallèles à l'axe optique.
    $$\text{Objet } A \text{ situé au foyer } F \longrightarrow \text{Image } A' \text{ située à l'infini}$$

---

### III. Miroir plan - Miroir sphérique

#### 1° Miroir sphérique
*   $S$ : Sommet du miroir
*   $C$ : Centre de courbure du miroir
*   **Miroir concave :** $\overline{SC} < 0$
*   **Miroir convexe :** $\overline{SC} > 0$

##### Relation de conjugaison (avec origine au sommet)
$$\frac{1}{\overline{SA}} + \frac{1}{\overline{SA'}} = \frac{2}{\overline{SC}}$$

*(Où $\overline{SC}$ représente le rayon de courbure du miroir).*

##### Positions des foyers $F$ et $F'$
*   Si l'objet $A$ est à l'infini ($\overline{SA} = \infty \implies \frac{1}{\overline{SA}} = 0$), son image est en $F'$ ($\overline{SA'} = \overline{SF'}$).
    $$\frac{1}{\overline{SF'}} = \frac{2}{\overline{SC}} \implies \overline{SF'} = \frac{\overline{SC}}{2}$$
*   Si l'objet est au foyer objet $F$ ($\overline{SA} = \overline{SF}$), son image est à l'infini ($\overline{SA'} = \infty \implies \frac{1}{\overline{SA'}} = 0$).
    $$\frac{1}{\overline{SF}} = \frac{2}{\overline{SC}} \implies \overline{SF} = \frac{\overline{SC}}{2}$$

> **Propriété :** $\overline{SF} = \overline{SF'}$. Les foyers objet et image sont **confondus** pour le miroir sphérique.

##### Construction géométrique
*   $A$ étant situé sur l'axe, son image $A'$ se trouve également sur l'axe.
*   Le rayon issu de $B$ **parallèle à l'axe** se réfléchit en passant par $F$.
*   Le rayon issu de $B$ **passant par $C$** se réfléchit sur lui-même (non dévié).
*   Le rayon issu de $B$ **passant par $F$** se réfléchit parallèlement à l'axe.

##### Grandissement transversal
$$\tan(\alpha) = \frac{\overline{A'B'}}{\overline{SA'}} \quad \text{et} \quad \tan(-\alpha) = \frac{\overline{AB}}{\overline{SA}}$$

$$\frac{\overline{A'B'}}{\overline{SA'}} = -\frac{\overline{AB}}{\overline{SA}} \implies \frac{\overline{A'B'}}{\overline{AB}} = -\frac{\overline{SA'}}{\overline{SA}}$$

$$\gamma = -\frac{\overline{SA'}}{\overline{SA}}$$

#### 2° Miroir plan
Le rayon de courbure d'un miroir plan est infini ($\overline{SC} = \infty$) :
$$\frac{1}{\overline{SA}} + \frac{1}{\overline{SA'}} = 0 \implies \overline{SA} = -\overline{SA'}$$

*   $A$ et $A'$ sont **symétriques** par rapport au miroir.
*   **Grandissement transversal :** $\gamma = 1$

---

### IV. Dioptre sphérique

#### 1° Définition
Surface sphérique séparant deux milieux d'indices $n$ et $n'$, possédant un centre $C$ et un rayon de courbure $R = \overline{SC}$.
*   **Dioptre concave :** Rayon de courbure $R < 0$
*   **Dioptre convexe :** Rayon de courbure $R > 0$

#### 2° Relations de conjugaison
*   **Origine au sommet $S$ :**
    $$\frac{n'}{\overline{SA'}} - \frac{n}{\overline{SA}} = \frac{n' - n}{\overline{SC}}$$

*   **Origine au centre de courbure $C$ :**
    $$\overline{SA} = \overline{CA} - \overline{CS} \quad \text{et} \quad \overline{SA'} = \overline{CA'} - \overline{CS}$$
    $$\frac{n'}{\overline{CA'}} - \frac{n}{\overline{CA}} = \frac{n' - n}{\overline{CS}}$$

#### 3° Foyers $F$ et $F'$
*   **Foyer image $F'$** (objet $A$ à l'infini) :
    $$\frac{n'}{\overline{SF'}} = \frac{n' - n}{\overline{SC}} \implies \overline{SF'} = \frac{n'}{n' - n}\overline{SC} = f' \quad \text{(distance focale image)}$$

*   **Foyer objet $F$** (image $A'$ à l'infini) :
    $$-\frac{n}{\overline{SF}} = \frac{n' - n}{\overline{SC}} \implies \overline{SF} = -\frac{n}{n' - n}\overline{SC} = f \quad \text{(distance focale objet)}$$

*   **Vergence du dioptre ($\Phi$) :**
    $$\Phi = \frac{n'}{\overline{SF'}} = -\frac{n}{\overline{SF}} = \frac{n' - n}{\overline{SC}}$$
    *(Unité : Dioptrie $\delta$ ou $\text{m}^{-1}$)*

> **Remarques :**
> - Les distances focales objet et image sont de signes différents.
> - Les foyers $F$ et $F'$ ne sont **pas symétriques** par rapport au sommet $S$.
> - Les foyers $F$ et $F'$ ne sont **pas conjugués**.

##### Formule de Newton (origine aux foyers)
En posant $\overline{FA} = \sigma$ et $\overline{F'A'} = \sigma'$ :
$$\overline{SA} = \overline{SF} + \overline{FA} = f + \sigma$$
$$\overline{SA'} = \overline{SF'} + \overline{F'A'} = f' + \sigma'$$

$$\text{Formule de Newton : } f \cdot f' = \sigma \cdot \sigma'$$

#### 4° Construction géométrique

##### Dioptre convergent
Un dioptre est **convergent** lorsque sa vergence est positive ($\Phi > 0$), c'est-à-dire quand $\overline{SC}$ et $(n' - n)$ sont de même signe (ex: $\overline{SC} < 0$ et $n > n'$).
*   Les foyers $F$ et $F'$ sont **réels**.
*   Exemple : $AB$ objet réel $\longrightarrow A'B'$ image réelle.

##### Dioptre divergent
Un dioptre est **divergent** lorsque sa vergence est négative ($\Phi < 0$), c'est-à-dire quand $\overline{SC}$ et $(n' - n)$ sont de signes opposés (ex: $\overline{SC} < 0$ et $n' > n$).
*   Les foyers $F$ et $F'$ sont **virtuels**.
*   Exemple : $AB$ objet réel $\longrightarrow A'B'$ image virtuelle.

#### 5° Grandissement et Grossissement

*   **Grandissement transversal ($\gamma$) :**
    $$\gamma = \frac{\overline{A'B'}}{\overline{AB}} = \frac{\overline{CA'}}{\overline{CA}} = \frac{n}{n'} \frac{\overline{SA'}}{\overline{SA}}$$

*   **Relation de Lagrange-Helmholtz :**
    $$\gamma = -\frac{f}{\sigma} = -\frac{\sigma'}{f'}$$

*   **Grossissement ($G$) :**
    Dans les conditions de Gauss :
    $$\tan(u) \approx u \approx -\frac{\overline{SI}}{\overline{SA}} \quad \text{et} \quad \tan(u') \approx u' \approx -\frac{\overline{SI}}{\overline{SA'}}$$
    $$G = \frac{u'}{u} = \frac{\overline{SA}}{\overline{SA'}}$$

*   **Relation remarquable :**
    $$\gamma \cdot G = \frac{n}{n'}$$

---

#### 6° Le dioptre plan
Le rayon de courbure $\overline{SC}$ d'un dioptre plan est infini ($\frac{1}{\overline{SC}} = 0$).

*   **Relation de conjugaison (origine au sommet) :**
    $$\frac{n'}{\overline{SA'}} - \frac{n}{\overline{SA}} = 0 \implies \frac{n'}{\overline{SA'}} = \frac{n}{\overline{SA}}$$

*   **Grandissement transversal :**
    $$\gamma = 1$$

*   **Grossissement :**
    $$G = \frac{n}{n'}$$
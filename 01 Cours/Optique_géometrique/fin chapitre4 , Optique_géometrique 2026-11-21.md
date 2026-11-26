---
semestre:
type de cours:
date: 2026-11-21T11:51:53
End Date: 2026-11-21T13:21:53
Calendar Title: "[[01 Cours/Optique_géometrique/fin chapitre4 , Optique_géometrique 2026-11-21|fin chapitre4 , Optique_géometrique]]"
prof:
tags:
  - cours
  - Optique_géometrique
Concepts:
  - "[[Dioptre sphérique, dioptre plan et vergence]]"
  - "[[Miroir plan et miroir sphérique]]"
Ressources:
  - "[[OPTIQUE GEOMETRIQUE IV.pdf]]"
---

```dataviewjs
let current = dv.current();
let pages = dv.pages(`"${current.file.folder}"`)
  .where(p => p.date)
  .sort(p => p.date, 'asc');

let idx = pages.findIndex(p => p.file.path === current.file.path);
let prev = idx > 0 ? pages[idx - 1] : null;
let next = (idx !== -1 && idx < pages.length - 1) ? pages[idx + 1] : null;

let getCleanLink = (page) => {
  if (!page) return "Aucun";
  let cleanTitle = page.file.name.split(',')[0].trim();
  return `[[${page.file.name}|${cleanTitle}]]`;
};

dv.paragraph(`**Précédent :** ${getCleanLink(prev)} | **Suivant :** ${getCleanLink(next)}`);
```
# fin chapitre4 


## Objectifs

-

## Notes

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

## Exercices


## À retenir
-
## Travail à faire




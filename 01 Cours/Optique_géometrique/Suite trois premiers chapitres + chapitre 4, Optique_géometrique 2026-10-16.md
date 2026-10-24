---
semestre: S1
type de cours: CM
date: 2026-10-16T11:06:09
End Date: 2026-10-16T12:36:09
Calendar Title: "[[01 Cours/Optique_géometrique/Suite trois premiers chapitres + chapitre 4, Optique_géometrique 2026-10-16|Suite trois premiers chapitres + chapitre 4, Optique_géometrique]]"
prof: Zgari
tags:
  - cours
  - Optique_géometrique
Concepts:
  - "[[Principe de Fermat et indépendance des rayons lumineux]]"
  - "[[Lois de Snell-Descartes et réflexion totale]]"
  - "[[Stigmatisme et conditions de Gauss]]"
  - "[[Nature des objets, des images et foyers optiques]]"
Ressources:
  - "[[OPTIQUE GEOMETRIQUE I-II-III.pdf]]"
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
# Suite trois premiers chapitres + chapitre 4

```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```
## Objectifs

-

## Notes

#### VII. Principe de Fermat

> Pour aller d'un point $A$ à un point $B$, la lumière suit, parmi toutes les trajectoires possibles, celle dont le temps de parcours est extrémal (minimal ou maximal).

- Le principe de Fermat permet de montrer que dans un milieu homogène, la lumière se propage de manière rectiligne.
- C'est également à partir du principe de Fermat qu'il est possible de retrouver les lois de Snell-Descartes.
- **Durée du trajet :**

$$T_{AB} = \frac{AI}{v_1} + \frac{IB}{v_2}$$

- La durée dépend de la position du point d'incidence $I$, et en définitive des angles $i_1$ et $i_2$.

---

#### VIII. Indépendance des rayons lumineux

- En un point où plusieurs rayons se croisent, ils ne se modifient pas les uns les autres.
- Le résultat est la somme des effets de chacun d'eux.
- Le phénomène d'interférence n'est **pas** pris en compte par l'optique géométrique.

---

### CHAPITRE III — Réflexion et réfraction de la lumière

#### III. La réflexion

La réflexion de la lumière se produit de deux façons suivant la rugosité de la surface :
- **Surface suffisamment polie :** réflexion spéculaire.
- **Surface rugueuse :** rayons réfléchis dans des directions aléatoires (réflexion diffuse).

*Miroir :* surface polie optiquement recouverte d'un dépôt métallique réfléchissant.

---

#### IV. La réfraction

- Le rayon incident change de direction au passage de l'interface entre deux milieux (ex. passage air/eau).
- **Dioptre :** surface de séparation entre deux milieux transparents d'indices différents.

---

#### V. Les lois de Snell-Descartes

- Lorsqu'un rayon incident arrive sur un miroir, il existe uniquement un rayon réfléchi.
- Lorsqu'un rayon incident arrive sur un dioptre, une partie de la lumière est réfléchie (rayon réfléchi) et une partie est réfractée (rayon réfracté).
![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=17&rect=16,156,254,399|OPTIQUE GEOMETRIQUE I-II-III, p.17]]
##### Définitions géométriques
- **Point d'incidence $I$ :** point d'impact du rayon sur le dioptre.
- **Normale au dioptre :** droite perpendiculaire au dioptre au point d'incidence.
- **Angle d'incidence $i_1$ :** angle entre le rayon incident et la normale au dioptre.
- **Angle de réflexion $r$ :** angle entre le rayon réfléchi et la normale au dioptre.
- **Plan d'incidence :** plan formé par le rayon incident et la normale au dioptre.

##### Les 3 lois de Snell-Descartes
1. **$1^{\text{ère}}$ loi :** Les rayons réfléchis et réfractés sont contenus dans le plan d'incidence.
2. **$2^{\text{e}}$ loi :** L'angle de réflexion est égal à l'angle d'incidence ($r = i_1$).
3. **$3^{\text{e}}$ loi :** La relation entre l'angle d'incidence $i_1$, l'angle de réfraction $i_2$, l'indice $n_1$ du milieu incident et l'indice $n_2$ du milieu de réfraction s'écrit :

$$n_1 \sin(i_1) = n_2 \sin(i_2)$$
![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=18&rect=608,51,894,309|OPTIQUE GEOMETRIQUE I-II-III, p.18]]

---

#### VI. Conséquences des lois de Snell-Descartes

##### Cas $n_1 < n_2$
- Le rayon réfracté existe quel que soit l'angle d'incidence $i_1$.
- Le rayon réfracté se rapproche de la normale ($i_2 < i_1$).
- Le milieu d'indice $n_2$ est dit **plus réfringent**.

##### Cas $n_1 > n_2$
- La réfraction a lieu jusqu'à un angle d'incidence limite $i_l$ tel que $i_2 = 90^\circ$.
- L'**angle limite** est donné par :

$$\sin(i_l) = \frac{n_2}{n_1}$$

- Au-delà de cette valeur limite ($i_1 > i_l$), il n'y a pas de réfraction : c'est le phénomène de **réflexion totale**.

##### Applications de la réflexion totale
- Prisme à réflexion totale (ex. jumelles).
- Guidage de la lumière (ex. fibres optiques).



### CHAPITRE IV : Image formée par un système optique

---

### I. Le stigmatisme

#### 1° Le stigmatisme rigoureux
Un système est dit **stigmatique** pour un point objet $A$ et un point image $A'$, si tout rayon issu de $A$ converge vers $A'$ à la sortie de ce système.
![[OPTIQUE GEOMETRIQUE IV.pdf#page=1&rect=44,52,888,282|OPTIQUE GEOMETRIQUE IV, p.1]]
*   **Cas du stigmatisme :** Tous les rayons issus de $A$ passent exactement par $A'$ (Image stigmatique).
*   **Cas sans stigmatisme :** Les rayons ne convergent pas en un point unique (Image floue).
*   **Exemple de stigmatisme rigoureux :** Le **miroir plan**. Quel que soit le rayon issu de $A$, le miroir donne un rayon réfléchi dont le prolongement passe par $A'$.
![[OPTIQUE GEOMETRIQUE IV.pdf#page=2&rect=71,173,580,463|OPTIQUE GEOMETRIQUE IV, p.2]]
#### 2° Le stigmatisme approché
Le stigmatisme rigoureux n'est pas toujours indispensable, en raison de la sensibilité limite des détecteurs :
*   Structure cristalline de l'œil : $\le 5\,\mu\text{m}$
*   Pellicule photo : $10 \text{ à } 100\,\mu\text{m}$

Un système optique présente un **stigmatisme approché** pour un couple de points $A$ et $A'$, si tout rayon issu de $A$ passe au voisinage de $A'$ après avoir traversé le système. L'écart n'est pas sensible au niveau du récepteur. $A'$ est appelé image virtuelle de $A$.
![[OPTIQUE GEOMETRIQUE IV.pdf#page=3&rect=269,83,637,264|OPTIQUE GEOMETRIQUE IV, p.3]]
#### Conditions du stigmatisme approché : Conditions de Gauss
1. Rayons lumineux proches de l'axe optique.
2. Rayons lumineux faiblement inclinés sur l'axe (angles d'incidence petits).

Un système optique centré utilisé dans les conditions de Gauss est dit **aplanétique** : l'image d'un objet plan perpendiculaire à l'axe optique est plane et perpendiculaire à l'axe optique.
![[OPTIQUE GEOMETRIQUE IV.pdf#page=4&rect=476,132,865,269|OPTIQUE GEOMETRIQUE IV, p.4]]
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
![[OPTIQUE GEOMETRIQUE IV.pdf#page=6&rect=6,82,891,457|OPTIQUE GEOMETRIQUE IV, p.6]]
#### 2° Les foyers d'un système optique
*   **Foyer image ($F'$) :** Lorsque le faisceau incident arrive parallèle à l'axe optique sur un système optique dans les conditions de Gauss, les rayons émergents convergent en un point appelé foyer image $F'$.
    $$\text{Objet } A \text{ situé à l'infini} \longrightarrow \text{Image } A' \text{ située au foyer image } F'$$
*   **Foyer objet ($F$) :** Les rayons issus du foyer objet $F$ émergent du système parallèles à l'axe optique.
    $$\text{Objet } A \text{ situé au foyer } F \longrightarrow \text{Image } A' \text{ située à l'infini}$$


## Exercices


## À retenir
-
## Travail à faire

- [x] mettre sous forme de concepts


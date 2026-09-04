---
semestre: S1
type de cours: CM
date: 2026-09-04T09:30:00
End Date: 2026-09-04T11:00:00
Calendar Title: "[[01 Cours/Thermodynamique/Intro à la Thermodynamique, Thermodynamique 2026-09-04|Intro à la Thermodynamique, Thermodynamique]]"
prof: Zgari
tags:
  - cours
  - Thermodynamique
Ressources: "[[Principes de la thermodynamique chapitres I et II.pdf]]"
Concepts:
  - "[[Premier principe de la thermodynamique]]"
  - "[[Énergie interne et formes d'énergie]]"
  - "[[Mesure de pression et échelles de température]]"
  - "[[Statique des fluides et poussée d'Archimède]]"
  - "[[Système thermodynamique et milieu extérieur]]"
  - "[[Travail des forces de pression et transfert thermique]]"
  - "[[Variables d'état et équilibre thermodynamique]]"
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
# Intro à la Thermodynamique

## Objectifs

- Mourir

## Notes
Deux contrôles, un contrôle intermédiaire et un final

Cette science a été inventé au 17ᵉ siècle, avec la machine à vapeur
Thermodynamique = étude de la chaleur en mouvement, comprendre le comportement de la chaleur 

### Approches de la Thermodynamique :
- Classique = avec des lois établies à partir d'observations expérimentales
- Statistique = étude statistique du comportement des systèmes à l'échelle microscopique

### Principes : 
- Loi de conservation de l'énergie, rien ne se créer rien ne se perd rien ne se transforme
- Loi d'évolution : permet de déterminer si un système va évoluer spontanément si l'opération de transfert d'énergie est optimal ou pas

### Def du système de thermodynamique
- Quantité de matière ou région de l'espace faisant l'objet d'une étude


### Types de systèmes : 
- Fermé : pas d’échange de matière avec le milieu extérieur mais échange d’énergie
- Système ouvert le système échange de la matière et de l'énergie avec le milieu extérieur
- Système isolé : le système n'échange ni matière ni énergie avec le milieu extérieur

### Les variables thermodynamiques d’un système 
L’état d’un système est décrit pas ses variables thermodynamiques macroscopiques ou variables d’état :
- La pression P en Pa
- La température T en K
- Le volume en $m^3$
- La masse en $kg$

### Catégories de paramètres
#### Extensifs
Ils dépendent de la taille du système 
Ex : Volume, Masse, énergie interne, charge électrique

#### Intensifs
Ils sont inépendant de la taille du système
Ex : pression, température, masse volumique

Si on additionne deux systèmes, on additionne leurs paramètres extensifs, et on fait la moyenne de leur paramètres intensifs 



### État d’équilibre d’un système 
L’état du système est décrit par les variables macroscopiques observables ( température, pression, masse volumique…). 

Un système thermodynamique est à l’équilibre lorsque toutes ses variables d’état sont constantes au cours du temps. 

L’état d’équilibre est l’état macroscopique vers lequel évolue au bout d’un laps de temps suffisamment long, tout système soumis à des conditions extérieures constantes et uniformes.

- Les variables thermodynamiques ne sont définies et mesurables qu’à l’équilibre. 
- Un système thermodynamique en équilibre n’évolue plus spontanément. 
- Un système évoluant suffisamment lentement, peut être considéré comme à l’équilibre. 
- Un système est dans un état stationnaire lorsque ses variables sont constantes au cours du temps alors qu’il échange néanmoins de l’énergie avec le milieu extérieur.
- Évolution d’un système thermodynamique : passage d’un état d’équilibre caractérisé par des variables d’état à un autre état d’équilibre caractérisé par d’autres variables d’état.

### La température
Premier thermomètre = dilatation du mercure dans une colonne cylindrique (dilatation thermique)

$T(°C)=\frac{T(°F)-32}{1.8}$

$T(K)=T(°C)+273.16$


### La pression
**Principe d’Archimède** : tout corps plongé dans un fluide subit une poussée égale en amplitude au poids du volume de fluide déplacé . 

**Définition** : le paramètre de proportionnalité entre la force appliquée à un élément de surface dS et l’aire de cet élément est appelée la pression (notée P- grandeur scalaire )

dF = P dSn Où 𝑛 est le vecteur unitaire orthogonal à l’élément de surface, dirigé vers l’extérieur du volume délimité par la surface globale. Unité SI : Pascal (Pa) ; 1 Pa = 1N.m-2 = 1kg.m-1 .s-2
voir p 12

### equilibre d'un fluide 

Fluide à l'équilibre : le poids est compensé par la poussée d'Archimède
![[Principes de la thermodynamique chapitres I et II.pdf#page=13&rect=18,29,916,518|Principes de la thermodynamique chapitres I et II, p.13]]

#### Travail des forces de pression 
Lors d’une petite variation de volume dV à pression constante P, le système reçoit un travail infinitésimal $\delta$W : dW = -P dV 

Pour une transformation entre un volume initial $v_{i}$ et un volume final $v_{f}$ , le travail total est égal à $W=-P\int^{V_{f}}_{V_{i}}dV = -P(V_{f}-V_{i})$ 


- Compression : W >0 : le système reçoit de l’énergie sous forme mécanique
- Expansion :W<0 : le système fournit de l’énergie au milieu extérieur

#### Pour mesurer la pression 
- Le baromètre (météorologie) : mesure de façon précise des fluctuations de pression autour de la pression atmosphérique. 
- Le manomètre : mesure la différence de pression par rapport à la pression de référence, par exemple la pression atmosphérique (1 bar) . Pour déterminer alors la pression absolue, il faut ajouter 1 bar à la valeur lue sur l’appareil.


### L'énergie, sa conversion et sa transmission
#### Les formes de l’énergie 
Les différentes formes de l’énergie : thermique, mécanique, cinétique, potentielle, électrique, magnétique, chimique, nucléaire. 

La somme de toutes ces formes constitue l’énergie totale E 
En thermodynamique, c’est la variation d’énergie totale qui compte


On distingue : 
- L’énergie macroscopique Em: cinétique + potentielle 
- L’énergie microscopique ou énergie interne U: activité moléculaire du système E = Em + U


#### Le transfert d’énergie par la chaleur 
La quantité de chaleur échangée Q est l’énergie échangée via des interactions désordonnées à l’échelle microscopique. Lorsqu’un système reçoit une quantité de chaleur, son état et son énergie interne varient (changement de température, dilatation ou contraction thermique…). Cet échange de chaleur est associée à une transformation et dépend du type de transformation. 

Une transformation est dite adiabatique lorsqu'elle se réalise sans échange de chaleur Q= 0 Ça ne signifie pas que la température ne varie pas


## Exercices


## À retenir
-
## Travail à faire




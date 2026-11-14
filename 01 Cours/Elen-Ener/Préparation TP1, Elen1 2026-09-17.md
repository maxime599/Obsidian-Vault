---
semestre: S1
type de cours: Maison
date: 2026-09-17T17:21:41
End Date: 2026-09-17T17:51:41
Calendar Title: "[[01 Cours/Elen-Ener/Préparation TP1, Elen1 2026-09-17|Préparation TP1, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Instrumentation et appareils de mesure en électricité]]"
Ressources:
  - "[[Elen1 TP N°1.pdf]]"
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
# Préparation TP1


## Objectifs

-

## Notes
![[Elen1 TP N°1.pdf#page=2&rect=58,622,539,759|Elen1 TP N°1, p.2]]
### Q1
#### Oscilloscope analogique

- Le signal électrique commande directement la déviation d'un faisceau d'électrons.
- Le faisceau forme une courbe sur un tube cathodique (CRT).
- Le signal est visualisé en temps réel, sans conversion numérique préalable
#### Oscilloscope numérique

- Le signal analogique est converti en valeurs numériques grâce à un convertisseur analogique-numérique (CAN).
- Les valeurs sont enregistrées et traitées par l'appareil.
- La courbe reconstruite est affichée sur un écran, généralement LCD ou similaire.

### Q2
#### Trigger (Déclenchement)

Le Trigger est une fonction de l'oscilloscope qui permet de stabiliser l'affichage du signal en définissant une condition de déclenchement. L'acquisition ou l'affichage commence lorsque le signal atteint un niveau de tension déterminé, selon un front montant ou descendant.

#### Couplage continu (CC ou DC)

Le couplage continu laisse passer la composante continue et la composante alternative du signal. Il permet d'observer la tension totale, y compris son éventuelle valeur moyenne (offset).

#### Couplage alternatif (CA ou AC)

Le couplage alternatif bloque la composante continue du signal et laisse principalement passer sa composante alternative. Il permet d'observer les variations du signal autour de sa valeur moyenne.

#### Acquisition mono coup 

L'acquisition monocoup est un mode de fonctionnement qui permet de capturer et d'enregistrer un signal une seule fois, lorsqu'une condition de déclenchement est satisfaite. Elle est particulièrement utile pour analyser des événements non répétitifs ou très courts.

#### Câble coaxial

Un câble coaxial est un câble électrique constitué d'un conducteur central, d'un isolant, d'un blindage métallique et d'une gaine extérieure. Il permet de transporter des signaux électriques tout en limitant les perturbations électromagnétiques. En électronique, il est couramment utilisé pour relier un générateur de signaux à un oscilloscope.


### Q3
![[Pasted image 20260917173152.png]]
## Exercices


## À retenir
-
## Travail à faire




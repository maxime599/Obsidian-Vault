---
semestre: S1
type de cours: TP
date: 2026-09-15T08:36:00
End Date: 2026-09-15T09:26:00
Calendar Title: "[[01 Cours/SAé/Proteus - interrupteurs - batteries - soudure , SAé 2026-09-15|Proteus - interrupteurs - batteries - soudure , SAé]]"
prof:
tags:
  - cours
  - SAé
Concepts:
Ressources:
  - "[[SAé_1_Phase_01-version corrigée etudiants.pdf]]"
  - "[[SAÉ_1_Phase_02_2023_2024.pdf]]"
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
# Proteus - interrupteurs - batteries - soudure


## Objectifs

-

## Notes


| Tension | Courant |
| ------- | ------- |
| 0       | 0       |
| 1       | 260     |
| 2       | 300     |
| 3       | 350     |
| 4       | 400     |
| 5       | 450     |
| 6       | 500     |
| 7       | 540     |
| 8       | 580     |
| 9       | 610     |
| 10      | 640     |
| 11      | 680     |
| 12      | 710     |
| 13      | 740     |
| 14      | 770     |

L'intensité augmente quand la tension augmente, et la luminosité de la lampe augment aussi

Pour le moteur :

|Tension|Courant à vide|Courant en freinant|
|0|0|0|
|1|50|60|
|2|61|87|
|3|72|115|
|4|80|120|
|5|90|140|
|6|97|170|
|7|98|180|
|8|105|200|
|9|113|210|


Quand on freine le moteur, l'intensité augmente


Sur la simulation, on constate que si on inverse les bornes du moteur, il tourne dans l'autre sens


3.b.3
La vitesse de rotation est corrélé avec la tension

Plus le pourcentage du couple maximal augmente, moins le moteur tourne vite


Moteur DC = Moteur à courant continue
Motoréducteur = système d'engrenages pour réduire la vitesse du moteur et augmenter le couple
La tension et la vitesse du moteur sont proportionelles
La relation entre le couple appliqué et le courant traversant un moteur électrique est directement proportionnelle
La relation entre le couple appliqué et le courant traversant un moteur électrique est directement proportionnelle


Un rapport de réduction de $\frac{1}{48}$ signifie que si le moteur tourne de 48 tours, le motoréducteur n'en fais qu'un


Couple nominal = couple de base
Couple de blocage = couple quand le moteur est bloqué et qu'il ne tourne plus
 
La vitesse a été divisée par 48, mais le couple a été multiplié par 48

Pour changer la vitesse, il faut faire varier la tension
Pour changer de sens, il faut inverser les bornesdu moteurs


### Les batteries
Une batterie permet de stocker et de founir de l'énergie électique
Les deux paramètres principaux d'une batterie sont capacité et tension.
Pour une batterie de voiture, c'est 12V et 60A/h

| **Technologie** | **Densité énergétique**     | **Poids relatif** | **Effet mémoire** | **Domaine de prédilection**                      |
| --------------- | --------------------------- | ----------------- | ----------------- | ------------------------------------------------ |
| **Plomb**       | Faible (30-50 Wh/kg)        | Très lourd        | Non               | Automobile, onduleurs, secours                   |
| **NiCd**        | Moyenne (40-60 Wh/kg)       | Lourd             | Oui               | Outillage électroportatif ancien                 |
| **Li-Ion**      | Élevée (150-250 Wh/kg)      | Léger             | Non               | Smartphones, PC portables, véhicules électriques |
| **LiPo**        | Très élevée (180-260 Wh/kg) | Très léger        | Non               | Robotique, drones, modélisme                     |




### Les interrupteurs

| **Référence**      | **Format**       | **Configuration** | **Courant / Tension max** | **Type de fixation**       |
| ------------------ | ---------------- | ----------------- | ------------------------- | -------------------------- |
| **MP005717**       | Bascule          | SPST (ON-OFF)     | 10 A / 250 V AC           | Encastrable panneau        |
| **SPC21219**       | Levier standard  | SPST (ON-OFF)     | 5 A / 120 V AC            | Canon fileté panneau       |
| **7576K2**         | Levier puissance | SPST (ON-OFF)     | 30 A / 125 V AC           | Canon fileté (bornes vis)  |
| **Générique**      | Levier           | SPST (ON-OFF)     | Variable selon modèle     | Variable (panneau / PCB)   |
| **OS102011MA1QN1** | Glissière PCB    | SPDT (ON-ON)      | 0,1 A / 12 V DC           | Implantation PCB (THT)     |
| **ATE1D-2M3-10-Z** | Levier micro-PCB | SPDT (ON-ON)      | 50 mA / 60 V AC/DC        | Implantation PCB (2,54 mm) |

| **Référence / Modèle**                           | **Type d'interrupteur**      | **Type de fixation / montage**                         | **Tension et courant max**                  | **Prix indicatif (unité)** | Dimension    |
| ------------------------------------------------ | ---------------------------- | ------------------------------------------------------ | ------------------------------------------- | -------------------------- | ------------ |
| **Multicomp Pro MP005717**                       | À bascule (_Rocker switch_)  | Montage sur panneau                                    | 10 A / 250 V AC                             | **~1,50 € à 3,00 €**       | 13mm × 19mm, |
| **Multicomp SPC21219**                           | À levier (_Toggle switch_)   | Sur panneau                                            | 5 A / 120 V AC (ou 28 V DC)                 | **~3,50 € à 5,00 €**       | 8x5          |
| **Eaton 7576K2**                                 | À levier haute puissance     | Sur panneau (canon fileté fort calibre + bornes à vis) | 20 à 30 A / 125 V AC (10 à 25 A / 250 V AC) | **~15,00 € à 20,00 €**     | 30x15        |
| **Interrupteur à levier unipolaire (générique)** | À levier standard            | Sur panneau                                            | 2 A / 250 V AC                              | 1€                         | ?            |
| **C&K OS102011MA1QN1**                           | À glissière (_Slide switch_) | Traversant sur circuit imprimé                         | 0,1 A / 12 V DC (signal / logique)          | 0.5€                       | 12x4         |
| **Nidec Copal ATE1D-2M3-10-Z**                   | Mini-levier étanche pour PCB | Traversant sur circuit imprimé                         | 0,05 A (50 mA) / 48 V AC/DC                 | 3€                         | 9.5x5        |


Ceux qui ne conviennent pas du tout : 
- **Nidec Copal ATE1D-2M3-10-Z**
- **C&K OS102011MA1QN1**
- **Eaton 7576K2**

Ceux qui pourraient convenir, mais sont surdimensionnés :
- **Eaton 7576K2**

Ceux qui conviennent :
- **Multicomp Pro MP005717**
- **Multicomp SPC21219**
- **Interrupteur à levier unipolaire (générique)**

## Exercices


## À retenir
-
## Travail à faire
- [x] Transformer en concept

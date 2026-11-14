---
semestre: S1
type de cours: Maison
date: 2026-10-03T18:38:17
End Date: 2026-10-03T19:08:17
Calendar Title: "[[01 Cours/Elen-Ener/Préparation TP2, Elen1 2026-10-03|Préparation TP2, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Modèle et théorème de Thévenin]]"
Ressources:
  - "[[TP N°2 elen.pdf]]"
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
# Préparation TP2


## Objectifs

-

## Notes

Pour déterminer $R_{th}$ expérimentalement :
- On connecte un résistance de valeur connue au circuit, et un voltmètre
- $R_{th}= Rc \frac{E_{th}-U_{AB}}{U_{AB_{c}}}$



![[TP N°2 elen.pdf#page=2&rect=63,584,528,750|TP N°2 elen, p.2]]
### Q1 : Notions de base

- **Source idéale de tension** : dipôle actif qui maintient à ses bornes une tension $U$ constante quel que soit le courant $I$ débité dans la charge. Sa résistance interne est nulle ($R_{int} = 0$).

- **Source réelle de tension** : dipôle actif dont la tension aux bornes $U$ diminue lorsque le courant $I$ augmente, sous l'effet de pertes d'énergie internes.

- **Résistance interne** : résistance $R_{int}$ modélisant les pertes d'énergie intrinsèques à une source réelle. 

- **Modèle équivalent de Thévenin (MET)** : modélisation d'un dipôle linéaire actif par la mise en série d'une source idéale de tension de force électromotrice $E_{th}$ et d'une résistance $R_{th}$.


### Q2 : Théorèmes et équivalences

#### Théorème de Thévenin

Tout réseau électrique linéaire vu depuis deux bornes $A$ et $B$ est équivalent à un générateur unique constitué de :

  

- **$E_{th}$** : la tension à vide mesurée entre $A$ et $B$ ($U_{AB,\text{à vide}}$).

- **$R_{th}$** : la résistance équivalente vue entre $A$ et $B$ lorsque toutes les sources indépendantes sont éteintes (sources de tension remplacées par un court-circuit, sources de courant par un circuit 


#### Théorème de superposition

Dans un circuit linéaire comportant plusieurs sources indépendantes, la tension ou le courant dans une branche est égal à la somme algébrique des tensions ou courants produits dans cette branche par chaque source agissant seule (toutes les autres sources étant éteintes).

  

#### Équivalence Thévenin – Norton

Un modèle de Thévenin $(E_{th}, R_{th})$ branché entre deux bornes $A$ et $B$ est équivalent à un modèle de Norton $(I_N, R_N)$ branché entre ces mêmes bornes :

  
- $R_N = R_{th}$

- $I_N = \frac{E_{th}}{R_{th}} = I_{cc}$ (courant de court-circuit entre $A$ et $B$)
  
- $E_{th} = R_N \cdot I_N$

### Q3 : Intérêt de ces théorèmes

- **Simplification des calculs** : réduction de réseaux complexes comportant de nombreuses mailles à un schéma équivalent à deux composants ($E_{th}$ et $R_{th}$).

- **Étude d'une charge variable** : permet de calculer le courant et la tension pour différentes charges connectées entre $A$ et $B$ sans devoir réanalyser tout le circuit à chaque fois.

- **Décomposition fonctionnelle** : le principe de superposition permet d'étudier séparément des régimes de fonctionnement différents (par exemple la composante continue et la composante alternative d'un signal).


### Q4 : Association en série de deux modèles de Thévenin

Soient deux modèles $(E_1, R_1)$ et $(E_2, R_2)$ associés en série entre deux bornes $A$ et $B$ (les sources aidant le même sens de courant) :

  

1. **Tension équivalente à vide $E_{th}$** :
    À vide ($I = 0$), les forces électromotrices s'additionnent :$$E_{th} = E_1 + E_2$$
2. **Résistance équivalente $R_{th}$** :
    
    En éteignant les sources (remplacées par des fils), les deux résistances se retrouvent en série :
$$R_{th} = R_1 + R_2$$

**Modèle équivalent global :** $(E_{th} = E_1 + E_2, \, R_{th} = R_1 + R_2)$

  

### Q5 : Association en parallèle de deux modèles de Thévenin

Soient deux modèles $(E_1, R_1)$ et $(E_2, R_2)$ associés en parallèle entre les bornes $A$ et $B$ :


1. **Résistance équivalente $R_{th}$** :
$$R_{th} = R_1 \parallel R_2 = \frac{R_1 \cdot R_2}{R_1 + R_2}$$
    
2. **Tension équivalente à vide $E_{th}$** :
$$E_{th} = \frac{\frac{E_1}{R_1} + \frac{E_2}{R_2}}{\frac{1}{R_1} + \frac{1}{R_2}} = \frac{E_1 R_2 + E_2 R_1}{R_1 + R_2}$$

**Modèle équivalent global :**

$$E_{th} = \frac{E_1 R_2 + E_2 R_1}{R_1 + R_2}, \quad R_{th} = \frac{R_1 \cdot R_2}{R_1 + R_2}$$

## Exercices


## À retenir
-
## Travail à faire




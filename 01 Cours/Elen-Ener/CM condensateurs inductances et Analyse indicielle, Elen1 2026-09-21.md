---
semestre: S1
type de cours: CM
date: 2026-09-21T13:00:00
End Date: 2026-09-21T14:00:00
Calendar Title: "[[01 Cours/Elen-Ener/CM condensateurs inductances et Analyse indicielle, Elen1 2026-09-21|CM condensateurs inductances et Analyse indicielle, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Équations différentielles du premier ordre]]"
  - "[[Composants réactifs ; Condensateur et Inductance]]"
  - "[[Analyse indicielle et circuit RC du premier ordre]]"
Ressources:
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
# CM condensateurs inductances et Analyse indicielle


## Objectifs

-

## Notes
### Les condensateurs
Un condensateur est constitué de deux armatures conductrices séparées par un isolant. Sa principale fonction est de stocker des charges électriques sur ses armaures.
La quantité stockée : $Q$ en coulomb (C). est proportionelle à la tension U en volt et à sa capacité C en Farad (F)

Etude en courant quelconque. Lois d'Ohm en régime quelconque

$$i_{c} =C*\frac{du_{c}}{dt}$$
### Les inductances
Ce sont des composants bobinés en fil de cuivre
Sa fonction principale est de stocker de l'énergie et de la restituer (L pour la valeur de l'inductance) 
La grandeur utilisé et le Henry (H) 
En régime quelconque :
$U=L*\frac{di}{dt}$

### Analyse indicielle
Ca consiste à analyser la réaction d'un circuit lorsque celui ci est soumis à un echellon (= passage de 0 à une tension)
On va mettre un échellon en entrée d'un system pour voir en sortie comment il se comporte
![[Drawing 2026-09-21 13.16.16.excalidraw]]
$U_{R}+U_{C}=E$
$R_{i}+U_{c}=E\implies R*C*\frac{dU_{c}}{dt}+U_{C}=E$
$\implies$ Equation différentielle
La solution d'une equation différencielle est : un foncion qui va nous donner l'évolution d'une grandeur par raport à une autre.
Dans notre cas, la solution sera $U_{C}(t)$
$R*C*\frac{dU_{c}}{dt}+U_{C}=E$
$R*C$ et le 1 devant $U_{C}$ sont des coéfficients, $E$ est le second membre
On a donc une equation différencielle du premier ordre (car pas de carré) à :
- Coef constant
- Second membre constant
De plus si le coefficient de la fonction "principale" est 1, alors le coefficient de $\frac{d}{dt}$ est une constante de temps dans notre cas. Dans ce cas, on l'appel $\tau$
Dans ce cas, $\tau=R*C$ en secondes
Donc $R*C$ est des secondes


On donne une solution à cette équation est :
$$U_{C}(t)=Ae^{-t/\tau}+B$$
On doit déterminer A et B
**a. Etude aux limites**
à $t=0\implies U_{C}(0)=Ae^{-0/\tau}+B \implies U_{C}(0)=A+B$
$t\to +\infty \implies U_{C}(+\infty)=Ae^{-\infty/\tau}+B = B$

**b. Il ne peut pas y avoir de variations brusques aux bornes d'un condensateur**
$\implies U_{C}(0) = 0$ 
à $t\to +\infty$, on aura $E$ continue $\implies$ toutes les autres grandeurs seront continues
$R*C*\frac{dU_{C}}{dt}+U_{C} = E$  donc $\frac{dU_{C}}{dt}=0 \implies U_{C}=E$

### Récap
$U_{C}(0)=A+B$
$U_{C}(0)=0 \implies A+B=0 \implies A=-B$

$U_{C}(+\infty)= B$
$U_{C}(+\infty)=E \implies B=E \implies A=-E$

$U_{C}(t) = -Ee^{-t/\tau}+E$
$U_{C}(t)=E*(1-e^{-t/\tau})$ avec $\tau=R*C$

## Exercices


## À retenir
-
## Travail à faire
- [x] Transfomer en concept et ajouter des flashcards



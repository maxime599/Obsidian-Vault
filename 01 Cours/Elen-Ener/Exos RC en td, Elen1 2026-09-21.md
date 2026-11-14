---
semestre: S1
type de cours: TD
date: 2026-09-21T15:37:40
End Date: 2026-09-21T17:07:40
Calendar Title: "[[01 Cours/Elen-Ener/Exos RC en td, Elen1 2026-09-21|Exos RC en td, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse indicielle et circuit RC du premier ordre]]"
  - "[[Composants réactifs ; Condensateur et Inductance]]"
Ressources:
  - "[[Fascicule TD ELEN1 CITISE.pdf]]"
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
# Exos RC en td


## Objectifs

-

## Notes


## Exercices
### Ex1
![[Drawing 2026-09-21 15.38.45.excalidraw]]
$U_{r}(t)+U_{c}(t) = e(t)$
$R.i(t)+Uc(t)= e(t)$ avec $i = C * \frac{dUc}{dt}$
$R*C*\frac{dUc}{dt} + Uc = E$
C'est une equation différencielle à coef constants et avec un "1" devant Uc implique $R*C$ est une constante de temps, appelé $\tau= R*C$
Et un second membre constant
Donc une solution de cette equation est :
$U_{C}(t) = Ae^{-t/\tau}+B$ avec $\tau = R*C$

**1. étude aux limites :**
à $t=0\implies U_{C}(0)=Ae^{-0/\tau}+B \implies U_{C}(0)=A+B$
$t\to +\infty \implies U_{C}(+\infty)=Ae^{-\infty/\tau}+B = B$

**2. Il ne peut pas y avoir de variations brusques aux bornes d'un condensateur**
$\implies U_{C}(0) = 0$ 
En régime établi, toutes les grandeurs seront constantes.
$R*C*\frac{dU_{C}}{dt}+U_{C} = E$  donc $\frac{dU_{C}}{dt}=0 \implies U_{C}=E$

#### Récap
$U_{C}(0)=A+B$
$U_{C}(0)=0 \implies A+B=0 \implies A=-B$

$U_{C}(+\infty)= B$
$U_{C}(+\infty)=E \implies B=E \implies A=-E$

$U_{C}(t) = -Ee^{-t/\tau}+E$
$U_{C}(t)=E*(1-e^{-t/\tau})$ avec $\tau=R*C$


$V_{s}(t) = e(t)-U_{c}(t)$

![[Drawing 2026-09-21 16.04.30.excalidraw]]
### Ex3
![[Drawing 2026-09-21 16.15.37.excalidraw]]
$U_{r}(t) + U_{L}(t) = e(t)$
$R.i(t)+U_{L}(t)= e(t)$ avec 
$R*i+L \frac{di}{dt}=E$
$L \frac{di}{dt} + R*i=E$
$\frac{L}{R}* \frac{di}{dt} +i=\frac{E}{R}$ (on divises par R)
$\implies \frac{L}{R}=\tau$ est une constante de temps en secondes


C'est une equation différencielle à coef constants avec $\frac{L}{R}$= coef de temps et un second membre constant
Donc une solution de cette equation est :
$i(t) = Ae^{-t/\tau}+B$ avec $\tau = R*C$

**1. étude aux limites :**
à $t=0\implies i(0)=Ae^{-0/\tau}+B \implies i(0)=A+B$
$t\to +\infty \implies i(+\infty)=Ae^{-\infty/\tau}+B = B$

**2. Il ne peut pas y avoir de variations brusques aux bornes d'un condensateur**
$\implies i(0) = 0$ 
En régime établi, toutes les grandeurs seront constantes
$\implies i(t)=cons\tan te\implies \frac{di(t)}{dt}=0$
$\frac{L}{R} * \frac{di}{dt} +i(+\infty)=\frac{E}{R} \implies i(+\infty)=\frac{E}{R}$

$i(t)=\frac{E}{R}e^{-t/\tau}+\frac{E}{R}\implies i(t)=\frac{E}{R}*(1-e^{t/\tau})$

à t=0, i=0 donc L se comporte comme un interrupteur ouvert
à $t\to +\infty$, $i=i_{max}$ donc L se comporte comme un interrupteur fermé




## À retenir
-
## Travail à faire
- [x] Comprendre



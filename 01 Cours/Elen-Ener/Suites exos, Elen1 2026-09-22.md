---
semestre: S1
type de cours: TD
date: 2026-09-22T14:30:00
End Date: 2026-09-22T16:00:00
Calendar Title: "[[01 Cours/Elen-Ener/Suites exos, Elen1 2026-09-22|Suites exos, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse indicielle et circuit RC du premier ordre]]"
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
# Suites exos


## Objectifs

-

## Notes


## Exercices
### Ex 3
![[Drawing 2026-09-22 14.44.57.excalidraw]]
$U_{R_{1}}(t)+U_{C}(t)=E$
$U_{R_{1}}(t)+U_{R_{2}}(t)=E$
$U_{C}(t)=U_{R_{2}}(t)$

$I=I_{R}+I_{C}$
$i_{C}=C * \frac{dU_{C}}{dt}$
$U_{R_{1}}=R_{1}*i$
$U_{C}=R*i_{C}$

$R*i_{R_{2}}+R*i=e$ et $i=i_{C}+i_{R_{2}}$
$R*i_{R}+R(i_{C}+i_{R_{2}})=e$
$R*i_{C}+2*R*i_{R}=e$

$R*C* \frac{dU_{C}}{dt}+2U_{C}=e$

$\frac{RC}{2} * \frac{dU_{C}}{dt}+U_{C}=\frac{e}{2}$


Une solution de cette equation est :
$U_{C}(t)=Ae^{-t/\tau}+B$ avec $\tau = \frac{RC}{2}$

Etude aux limites :
$U_{C}(0) =A+B$
$\lim_{ t \to \infty }U_{C}(t) = B$

Comme il ne peut pas y avoir de variations brusques, $U_{0}=0 \implies A+B=0\implies A=-B$
Quand t tend vers $+\infty$, on est en régime continue donc $\frac{dU_{C}}{dt} =0\implies U_{C}(+\infty)=\frac{E}{2} \implies B= \frac{E}{2}$

Solution final :
$U_{C}(t) = -\frac{E}{2}*e^{-t/\tau} +\frac{E}{2}$
$U_{C}(t)= \frac{E}{2}*(1-e^{t/\tau})$




## À retenir
-
## Travail à faire
- [x] Faire l'exercice 2



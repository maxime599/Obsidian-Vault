---
semestre: S1
type de cours: TD
date: 2026-10-02T08:00:00
End Date: 2026-10-02T09:30:00
Calendar Title: "[[01 Cours/Thermodynamique/entropie en TD, Thermodynamique 2026-10-02|entropie en TD, Thermodynamique]]"
prof: Zouaoui
tags:
  - cours
  - Thermodynamique
Concepts:
  - "[[Entropie et bilan entropique]]"
Ressources:
  - "[[TD2  Thermo 2627.pdf]]"
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
# entropie en TD


## Objectifs

-

## Notes

Pour un gaz parfait : 
$dS_{e} = \frac{\delta Q}{T} = \frac{dU}{T}- \frac{\delta W}{T}$
$\implies dS_{e} = \frac{C_{v}dT}{T}+\frac{PdV}{T}$







## Exercices
### Ex1
$T_{i} \to T_{f}$, $V_{i} \to V_{f}$
Calculer $\Delta S$

$\Delta S = \int^{f}_{i} dS$
$=\int^{Tf}_{Ti}Cv \frac{dT}{T} + \int^{Vf}_{Vi} \frac{P}{V}dV$, attention il faut que les bornes de l'integrale soit comme la variable à intégré, 
$=C_{v}\ln\left( \frac{T_{f}}{T_{i}} \right)+nR\ln\left( \frac{V_{f}}{V_{i}} \right)$


$\frac{V}{T}=\frac{nR}{P}$, si on triple le volume et la pression alors $\frac{V}{T}$ est contant, donc P est contant
Comme $\delta Q=C_{p}dT$
$dS= \frac{\delta Q}{T}\implies \Delta S=Cp\int^{f}_{i} \frac{dT}{T} = Cp\ln\left( \frac{Tf}{Ti} \right)$


### Ex2
**1)** Pour que ce soit réversible il faut que la transformation soit continue et lente

**2)**$P_{f}=\frac{nRT_{f}}{V_{f}} = \frac{nRT}{\frac{V_{o}}{K}} = P_{o}*K$
Gaz parfait $\implies$ Loi de Joule + isotherme $\implies dU=0\implies Q=-W$

**3)** $W=\int^{f}_{i}-PdV$
$= -nRT_{i}\int^{f}_{i} \frac{dV}{V}$
$= -nRT\ln \frac{V_{f}}{V_{i}}$


$\Delta S_{gaz}=\frac{Q}{T_{ext}} = -\frac{W}{T_{ext}} = -\frac{W}{T_{0}}$
$\Delta S_{source} = -\frac{Q}{T_{ext}}=\frac{W}{T_{0}}$ car si le gaz donne Q à la source, alors la source donne -Q


$\Delta S_{gaz}=\Delta S_{source}$
$\implies \Delta S_{global}=\Delta S_{source}+\Delta S_{gaz}=0$



### Ex3
$Q=c_{cu}*m*dT = 1540J$

$dS_{c}=dS-dS_{e}$

$\Delta S_{e}=\frac{\delta Q}{T_{ext}}$
$\Delta S_{e}=\frac{Q}{Text}$


Entropie du système total :
$dS= \frac{\delta Q}{T}$
$\Delta S=\int^{Tf}_{T_{0}} \frac{\delta Q}{T_{système}}$
$=\int^{Tf}_{T_{0}} \frac{m*c*dT}{T_{système}}$
=$m*c*\int^{Tf}_{T_{0}} \frac{dT}{T}$
$= m*c*\ln\left( \frac{T_{ext}}{T} \right)$


### Ex4
$\Delta S_{AB}$
$Cv=\frac{nR}{\gamma-1}$
$Cp=\frac{\gamma nR}{\gamma-1}$

C'est réversible donc on peut utiliser la loi de joule
$dU=C_{v}dT$
$dS=\frac{\delta Q}{T} = \frac{dU}{T}- \frac{\delta W}{T}$
$=Cv \frac{dT}{T} + \frac{PdV}{T}$


Pour AB, dT=0 donc $dS=\frac{P}{T}dv$
$\Delta S=\int^{B}_{A} \frac{P}{T}dv$
$=nR\int^{B}_{A} \frac{dV}{V}$
$=nR*\ln\left( \frac{V_{B}}{V_{A}} \right)$

Pour BC, dV=0 donc $\Delta S=\int Cv \frac{dT}{T}$
$=Cv *\ln\left( \frac{T_{B}}{T_{A}} \right)$

Pour CA, $dS=Cv \frac{dT}{T} + \frac{PdV}{T}$
ensuite on fait l'intégrale pour trouve $\Delta S$


## À retenir
-
## Travail à faire
- [x] ajouter au concepts



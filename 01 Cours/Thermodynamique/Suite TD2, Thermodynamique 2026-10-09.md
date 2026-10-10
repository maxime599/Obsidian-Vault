---
semestre: S1
type de cours: TD
date: 2026-10-09T08:08:07
End Date: 2026-10-09T09:38:07
Calendar Title: "[[01 Cours/Thermodynamique/Suite TD2, Thermodynamique 2026-10-09|Suite TD2, Thermodynamique]]"
prof: Zouaoui
tags:
  - cours
  - Thermodynamique
Concepts:
  - "[[Calcul de la variation d'entropie]]"
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
# Suite TD2


## Objectifs

-

## Notes
### Les machines thermique :
On sait que $\Delta S\geq \int \frac{\delta Q}{T_{ext}}$
On va travailler sur un cycle fonc $\Delta U et \Delta S=0$
Si notre système est en contacte avec un source de chaleur : Q < et W>0

Pour deux sources de températures Tc et Tf:
$\Delta S \geq \int \frac{\delta Q}{T_{c}}+ \int \frac{\delta Q}{Tf} = \frac{Q_{c}}{Tc}+ \frac{Qf}{T_{f}}$

Le rendement :
pour un frigo : $\frac{|Qf|}{|W|}$
pour une pompe à chaleur : $\frac{|Qc|}{|W|}$
pour un moteur thermique : il doit donner du travail, et donner de la chaleur Q vers la source froide 
Donc $r_{moteur}= -\frac{W}{Q_{c}}$
Et $r_{c}= \frac{Q_{c}+Q_{f}}{Q_{c}} = 1- \frac{T_{f}}{T_{c}}$


## Exercices
### Ex5
On utilise laplace : 
$P_{i}V_{i}^y = P_{f}V_{f}^y \implies V_{f}= \left( \frac{P_{i}V_{i}^y}{P_{f}} \right)^ \frac{1}{y}$

C'est réversible donc pas de création d'entropie et 


2)
$Q=0$ donc $\Delta U=W=C_{v}\Delta T$
$W= \frac{nR}{ \gamma -1}(T_{f}-T_{i})$
$= \frac{P_{ext}V_{f}-P_{i}V_{i}}{\gamma-1}$

Et $W= \int-PdV = -P_{ext}(V_{f}-V_{i})$

Rappel : la création d'entropie pour un gaz parfait :
$dS=\frac{\delta Q}{T} = \frac{dU}{T}- \frac{\delta W}{T}$
$=Cv \frac{dT}{T} + \frac{PdV}{T}$
On a pas de $S_{e}$ car c'est adiabatique, donc $dS=dS_{c}$
Donc $\Delta S_{c}=\int \frac{C_{v}dT}{T} + \int \frac{p}{T}dv$
$= \frac{nR}{\gamma-1} \int \frac{dT}{T} + nR \int_{V_{i}}^{V_{}f}\frac{dV}{V}$




### Ex6
Isotherme donc $\Delta U=0 \implies Q =-W$
$W_{AB}= -\int PdV = nRT\int \frac{dV}{V} = nRT\ln\left( \frac{V_{f}}{V_{i}} \right) =-2018 J$
$Q_AB = 2018J$

$\Delta U=W$
$W=CvdT = \frac{nR}{\gamma -1}(Tc-T_{B})$
Or , $PV^\gamma = const \implies (\frac{nRT}{V})V^\gamma = cons\tan t$
$\implies TV^{\gamma-1} = const$
Donc $T_{B}V_{B}^{\gamma-1}=T_{C}V_{C}^{\gamma-1}$
puis on en deduis $T_{B}$ puis le W


$W_{CA}=0$ donc $\Delta U=Q_{CA}$

### Ex7
Il faut faire un schéma
Adiabatique donc laplace
$PV^\gamma = const$
$P\left( \frac{nRT}{P} \right)^\gamma =const$
$P^{1-\gamma}T^\gamma = const$
Donc on peut calculer T3 et donc T4 car isotherme
Pour P4, on utilise aussi laplace avec P et T entre 4 et 1


$W_{12} = nRT_{1}\ln\left( \frac{V_{2}}{V_{1}} \right)$
Comme $V=\frac{nRT}{P}$, $\frac{V_{2}}{V_{1}}=\frac{P_{1}}{P_{2}}$ donc on remplace
Same pour $W_{34}$

$W_{23}=Cv(T_{3}-T_{2})$ avec $C_{v}=\frac{C_{P}}{\gamma}$
Same pour $W_{41}$



## À retenir
-
## Travail à faire




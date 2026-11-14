---
semestre: S1
type de cours: TD
date: 2026-11-10T17:09:51
End Date: 2026-11-10T18:39:51
Calendar Title: "[[01 Cours/Elen-Ener/Suites exos, Elen-Ener 2026-11-10|Suites exos, Elen-Ener]]"
prof: Marc Jamond
tags:
  - cours
  - Elen-Ener
Concepts:
Ressources:
  - "[[TD ENER1.pdf]]"
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
### Ex3
#### 1. On fais le schéma
Pour se simplifier, toujours mettres les grandeurs sous cette forme : 
$\underline{U}_{R}=10e^{oj} = 10+0j$
$\underline{U}_{L}=31.4e^{j\pi/2} = 31.4j$
$\underline{U}_{C}=10.6e^{-\pi/2} = -10.6j$

$u(t)=u_{r}(t)+u_{L}(t)+u_{c}(t)$
Donc $\underline{U}=\underline{U}_{R}+\underline{U}_{L}+\underline{U}_{C}$
$\underline{U}=10+20.8j = 23e^{1.12j}$
Donc $u(t)=23\sqrt{ 2 }\sin(200\pi t+1.12)$



#### 2. Impédance complexe $\underline{Z}$
$\underline{Z}_{eq}=\underline{Z}_{R}+\underline{Z}_{L}+\underline{Z}_{C}$
$=R+jL\omega-\frac{j}{C\omega}$
$=100+j\left( 0.5*200\pi - \frac{1}{15*10^{6}*200\pi} \right)$
$=100+208j$
$=230e^{1.12j}$

#### 3. En déduire la valeur de I
$\underline{I}= \frac{\underline{U}}{\underline{Z}_{eq}}$
$=0.1e^{0j}$
$i(t)=0.1\sqrt{ 2 }\sin(200\pi*t)$

Phase de $i(t)=0$
Phase de $u(t)=1.12$

Donc $i(t)$ est en retard sur la fréquence. C'est donc un montage globalement inductif


#### 5. 
Un montage est en phase si la résistance eq est une résistance pure. Donc il faut que 
$L\omega -\frac{1}{C\omega}=0$
$\implies L\omega= \frac{1}{C\omega}$
$\implies LC\omega^2=1$
$\implies (2\pi f)^2= \frac{1}{LC}$
$\implies f=\sqrt{ \frac{1}{4\pi^2*LC} } = \frac{1}{2\pi \sqrt{ 0.5*15*10^{6} }} = 58Hz$
Donc à une fréquence de 58Hz, c'est un montage purement  résistif. Si $f<58$, c'est un montage globalement capacitif et si $f>58$, c'est un montage globalement inductif.



### Ex4
#### 1.
$\underline{U}=10+20.8j = 23e^{1.12j}$
$u(t)=23\sqrt{ 2 }\sin(200\pi t+1.12)$

$\underline{I}_{R} = \frac{\underline{U}_{R}}{\underline{Z}_{R}} = \frac{23e^{1.12j}}{100} = 0.23e^{1.12j}$
$I_{L}=\frac{U_{L}}{Z_{L}} = \frac{23e^{1.12j}}{L*2\pi f} = \frac{23e^{1.12j}}{j0.5*2*\pi*100} )= \frac{23e^{1.12j}}{100\pi e^{j\pi/2}}=7.32*10^{-2}e^{-0.45j}$
$I_{C}=\frac{U_{C}}{Z_{C}}=U_{C}*jC\omega=23e^{1.12j}*9.42*10^{-3}e^{1.57j} = 0.217e^{2.69j}$

$I = I_{R}+I_{L}+I_{C} = 0.271e^{1.68j}$
$i(t)=0.271\sqrt{ 2 }\sin(200\pi t+1.68)$


#### 3. 
$Z_{eq}=\frac{1}{\frac{1}{Z_{R}}+\frac{1}{Z_{C}}+\frac{1}{Z_{L}}}$
$=\frac{1}{\frac{1}{R}+jC\omega+\frac{1}{jL\omega}}$
$= \frac{R}{1+jC\omega-\frac{j}{L\omega}}$
$= \frac{R}{1-jR\left( \frac{1}{L\omega}-C\omega \right)}$
$= 84.8e^{-0.558j}$


#### 5.
Il faut que $Z_{eq}$ soit une résistance pure, donc que $\frac{1}{L\omega}-C\omega =0$
$\frac{1}{L\omega}=C\omega$
$CL\omega^2=1$
.......
On retombe sur $f=58Hz$


## À retenir
-
## Travail à faire




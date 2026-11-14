---
semestre: S1
type de cours: TD
date: 2026-11-03T16:05:48
End Date: 2026-11-03T17:35:48
Calendar Title: "[[01 Cours/Elen-Ener/Rappel de cours sur les complexes et exos, Elen-Ener 2026-11-03|Rappel de cours sur les complexes et exos, Elen-Ener]]"
prof: Marc Jamond
tags:
  - cours
  - Elen-Ener
Concepts:
Ressources:
  - "[[TD ENER1.pdf]]"
---
s0
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
# Rappel de cours sur les complexes et exos


## Objectifs

-

## Notes
Pour une résistance : $|Z_{R}| = R, \underline{Z_{R}} = |\underline{Z_{R}}| e^{0j} = R$
Pour un condensateur : $Z_{C}= -\frac{j}{C\omega}$, $|Z_{C}|= \frac{1}{j\omega}$, $Z_{C}= |Z_{C}|e^{-\pi/2}\implies Z_{C}= \frac{1}{c\omega}e^{ -\pi/2}$
Pour une bobine : $Z_{L} = jL\omega$, $|Z_{L}|=L\omega$, $Z_{L}=|Z_{L}|e^{\pi/2}\implies Z_{L}= L\omega e^{\pi/2}$

![[Drawing 2026-11-03 16.13.29.excalidraw]]
Dans le domaine temporel : $x(t)= X_{max}\sin(\omega t+\varphi)$
Dans le complexe : $\underline{X} = \frac{X_{max}}{\sqrt{ 2 }}e^{\varphi j}$



## Exercices
### Ex1
![[Drawing 2026-11-03 16.19.02.excalidraw]]
$$e(t)=\underbrace{ 10\sqrt{ 2 } }_{ E_{max} }\sin(\overbrace{ 2\pi*50* }^{ \omega }t+\overbrace{ 0 }^{ \varphi })$$
**1.**
$\underline{E}= \frac{E_{max}}{\sqrt{ 2 }}e^{0j}\implies \underline{E}=10e^{0j} = \boxed{10}$

**2.**
$\underline{Z_{R}}=R=100 \implies \underline{Z_{R}}=100e^{0j}$
$\underline{Z_{C}} = -\frac{j}{C\omega} = -\frac{j}{50*10^{-6}*2*\pi*50} = -63.7j$

**3.** $\underline{Z}_{eq}=\underline{Z}_{R}+\underline{Z}_{C} = \boxed{100-63.7j} = \boxed{118.6e^{-0.567j}}$

**4.** $\underline{E}=\underline{Z}_{eq}*I \implies \underline{I} = \frac{\underline{E}}{\underline{Z}_{eq}}$
$\underline{I} = 0.843e^{0.0567j}$
$i(t) = 0.843\sqrt{ 2 }*\sin(2\pi*50*t+0.567)$

**5.** 
Phase de $i(t)=0.567$ 
Phase de $e(t)=0$

Donc $i(t)$ est en avance sur $e(t)$, c'est donc un montage globalement capacitif.




### Ex2
**1.** 
![[Drawing 2026-11-03 16.40.01.excalidraw]]

**2.**
$\underline{Z_{R}}=R=600 \implies \underline{Z_{R}}=600e^{0j}$
$\underline{Z_{L}} = jL\omega = j * 1*2*\pi*100 = 628j = 628e^{j\pi/2}$

**3.**
$\underline{Z}_{eq}=\frac{\underline{Z}_{L}*\underline{Z}_{C}}{Z_{L}+Z_{C}} = 313+300j = 434e^{0.763j}$

**4.**
$\underline{E}=\underline{Z}_{eq}*I \implies \underline{I} = \frac{\underline{E}}{\underline{Z}_{eq}} = 0.0691e^{-0.763j}$
$i(t)=69.1*10^{-3}\sqrt{ 2 }\sin(2*\pi*100*t-0.763)$

La phase de i est < à celle de u(t) donc le courant est en retards sur la tension, donc le montage est globalement inductif.



### Ex3
**1.** $U = 10+31.4+10.6 = 52V$

**2.** $Z_{eq}$

## À retenir
-
## Travail à faire
- [x] ajouter aux concepts



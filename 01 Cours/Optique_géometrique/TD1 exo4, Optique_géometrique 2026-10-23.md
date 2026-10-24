---
semestre:
type de cours:
date: 2026-10-23T13:33:09
End Date: 2026-10-23T15:03:09
Calendar Title: "[[01 Cours/Optique_géometrique/TD1 exo4, Optique_géometrique 2026-10-23|TD1 exo4, Optique_géometrique]]"
prof:
tags:
  - cours
  - Optique_géometrique
Concepts:
Ressources:
  - "[[TD1 - Optique (TSE).pdf]]"
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
# TD1 exo4


## Objectifs

-

## Notes


## Exercices
### Ex 4
![[Drawing 2026-10-23 13.34.39.excalidraw]]
**1)**
$n_{eau}\sin(i)=n_{air}\sin(r)$
$\implies n_{eau}i=r$

$\tan(i) = i=\frac{JI}{h}$
$\tan(r)=r=\frac{JI}{h'}$

$n_{eau} \frac{JI}{h}= \frac{JI}{h'}$
$1.33=\frac{1}{h'}$
$h'=0.75$

$D = 1.5+0.75$


**2)**
$\tan(i) = i=\frac{IL}{h_{0}'}$
$\tan(r)=r=\frac{IL}{h_{0}}$

$n_{eau} \frac{IL}{h_{0}'} = \frac{IL}{h_{0}}$
$\frac{1.33}{h_{0}'} = \frac{1}{1.5}$
$h_{0}'=\frac{1.33}{1.5}$
$D'=2+1=3m$


### Ex 5
On a $\frac{1}{\overline{SA}} + \frac{1}{\overline{SA'}} = \frac{2}{\overline{SC}}$ et $\gamma = -\frac{\overline{SA'}}{\overline{SA}}$

$\overline{SA}=-\overline{SA}\gamma$  
$\frac{1}{\overline{SA}}-\frac{1}{\gamma\overline{SA}}=\frac{2}{R}$
$\frac{\gamma-1}{\overline{\gamma SA}} = \frac{2}{R}$

$\overline{SA} = \frac{R(\gamma-1)}{2\gamma}$

## À retenir
-
## Travail à faire




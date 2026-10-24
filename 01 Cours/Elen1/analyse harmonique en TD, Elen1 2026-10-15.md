---
semestre: S1
type de cours: TD
date: 2026-10-15T10:26:21
End Date: 2026-10-15T11:56:21
Calendar Title: "[[01 Cours/Elen1/analyse harmonique en TD, Elen1 2026-10-15|analyse harmonique en TD, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse harmonique et diagrammes de Bode]]"
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
# analyse harmonique en TD


## Objectifs

-

## Notes


## Exercices

![[Drawing 2026-10-15 10.26.40.excalidraw]]
Avec $f_{C_{haute}}=100Hz$
$f_{C_{basse}}=10kHz$

Il y a contre réaction......
![[Drawing 2026-10-15 10.28.47.excalidraw]]
$Z_{1} = R_{1} + \frac{1}{j c_{1}\omega}$
$Z_{2} = \frac{R_{2}*\frac{1}{jC_{2}\omega}}{R_{2} + \frac{1}{jC_{2}\omega}} = \frac{R_{2}}{1+jC_{2}\omega}$ (résistances en parallèles)


$\frac{V_{s}}{V_{e}} = -\frac{Z_{2}}{Z_{1} }=-\frac{R_{2}}{1+jC_{2}\omega} * \frac{1}{R_{1}+ \frac{1}{jC_{1}\omega}}$

$=-\frac{R_{2}}{1+jC_{2}\omega} * \frac{jC_{1}\omega}{jR_{1}C_{1}\omega+1}$
$=-\frac{R_{2}}{R_{1}} * \frac{1}{jR_{2}C_{2}\omega} * \frac{jR_{1}C_{1}\omega}{1+jR_{1}C_{1}\omega}$
$=-\frac{R_{2}}{R_{1}}* j\tau_{1}\omega * \frac{1}{1+j \tau_{1}\omega} * \frac{1}{1+j \tau_{2}\omega}$

puis fonction de transfère


## À retenir
-
## Travail à faire




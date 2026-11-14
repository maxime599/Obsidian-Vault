---
semestre: S1
type de cours: CM
date: 2026-09-15T13:30:00
End Date: 2026-09-15T16:00:00
Calendar Title: "[[01 Cours/Elen-Ener/Théorème de superposition, Elen1 2026-09-15|Théorème de superposition, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Théorème de superposition]]"
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
# Théorème de superposition


## Objectifs

-

## Notes
![[Drawing 2026-09-15 14.45.27.excalidraw]]
Pour déterminer $U_{ab_{0}}$ : 
- Calculer la contribution de E1 lorsque E2 est éteint
- Calculer la contribution de E2 lorsque E1 est éteint
- On va faire la somme des deux


Contribution de E1 quand E2 est éteint :
![[Drawing 2026-09-15 14.50.35.excalidraw]]
Contribution de E2 quand E1 est éteint :
![[Drawing 2026-09-15 14.53.27.excalidraw|width=50]]
$U_{AB_{0}}$ = $E_{th}=U_{AB_{01}}+U_{AB_{02}}$
$E_{th} = E_{1}*\frac{R_{2}}{R_{1}+R_{2}}+E_{2}*\frac{R_{1}}{R_{1}+R_{2}}$


## Exercices

### Ex5
$E_{th} = E_{1}*\frac{R_{2}}{R_{1}+R_{2}}+E_{2}*\frac{R_{1}}{R_{1}+R_{2}}$
![[Drawing 2026-09-15 15.01.54.excalidraw]]


## À retenir
-
## Travail à faire
- [x] Finir la feuille de pompe pour le partiel (jusquà ce TD)


 
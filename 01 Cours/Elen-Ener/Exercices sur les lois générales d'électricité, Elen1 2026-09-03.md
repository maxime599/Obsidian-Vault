---
semestre: S1
type de cours:
date: 2026-09-03T08:00:00
End Date: 2026-09-03T09:30:00
Calendar Title: "[[01 Cours/Elen-Ener/Exercices sur les lois générales d'électricité, Elen1 2026-09-03|Exercices sur les lois générales d'électricité, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Types de régime en électicité]]"
  - "[[Branchement en électricité]]"
  - "[[Conventions en électricité]]"
Ressources: "[[Fascicule TD ELEN1 CITISE.pdf]]"
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
# Exercices sur les lois générales d'électricité


## Objectifs

- Apprendre à utiliser les formules du cours

## Notes
![[IMG_20260903_150228.jpg]]{transform="translate(-13.6%, 7.4%) rotate(0deg) scale(0.629)" aspect-ratio=698/393 width=698}

![[IMG_20260903_150223.jpg]]

![[IMG_20260903_150218.jpg]]

![[IMG_20260903_150210.jpg]]

## Exercices


## À retenir
-
## Travail à faire




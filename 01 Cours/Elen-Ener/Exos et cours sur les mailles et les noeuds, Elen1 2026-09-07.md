---
semestre: S1
type de cours: TD
date: 2026-09-07T14:30:00
End Date: 2026-09-07T16:00:00
Calendar Title: "[[01 Cours/Elen-Ener/Exos et cours sur les mailles et les noeuds, Elen1 2026-09-07|Exos et cours sur les mailles et les noeuds, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]"
  - "[[Méthode de résolution d'un circuit électrique]]"
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
# Exos et cours sur les mailles et les nœuds


## Objectifs

-

## Notes
![[IMG_20260907_194926.jpg]]

![[IMG_20260907_194951.jpg]]
![[IMG_20260907_195011.jpg]]
![[IMG_20260907_195020.jpg]]
![[IMG_20260907_195023.jpg]]
![[IMG_20260907_195028.jpg]]

## Exercices


## À retenir
-
## Travail à faire
- [x] transformer en concepts




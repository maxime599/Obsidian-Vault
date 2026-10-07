---
semestre:
type de cours:
date: 2026-10-07T09:48:48
End Date: 2026-10-07T10:18:48
Calendar Title: "[[01 Cours/Elen1/Prépatation TP3, Elen1 2026-10-07|Prépatation TP3, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
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
# Prépatation TP3


## Objectifs

-

## Notes
![[TP N°3.pdf#page=2&rect=65,637,533,750|TP N°3, p.2]]

### Q1
On utilise des signaux échelons de tension, car il présente une variation brusque et instantanée à $t = 0$. Cela permet d'exciter le système et d'observer comment il réagit dans le temps pour passer d'un état d'équilibre à un autre (régime transitoire) avant d'atteindre le régime permanent.

### Q2
$\tau = R \cdot C$

## Exercices


## À retenir
-
## Travail à faire




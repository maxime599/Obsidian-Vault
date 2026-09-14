---
semestre: S1
type de cours: TD
date: 2026-09-11T15:14:37
End Date: 2026-09-11T16:44:37
Calendar Title: "[[01 Cours/Thermodynamique/Exos en TD, Thermodynamique 2026-09-11|Exos en TD, Thermodynamique]]"
prof: Zouaoui
tags:
  - cours
  - Thermodynamique
Concepts:
Ressources:
  - "[[TD1__Thermo_2627.pdf]]"
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
# Exos en TD


## Objectifs

-

## Notes
Gaz parfait = model dans lequel les particules ne se repoussent pas et ne s'entrechoque pas

## Exercices


## À retenir
-
## Travail à faire




---
semestre:
type de cours:
date: 2026-11-24T08:12:43
End Date: 2026-11-24T12:12:43
Calendar Title: "[[01 Cours/SAé/suite moteur, SAé 2026-11-24|suite moteur, SAé]]"
prof:
tags:
  - cours
  - SAé
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
# suite moteur


## Objectifs

-

## Notes


## Exercices


## À retenir
-
## Travail à faire




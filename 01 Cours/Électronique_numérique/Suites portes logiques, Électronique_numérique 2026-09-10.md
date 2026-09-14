---
semestre: S1
type de cours: TD
date: 2026-09-10T11:00:00
End Date: 2026-09-10T12:30:00
Calendar Title: "[[01 Cours/Électronique_numérique/Suites portes logiques, Électronique_numérique 2026-09-10|Suites portes logiques, Électronique_numérique]]"
prof:
tags:
  - cours
  - Électronique_numérique
Concepts:
  - "[[Portes logiques et algèbre de Boole]]"
  - "[[Propriétés de l'algèbre de Boole]]"
Ressources:
  - "[[diapo_CITISE_AutoSIN.pdf]]"
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
# Suites portes logiques


## Objectifs

-

## Notes
Voir fasticule. p44-p62 
- Portes NAND, NOR et XNOR
- Règle de morgan
- Universalité de la porte NAND
- Tableau de Karnaugh


## Exercices


## À retenir
-
## Travail à faire




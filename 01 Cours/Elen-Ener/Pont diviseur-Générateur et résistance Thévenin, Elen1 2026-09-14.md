---
semestre: S1
type de cours: TD
date: 2026-09-14T11:00:00
End Date: 2026-09-14T12:30:00
Calendar Title: "[[01 Cours/Elen-Ener/Pont diviseur-Générateur et résistance Thévenin, Elen1 2026-09-14|Pont diviseur-Générateur et résistance Thévenin, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Pont diviseur de tension]]"
  - "[[Modèle et théorème de Thévenin]]"
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
# Pont diviseur-Générateur et résistance Thévenin


## Objectifs

-

## Notes
![[IMG_20260914_203011.jpg]]

## Exercices


## À retenir
-
## Travail à faire




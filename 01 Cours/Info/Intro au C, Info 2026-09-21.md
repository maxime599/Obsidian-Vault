---
semestre: S1
type de cours: CM
date: 2026-09-21T14:00:00
End Date: 2026-09-21T15:30:00
Calendar Title: "[[01 Cours/Info/Intro au C, Info 2026-09-21|Intro au C, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
Ressources:
  - "[[Exercices_info1.pdf]]"
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
# Intro au C


## Objectifs

-

## Notes


## Exercices
### 4.3
Code avant le debuge
![[debog_before.cpp]]
Code après :
![[debog_after.cpp]]
### 4.5
![[05 Ressources/Codes pour la programation/Info/Exercices/Exercice 0/main.cpp]]



## À retenir
-
## Travail à faire




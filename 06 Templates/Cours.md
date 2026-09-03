<%*
let title = await tp.system.prompt("Titre du cours");
let duration = await tp.system.prompt("Durée du cours (en minutes)");
let now = moment();
let startDate = now.format("YYYY-MM-DDTHH:mm");
let endDate = moment(now).add(Number(duration), 'minutes').format("YYYY-MM-DDTHH:mm");
let dateFile = now.format("YYYY-MM-DD");
await tp.file.rename(`${title}, ${tp.file.folder(true).split("/").at(-1)} ${dateFile}`);
-%>---
semestre:
type de cours:
date: <% startDate %>
End Date: <% endDate %>
Calendar Title: <% `${title}, ${tp.file.folder(true).split("/").at(-1)}` %>
prof:
tags:
  - cours
  - <% tp.file.folder(true).split("/").at(-1) %>
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
# <% title %>


## Objectifs

-

## Notes


## Exercices


## À retenir
-
## Travail à faire




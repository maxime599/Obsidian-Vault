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
date: <% startDate %>
End Date: <% endDate %>
Calendar Title: <% `${title}, t${tp.file.folder(true).split("/").at(-1)}` %>
prof: 
tags:
  - cours
  - <% tp.file.folder(true).split("/").at(-1) %>
Concepts: 


---

# <% title %>


## Objectifs

-

## Notes


## Exercices


## À retenir
-
## Travail à faire


## Concepts liés

- [[]]





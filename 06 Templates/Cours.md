---
type: cours
matiere: <% tp.file.folder(true).split("/").at(-1) %>
semestre:
date: <% tp.date.now("YYYY-MM-DD") %>
prof:
tags:
  - cours
Concepts:
---
<%*
let title = await tp.system.prompt("Titre du cours");
let date = tp.date.now("YYYY-MM-DD");

await tp.file.rename(`${date} - ${title}`);
%>

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






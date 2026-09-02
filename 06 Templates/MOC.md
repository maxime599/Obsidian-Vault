---
type: moc
matière:
tags:
  - moc
date_creation: <% tp.date.now("YYYY-MM-DD") %>
---
<%*
let sujet = await tp.system.prompt("Nom du sujet");
sujet = sujet.charAt(0).toUpperCase() + sujet.slice(1);

// Récupération et nettoyage du nom du dossier parent direct
let dossierParent = tp.file.folder().split("/").pop()
  .toLowerCase()
  .normalize("NFD")
  .replace(/[\u0300-\u036f]/g, "")
  .replaceAll(" ", "-");

let tag = sujet
  .toLowerCase()
  .normalize("NFD")
  .replace(/[\u0300-\u036f]/g, "")
  .replaceAll(" ", "/");

await tp.file.rename("MOC " + sujet);

tR += `

# ${sujet}

\`\`\`dataview
LIST WITHOUT ID
file.link
FROM #${dossierParent}/${tag} AND #concepts
SORT file.name
\`\`\`

`;
%>
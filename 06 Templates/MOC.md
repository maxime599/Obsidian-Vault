---
type: moc
matière:
tags:
  - moc
date_creation: <% tp.date.now("YYYY-MM-DD") %>
---
<%*
let sujet = await tp.system.prompt("Nom du sujet");

// Met la première lettre en majuscule
sujet = sujet.charAt(0).toUpperCase() + sujet.slice(1);

// Création du tag en minuscules
let tag = sujet
    .toLowerCase()
    .normalize("NFD")
    .replace(/[\u0300-\u036f]/g, "")
    .replaceAll(" ", "/");

await tp.file.rename("MOC "+sujet);

tR += `
# ${sujet}

\`\`\`dataview
LIST WITHOUT ID
file.link
FROM #math/${tag} AND #concepts
SORT file.name
\`\`\`
`;
%>
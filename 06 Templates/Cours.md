<%*
// 1. CONFIGURATION DE TES MATIÈRES ET DOSSIERS DE CONCEPTS
const matieres = ["Électronique_numérique", "Elen1", "Info", "Math", "Méthodologie_scientifique", "Physique", "Thermodynamique", "Anglais", "SAé", "Optique_géometrique"];
const dossiers = ["01 Cours/Électronique_numérique", "01 Cours/Elen1", "01 Cours/Info", "01 Cours/Math", "01 Cours/Méthodologie_scientifique", "01 Cours/Physique", "01 Cours/Thermodynamique", "01 Cours/Anglais", "01 Cours/SAé", "01 Cours/Optique_géometrique"];

// Demande la matière via un menu déroulant
const dossierCible = await tp.system.suggester(matieres, dossiers);
if (!dossierCible) return; // Annule si le menu est fermé

// Récupère le nom de la matière sélectionnée à partir du choix
const index = dossiers.indexOf(dossierCible);
const matiereChoisie = matieres[index];

let title = await tp.system.prompt("Titre du cours");
let duration = await tp.system.prompt("Durée du cours (en minutes)");
let now = moment();
let startDate = now.format("YYYY-MM-DDTHH:mm:ss");
let endDate = moment(now).add(Number(duration), 'minutes').format("YYYY-MM-DDTHH:mm:ss");
let dateFile = now.format("YYYY-MM-DD");

// Déplace et renomme directement la note avec la matière sélectionnée
const nomFichier = `${title}, ${matiereChoisie} ${dateFile}`;
await tp.file.move(`${dossierCible}/${nomFichier}`);
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




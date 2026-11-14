<%*
// 1. CONFIGURATION DES MATIÈRES ET DOSSIERS
const matieres = [
  "Électronique_numérique",
  "Elen-Ener",
  "Info",
  "Math",
  "Méthodologie_scientifique",
  "Physique",
  "Thermodynamique",
  "Anglais",
  "SAé",
  "Optique_géometrique"
];

const dossiers = [
  "07 MOC/Concepts/Électronique_numérique",
  "07 MOC/Concepts/Elen-Ener",
  "07 MOC/Concepts/Info",
  "07 MOC/Concepts/Math",
  "07 MOC/Concepts/Méthodologie_scientifique",
  "07 MOC/Concepts/Physique",
  "07 MOC/Concepts/Thermodynamique",
  "07 MOC/Concepts/Anglais",
  "07 MOC/Concepts/SAé",
  "07 MOC/Concepts/Optique_géometrique"
];

// Menu déroulant
const dossierCible = await tp.system.suggester(matieres, dossiers);
if (!dossierCible) return;

const nomMatiere = dossierCible.split("/").at(-1);

// 2. DEMANDE DU SUJET
let sujet = await tp.system.prompt("Nom du sujet");
if (!sujet) return;

sujet = sujet.charAt(0).toUpperCase() + sujet.slice(1);

// 3. NETTOYAGE DES TAGS
let dossierParentTag = nomMatiere
  
  .replace(/[\u0300-\u036f]/g, "")
  .replaceAll(" ", "-");

let tag = sujet
  .toLowerCase()
  .normalize("NFD")
  .replace(/[\u0300-\u036f]/g, "")
  .replaceAll(" ", "/");

// 4. RENOMMAGE ET DÉPLACEMENT
let nomFichier = `MOC ${sujet}`;
await tp.file.move(`${dossierCible}/${nomFichier}`);

// 5. GÉNÉRATION DU CONTENU DE LA NOTE
tR += `---
type: moc
tags:
  - moc
  - ${nomMatiere}
date_creation: ${tp.date.now("YYYY-MM-DD")}
---

# ${sujet}

\`\`\`dataview
LIST WITHOUT ID
file.link
FROM #${dossierParentTag}/${tag} AND #concepts
SORT file.name
\`\`\`
`;
-%>
<%*
// 1. CONFIGURATION DE TES MATIÈRES ET DOSSIERS DE CONCEPTS
// Modifie/ajoute les dossiers où tu souhaites ranger tes concepts :
const matieres = ["Électronique_numérique", "Elen1", "Info", "Math", "Méthodologie_scientifique", "Physique", "Thermodynamique", "Anglais"];
const dossiers = ["02 Concepts/Électronique_numérique", "02 Concepts/Elen1", "02 Concepts/Info", "02 Concepts/Math", "02 Concepts/Méthodologie_scientifique", "02 Concepts/Physique", "02 Concepts/Thermodynamique", "02 Concepts/Anglais"];


// Demande la matière via un menu déroulant
const dossierCible = await tp.system.suggester(matieres, dossiers);
if (!dossierCible) return; // Annule si le menu est fermé

// 2. DEMANDE DU NOM DU CONCEPT
let sujet = await tp.system.prompt("Nom du concept");
if (!sujet) return;

// Première lettre en majuscule
sujet = sujet.charAt(0).toUpperCase() + sujet.slice(1);

// 3. RENOMMAGE ET DÉPLACEMENT
await tp.file.move(`${dossierCible}/${sujet}`);
-%>
---
type: concept
tags:
  - concepts
  - <% tp.file.folder(true).split("/").at(-1) %>
MOC:
date_creation: <% tp.date.now("YYYY-MM-DD") %>
Ressources:
---

# <% sujet %>

> [!info] Définition courte
> 

## Explication intuitive

Explique le concept avec tes propres mots.









## Fonctionnement

Explique comment ça marche étape par étape.

1. 
2. 
3. 








## Exemple simple

```

```




## Formules / Algorithmes / Propriétés

(si applicable)





## Concepts liés

- [[]] 


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

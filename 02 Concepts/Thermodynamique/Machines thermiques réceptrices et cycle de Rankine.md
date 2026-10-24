---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
  - thermodynamique/machines
MOC:
  - "[[MOC Machines]]"
date_creation: 2026-10-10
Ressources:
  - "[[Chapitre IV thermo.pdf]]"
---

# Machines thermiques réceptrices et cycle de Rankine

> [!info] Définition courte
> Les **machines thermiques réceptrices** (réfrigérateurs, pompes à chaleur) et le **cycle de Rankine** décrivent les transferts thermiques impliquant des ==changements d'état (évaporation et condensation) pilotés par un compresseur et un détendeur.==
```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```
<!--SR:!2026-10-29,9,230-->


## 1. Le cycle de Rankine (Réfrigération et PAC réelles)
![[Chapitre IV thermo.pdf#page=19&rect=51,74,393,351|Chapitre IV thermo, p.19]]
Le cycle de Rankine décrit l'évolution d'un fluide frigorigène à travers 4 étapes principales :
?
1. **$A \to B$ (Compresseur)** : Compression adiabatique du gaz froid (consommation de travail $W > 0$).
2. **$B \to C$ (Condenseur)** : Liquéfaction du fluide à haute pression et température de la source chaude, rejetant de la chaleur ($Q_2 < 0$).
3. **$C \to D$ (Détendeur)** : Détente isenthalpique (similaire à Joule-Thomson) faisant chuter la pression et la température du fluide.
4. **$D \to A$ (Évaporateur)** : Évaporation complète du fluide au contact de la source froide, absorbant la chaleur ($Q_1 > 0$).
<!--SR:!2026-10-22,7,250-->


## 2. Exploitation pratique et calculs énergétiques

Dans l'analyse des bilans thermiques (ex. refroidissement d'un volume d'eau par un fluide), on applique le premier principe et les bilans calorimétriques :
- La quantité de chaleur cédée par l'eau s'obtient via sa capacité thermique :
  $$Q_{\text{eau}} = \Delta U_{\text{eau}} = C(T_f - T_i)$$
- Le bilan entropique global d'une transformation réversible connectant les sources impose que $\Delta S_{\text{système}} + \Delta S_{\text{sources}} = 0$ (avec une création d'entropie $S_c = 0$).


## Concepts liés

- [[Machines thermiques dithermes (Principes, conventions et bilans)]]
- [[Détentes de Joule (Joule-Gay-Lussac et Joule-Thomson)]]
- [[Calorimétrie et coefficients calorimétriques]]
- [[Entropie et bilan entropique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

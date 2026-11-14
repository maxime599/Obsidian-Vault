---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/energie
  - flashcards/Thermodynamique
MOC:
  - "[[MOC Energie]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Énergie interne et formes d'énergie

> [!info] Définition courte
> L'**énergie interne** $U$ ==représente la réserve d'énergie microscopique stockée au sein d'un système (agitation thermique et interactions moléculaires)==. Elle s'ajoute à l'énergie macroscopique $E_m$ pour former l'énergie totale $E$.
<!--SR:!2026-10-26,11,270-->

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
<!--SR:!2026-11-23,43,250-->


## 1. Structure de l'énergie totale

En thermodynamique, l'énergie totale $E$ d'un système s'exprime par la somme :: $$E = E_m + U$$
<!--SR:!2026-12-06,59,310-->

- **Énergie macroscopique ($E_m$)** ::: Somme de l'énergie cinétique globale du système ($E_c$) et de son énergie potentielle dans des champs extérieurs ($E_p$).
<!--SR:!2026-12-08,61,310!2026-11-16,41,290-->
- **Énergie interne ($U$)** ::: Énergie microscopique associée à l'activité atomique et moléculaire du système (cinétique d'agitation thermique et potentielle d'interaction intermoléculaire).
<!--SR:!2026-12-15,63,270!2026-12-03,58,310-->


## 2. Principe de conservation de l'énergie

- **Loi de conservation** :: L'énergie ne peut être ni créée ni détruite ; elle se transforme d'une forme à une autre ou s'échange avec le milieu extérieur.
<!--SR:!2026-10-24,26,270-->
- **Approche thermodynamique** : La variation de l'énergie totale $\Delta E$ (et en particulier de $\Delta U$ pour un système au repos macroscopique) est la seule grandeur mesurable lors d'une transformation.


## Concepts liés

- [[Système thermodynamique et milieu extérieur]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

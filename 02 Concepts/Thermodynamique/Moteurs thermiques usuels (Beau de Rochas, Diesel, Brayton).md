---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique 
MOC:
date_creation: 2026-10-10
Ressources:
---

# Moteurs thermiques usuels (Beau de Rochas, Diesel, Brayton)

> [!info] Définition courte
> Les **moteurs thermiques usuels** modélisent le fonctionnement thermodynamique des ==moteurs à explosion, des moteurs Diesel et des turbines à gaz== à travers des cycles théoriques idéalisés utilisant les lois des gaz parfaits et de Laplace.
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
<!--SR:!2026-10-25,11,270-->


## 1. Moteur à explosion (4 temps) : Cycle de Beau de Rochas
![[Chapitre IV thermo.pdf#page=13&rect=27,329,528,525|Chapitre IV thermo, p.13]]
Modélisation du cycle d'un moteur à allumage commandé :
- $O \to A$ : Admission isobare.
- $A \to B$ : Compression adiabatique réversible.
- $B \to C$ : Combustion isochore ($Q_2 = C_V(T_C - T_B)$).
- $C \to D$ : Détente adiabatique réversible.
- $D \to A$ : Refroidissement isochore ($Q_1 = C_V(T_A - T_D)$).
- $A \to O$ : Échappement / Expulsion isobare.

**Rendement théorique** en fonction du taux de compression $\alpha = \frac{V_A}{V_B}$ et du coefficient adiabatique $\gamma$ :$$r = 1 - \frac{1}{\alpha^{\gamma-1}}$$


## 2. Moteur Diesel (Allumage par compression)

Le cycle Diesel se distingue par une **combustion mixte** : une première phase isochore ($B \to C$) suivie d'une phase isobare ($C \to D$) lors de l'injection du combustible.
- Son rendement dépend à la fois du taux de compression et du taux de volumetricité.


## 3. Cycle de Brayton / Joule (Turbine à combustion)

Modélise les turbines à gaz aéronautiques ou industrielles (compressions et détentes isobares reliées par des compressions/détentes adiabatiques).

**Rendement théorique** en fonction du rapport de compression des pressions $\Gamma = \frac{P_B}{P_A}$ ::$$r = 1 - \frac{1}{\Gamma^{\frac{\gamma-1}{\gamma}}}$$
<!--SR:!2026-10-29,9,250-->


## Concepts liés

- [[Machines thermiques dithermes (Principes, conventions et bilans)]]
- [[Lois de Laplace (Transformations isentropiques)]]
- [[Modèle du gaz parfait, lois de Joule et relation de Mayer]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

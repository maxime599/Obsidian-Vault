---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/transformations
  - thermodynamique/principe
  - flashcards/thermodynamique
MOC:
  - "[[MOC Transformations]]"
  - "[[07 MOC/Concepts/Thermodynamique/MOC Principe]]"
date_creation: 2026-09-09
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---

# Typologie des transformations et réversibilité - Premier Principe de la thermodynamique

> [!info] Définition courte
> La **typologie des transformations** classe les évolutions thermodynamiques selon les contraintes extérieures imposées (pression, volume, température, chaleur) et définit les conditions nécessaires pour qu'une évolution soit réversible.
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


## 1. Bilan du Premier Principe selon la transformation

Le premier principe s'écrit :: $\Delta U = Q + W$ (avec $W = -\int P \, dV$).
<!--SR:!2026-12-21,62,310-->

- **Transformation Isobare ($P = \text{constante}$)** ::$$Q_P = C_P \Delta T, \qquad W = -P \Delta V$$
<!--SR:!2026-11-02,13,250-->
- **Transformation Isochore ($V = \text{constante}$)** :: $$W = 0 \implies \Delta U = Q_V = C_V \Delta T$$
<!--SR:!2026-11-15,31,270-->
- **Transformation Isotherme ($T = \text{constante}$)** :: $$\Delta U = 0 \implies Q = -W = nRT \ln\left(\frac{V_F}{V_0}\right) \quad (\text{pour un gaz parfait})$$
<!--SR:!2026-11-08,26,290-->
- **Transformation Adiabatique ($Q = 0$)** :: $$\Delta U = W$$
<!--SR:!2026-12-19,60,310-->


## 2. Classification selon le déroulement temporel

- **Transformation irréversible** ::: Évolution spontanée, rapide ou brutale au cours de laquelle le système passe par des états intermédiaires hors équilibre.
<!--SR:!2026-10-25,17,250!2026-12-16,57,310-->
- **Transformation quasi-statique** ::: Évolution suffisamment lente pour que le système passe par une suite continue d'états de quasi-équilibre à chaque instant.
<!--SR:!2026-11-26,43,290!2026-11-08,26,290-->
- **Transformation réversible** ::: Transformation quasi-statique pouvant être inversée par une modification infinitésimale des contraintes extérieures, ramenant le système et le milieu extérieur dans leurs états initiaux exacts.
<!--SR:!2026-11-27,43,290!2026-11-21,39,290-->

> [!warning] Attention
> Toute transformation réversible est ==quasi-statique==, mais la réciproque n'est pas vraie.
<!--SR:!2026-10-28,8,270-->


## 3. Causes d'irréversibilité

L'irréversibilité d'un processus est engendrée par :
- Les frottements mécaniques ou fluides.
- Les transferts thermiques à travers une différence finie de température.
- Le mélange spontané de deux substances.
- L'effet Joule au sein d'un conducteur.
- Les déformations inélastiques ou plastiques.
- Les réactions chimiques spontanées.


## Concepts liés

- [[Énergie interne et formes d'énergie]]
- [[Travail des forces de pression et transfert thermique]]
- [[Variables d'état et équilibre thermodynamique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
  - thermodynamique/gaz
  - thermodynamique/machines
MOC:
  - "[[MOC Machines]]"
date_creation: 2026-10-10
Ressources:
  - "[[Chapitre IV thermo.pdf]]"
---

# Machines thermiques dithermes : Principes, bilans et conventions

> [!info] Définition courte
> Une **machine thermique ditherme** est un système thermodynamique effectuant des transformations cycliques tout en échangeant du travail mécanique $W$ et de la chaleur avec deux sources de températures différentes : une source chaude ($T_2$) et une source froide ($T_1$).
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


## 1. Conventions de signe et sources thermiques

- **Températures absolues** :
  - Source froide : $T_1$
  - Source chaude : $T_2$ (avec $T_2 > T_1$)
- **Conventions (Point de vue du fluide thermique)** :
  - $Q > 0$ : Chaleur reçue par le fluide.
  - $Q < 0$ : Chaleur cédée par le fluide.
  - $W > 0$ : Travail reçu par le fluide (machine réceptrice).
  - $W < 0$ : Travail fourni par le fluide au milieu extérieur (moteur).


## 2. Bilan du Premier et du Second Principe sur un cycle

Puisque le fluide subit une transformation cyclique, les variations des fonctions d'état sur un cycle sont nulles ($\Delta U_{\text{cycle}} = 0$ et $\Delta S_{\text{cycle}} = 0$).

- **Premier Principe** :
  $$\Delta U_{\text{cycle}} = W + Q_1 + Q_2 = 0 \implies -W = Q_1 + Q_2$$
- **Second Principe (Inégalité de Clausius)** :
  $$S_e = \frac{Q_1}{T_1} + \frac{Q_2}{T_2} \le 0$$
  *(Pour un cycle réversible, l'entropie créée est nulle $S_c = 0$, d'où $\frac{Q_1}{T_1} + \frac{Q_2}{T_2} = 0$).*


## 3. Typologie et performances des machines thermiques

### A. Les moteurs thermiques
Convertissent de la chaleur en travail mécanique ($W < 0$).
- $Q_2 > 0$ (fournie par la source chaude) et $Q_1 < 0$ (évacuée vers la source froide).
- **Rendement thermique $r$** ::$$r = \frac{\text{Énergie utile}}{\text{Énergie dépensée}} = \frac{-W}{Q_2} = 1 + \frac{Q_1}{Q_2}$$
<!--SR:!2026-10-22,2,150-->

### B. Les réfrigérateurs et climatiseurs
Consomment du travail mécanique ($W > 0$) pour extraire de la chaleur d'un milieu froid.
- $Q_1 > 0$ (chaleur extraite de la source froide) et $Q_2 < 0$ (chaleur rejetée vers la source chaude).
- **Coefficient de Performance (COP) $\eta$**  pour un frigo ::$$\eta = \frac{\text{Chaleur extraite}}{\text{Travail fourni}} = \frac{Q_1}{W}$$
<!--SR:!2026-10-27,7,250-->

### C. Les pompes à chaleur (PAC)
Consomment du travail ($W > 0$) pour chauffer un local en y transférant de la chaleur.
- **COP de la pompes à chaleur** ::$$\eta = \frac{\text{Chaleur fournie au local}}{\text{Travail fourni}} = -\frac{Q_2}{W}$$
<!--SR:!2026-10-24,10,270-->


## 4. Représentation dans le diagramme de Clapeyron $(P, V)$

L'aire géométrique d'un cycle fermé $\mathscr{A}_{\text{cycle}}$ correspond au travail net échangé : $\mathscr{A}_{\text{cycle}} = -W_{\text{cycle}}$. (à quoi correspond un sens horraire et anti-horaire)
?
- **Sens horaire** : $W < 0 \implies$ **Cycle moteur**.
- **Sens trigonométrique (anti-horaire)** : $W > 0 \implies$ **Cycle récepteur**.
<!--SR:!2026-11-01,12,270-->


## Concepts liés

- [[Typologie des transformations et réversibilité - Premier Principe de la thermodynamique]]
- [[Second Principe de la thermodynamique et énoncés fondamentaux]]
- [[Entropie et bilan entropique]]
- [[Le cycle de Carnot et rendement maximal]]
- [[Moteurs thermiques usuels (Beau de Rochas, Diesel, Brayton)]]
- [[Machines thermiques réceptrices et cycle de Rankine]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

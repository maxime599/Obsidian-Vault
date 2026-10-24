---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
MOC:
date_creation: 2026-10-10
Ressources:
  - "[[Chapitre IV thermo.pdf]]"
---

# Le cycle de Carnot et rendement maximal

> [!info] Définition courte
> Le **cycle de Carnot** est un cycle thermodynamique théorique réversible composé de ==deux isothermes et de deux adiabatiques réversibles (isentropiques).== Il constitue la référence absolue limitant le rendement de toute machine thermique ditherme.
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
<!--SR:!2026-10-21,1,230-->


## 1. Description du cycle de Carnot
![[Chapitre IV thermo.pdf#page=11&rect=30,140,312,388|Chapitre IV thermo, p.11]]
Le cycle de Carnot alterné entre deux sources de températures $T_1$ (froide) et $T_2$ (chaude) comprend 4 étapes :
?
1. **Compression isotherme** à la température $T_1$.
2. **Compression adiabatique réversible** (isentropique) de $T_1$ à $T_2$.
3. **Détente isotherme** à la température $T_2$.
4. **Détente adiabatique réversible** (isentropique) de $T_2$ à $T_1$.
<!--SR:!2026-10-31,16,290-->


## 2. Efficacités et rendements de Carnot

Puisque le cycle est entièrement réversible, l'entropie créée totale est nulle ($S_c = 0$), ce qui conduit à la relation fondamentale ::$$\frac{Q_1}{T_1} + \frac{Q_2}{T_2} = 0$$
<!--SR:!2026-10-21,1,210-->

### A. Rendement maximal d'un moteur de Carnot
?
$$r_{\text{Carnot}} = 1 - \frac{T_1}{T_2}$$
<!--SR:!2026-10-22,2,170-->

### B. COP maximal d'un réfrigérateur de Carnot
?
$$\eta_{\text{réfrigérateur}} = \frac{T_1}{T_2 - T_1}$$ Car on s'intéresse à la source froide $T_{1}$
<!--SR:!2026-10-26,6,230-->

### C. COP maximal d'une pompe à chaleur de Carnot
?
$$\eta_{\text{PAC}} = \frac{T_2}{T_2 - T_1}$$Car on s'intéresse à la source chaude $T_{2}$
<!--SR:!2026-10-27,7,270-->

> [!important] Limite thermodynamique
> Aucune machine réelle ne peut dépasser l'efficacité de Carnot fonctionnant entre les mêmes sources de température ($r_{\text{réel}} \le r_{\text{Carnot}}$).


## Concepts liés

- [[Machines thermiques dithermes (Principes, conventions et bilans)]]
- [[Comparaison des détentes isotherme et adiabatique]]
- [[Second Principe de la thermodynamique et énoncés fondamentaux]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

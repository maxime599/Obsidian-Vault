---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
  - thermodynamique/entropie
MOC:
  - "[[MOC Entropie]]"
date_creation: 2026-09-18
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
---

# Entropie et bilan entropique

> [!info] Définition courte
> L'**entropie** $S$ (en $\text{J}\cdot\text{K}^{-1}$) est une fonction d'état extinsive caractérisant le ==désordre d'un système==. Le bilan d'entropie sépare la variation globale entre le transfert d'entropie avec l'extérieur et la création interne d'entropie.
<!--SR:!2026-11-04,15,290-->

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
<!--SR:!2026-12-17,64,310-->


## 1. Propriétés fondamentales de l'entropie

- **Fonction d'état** : La variation $\Delta S = S_{\text{final}} - S_{\text{initial}}$ ne dépend uniquement que de ==l'état initial et de l'état final, et non du chemin suivi.==
- **Système isolé** : Lors d'une transformation irréversible au sein d'un système isolé, l'entropie ==augmente ($\Delta S > 0$)==. L'état d'équilibre correspond à la valeur **maximale** de l'entropie.
- **Cas d'une transformation réversible** : La variation infinitésimale d'entropie $dS$ s'exprime par ::$$dS = \frac{\delta Q}{T}$$ car il n'y a pas de création d'entropie
<!--SR:!2026-10-30,19,270-->


## 2. Bilan d'entropie d'un système fermé

Pour un système fermé en contact avec une source de chaleur (thermostat à la température $T_e$), $dS =$ ::$$dS = \delta S_e + \delta S_c = \frac{\delta Q_e}{T_e} + \delta S_c$$
<!--SR:!2026-11-02,13,230-->

En intégrant sur une transformation globale :

$$\Delta S = S_e + S_c$$

- **Entropie échangée $S_e$** (en integrant) :: $S_e = \int \frac{\delta Q_e}{T_e}$.
<!--SR:!2026-11-05,16,230-->
	Elle peut être positive, négative ou nulle (pour un système ==fermé isolé==, $S_e = 0$).
- **Entropie créée $S_c$** : Reflète l'irréversibilité interne du processus :
  - **Transformation réversible** : $S_c$ = ::$0$
<!--SR:!2026-11-25,45,290-->
  - **Transformation irréversible** : $S_c$ :: $>0$
<!--SR:!2026-11-14,34,250-->



## Concepts liés

- [[Second Principe de la thermodynamique et énoncés fondamentaux]]
- [[Variables d'état et équilibre thermodynamique]]
- [[Typologie des transformations et réversibilité - Premier Principe de la thermodynamique]]
- [[Système thermodynamique et milieu extérieur]]
- [[Calcul de la variation d'entropie]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


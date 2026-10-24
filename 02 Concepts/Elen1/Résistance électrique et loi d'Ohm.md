---
type: concept
tags:
  - concepts
  - Elen1
  - "#elen1/composants"
  - flashcards/Elen1
MOC:
  - "[[MOC Composants]]"
date_creation: 2026-09-07
Ressources:
---

# Résistance électrique et loi d'Ohm

> [!info] Définition courte
> Une **résistance** est un composant passif qui s'oppose au passage du courant électrique en dissipant de l'énergie sous forme thermique. La **loi d'Ohm** établit la relation linéaire fondamentale entre la tension à ses bornes et le courant qui la traverse.
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


## 1. Expression de la résistance géométrique

La résistance $R$ d'un conducteur ohmique dépendant de sa géométrie et de son matériau s'exprime par :
?
$$R = \frac{\rho \cdot L}{S}$$
- $R$ : résistance électrique en Ohms ($\Omega$)
- $\rho$ : résistivité du matériau en Ohms-mètres ($\Omega\cdot\text{m}$)
- $L$ : longueur du matériau en mètres ($\text{m}$)
- $S$ : section transversale du matériau en mètres carrés ($\text{m}^2$)
<!--SR:!2026-11-13,41,290-->


## 2. Loi d'Ohm

Pour un conducteur ohmique pur, quel que soit le régime de fonctionnement (continu ou alternatif) :

Lois d'Ohm 
?$$U = R \cdot I$$
- $U$ : tension aux bornes du composant en Volts ($\text{V}$)
- $I$ : intensité du courant traversant le composant en Ampères ($\text{A}$)


## Concepts liés

- [[Groupements de résistances (Série et Parallèle)]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

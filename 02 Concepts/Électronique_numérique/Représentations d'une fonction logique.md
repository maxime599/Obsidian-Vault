---
type: concept
matière: Électronique_numérique
tags:
  - concepts
  - Électronique_numérique
  - Électronique_numérique/boole
MOC:
  - "[[MOC Boole]]"
date_creation: 2026-09-01
Ressources: "[[diapo_CITISE_AutoSIN.pdf]]"
---
# Représentations d'une fonction logique

> [!info] Définition courte
> Une **fonction logique** associe une combinaison de variables binaire en entrée à un état de sortie. Elle peut s'exprimer de manière équivalente sous quatre formes : l'**équation logique**, la **table de vérité**, le **symbole normalisé** et le **chronogramme**.
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

## 1. Les quatre modes de représentation


### 1. L'équation logique
Expression algébrique qui lie la sortie aux entrées à l'aide des opérateurs booléens ($\cdot$, $+$, $\overline{\phantom{a}}$).
- *Exemple* : $s = a \cdot b$ signifie « $s$ vaut $1$ lorsque $a$ vaut $1$ **et** $b$ vaut $1$ ».

### 2. La table de vérité
Tableau exhaustif répertoriant la totalité des combinaisons possibles des variables d'entrée ainsi que la valeur de sortie correspondante ($2^n$ lignes pour $n$ entrées).

### 3. Le symbole normalisé
Schéma matériel normalisé (norme IEC ou ANSI/IEEE) représentant le composant logique dans un circuit d'électronique numérique.

### 4. Le chronogramme
Graphique temporel illustrant l'évolution des niveaux logiques ($0$ et $1$) des signaux d'entrée et de sortie au cours du temps. Attention il faut que tout les cas soit visiblens


## 2. Synthèse comparative sur la porte ET (AND)

| Représentation | Forme / Description |
| :--- | :--- |
| **Équation** | $s = a \cdot b$ |
| **Table de vérité** | $a=0, b=0 \implies s=0$<br>$a=0, b=1 \implies s=0$<br>$a=1, b=0 \implies s=0$<br>$a=1, b=1 \implies s=1$ |
| **Lecture formelle** | $s$ vaut $1$ si et seulement si $a=1$ et $b=1$. |
| **Chronogramme** | Représentation temporelle où la ligne $s$ passe à l'état haut uniquement lors des créneaux où $a$ et $b$ sont simultanément à l'état haut. |


## Concepts liés

- [[Portes logiques et algèbre de Boole]]
- [[Composants d'électronique numérique et FPGA]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

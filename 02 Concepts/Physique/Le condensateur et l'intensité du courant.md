---
type: concept
matière: physique
tags:
  - concepts
  - physique
  - physique/électricité
MOC:
  - "[[MOC Électricité]]"
date_creation: 2026-07-28
---
# Le condensateur et l'intensité du courant

> [!info] Définition courte
> Un **condensateur** est un composant dipolaire constitué de deux armatures conductrices séparées par un isolant. Il stocke une charge électrique $q$ proportionnelle à la tension $u_C$ à ses bornes. L'intensité $i(t)$ mesure le débit de charge à travers une section du conducteur[.
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


## 1. Intensité du courant électrique

- **En régime variable** : L'intensité $i(t)$ (en Ampères, $\text{A}$) est la dérivée temporelle de la charge électrique $q(t)$ (en Coulombs, $\text{C}$)
  $$i(t) = \frac{dq(t)}{dt}$$

- En régime continu** : L'intensité est constante et s'écrit:
  $$I = \frac{Q}{\Delta t}$$

## 2. Modèle et capacité du condensateur


Un condensateur est formé de deux armatures $A$ et $B$ séparées par un milieu isolant. 
- Lorsqu'il est chargé, ses armatures portent des charges de même valeur absolue mais de signes opposés : $q_A = -q_B$.
- La charge $q$ accumulée est liée à la tension $u_C$ aux bornes du condensateur par la relation:
 $$q(t) = C \cdot u_C(t)$$

> [!theorem] Capacité d'un condensateur
> La capacité $C$ s'exprime en **Farads ($\text{F}$)**. Elle dépend de la géométrie du composant (surface $S$ des armatures, épaisseur $e$ de l'isolant et permittivité $\varepsilon$)
> $$C = \varepsilon \cdot \frac{S}{e}$$ 


## 3. Relation fondamentale courant-tension

En combinant $i(t) = \frac{dq(t)}{dt}$ et $q(t) = C \cdot u_C(t)$, on obtient l'équation caractéristique du condensateur:
$$i(t) = C \cdot \frac{du_C(t)}{dt}$$


## Concepts liés

- [[Circuit RC - Charge et décharge]]

- [[Dérivation des fonctions composées et opérations]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

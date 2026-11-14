---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/analyse
  - math/nombrescomplexes
MOC:
  - "[[07 MOC/Concepts/Math/MOC Analyse|MOC Analyse]]"
  - "[[MOC Nombres complexes]]"
date_creation: 2026-10-24
Ressources:
---

# Factorisation par l'arc moitié (Exponentielles complexes)

> [!info] Définition courte
> La **factorisation par l'arc moitié** est une technique algébrique puissante utilisant les exponentielles complexes pour transformer des sommes ou différences de termes en produits, en faisant intervenir la demi-somme et la demi-différence des angles.

```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        if (h.level === 1) continue;
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```

## 1. Principe de la factorisation par l'arc moitié

Pour factoriser une somme ou une différence de deux exponentielles complexes $e^{j\theta_1}$ et $e^{j\theta_2}$, on met en facteur l'exponentielle correspondant à la moyenne des angles (l'arc moyen), ce qui fait apparaître des expressions trigonométriques réelles via les formules d'Euler.


## 2. Formules fondamentales

Pour tous réels $\theta_1$ et $\theta_2$ :

- **Somme d'exponentielles** $e^{j\theta_1} + e^{j\theta_2} =$::$$e^{j\theta_1} + e^{j\theta_2} = 2 \cos\left(\frac{\theta_1 - \theta_2}{2}\right) e^{j\frac{\theta_1 + \theta_2}{2}}$$
<!--SR:!2027-01-09,58,310-->

- **Différence d'exponentielles** $e^{j\theta_1} - e^{j\theta_2}$::$$e^{j\theta_1} - e^{j\theta_2} = 2j \sin\left(\frac{\theta_1 - \theta_2}{2}\right) e^{j\frac{\theta_1 + \theta_2}{2}}$$
<!--SR:!2026-12-21,41,290-->


## Concepts liés

- [[Forme exponentielle et formule d'Euler]]
- [[Conjugué et module d'un nombre complexe]]
- [[Étude et propriétés des fonctions cosinus et sinus]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
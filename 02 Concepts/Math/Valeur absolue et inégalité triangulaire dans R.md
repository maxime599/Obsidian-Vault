---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/ensemble
  - math/analyse
MOC:
  - "[[MOC Ensemble]]"
  - "[[07 MOC/Concepts/Math/MOC Analyse]]"
date_creation: 2026-09-17
Ressources:
---

# Valeur absolue et inégalité triangulaire dans R

> [!info] Définition courte
> La **valeur absolue** $\vert{}x\vert{}$ mesure la distance de $x$ à l'origine. Elle vérifie l'**inégalité triangulaire** $\vert{}x + y\vert{} \le \vert{}x\vert{} + \vert{}y\vert{}$, fondamentale pour l'analyse des limites et la caractérisation des parties bornées.
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


## 1. Définition et propriétés de base

Pour tout réel $x \in \mathbb{R}$ :
$$\vert{}x\vert{} = \begin{cases} x & \text{si } x \ge 0 \\ -x & \text{si } x < 0 \end{cases}$$

- $\vert{}x\vert{} \ge 0$
- $\vert{}x\vert{} = 0 \iff x = 0$
- $-\vert{}x\vert{} \le x \le \vert{}x\vert{}$


## 2. Interprétation géométrique

Sur la droite réelle, la distance entre deux points d'abscisses $x$ et $y$ est donnée par :
$$d(x, y) = \vert{}y - x\vert{}$$
En particulier, $\vert{}x\vert{}$ représente la distance du point d'abscisse $x$ à l'origine $O(0)$.


## 3. Inégalité triangulaire

Pour tous réels $x$ et $y$ (Inégalité triangulaire)::$$\vert{}x + y\vert{} \le \vert{}x\vert{} + \vert{}y\vert{}$$
<!--SR:!2027-01-04,63,310-->

### Démonstration
Pour tout réel $t$, on a $-\vert{}t\vert{} \le t \le \vert{}t\vert{}$. En appliquant ceci à $x$ et $y$ :
$$-\vert{}x\vert{} \le x \le \vert{}x\vert{}$$
$$-\vert{}y\vert{} \le y \le \vert{}y\vert{}$$

Par addition membre à membre :
$$-(\vert{}x\vert{} + \vert{}y\vert{}) \le x + y \le \vert{}x\vert{} + \vert{}y\vert{}$$

L'inégalité de la forme $-A \le X \le A$ (avec $A \ge 0$) étant équivalente à $\vert{}X\vert{} \le A$, on obtient directement :
$$\vert{}x + y\vert{} \le \vert{}x\vert{} + \vert{}y\vert{}$$

> [!note] Cas d'égalité
> L'égalité $\vert{}x + y\vert{} = \vert{}x\vert{} + \vert{}y\vert{}$ a lieu si et seulement si $x$ et $y$ sont de même signe, c'est-à-dire $xy \ge 0$.


## 4. Caractérisation des parties bornées

Une partie $A \subset \mathbb{R}$ est bornée si et seulement s'il existe un réel $R \ge 0$ tel que :
$$\forall x \in A, \quad \vert{}x\vert{} \le R$$


## Concepts liés

- [[Majorants, minorants et bornes supérieure et inférieure dans R]]
- [[Suites majorées, minorées, bornées]]
- [[Limites de fonctions et asymptotes]]
- [[Conjugué et module d'un nombre complexe]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

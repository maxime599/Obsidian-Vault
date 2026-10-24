---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/dérivation
  - math/fonction
MOC:
  - "[[MOC Dérivation]]"
  - "[[MOC Fonction]]"
date_creation: 2026-07-27
---
# Convexité et concavité d'une fonction

> [!info] Définition courte
> Sur un intervalle $I$, une fonction $f$ est **convexe** si sa courbe représentative $\mathcal{C}_f$ est située en dessous de ses segments sécants (et au-dessus de ses tangentes). Elle est **concave** si $\mathcal{C}_f$ est située au-dessus de ses segments sécants (et en dessous de ses tangentes).
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


## Explication intuitive

- **Convexe** : La courbe a la forme d'un « **V** » ou d'un creux (elle « retient l'eau »).
  - *Moyen mnémotechnique* : **ConVexe** $\Rightarrow$ Forme en **V**.
- **Concave** : La courbe a la forme d'un « **A** » (sans la barre) ou d'un dôme/chapeau (elle « fait glisser l'eau »).
  - *Moyen mnémotechnique* : **ConAve** $\Rightarrow$ Forme en **A**.


## Fonctionnement

Pour étudier la convexité d'une fonction $f$ deux fois dérivable sur un intervalle $I$ :

1. **Calcul des dérivées** : Calculer la dérivée première $f'(x)$, puis la **dérivée seconde** $f''(x) = (f'(x))'$.
2. **Étude du signe de $f''(x)$** :
   - Si $f''(x) \ge 0$ sur $I$, alors $f$ est **convexe** sur $I$.
   - Si $f''(x) \le 0$ sur $I$, alors $f$ est **concave** sur $I$.
3. **Cas géométrique** :
   - Comparer la position de la courbe $\mathcal{C}_f$ par rapport à ses tangentes $y = f'(a)(x - a) + f(a)$.


## Exemples de référence

- **Fonction carré** ($x \mapsto x^2$) : Convexe sur $\mathbb{R}$.
- **Fonction cube** ($x \mapsto x^3$) : Concave sur $]-\infty ; 0]$ et convexe sur $[0 ; +\infty[$.
- **Fonction inverse** ($x \mapsto \frac{1}{x}$) : Concave sur $]-\infty ; 0[$ et convexe sur $]0 ; +\infty[$.
- **Fonction racine carrée** ($x \mapsto \sqrt{x}$) : Concave sur $[0 ; +\infty[$.


## Formules / Algorithmes / Propriétés

> [!theorem] Caractérisations équivalentes
> Soit $f$ une fonction deux fois dérivable sur un intervalle $I$.
> 
> **Propriétés équivalentes pour la convexité :**
> 1. $f$ est **convexe** sur $I$.
> 2. $f'$ est **croissante** sur $I$.
> 3. $f''$ est **positive** sur $I$ ($f''(x) \ge 0$).
> 4. La courbe $\mathcal{C}_f$ est située **au-dessus** de chacune de ses tangentes sur $I$.
> 
> **Propriétés équivalentes pour la concavité :**
> 1. $f$ est **concave** sur $I$.
> 2. $f'$ est **décroissante** sur $I$.
> 3. $f''$ est **négative** sur $I$ ($f''(x) \le 0$).
> 4. La courbe $\mathcal{C}_f$ est située **en dessous** de chacune de ses tangentes sur $I$.


## Concepts liés

- [[Point d'inflexion]]
- [[Nombre dérivé et équation de la tangente]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

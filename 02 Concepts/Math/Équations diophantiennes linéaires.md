---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/arithmetique
  - math/résolutiondequations
MOC:
  - "[[MOC Arithmetique]]"
  - "[[MOC Résolution d'équations]]"
date_creation: 2026-07-28
---
# Équations diophantiennes linéaires

> [!info] Définition courte
> Une **équation diophantienne linéaire** est une équation de la forme $ax+by=c$, dont on cherche les solutions entières $(x,y)\in\mathbb{Z}^2$.
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

Contrairement aux équations ordinaires, les inconnues ne peuvent prendre que des valeurs entières. Le problème revient souvent à trouver toutes les façons de combiner deux quantités entières pour obtenir une quantité donnée.

## Fonctionnement

Pour résoudre $ax+by=c$ :

1. Calculer $d=\operatorname{pgcd}(a,b)$.
2. Vérifier la condition nécessaire et suffisante : $d\mid c$.
3. Trouver une identité de Bézout $au+bv=d$.
4. Multiplier par $\frac{c}{d}$ pour obtenir une solution particulière $(x_0,y_0)$.
5. Décrire toutes les solutions avec un paramètre entier $k$.

> [!theorem] Condition d'existence et solutions générales
> L'équation $ax+by=c$ admet des solutions entières si et seulement si :
> $$\operatorname{pgcd}(a,b)\mid c.$$
> Si $(x_0,y_0)$ est une solution et $d=\operatorname{pgcd}(a,b)$, toutes les solutions sont :
> $$x=x_0+\frac{b}{d}k\qquad y=y_0-\frac{a}{d}k,\qquad k\in\mathbb{Z}.$$

## Exemple simple

Résolvons $6x+15y=9$. Le PGCD vaut $3$, qui divise $9$. Une solution est $x_0=-1$, $y_0=1$ car $-6+15=9$. Toutes les solutions sont :
$$x=-1+5k\qquad y=1-2k,\qquad k\in\mathbb{Z}.$$

## Concepts liés

- [[PGCD et algorithme d'Euclide]]
- [[Théorèmes de Bézout et de Gauss]]
- [[Division euclidienne dans Z]]
- [[Congruences]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

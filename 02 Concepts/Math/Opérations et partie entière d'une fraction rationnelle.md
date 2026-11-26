---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/algebre
  - math/polynomes
MOC:
  - "[[MOC Algèbre]]"
  - "[[MOC Polynomes]]"
date_creation: 2026-11-15
Ressources:
---
# Opérations et partie entière d'une fraction rationnelle

> [!info] Définition courte
> Les fractions rationnelles se manipulent via des lois de composition algébriques analogues à celles des fractions de nombres, et toute fraction se décompose à l'aide d'un polynôme appelé partie entière.

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

## 1. Opérations sur les fractions rationnelles

Soient $F(X) = \frac{A(X)}{B(X)}$ et $G(X) = \frac{C(X)}{D(X)}$ deux fractions rationnelles et $\lambda \in \mathbb{K}$ :
- **Multiplication par un scalaire** : $(\lambda F)(X) = \frac{\lambda A(X)}{B(X)}$
- **Somme** : $F(X) + G(X) = \frac{A(X)D(X) + B(X)C(X)}{B(X)D(X)}$
- **Produit** : $F(X) \times G(X) = \frac{A(X)C(X)}{B(X)D(X)}$
- **Inverse** (si $F(X) \neq 0$) : $\frac{1}{F(X)} = \frac{B(X)}{A(X)}$
- **Quotient** (si $F(X) \neq 0$) : $\frac{G(X)}{F(X)} = G(X) \times \frac{1}{F(X)} = \frac{C(X)B(X)}{D(X)A(X)}$


## 2. Partie entière d'une fraction rationnelle

En effectuant la division euclidienne de $A(X)$ par $B(X)$, on obtient :
$$A(X) = B(X)Q(X) + R(X) \quad \text{avec } \deg(R(X)) < \deg(B(X))$$
Ce qui s'écrit sous forme de fraction rationnelle :
$$\frac{A(X)}{B(X)} = Q(X) + \frac{R(X)}{B(X)}$$
- Le polynôme $Q(X)$ est la **partie entière** de la fraction rationnelle.
- Si $\deg(F(X)) \geq 0$, alors $\deg(Q(X)) = \deg(F(X))$.
- Si $\deg(F(X)) < 0$, alors $Q(X) = 0$.
- Si $R(X) = 0$, la fraction rationnelle est un polynôme.


## Concepts liés

- [[Généralités et représentant irréductible d'une fraction rationnelle pour les polynômes]]
- [[Propriétés et caractéristiques d'une fraction rationnelle]]
- [[Décomposition en éléments simples sur R d'une fraction rationnelle]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date ASC
```
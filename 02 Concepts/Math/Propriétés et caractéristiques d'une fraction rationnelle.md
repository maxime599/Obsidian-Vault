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
# Propriétés et caractéristiques d'une fraction rationnelle

> [!info] Définition courte
> Les caractéristiques fondamentales d'une fraction rationnelle incluent ses pôles (racines du dénominateur irréductible), son évaluation en un point hors des pôles et son degré défini comme la différence des degrés du numérateur et du dénominateur.

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

## 1. Pôles et évaluation

- **Pôles** : Soit $F(X)$ une fraction rationnelle non nulle de représentant irréductible $\frac{N(X)}{D(X)}$. Un **pôle d'ordre $n$** de $F(X)$ est :: une racine d'ordre $n$ de $D(X)$.
<!--SR:!2026-11-25,3,250-->
- **Évaluation et fonction rationnelle** : Pour tout $x \in \mathbb{K}$ qui n'est pas un pôle ($D(x) \neq 0$), la valeur de $F(X)$ en $x$ est $F(x) = \frac{N(x)}{D(x)}$. On associe ainsi à $F(X)$ une **fonction rationnelle** définie sur $\mathbb{K}$ privé de ses pôles.


## 2. Degré d'une fraction rationnelle

- **Définition** : Le degré d'une fraction rationnelle non nulle $F(X)$ de représentant irréductible $\frac{N(X)}{D(X)}$ est l'entier relatif ::$$\deg(F(X)) = \deg(N(X)) - \deg(D(X))$$
<!--SR:!2026-12-09,15,290-->
  La fraction rationnelle nulle a par convention un degré égal à $-\infty$.
- **Propriétés** : 
  - La formule $\deg(F(X)) = \deg(A(X)) - \deg(B(X))$ est valable quelle que soit la représentation $\frac{A(X)}{B(X)}$.
  - Pour tout polynôme $P(X)$, $\deg\left(\frac{P(X)}{1}\right) = \deg(P(X))$, ce qui prolonge la notion de degré des polynômes.


## Concepts liés

- [[Généralités et représentant irréductible d'une fraction rationnelle pour les polynômes]]
- [[Opérations et partie entière d'une fraction rationnelle]]
- [[Décomposition en éléments simples sur R d'une fraction rationnelle]]
- [[Définition, degré et opérations sur les polynômes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date ASC
```
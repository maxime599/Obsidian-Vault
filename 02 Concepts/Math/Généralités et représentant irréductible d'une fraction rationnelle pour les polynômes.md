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
# Généralités et représentant irréductible d'une fraction rationnelle pour les polynômes

> [!info] Définition courte
> Une fraction rationnelle à coefficients dans $\mathbb{K}$ ($\mathbb{R}$ ou $\mathbb{C}$) est un élément $F(X)$ représenté par un quotient de polynômes $\frac{N(X)}{D(X)}$ dont le dénominateur $D(X)$ n'est pas nul.

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

## 1. Définitions et égalité

Dans ce chapitre, $\mathbb{K}$ désigne $\mathbb{R}$ ou $\mathbb{C}$.

- **Fraction rationnelle** : Quotient $\frac{N(X)}{D(X)}$ de deux polynômes à coefficients dans $\mathbb{K}$ ($D(X) \neq 0$).
- **Égalité de deux quotients** : Soient $A(X)$, $B(X)$, $N(X)$ et $D(X)$ des polynômes ($B(X) \neq 0$ et $D(X) \neq 0$). Les quotients $\frac{A(X)}{B(X)}$ et $\frac{N(X)}{D(X)}$ représentent la même fraction rationnelle si et seulement si ::$$\frac{A(X)}{B(X)} = \frac{N(X)}{D(X)} \iff A(X)D(X) = B(X)N(X)$$
<!--SR:!2026-12-08,14,290-->


## 2. Ensembles et notations

- $\mathbb{R}(X)$ : ::Ensemble des fractions rationnelles à coefficients dans $\mathbb{R}$.
<!--SR:!2026-12-10,16,290-->
- $\mathbb{C}(X)$ : ::Ensemble des fractions rationnelles à coefficients dans $\mathbb{C}$ (on a $\mathbb{R}(X) \subset \mathbb{C}(X)$).
<!--SR:!2026-12-03,10,270-->
- **Injection des polynômes** : Tout polynôme $P(X)$ correspond à la fraction $\frac{P(X)}{1}$, ce qui permet d'écrire $\mathbb{K}[X] \subset \mathbb{K}(X)$.


## 3. Représentant irréductible

Pour toute fraction rationnelle non nulle $F(X)$, il existe un unique couple de polynômes $N(X)$ et $D(X)$ tels que :
?
- $D(X)$ est un polynôme unitaire (coefficient dominant égal à $1$).
- $N(X)$ et $D(X)$ n'ont aucune racine complexe en commun.
- $F(X) = \frac{N(X)}{D(X)}$.
<!--SR:!2026-11-25,2,230-->

Ce quotient est appelé le **représentant irréductible** de $F(X)$. La fraction rationnelle nulle a pour représentant $\frac{0}{1}$.


## Concepts liés

- [[Propriétés et caractéristiques d'une fraction rationnelle]]
- [[Opérations et partie entière d'une fraction rationnelle]]
- [[Décomposition en éléments simples sur R d'une fraction rationnelle]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date ASC
```
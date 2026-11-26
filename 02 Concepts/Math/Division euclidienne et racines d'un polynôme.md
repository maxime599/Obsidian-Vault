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
date_creation: 2026-11-04
Ressources:
  - "[[Math chapitre6.pdf]]"
---
# Division euclidienne et racines d'un polynôme

> [!info] Définition courte
> La **division euclidienne** de polynômes garantit l'existence d'un quotient et d'un reste uniques, formant la base de l'étude des **racines**, de leur ordre de multiplicité et de leur caractérisation par les dérivées successives.

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

## 1. Division euclidienne dans $\mathbb{K}[X]$

Soient $A(X)$ et $B(X)$ deux polynômes avec $B(X) \neq 0$. Il existe un unique couple $(Q(X), R(X))$ tel que ::$$\begin{cases} A(X) = B(X)Q(X) + R(X) \\ \deg(R(X)) < \deg(B(X)) \end{cases}$$
<!--SR:!2026-12-17,27,270-->
- $Q(X)$ est le quotient et $R(X)$ le reste.
- Si $R(X) = 0$, $A(X)$ est divisible par $B(X)$ (multiple).


## 2. Racines d'un polynôme et divisibilité

$\alpha \in \mathbb{C}$ est une **racine** de $P(X)$ si ::$P(\alpha) = 0$.
<!--SR:!2027-01-24,62,310-->
- $P(X)$ est divisible par $(X - \alpha) \iff$::$P(\alpha) = 0$.
<!--SR:!2027-01-19,58,310-->
- Un polynôme de degré $n$ admet **==au plus $n$== racines distinctes**.
- Si un polynôme admet une infinité de racines, c'est ==le polynôme nul==.
<!--SR:!2027-01-30,67,310!2027-01-23,61,310-->


## 3. Ordre de multiplicité et dérivées

L'ordre de multiplicité $k$ d'une racine $\alpha$ est :: le plus grand entier tel que $(X - \alpha)^k$ divise $P(X)$ ($k=1$ : racine simple ; $k \ge 2$ : racine multiple).
<!--SR:!2026-12-22,30,230-->

**Caractérisation par les dérivées** :
$\alpha$ est une racine d'ordre de multiplicité $n$ de $P(X)$ si et seulement si ::$$\begin{cases} P(\alpha) = P'(\alpha) = P''(\alpha) = \dots = P^{(n-1)}(\alpha) = 0 \\ P^{(n)}(\alpha) \neq 0 \end{cases}$$
<!--SR:!2026-12-16,26,270-->


## Concepts liés

- [[Définition, degré et opérations sur les polynômes]]
- [[Décomposition en facteurs irréductibles (C[X] et R[X])]]
- [[Dérivation et formule de Taylor pour les polynômes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
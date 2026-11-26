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
# Décomposition en facteurs irréductibles ($C[X]$ et $R[X]$)

> [!info] Définition courte
> Tout polynôme non constant se décompose de manière unique en un produit de facteurs irréductibles, sous forme de monômes de degré 1 dans $\mathbb{C}[X]$ (Théorème de D'Alembert-Gauss) ou combinant facteurs réels et trinômes du second degré sans racines réelles dans $\mathbb{R}[X]$.

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

## 1. Décomposition dans $\mathbb{C}[X]$ (Théorème de D'Alembert-Gauss)

- **Théorème de D'Alembert-Gauss** :: Tout polynôme non constant de $\mathbb{C}[X]$ admet au moins une racine dans $\mathbb{C}$.
<!--SR:!2026-11-29,9,190-->
- **Forme de la décomposition** : Tout polynôme $P(X) \in \mathbb{C}[X]$ de degré $n$ se décompose de façon unique sous la forme ::$$P(X) = a_n \prod_{i=1}^{p} (X - \alpha_i)^{r_i}$$
<!--SR:!2026-12-08,18,230-->
  où $a_n$ est le coefficient dominant, $\alpha_i$ les racines distinctes de multiplicités $r_i$, et $\sum_{i=1}^{p} r_i = n$.


## 2. Propriétés des racines dans $\mathbb{R}[X]$

Si $P(X) \in \mathbb{R}[X]$ et $\alpha \in \mathbb{C}$ est une racine de $P(X)$, alors **son nombre conjugué $\bar{\alpha}$ est ::également racine** de $P(X)$ avec le même ordre de multiplicité.
<!--SR:!2027-01-01,42,290-->


## 3. Décomposition dans $\mathbb{R}[X]$

Tout polynôme $P(X) \in \mathbb{R}[X]$ de degré $n$ se décompose de manière unique sous la forme:
?
$$P(X) = a_n \prod_{i=1}^{p} (X - \alpha_i)^{r_i} \times \prod_{k=1}^{q} (Q_k(X))^{s_k}$$
- $a_n \in \mathbb{R}$ est le coefficient dominant.
- $\alpha_1, \dots, \alpha_p$ sont les racines réelles de multiplicités $r_1, \dots, r_p$.
- $Q_k(X) = X^2 + b_k X + c_k$ sont des polynômes irréductibles de degré 2 à coefficients réels sans racine réelle ($\Delta < 0$).
- La relation sur les degrés vérifie : $\sum_{i=1}^{p} r_i + 2\sum_{k=1}^{q} s_k = n$.
<!--SR:!2026-12-04,14,210-->


## Concepts liés

- [[Division euclidienne et racines d'un polynôme]]
- [[Conjugué et module d'un nombre complexe]]
- [[Équations du second degré dans C]]
- [[Équations polynomiales]]
- [[Sommes, changements d'indice et sommes télescopiques]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
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
# Définition, degré et opérations sur les polynômes

> [!info] Définition courte
> Un **polynôme** est une expression formelle composée d'une somme finie de monômes. L'ensemble des polynômes à coefficients dans $\mathbb{R}$ (ou $\mathbb{C}$) est muni d'une structure algébrique rigoureuse permettant l'addition, le produit, la composition et le calcul du degré.

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

## 1. Définition, notations et identification

- **Définition** : Un polynôme à coefficients dans $\mathbb{R}$ est une suite $(a_k)_{k\in\mathbb{N}}$ nulle à partir d'un certain rang, notée ::$$P(X) = \sum_{k=0}^{n} a_k X^k = a_0 + a_1 X + a_2 X^2 + \dots + a_n X^n$$
<!--SR:!2027-01-05,46,290-->
- **Ensembles** : $\mathbb{R}[X]$ désigne ==l'ensemble des polynômes à coefficients réels==, et $\mathbb{C}[X]$ à coefficients complexes ($\mathbb{R}[X] \subset \mathbb{C}[X]$).
- **Identification** : Deux polynômes sont égaux si et seulement si ==ils ont exactement les mêmes coefficients==. Un polynôme est nul si et seulement si ==tous ses coefficients sont nuls==.
- **Évaluation** : À tout polynôme $P(X)$, on associe une fonction polynomiale $x \mapsto P(x)$ définie sur $\mathbb{C}$.
<!--SR:!2026-12-28,38,290!2027-01-15,54,310!2027-01-18,57,310-->


## 2. Degré d'un polynôme

Pour un polynôme non nul, son **degré** $\deg(P)$ est :: le plus grand indice $n$ tel que $a_n \neq 0$.
<!--SR:!2026-12-18,28,270-->
- **Polynôme nul** : Par convention, $\deg(0) =$::$-\infty$.
<!--SR:!2027-01-20,58,310-->
- **Polynômes constants** : Degré inférieur ou égal à $0$.
- Les polynômes peuvent être ordonnés selon les puissances croissantes ou décroissantes.


## 3. Opérations algébriques sur les polynômes

- **Somme et produit par un scalaire** : Addition terme à terme et multiplication par un scalaire $\lambda \in \mathbb{C}$.
- **Produit de deux polynômes** : $(PQ)(X) = \sum_{k=0}^{+\infty} c_k X^k$ avec $c_k = \sum_{i=0}^{k} a_i b_{k-i}$. Propriété fondamentale : $(PQ)(X) = 0 \iff$::$P(X) = 0 \text{ ou } Q(X) = 0$.
<!--SR:!2027-01-21,59,310-->
- **Formule du binôme de Newton** : Pour tous polynômes $P(X)$ et $Q(X)$ ::$$(P(X) + Q(X))^n = \sum_{k=0}^{n} \binom{n}{k} P^k(X) Q^{n-k}(X)$$
<!--SR:!2027-01-27,64,310-->
- **Composition** : $(P \circ Q)(X) = P(Q(X))$ (opération non commutative en général).


## Concepts liés

- [[Sommes, changements d'indice et sommes télescopiques]]
- [[Dérivation et formule de Taylor pour les polynômes]]
- [[Division euclidienne et racines d'un polynôme]]
- [[Binôme de Newton]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/algebre
  - math/polynomes
  - math/analyse
MOC:
  - "[[MOC Algèbre]]"
  - "[[07 MOC/Concepts/Math/MOC Analyse|MOC Analyse]]"
  - "[[MOC Polynomes]]"
date_creation: 2026-11-04
Ressources:
  - "[[Math chapitre6.pdf]]"
---
# Dérivation et formule de Taylor pour les polynômes

> [!info] Définition courte
> La **dérivation formelle** des polynômes obéit à des règles algébriques strictes, permettant d'établir des outils puissants tels que la formule de Leibniz et la formule de Taylor pour les polynômes.

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

## 1. Polynôme dérivé et propriétés

Soit $P(X) = \sum_{k=0}^{+\infty} a_k X^k$. Son **polynôme dérivé** est défini par ::$$P'(X) = \sum_{k=1}^{+\infty} k a_k X^{k-1}$$
<!--SR:!2027-01-26,63,310-->

- **Propriétés** : 
  - $P(X)$ est constant $\iff$::$P'(X) = 0$.
<!--SR:!2026-12-01,7,270-->
  - Linéarité, règle du produit, règle de la puissance et règle de la composée.
- **Formule de Leibniz** (dérivée $n$-ième d'un produit) ::$$(PQ)^{(n)}(X) = \sum_{k=0}^{n} \binom{n}{k} P^{(k)}(X) Q^{(n-k)}(X)$$
<!--SR:!2026-11-26,6,250-->


## 2. Formule de Taylor pour les polynômes

Pour tout polynôme $P(X)$ de degré $n$ et tout $\alpha \in \mathbb{C}$ (Formule de Taylor)::$$P(X) = \sum_{k=0}^{n} \frac{P^{(k)}(\alpha)}{k!} (X - \alpha)^k$$
<!--SR:!2026-11-28,8,230-->
$$P(X) = P(\alpha) + \frac{P'(\alpha)}{1!}(X-\alpha) + \frac{P''(\alpha)}{2!}(X-\alpha)^2 + \dots + \frac{P^{(n)}(\alpha)}{n!}(X-\alpha)^n$$

En particulier, pour $\alpha = 0$ :
$$P(X) = \sum_{k=0}^{n} \frac{P^{(k)}(0)}{k!} X^k$$


## Concepts liés

- [[Définition, degré et opérations sur les polynômes]]
- [[Division euclidienne et racines d'un polynôme]]
- [[Sommes, changements d'indice et sommes télescopiques]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
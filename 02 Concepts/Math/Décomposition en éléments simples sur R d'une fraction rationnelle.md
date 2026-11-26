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
# Décomposition en éléments simples sur R d'une fraction rationnelle

> [!info] Définition courte
> Toute fraction rationnelle à coefficients réels s'exprime de manière unique comme la somme de sa partie entière, d'éléments simples de première espèce (liés aux pôles réels) et d'éléments simples de seconde espèce (liés aux pôles complexes conjugués).

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

## 1. Théorème de décomposition

Toute fraction rationnelle à coefficients réels se décompose de manière unique en somme de :
- Sa **partie entière** $Q(X)$.
- D'**éléments simples de première espèce** (associés aux racines réelles $a$ d'ordre $n$) de la forme :
  $$\frac{\alpha}{(X - a)^k} \quad (\alpha \in \mathbb{R}, 1 \leq k \leq n)$$
- D'**éléments simples de seconde espèce** (associés aux facteurs irréductibles de degré 2 $X^2 + bX + c$ avec $\Delta < 0$, d'ordre $n$) de la forme :
  $$\frac{\alpha X + \beta}{(X^2 + bX + c)^k} \quad (\alpha, \beta \in \mathbb{R}, 1 \leq k \leq n)$$


## 2. Méthode pratique en cinq étapes

1. **Décomposition du dénominateur** : Factoriser $D(X)$ en produits de facteurs irréductibles dans $\mathbb{R}[X]$.
2. **Simplification** : Éliminer les racines communes entre le numérateur et le dénominateur pour obtenir le représentant irréductible.
3. **Recherche de la partie entière** : Si $\deg(N) \geq \deg(D)$, effectuer la division euclidienne pour isoler $Q(X)$ et se ramener à une fraction stricte $\frac{R(X)}{D(X)}$.
4. **Écriture théorique** : Poser la forme générale de la décomposition en fonction de la nature des pôles (réels ou complexes conjugués).
5. **Calcul des constantes** : Déterminer les coefficients inconnus par les méthodes adaptées (identification, multiplication par $(X-a)^n$ suivie d'une évaluation, limites en $\infty$, valeurs particulières, etc.).


## Concepts liés

- [[Généralités et représentant irréductible d'une fraction rationnelle pour les polynômes]]
- [[Propriétés et caractéristiques d'une fraction rationnelle]]
- [[Opérations et partie entière d'une fraction rationnelle]]
- [[Définition, degré et opérations sur les polynômes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date ASC
```
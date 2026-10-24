---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/ensemble
  - math/denombrement
MOC:
  - "[[MOC Ensemble]]"
  - "[[MOC Dénombrement]]"
date_creation: 2026-09-17
Ressources:
---

# Ensembles finis, infinis et dénombrabilité

> [!info] Définition courte
> Un ensemble est **fini** s'il possède un nombre entier $n$ d'éléments (en bijection avec $[\![1 ; n]\!]$). S'il n'est pas fini, il est **infini**. Un ensemble infini en bijection avec $\mathbb{N}$ est dit **dénombrable**.
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


## 1. Ensembles finis et cardinalité

Pour tout $n \in \mathbb{N}^*$, on note $[\![ 1 ; n ]\!] = \{1, 2, \dots, n\}$.

- **Ensemble fini** : Un ensemble non vide $E$ est fini de cardinal $n \in \mathbb{N}^*$ s'il existe une bijection entre $E$ et $[\![ 1 ; n ]\!]$.
- **Unicité du cardinal** : Le cardinal d'un ensemble fini est unique, noté $\text{Card}(E)$ ou $|E|$.
- **Ensemble vide** : Par convention, $\text{Card}(\emptyset) = 0$.
- **Sous-ensemble** : Si $A \subseteq E$ avec $E$ fini, alors $\text{Card}(A) \le \text{Card}(E)$. De plus, si $A \neq E$, alors $\text{Card}(A) < \text{Card}(E)$.


## 2. Caractérisation d'un ensemble infini

Un ensemble $E$ est **infini** s'il n'est pas fini.

> **Théorème de caractérisation** :: S'il existe une bijection entre un ensemble $E$ et une partie propre $A \subsetneq E$ ($A \neq E$), alors $E$ est infini.
<!--SR:!2026-10-23,20,250-->

### Exemple : Infinitude de $\mathbb{N}$
Soit $2\mathbb{N} = \{2k \mid k \in \mathbb{N}\}$ l'ensemble des entiers pairs ($2\mathbb{N} \subsetneq \mathbb{N}$).
L'application $f : \mathbb{N} \to 2\mathbb{N}$ définie par $f(n) = 2n$ est bijective (injective et surjective). Par conséquent, $\mathbb{N}$ est un ensemble infini.


## 3. Dénombrabilité

- **Ensemble dénombrable** : Un ensemble $E$ est dénombrable si :: ill existe une bijection entre $E$ et $\mathbb{N}$.
<!--SR:!2026-12-10,63,310-->
- **Dénombrabilité de $\mathbb{Q}$** : L'ensemble des nombres rationnels $\mathbb{Q}$ est infini dénombrable.
- **Non-dénombrabilité de $\mathbb{R}$ (Théorème de Cantor, 1874)** : L'ensemble des nombres réels $\mathbb{R}$ est infini mais **non dénombrable** (son cardinal est supérieur à celui de $\mathbb{N}$).


## Concepts liés

- [[Théorie des ensembles et opérations de base]]
- [[Injectivité, surjectivité et bijectivité]]
- [[Principe de récurrence et bon ordre de N]]
- [[Structure de R et densité de Q]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

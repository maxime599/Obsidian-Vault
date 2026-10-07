---
type: concept
tags:
  - concepts
  - Math
  - math/ensemble
  - math/fonction
  - flashcards/Math
MOC:
  - "[[MOC Ensemble]]"
  - "[[MOC Fonction]]"
date_creation: 2026-09-09
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---

# Application réciproque d'une bijection

> [!info] Définition courte
> L'**application réciproque** $f^{-1}$ d'une bijection $f : E \to F$ est l'application de $F$ dans $E$ qui :: associe à tout élément de $F$ son unique antécédent dans $E$ par $f$.
<!--SR:!2026-10-21,18,270-->


## 1. Définition et équivalence fondamentale

Soit $f$ une bijection de $E$ dans $F$. L'application réciproque $f^{-1}: F \to E$ est caractérisée par :

$$\forall (x, y) \in E \times F, \quad y = f(x) \iff x = f^{-1}(y)$$

Pour tout $y \in F$, l'équation $f(x) = y$ admet une unique solution dans $E$, notée $f^{-1}(y)$.

- *Exemple* : La bijection réciproque de la fonction logarithme népérien ($\ln$) est la fonction exponentielle ($\exp$).


## 2. Caractérisation par la composition

Soit $f$ une bijection de $E$ dans $F$ et $f^{-1}$ sa réciproque :

$$f \circ f^{-1} = \text{Id}_F \quad \text{et} \quad f^{-1} \circ f = \text{Id}_E$$

> [!theorem] Théorème de caractérisation
> Une application $f: E \to F$ est bijective si et seulement s'il existe :: une application $g: F \to E$ telle que : $$f \circ g = \text{Id}_F \quad \text{et} \quad g \circ f = \text{Id}_E$$
<!--SR:!2026-10-29,26,270-->
> Dans ce cas, la bijection réciproque de $f$ est $f^{-1} = g$.


## 3. Réciproque d'une composée

Si $f$ est une bijection de $E$ dans $F$ et $g$ une bijection de $F$ dans $G$, alors $g \circ f$ est une bijection de $E$ dans $G$ et son application réciproque s'écrit ::$$(g \circ f)^{-1} = f^{-1} \circ g^{-1}$$
<!--SR:!2026-10-23,25,270-->


## Concepts liés

- [[Injectivité, surjectivité et bijectivité]]
- [[Composition d'applications et application identité]]
- [[Image directe et image réciproque]]
- [[Applications, restrictions et prolongements]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
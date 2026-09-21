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

# Image directe et image réciproque

> [!info] Définition courte
> L'**image directe** $f(A)$ est :: le sous-ensemble de l'ensemble d'arrivée constitué des images des éléments de $A$.
<!--SR:!2026-09-27,7,250-->
> L'**image réciproque** $f^{-1}(B)$ est :: le sous-ensemble de l'ensemble de départ constitué de tous les antécédents des éléments de $B$.
<!--SR:!2026-09-22,3,230-->


## 1. Image directe

Soient $f: E \to F$ et $A \subset E$. L'**image directe** de $A$ par $f$ est :

$$f(A) = \{f(x) \mid x \in A\} \subset F$$

$$y \in f(A) \iff \exists x \in A, \, y = f(x)$$

- *Exemple* : Pour $f: \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$, on a $f([1, 2]) = [1, 4]$.


## 2. Image réciproque

Soient $f: E \to F$ et $B \subset F$. L'**image réciproque** de $B$ par $f$ est :

$$f^{-1}(B) = \{x \in E \mid f(x) \in B\} \subset E$$

$$x \in f^{-1}(B) \iff f(x) \in B$$

> [!note] Remarque
> L'image réciproque représente l'ensemble de tous les antécédents des éléments de $B$. Elle peut être vide ($\emptyset$).

- *Exemples* (avec $f: \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$) :
  - $f^{-1}([1, 4]) = [-2, -1] \cup [1, 2]$
  - $f^{-1}([-2, -1]) = \emptyset$


## 3. Image réciproque d'un singleton

Par abus de notation, pour tout $y \in F$, on note $f^{-1}(y) = f^{-1}(\{y\})$. C'est l'ensemble des antécédents de $y$ par $f$ :

$$x \in f^{-1}(y) \iff f(x) = y$$

- *Exemples* (avec $f: \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$) :
  - $f^{-1}(0) = \{0\}$
  - $f^{-1}(2) = \{-\sqrt{2}, \, \sqrt{2}\}$


## Concepts liés

- [[Composition d'applications et application identité]]
- [[Injectivité, surjectivité et bijectivité]]
- [[Applications, restrictions et prolongements]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
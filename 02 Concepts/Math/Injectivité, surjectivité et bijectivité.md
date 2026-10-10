---
type: concept
tags:
  - concepts
  - Math
  - math/fonction
  - math/ensemble
  - flashcards/Math
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Ensemble]]"
date_creation: 2026-09-09
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---

# Injectivité, surjectivité et bijectivité

> [!info] Définition courte
> Ces trois propriétés caractérisent le nombre d'antécédents des éléments de l'ensemble d'arrivée : **au plus un** pour une injection, **au moins un** pour une surjection, et **exactement un** pour une bijection.


## 1. Application injective

Une application $f: E \to F$ est **injective** lorsque :: tout élément de $F$ possède **au plus un antécédent** par $f$.
<!--SR:!2026-12-11,64,310-->

### Caractérisations équivalentes de l'injectivité
?
- $\forall (x, x') \in E^2, \, f(x) = f(x') \implies x = x'$
- $\forall (x, x') \in E^2, \, x \neq x' \implies f(x) \neq f(x')$
<!--SR:!2026-12-12,65,310-->

> [!note] Propriété
> Si $f$ est injective, alors pour tout $y \in F$, $f^{-1}(y)$ est soit vide, soit un singleton.

- *Contre-exemple* : $f : \mathbb{Z} \to \mathbb{N}, \, n \mapsto n^2 + 2$ n'est pas injective car $f(-1) = 3 = f(1)$.
- **Théorème** : La composée de deux applications injectives est :: injective.
<!--SR:!2026-12-13,66,310-->


## 2. Application surjective

Une application $f: E \to F$ est **surjective** lorsque :: tout élément de $F$ possède **au moins un antécédent** par $f$.
<!--SR:!2026-12-12,65,310-->

$$f \text{ est surjective} \iff f(E) = F$$

- *Contre-exemple* : $f : \mathbb{Z} \to \mathbb{N}, \, n \mapsto n^2 + 2$ n'est pas surjective car $0 \in \mathbb{N}$ n'a pas d'antécédent dans $\mathbb{Z}$.
- **Théorème** : La composée de deux applications surjectives est :: surjective.
<!--SR:!2026-12-12,65,310-->


## 3. Application bijective

Une application $f: E \to F$ est **bijective** lorsque :: elle est **à la fois injective et surjective**. Tout élément de $F$ possède un **unique antécédent** dans $E$.
<!--SR:!2026-11-16,44,290-->

- *Exemple (Bijection par restriction)* : $f: \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$ n'est pas bijective, mais sa restriction aux ensembles $[0, +\infty[$ au départ et à l'arrivée est une bijection.
- **Théorème** : La composée de deux applications bijectives est :: bijective.
<!--SR:!2026-12-13,66,310-->


## Concepts liés

- [[Image directe et image réciproque]]
- [[Composition d'applications et application identité]]
- [[Application réciproque d'une bijection]]
- [[Applications, restrictions et prolongements]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
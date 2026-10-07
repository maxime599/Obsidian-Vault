---
type: concept
tags:
  - concepts
  - Math
  - math/fonction
  - flashcards/Math
MOC:
  - "[[MOC Fonction]]"
date_creation: 2026-09-09
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---

# Composition d'applications et application identité

> [!info] Définition courte
> La **composition d'applications** consiste à enchaîner deux applications $f: E \to F$ et $g: F \to G$ pour former une nouvelle application $g \circ f: E \to G$. L'**application identité** $\text{Id}_E$ est l'application qui associe chaque élément à lui-même, jouant le rôle d'élément neutre.


## 1. Composée de deux applications

Soient $E, F, G$ trois ensembles, $f: E \to F$ et $g: F \to G$.

La **composée** de $f$ par $g$, notée $g \circ f$, est définie par :

$$g \circ f : E \to G, \quad x \mapsto g(f(x))$$

> [!warning] Non-commutativité
> La composition des applications **n'est pas commutative** en général ($g \circ f \neq f \circ g$).

### Exemple
Soient $f, g : \mathbb{R} \to \mathbb{R}$ définies par $f(x) = x^2 - 1$ et $g(x) = x - 2$ :
- $(g \circ f)(x) = g(f(x)) = (x^2 - 1) - 2 = x^2 - 3$
- $(f \circ g)(x) = f(g(x)) = (x - 2)^2 - 1 = x^2 - 4x + 3$


## 2. Application identité

Soit $E$ un ensemble. L'**application identité** de $E$, notée $\text{Id}_E$, est définie par ::$$\text{Id}_E : E \to E, \quad x \mapsto x$$
<!--SR:!2026-11-17,45,290-->

### Propriété d'élément neutre
Pour toute application $f: E \to E$ :

$$f \circ \text{Id}_E = f \quad \text{et} \quad \text{Id}_E \circ f = f$$

$\text{Id}_E$ est l'élément neutre pour la composition des applications de $E$ dans $E$.


## Concepts liés

- [[Image directe et image réciproque]]
- [[Injectivité, surjectivité et bijectivité]]
- [[Application réciproque d'une bijection]]
- [[Dérivation des fonctions composées et opérations]]
- [[Applications, restrictions et prolongements]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
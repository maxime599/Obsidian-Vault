---
semestre: S1
type de cours: CM
date: 2026-09-09T11:00:00
End Date: 2026-09-09T12:30:00
Calendar Title: "[[01 Cours/Math/ensemble chapitre 2, Math 2026-09-09|ensemble chapitre 2, Math]]"
prof:
tags:
  - cours
  - Math
Concepts:
  - "[[Composition d'applications et application identité]]"
  - "[[Image directe et image réciproque]]"
  - "[[Injectivité, surjectivité et bijectivité]]"
  - "[[Application réciproque d'une bijection]]"
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---

```dataviewjs
let current = dv.current();
let pages = dv.pages(`"${current.file.folder}"`)
  .where(p => p.date)
  .sort(p => p.date, 'asc');

let idx = pages.findIndex(p => p.file.path === current.file.path);
let prev = idx > 0 ? pages[idx - 1] : null;
let next = (idx !== -1 && idx < pages.length - 1) ? pages[idx + 1] : null;

let getCleanLink = (page) => {
  if (!page) return "Aucun";
  let cleanTitle = page.file.name.split(',')[0].trim();
  return `[[${page.file.name}|${cleanTitle}]]`;
};

dv.paragraph(`**Précédent :** ${getCleanLink(prev)} | **Suivant :** ${getCleanLink(next)}`);
```
# ensemble chapitre 2


## Objectifs

-

## Notes
#### Composition d'applications et identité

> [!abstract] Définition 14 (Composée de deux applications)
> 
> Soient $E, F, G$ trois ensembles, $f$ une application de $E$ dans $F$ et $g$ une application de $F$ dans $G$. On appelle **composée** de $f$ par $g$ et on note $g \circ f$ l'application de $E$ dans $G$ définie par :
> 
>   
> 
> $$g \circ f : E \to G, \quad x \mapsto g(f(x))$$

> [!example] Exemple 16
> 
> Soient $f$ et $g$ les applications de $\mathbb{R}$ dans $\mathbb{R}$ définies par $f : x \mapsto x^2 - 1$ et $g : x \mapsto x - 2$.
> 
>   
> 
> - $(g \circ f)(x) = g(f(x)) = (x^2 - 1) - 2 = x^2 - 3$
>     
>       
>     
> - $(f \circ g)(x) = f(g(x)) = (x - 2)^2 - 1 = x^2 - 4x + 3$
>     
>       
>     

> [!note] Remarque 9
> 
> La composition des applications n'est pas commutative ($g \circ f \neq f \circ g$ en général).
> 
>   

> [!abstract] Définition 15 (Application identité)
> 
> Soit $E$ un ensemble. On appelle **application identité** de $E$ et on note $\text{Id}_E$ l'application de $E$ dans $E$ définie par :
> 
>   
> 
> $$\text{Id}_E : E \to E, \quad x \mapsto x$$

> [!theorem] Propriété 2
> 
> Pour toute application $f$ de $E$ dans $E$, on a :
> 
>   
> 
> $$f \circ \text{Id}_E = f \quad \text{et} \quad \text{Id}_E \circ f = f$$

> [!note] Remarque 10
> 
> On dit que l'application $\text{Id}_E$ est l'élément neutre pour la composition des applications de $E$ dans $E$.
> 
>   

#### Image directe et image réciproque

> [!abstract] Définition 16 (Image directe)
> 
> Soient $E$ et $F$ deux ensembles, $f$ une application de $E$ dans $F$ et $A$ une partie de $E$. On appelle **image directe** de $A$ par $f$ et on note $f(A)$ le sous-ensemble de $F$ défini par :
> 
>   
> 
> $$f(A) = \{f(x), \, x \in A\}$$

> [!note] Remarque 11
> 
> L'image directe de $A \subset E$ est donc l'ensemble des images par $f$ des éléments de $A$ :
> 
>   
> 
> $$y \in f(A) \iff \exists x \in A, \, y = f(x)$$

> [!example] Exemple 17
> 
> Soit $f : \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$.
> 
>   
> 
> $f([1, 2]) = [1, 4]$.
> 
>   

> [!abstract] Définition 17 (Image réciproque)
> 
> Soient $E$ et $F$ deux ensembles, $f$ une application de $E$ dans $F$ et $B$ une partie de $F$. On appelle **image réciproque** de $B$ par $f$ et on note $f^{-1}(B)$ le sous-ensemble de $E$ défini par :
> 
>   
> 
> $$f^{-1}(B) = \{x \in E, \, f(x) \in B\}$$
> C'est l'ensemble de tout les antécédants de B. Il peut donc être vide
  
> [!note] Remarque 12
> 
> L'image réciproque de $B \subset F$ est donc l'ensemble des antécédents par $f$ des éléments de $B$ :
> 
>   
> 
> $$x \in f^{-1}(B) \iff f(x) \in B$$

> [!example] Exemple 18
> 
> Soit $f : \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$.
> 
>   
> 
> - $f^{-1}([1; 4]) = [-2; -1] \cup [1; 2]$
>     
>       
>     
> - $f^{-1}([-2; -1]) = \emptyset$
>     
>       
>     

> [!info] Notation 6 (Image réciproque d'un singleton)
> 
> Par abus d'écriture, pour tout $y \in F$, nous noterons $f^{-1}(y) = f^{-1}(\{y\})$. Il s'agit de l'ensemble des antécédents de $y$ par $f$ :
> 
>   
> 
> $$x \in f^{-1}(y) \iff f(x) = y$$

> [!example] Exemple 19
> 
> Soit $f : \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$.
> 
>   
> 
> - $f^{-1}(0) = \{0\}$
>     
>       
>     
> - $f^{-1}(2) = \{-\sqrt{2}, \, \sqrt{2}\}$
>     
>       
>     

#### Injectivité, Surjectivité, Bijectivité

> [!abstract] Définition 18 (Application injective)
> 
> Soient $E$ et $F$ deux ensembles, $f$ une application de $E$ dans $F$. On dit que $f$ est **injective** (ou que $f$ est une injection) lorsque tout élément de $F$ possède au plus un antécédent par $f$.
> 
>   

> [!note] Remarque 13
> 
> Si $f$ est injective, alors pour tout $y \in F$, $f^{-1}(y)$ est vide (aucun antécédent) ou réduit à un singleton (un unique antécédent).
> 
>   

> [!theorem] Théorème 4
> 
> Soient $E$ et $F$ deux ensembles et $f$ une application de $E$ dans $F$. Les propositions suivantes sont équivalentes :
> 
>   
> 
> - $f$ est injective
>     
>       
>     
> - $\forall (x, x') \in E^2, \, f(x) = f(x') \implies x = x'$
>     
>       
>     
> - $\forall (x, x') \in E^2, \, x \neq x' \implies f(x) \neq f(x')$
>     
>       
>     

> [!example] Exemple 20
> 
> Pour $f : \mathbb{Z} \to \mathbb{N}, \, n \mapsto n^2 + 2$ : $f(-1) = 3$ et $f(1) = 3$, donc $f$ n'est pas injective.
> 
>   

> [!theorem] Théorème 5 (Composée de deux injections)
> 
> La composée de deux applications injectives est injective.
> 
>   

> [!abstract] Définition 19 (Application surjective)
> 
> Soient $E$ et $F$ deux ensembles, $f$ une application de $E$ dans $F$. On dit que $f$ est **surjective** (ou que $f$ est une surjection) lorsque tout élément de $F$ possède au moins un antécédent par $f$.
> 
>   

> [!note] Remarque 14
> 
> L'application $f$ est surjective si et seulement si $f(E) = F$.
> 
>   

> [!example] Exemple 21
> 
> Pour $f : \mathbb{Z} \to \mathbb{N}, \, n \mapsto n^2 + 2$ : l'élément $0 \in \mathbb{N}$ n'a pas d'antécédent ($n^2 + 2 = 0$ n'a pas de solution dans $\mathbb{Z}$), donc $f$ n'est pas surjective.
> 
>   

> [!theorem] Théorème 6 (Composée de deux surjections)
> 
> La composée de deux applications surjectives est surjective.
> 
>   

> [!abstract] Définition 20 (Application bijective)
> 
> Soient $E$ et $F$ deux ensembles, $f$ une application de $E$ dans $F$. On dit que $f$ est **bijective** (ou que $f$ est une bijection) lorsque $f$ est à la fois injective et surjective. Autrement dit, si tout élément de $F$ possède un unique antécédent par $f$.
> 
>   

> [!example] Exemple 22 (Bijection par restriction)
> 
> Soit $f : \mathbb{R} \to \mathbb{R}, \, x \mapsto x^2$. En restreignant aux ensembles $[0; +\infty[$ au départ et à l'arrivée, l'application $x \mapsto x^2$ devient une bijection.
> 
>   

> [!abstract] Définition 21 (Application réciproque d'une bijection)
> 
> Soit $f$ une bijection de $E$ dans $F$. On appelle **application réciproque** (ou bijection réciproque) de $f$ et on note $f^{-1}$ l'application de $F$ dans $E$ qui, à tout $y \in F$, associe son unique antécédent par $f$. Par définition :
> 
>   
> 
> $$\forall (x, y) \in E \times F, \quad y = f(x) \iff x = f^{-1}(y)$$

> [!note] Remarque 15
> 
> Une application $f$ de $E$ dans $F$ est une bijection si pour tout $y \in F$, l'équation $f(x) = y$ admet une unique solution dans $E$. Dans ce cas, $f^{-1}(y)$ est cette unique solution.
> 
>   

> [!example] Exemple 23
> 
> La bijection réciproque de la fonction $\ln$ est la fonction exponentielle ($\exp$).
> 
>   

> [!theorem] Théorème 7
> 
> Soit $f$ une bijection de $E$ dans $F$ et $f^{-1}$ sa bijection réciproque :
> 
>   
> 
> $$f \circ f^{-1} = \text{Id}_F \quad \text{et} \quad f^{-1} \circ f = \text{Id}_E$$

> [!theorem] Théorème 8
> 
> Une application $f$ de $E$ dans $F$ est bijective si et seulement s'il existe une application $g$ de $F$ dans $E$ telle que $f \circ g = \text{Id}_F$ et $g \circ f = \text{Id}_E$. Dans ce cas, la bijection réciproque de $f$ est $f^{-1} = g$.
> 
>   

> [!theorem] Théorème 9 (Composée de deux bijections)
> 
> La composée de deux applications bijectives est bijective. Plus précisément, si $f$ est une bijection de $E$ dans $F$ et $g$ une bijection de $F$ dans $G$, alors $g \circ f$ est une bijection de $E$ dans $G$ et :
> 
>   
> 
> $$(g \circ f)^{-1} = f^{-1} \circ g^{-1}$$


## Exercices


## À retenir
-
## Travail à faire
- [x] Relire tout le cours
- [x] Le transformer en concept 
- [ ] Apprendre
- [x] démontrer le théorème 7



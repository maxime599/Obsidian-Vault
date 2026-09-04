---
semestre: S1
type de cours: CM
date: 2026-09-04T11:00:00
End Date: 2026-09-04T12:30:00
Calendar Title: "[[01 Cours/Math/Suite des raisonnement et Ensembles, Math 2026-09-04|Suite des raisonnement et Ensembles, Math]]"
prof: Olivier Gipouloux
tags:
  - cours
  - Math
Concepts:
  - "[[Nombre de parties d'un ensemble]]"
  - "[[Modes de raisonnement mathématique]]"
  - "[[Principes additif et multiplicatif en dénombrement]]"
  - "[[Nombre de parties d'un ensemble]]"
  - "[[Théorie des ensembles et opérations de base]]"
  - "[[Ensemble des parties d'un ensemble]]"
  - "[[Produit cartésien et p-uplets]]"
  - "[[Quantificateurs logiques]]"
  - "[[Applications, restrictions et prolongements]]"
  - "[[Fonction indicatrice]]"
Ressources:
  - "[[S1_cours_math_chap1.pdf]]"
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
# Suite des et Ensembles raisonnement

## Objectifs

-

## Notes

### Raisonnement par analyse-synthèse
Le raisonnement par analyse-synthèse est une méthode qui permet d’établir les solutions d’un problème en deux étapes. 

- **Phase d’analyse** : on suppose le problème résolu et on en déduit des conditions nécessaires sur les solutions. 
- **Phase de synthèse** : on détermine les solutions

#### Exemple 5
Résoudre l'eq $\sqrt{ x+2 }=x$
...
On trouve eux solutions, 2 et -1, puis on verrifie lesquelles marchent

### Disjonction de cas
On est parfois amené à distinguer plusieurs cas pour démontrer qu’une assertion est vraie (ou fausse). On dit alors qu’on fait une démonstration par disjonction des cas. 

#### Exemple 6 
Soit n un entier naturel. A quelle condition n2 + 3n + 2 est-il divisible par 3 ?
Pour cela, on teste tous les cas possibles, 

- n est un multiple de 3 $\leftrightarrow$ il existe $k \in \mathbb{N} ~tq~n=3k$. On injecte la quantité
	$(3k)²+3(3k)+2 = 3(3k²+3k)+2$, ce n'est donc pas un multiple de 3
- n est un multiple de 3 plus 1
	...
	c'est un multiple de 3
- n est un multiple de 3+2
	...
	c'est un multiple de 3

### 1. Ensembles

#### Définitions de base

> [!abstract] Définition 1 (Ensemble)
> 
> Un ensemble $E$ est une collection d'objets telle que pour tout élément $x$, nous pouvons dire si l'assertion "$x$ appartient à $E$", notée $x \in E$, est vraie ou fausse.
> 
>   

> [!abstract] Définition 2 (Ensemble vide)
> 
> On appelle **ensemble vide** l'ensemble qui ne contient aucun élément. On le note $\emptyset$.
> 
>   

> [!note] Remarque 1
> 
>   
> 
> - Si $x \in E$, on dit aussi que $x$ est un élément de $E$.
>     
>       
>     
> - Lorsque $x$ n'appartient pas à $E$, on note $x \notin E$, c'est-à-dire :
>     
>       
>     
>     $$\text{non}(x \in E) \iff x \notin E$$
>     

> [!example] Exemple 1
> 
>   
> 
> - $\{1; 2; 3; 4\}$ est l'ensemble contenant les entiers $1$, $2$, $3$ et $4$.
>     
>       
>     
> - $\mathbb{N}$ est l'ensemble des nombres entiers naturels.
>     
>       
>     
> - $\mathbb{Z}$ est l'ensemble des nombres entiers relatifs.
>     
>       
>     
> - $\mathbb{Q}$ est l'ensemble des nombres rationnels :
>     
>       
>     
>     $$\mathbb{Q} = \left\{ \frac{p}{q}, \, p \in \mathbb{Z}, \, q \in \mathbb{N}^* \right\}$$
>     
> - $\mathbb{R}$ est l'ensemble des nombres réels.
>     
>       
>     
> - $[0; 1]$ est l'ensemble des nombres réels positifs et inférieurs ou égaux à $1$ (c'est un intervalle de $\mathbb{R}$) :
>     
>       
>     
>     $$[0; 1] = \{x \in \mathbb{R}, \, 0 \le x \le 1\}$$
>     

#### Inclusion et égalité

> [!abstract] Définition 3 (Inclusion)
> 
> Soient $A$ et $B$ deux ensembles. On dit que $A$ est inclus dans $B$ et nous notons $A \subset B$ si tout élément de $A$ est un élément de $B$.
> 
>   

> [!example] Exemple 2
> 
>   
> 
> $$\{1; 2; 3; 4\} \subset \mathbb{N}$$

> [!note] Remarque 2
> 
>   
> 
> - Deux ensembles $A$ et $B$ sont égaux si et seulement si $A \subset B$ et $B \subset A$ :
>     
>       
>     
>     $$A = B \iff [(A \subset B) \text{ et } (B \subset A)]$$
>     
> - Si $A \subset B$, on dit que $A$ est un **sous-ensemble** de $B$ ou que $A$ est une **partie** de $B$.
>     
>       
>     

### 2. Parties d'un ensemble

> [!info] Notation 1
> 
> Si $E$ est un ensemble, on note $\mathcal{P}(E)$ l'ensemble des parties de $E$.
> 
>   

> [!note] Remarque 3
> 
>   
> 
> $$A \subset E \iff A \in \mathcal{P}(E)$$

> [!example] Exemples
> 
>   
> 
> - **Exemple 3 :** $\{1; 2; 3; 4\} \in \mathcal{P}(\mathbb{N})$
>     
>       
>     
> - **Exemple 4 :** Si $E = \{0; 1\}$, alors :
>     
>       
>     
>     $$\mathcal{P}(E) = \{\emptyset, \{0\}, \{1\}, E\}$$
>     

#### Opérations sur les parties

> [!abstract] Définition 4 (Opérations sur les parties d'un ensemble)
> 
> Soit $E$ un ensemble, $A$ et $B$ deux parties de $E$. On appelle :
> 
>   
> 
> - **Complémentaire** de $A$ dans $E$ :
>     
>       
>     
>     $$\overline{A} = \{x \in E, \, x \notin A\}$$
>     
> - **Intersection** de $A$ et $B$ :
>     
>       
>     
>     $$A \cap B = \{x \in E, \, x \in A \text{ et } x \in B\}$$
>     
> - **Réunion** de $A$ et $B$ :
>     
>       
>     
>     $$A \cup B = \{x \in E, \, x \in A \text{ ou } x \in B\}$$
>     
> - **Différence** de $A$ et $B$ :
>     
>       
>     
>     $$A \setminus B = \{x \in A \text{ et } x \notin B\} = A \cap \overline{B}$$
>     

> [!note] Remarque 4
> 
> Si $A$ est une partie de l'ensemble $E$, alors $\overline{A} = E \setminus A$.
> 
>   

> [!example] Exemple 5
> 
>   
> 
> - $\mathbb{R}^* = \mathbb{R} \setminus \{0\} = \, ]-\infty; 0[ \, \cup \, ]0; +\infty[$
>     
>       
>     
> - $\{0; 1\} = [0; 1] \cap \mathbb{N}$
>     
>       
>     

> [!abstract] Définition 5 (Parties disjointes)
> 
> Soit $E$ un ensemble, $A$ et $B$ deux parties de $E$. On dit que $A$ et $B$ sont **disjointes** si $A \cap B = \emptyset$.
> 
>   

> [!theorem] Théorème 1 (Lois de De Morgan)
> 
> Soient $A$ et $B$ deux parties d'un ensemble $E$.
> 
>   
> 
> $$\overline{A \cup B} = \overline{A} \cap \overline{B}$$
> 
> $$\overline{A \cap B} = \overline{A} \cup \overline{B}$$

### 3. Produit cartésien

> [!abstract] Définition 6 (Produit cartésien de deux ensembles)
> 
> Soient $E$ et $F$ deux ensembles. On appelle **produit cartésien** de $E$ et $F$ et on note $E \times F$ l'ensemble des couples $(x, y)$ avec $x \in E$ et $y \in F$ :
> 
>   
> 
> $$E \times F = \{(x, y), \, x \in E, \, y \in F\}$$

> [!abstract] Définition 7 (Produit cartésien d'un nombre fini d'ensembles)
> 
> Soient $E_1, \dots, E_p$ des ensembles. On appelle $p$-uplets $(x_1, \dots, x_p)$ la donnée de $x_1 \in E_1, \dots, x_p \in E_p$ dans cet ordre. L'ensemble de ces $p$-uplets est appelé **produit cartésien** de $E_1, \dots, E_p$, noté $E_1 \times \dots \times E_p$ :
> 
>   
> 
> $$E_1 \times \dots \times E_p = \{(x_1, \dots, x_p), \, x_1 \in E_1, \dots, x_p \in E_p\}$$

> [!info] Notation 2
> 
> Pour $p \in \mathbb{N}^*$, on note $E^p = \underbrace{E \times E \times \dots \times E}_{p \text{ fois}}$ l'ensemble des $p$-uplets formés d'éléments appartenant tous à $E$.
> 
>   

> [!example] Exemple 6
> 
>   
> 
> - $\mathbb{R}^2$ est l'ensemble des couples de réels :
>     
>       
>     
>     $$\mathbb{R}^2 = \{(x, y), \, x \in \mathbb{R}, \, y \in \mathbb{R}\}$$
>     
> - $\mathbb{R}^3$ est l'ensemble des triplets de réels :
>     
>       
>     
>     $$\mathbb{R}^3 = \{(x, y, z), \, x \in \mathbb{R}, \, y \in \mathbb{R}, \, z \in \mathbb{R}\}$$
>     

### 4. Quantificateurs

> [!abstract] Définition 8 (Quantificateur universel)
> 
> Le quantificateur "quel que soit" ou "pour tout", noté $\forall$, permet de définir l'assertion quantifiée :
> 
>   
> 
> $$\forall x \in E, \, P(x)$$
> 
> qui est vraie si pour tous les éléments $x \in E$, l'assertion $P(x)$ est vraie.
> 
>   

> [!note] Remarque 5
> 
> L'assertion "$\forall x \in E, \, P(x)$" se lit : _"pour tout $x$ dans $E$, $P(x)$"_.
> 
>   

> [!example] Exemple 7
> 
> $\forall x \in \mathbb{R}, \, x^2 + x + 1 > 0$ est une assertion vraie (V).
> 
>   

> [!abstract] Définition 9 (Quantificateur existentiel)
> 
> Le quantificateur "il existe", noté $\exists$, permet de définir l'assertion quantifiée :
> 
>   
> 
> $$\exists x \in E, \, P(x)$$
> 
> qui est vraie s'il existe au moins un élément $x \in E$ tel que l'assertion $P(x)$ soit vraie.
> 
>   

> [!note] Remarque 6
> 
> L'assertion "$\exists x \in E, \, P(x)$" se lit : _"il existe $x$ dans $E$ tel que $P(x)$"_.
> 
>   

> [!example] Exemple 8
> 
> $\exists M \in \mathbb{R}, \, \forall x \in \mathbb{R}^+_{>0}, \, \ln(x) < M$ est une assertion fausse car $\lim_{x \to +\infty} \ln(x) = +\infty$.
> 
>   

> [!theorem] Théorème 2 (Négation des assertions avec quantificateurs)
> 
>   
> 
> - $\text{non}(\forall x \in E, \, P(x)) \iff \exists x \in E, \, \text{non}(P(x))$
>     
>       
>     
> - $\text{non}(\exists x \in E, \, P(x)) \iff \forall x \in E, \, \text{non}(P(x))$
>     
>       
>     

> [!example] Exemple 9
> 
>   
> 
> - L'assertion $\exists x \in \mathbb{R}, \, x^2 + x + 1 = 0$ est fausse (F).
>     
>       
>     
> - Sa négation $\forall x \in \mathbb{R}, \, x^2 + x + 1 \neq 0$ est vraie (V).
>     
>       
>     

> [!note] Remarque 7 (Ordre des quantificateurs)
> 
> Si nous utilisons plusieurs quantificateurs, leur ordre peut être très important.
> 
>   
> 
> **Exemple 10 :**
> 
>   
> 
> - $\exists M \in \mathbb{R}, \, \forall x \in \mathbb{R}^+_{>0}, \, \ln(x) < M$ est une assertion fausse.
>     
>       
>     
> - $\forall x \in \mathbb{R}^+_{>0}, \, \exists M \in \mathbb{R}, \, \ln(x) < M$ est une assertion vraie.
>     
>       
>     

### 5. Applications

#### Définition et notions de base

> [!abstract] Définition 10 (Application d'un ensemble dans un autre)
> 
> Soient $E$ et $F$ deux ensembles. Une application $f$ de $E$ dans $F$ associe à tout élément $x$ de $E$ un unique élément de $F$ noté $f(x)$.
> 
>   

> [!info] Notations 3 & 4
> 
>   
> 
> - L'ensemble $E$ s'appelle l'**ensemble de départ** (ou de définition) de l'application $f$.
>     
>       
>     
> - L'ensemble $F$ est l'**ensemble d'arrivée** de l'application $f$.
>     
>       
>     
> - Pour tout $x \in E$, $f(x)$ est l'**image** de $x$ et $x$ est un **antécédent** de $f(x)$.
>     
>       
>     
> - Pour désigner une application $f$ de $E$ dans $F$, on note :
>     
>       
>     
>     $$f : E \to F, \quad x \mapsto f(x)$$
>     
>     ou simplement $f : x \mapsto f(x)$.
>     
>       
>     

> [!example] Exemple 11
> 
> Soit $f$ l'application de $\mathbb{Z}$ dans $\mathbb{N}$, $f : n \mapsto n^2 + 2$.
> 
>   
> 
> - **Image de $-5$ :** $f(-5) = (-5)^2 + 2 = 27$
>     
>       
>     
> - **Antécédents de $11$ :** $n^2 + 2 = 11 \iff n^2 = 9 \iff n = 3 \text{ ou } n = -3$
>     
>       
>     
> - **Antécédents de $2$ :** $n^2 + 2 = 2 \iff n^2 = 0 \iff n = 0$
>     
>       
>     
> - **Antécédents de $0$ :** $n^2 + 2 = 0 \iff n^2 = -2$ (aucun antécédent dans $\mathbb{Z}$)
>     
>       
>     

> [!note] Remarque 8 (Différence entre application et fonction)
> 
> Si seulement certains éléments de l'ensemble de départ $E$ ont une image par $f$, mais pas tous, alors on dit que $f$ est une **fonction** de $E$ dans $F$.
> 
>   
> 
> **Exemple 12 :** La fonction $f : x \mapsto \sqrt{x - 5}$ n'est pas définie sur tout $\mathbb{R}$. Ce n'est pas une application de $\mathbb{R}$ dans $\mathbb{R}$.
> 
>   

#### Restriction et Prolongement

> [!abstract] Définition 11 (Restriction d'une application)
> 
> Soient $E$ et $F$ deux ensembles, $f$ une application de $E$ dans $F$ et $A$ une partie de $E$. On appelle **restriction** de $f$ à $A$ et on note $f_{\vert{}A}$ l'application de $A$ dans $F$ définie par $f_{\vert{}A} : x \mapsto f(x)$.
> 
>   

> [!example] Exemple 13
> 
> Soit $f$ l'application de $\mathbb{R}$ dans $[0; +\infty[$ définie par $f : x \mapsto \vert{}x\vert{}$.
> 
>   
> 
> - Restriction de $f$ à $]-\infty; 0]$ : $f_{\vert{}]-\infty; 0]} : x \mapsto -x$
>     
>       
>     
> - Restriction de $f$ à $[0; +\infty[$ : $f_{\vert{}[0; +\infty[} : x \mapsto x$
>     
>       
>     

> [!abstract] Définition 12 (Prolongement d'une application)
> 
> Soient $E$ et $F$ deux ensembles, $A$ une partie de $E$ et $f$ une application de $A$ dans $F$. On appelle **prolongement** de $f$ à $E$ toute application $\tilde{f}$ de $E$ dans $F$ dont la restriction à $A$ est égale à $f$.
> 
>   

> [!example] Exemple 14
> 
> Soit $f$ l'application de $\mathbb{R}^*$ dans $\mathbb{R}$ définie par $f : x \mapsto \frac{\sin(x)}{x}$.
> 
> Un prolongement par continuité de $f$ à $\mathbb{R}$ est :
> 
>   
> 
> $$\tilde{f}(x) = \begin{cases} \frac{\sin(x)}{x} & \text{si } x \neq 0 \\ 1 & \text{si } x = 0 \end{cases}$$

#### Fonction indicatrice

> [!abstract] Définition 13 (Fonction indicatrice)
> 
> Soit $E$ un ensemble et $A \subset E$. On appelle **fonction indicatrice** (ou fonction caractéristique) de $A$ et on note $\mathbb{1}_A$ l'application de $E$ dans $\{0, 1\}$ définie par :
> 
>   
> 
> $$\mathbb{1}_A(x) = \begin{cases} 1 & \text{si } x \in A \\ 0 & \text{si } x \notin A \end{cases}$$

> [!theorem] Théorème 3
> 
> Soit $E$ un ensemble, $A \subset E$ et $B \subset E$.
> 
>   
> 
> $$A = B \iff \mathbb{1}_A = \mathbb{1}_B$$

> [!example] Exemple 15
> 
> Pour tout $x \in \mathbb{R}$ :
> 
>   
> 
> - $\mathbb{1}_\emptyset(x) = 0$
>     
>       
>     
> - $\mathbb{1}_\mathbb{R}(x) = 1$
>     
>       
>     

> [!theorem] Propriété 1
> 
> Soit $E$ un ensemble, $A \subset E$ et $B \subset E$.
> 
>   
> 
> - $\mathbb{1}_{A \cap B} = \mathbb{1}_A \times \mathbb{1}_B$
>     
>       
>     
> - $\mathbb{1}_{A \cup B} = \mathbb{1}_A + \mathbb{1}_B - \mathbb{1}_A \times \mathbb{1}_B$
>     
>       
>     
> - Si $A \cap B = \emptyset$, alors $\mathbb{1}_{A \cup B} = \mathbb{1}_A + \mathbb{1}_B$
>     
>       
>     
> - $\mathbb{1}_{\overline{A}} = 1 - \mathbb{1}_A$
>     
>       
>     





## Exercices


## À retenir
-
## Travail à faire




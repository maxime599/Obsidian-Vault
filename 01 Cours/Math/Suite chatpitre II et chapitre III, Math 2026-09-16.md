---
semestre: S1
type de cours: CM
date: 2026-09-16T11:03:26
End Date: 2026-09-16T12:33:26
Calendar Title: "[[01 Cours/Math/Suite chatpitre II et chapitre III, Math 2026-09-16|Suite chatpitre II et chapitre III, Math]]"
prof:
tags:
  - cours
  - Math
Concepts:
  - "[[Représentation graphique de la bijection réciproque]]"
  - "[[Principe de récurrence et bon ordre de N]]"
  - "[[Ensembles finis, infinis et dénombrabilité]]"
  - "[[Structure de R et densité de Q]]"
  - "[[Majorants, minorants et bornes supérieure et inférieure dans R]]"
  - "[[Valeur absolue et inégalité triangulaire dans R]]"
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
# Suite chatpitre II et chapitre III


## Objectifs

-

## Notes
#### Courbe représentative

> [!note] Remarque 16 (Graphe et courbe représentative)
> 
> Soit $f$ une application de $E$ dans $F$. L'ensemble des couples $(x, f(x))$ pour $x \in E$ est appelé le **graphe** de $f$. Si $E, F \subset \mathbb{R}$, chaque élément du graphe correspond à un unique point du plan muni d'un repère cartésien, ce qui donne la courbe représentative de $f$.
> 
>   

> [!theorem] Théorème 10 (Courbes représentatives de $f$ et $f^{-1}$)
> 
> Soient $E$ et $F$ deux parties de $\mathbb{R}$ et $f$ une application bijective de $E$ dans $F$. Dans le plan muni d'un repère orthonormé, les courbes représentatives de $f$ et $f^{-1}$ sont **symétriques par rapport à la première bissectrice** (droite $y = x$).
> 
>   

> [!example] Exemple 24
> 
> Dans un repère orthonormé, les courbes de la fonction $\exp$ et de sa bijection réciproque $\ln$ sont symétriques par rapport à la première bissectrice.



### 1. Ensemble des entiers naturels $\mathbb{N}$

Le premier ensemble de nombres est celui des entiers naturels :
$$ \mathbb{N} = \{0 ; 1 ; 2 ; 3 ; \dots\} $$

#### 1.1 Axiome fondamental et principe de récurrence

> [!abstract] Axiome fondamental de $\mathbb{N}$
> Toute partie non vide de $\mathbb{N}$ admet un plus petit élément.

Cet axiome permet de démontrer le principe de récurrence.

> [!theorem] Théorème 1 : Principe de récurrence
> On considère une propriété $(\mathcal{P}_n)$ dépendant d'un entier naturel $n$ telle que :
> - **Initialisation :** $(\mathcal{P}_0)$ est vraie ;
> - **Hérédité :** Pour tout $n \in \mathbb{N}$, si $(\mathcal{P}_n)$ est vraie, alors $(\mathcal{P}_{n+1})$ est vraie.
>
> Alors la propriété $(\mathcal{P}_n)$ est vraie pour tout $n \in \mathbb{N}$.

> [!example] Exemple 1 : Démonstration par récurrence
> Montrons que $4^n + 2$ est un multiple de $3$ pour tout $n \in \mathbb{N}$.
> 
> - **Initialisation ($n = 0$) :**  
>   Pour $n = 0$, $4^0 + 2 = 1 + 2 = 3 = 3 \times 1$.  
>   La propriété est donc vraie au rang $n = 0$.
> 
> - **Hérédité :**  
>   Soit $n \in \mathbb{N}$. Supposons que $(\mathcal{P}_n)$ soit vraie, c'est-à-dire qu'il existe un entier $k \in \mathbb{N}$ tel que $4^n + 2 = 3k$, soit $4^n = 3k - 2$.  
>   Montrons que $4^{n+1} + 2$ est divisible par $3$ :
>   $$ 4^{n+1} + 2 = 4 \times 4^n + 2 = 4(3k - 2) + 2 = 12k - 8 + 2 = 12k - 6 = 3(4k - 2) $$
>   Puisque $4k - 2 \in \mathbb{N}$ pour tout $n \ge 0$, $4^{n+1} + 2$ est bien un multiple de $3$.  
>   *(Variante algébrique directe : $4^{n+1} + 2 = (3+1)4^n + 2 = 3 \cdot 4^n + (4^n + 2) = 3 \cdot 4^n + 3k = 3(4^n + k)$).*
> 
> - **Conclusion :**  
>   Par le principe de récurrence, $4^n + 2$ est un multiple de $3$ pour tout $n \in \mathbb{N}$.

> [!note] Remarque 1 : Initialisation décalée
> Dans le cas où l'initialisation est vérifiée pour $n = n_0$, la propriété $(\mathcal{P}_n)$ est vraie pour tout entier naturel $n \ge n_0$.

#### 1.2 Récurrence forte

Si l'on est conduit à faire une hypothèse portant sur toutes les valeurs entières comprises entre $0$ et $n$, on parle alors de **récurrence forte**.

> [!theorem] Corollaire 1 : Principe de récurrence forte
> On considère une propriété $(\mathcal{P}_n)$ dépendant d'un entier naturel $n$ telle que :
> - **Initialisation :** $(\mathcal{P}_0)$ est vraie ;
> - **Hérédité :** Si $(\mathcal{P}_0), (\mathcal{P}_1), \dots, (\mathcal{P}_n)$ sont vraies, alors $(\mathcal{P}_{n+1})$ est vraie.
>
> Alors la propriété $(\mathcal{P}_n)$ est vraie pour tout $n \in \mathbb{N}$.

---

### 2. Ensemble fini, ensemble infini dénombrable

> [!info] Notation 1
> Soit $n \in \mathbb{N}^*$. On note $[\![ 1 ; n ]\!]$ la partie de $\mathbb{N}$ définie par :
> $$ [\![ 1 ; n ]\!] = \{1 ; 2 ; \dots ; n\} $$

Nous utilisons dès notre plus jeune âge les entiers naturels pour « compter » un nombre d'objets. Cet usage correspond à la définition mathématique suivante qui traduit ce que signifie intuitivement qu'un ensemble est constitué de $n$ éléments.

#### 2.1 Ensembles finis et cardinalité

> [!definition] Définition 1 : Ensemble fini
> Un ensemble $E$ non vide est dit **fini de cardinal $n \in \mathbb{N}^*$** s'il existe une **bijection** de $E$ dans $[\![ 1 ; n ]\!]$.
> 
> Ainsi, un ensemble $E$ est de cardinal $n \in \mathbb{N}^*$ si l'on peut écrire $E = \{x_1, x_2, \dots, x_n\}$, où les $x_i$ sont deux à deux distincts.

> [!theorem] Théorème 2 : Unicité du cardinal
> Le cardinal d'un ensemble $E$ fini est unique. On le note $\text{Card}(E)$ ou $|E|$.  
> Autrement dit, si $n$ et $p$ sont deux entiers tels qu'il existe une bijection entre $E$ et $[\![ 1 ; n ]\!]$ et une bijection entre $E$ et $[\![ 1 ; p ]\!]$, alors $n = p$.

> [!info] Notation 2 : Ensemble vide
> Par convention, l'ensemble vide $\emptyset$ est dit fini de cardinal $0$ :
> $$ \text{Card}(\emptyset) = 0 $$

> [!tip] Propriété 1 : Partie d'un ensemble fini
> Soit $E$ un ensemble fini. Toute partie $A$ de $E$ est finie et l'on a :
> $$ \text{Card}(A) \le \text{Card}(E) $$
> De plus, si $A \neq E$, alors $\text{Card}(A) < \text{Card}(E)$.

#### 2.2 Ensembles infinis et dénombrabilité

> [!definition] Définition 2 : Ensemble infini
> Un ensemble qui n'est pas fini est dit **infini**.

> [!theorem] Théorème 3 : Caractérisation d'un ensemble infini
> Soit $E$ un ensemble et $A$ une partie propre de $E$ ($A \subseteq E$ et $A \neq E$). S'il existe une bijection entre $E$ et $A$, alors $E$ est **infini**.

> [!example] Exemple 2 : Infinitude de $\mathbb{N}$
> Montrons que $\mathbb{N}$ est infini.  
> 
> Soit $A = 2\mathbb{N} = \{2k \mid k \in \mathbb{N}\} = \{0, 2, 4, 6, \dots\}$ l'ensemble des nombres entiers naturels pairs.  
> On remarque que $A$ est une partie propre de $\mathbb{N}$ ($A \subsetneq \mathbb{N}$ et $A \neq \mathbb{N}$, car par exemple $1 \in \mathbb{N}$ mais $1 \notin A$).
> 
> Considérons l'application $f : \mathbb{N} \to A$ définie par :
> $$ f(n) = 2n $$
> 
> - **Injectivité :**  
>   Soient $n, m \in \mathbb{N}$.  
>   $$ f(n) = f(m) \implies 2n = 2m \implies n = m $$  
>   L'application $f$ est donc **injective**.
> 
> - **Surjectivité :**  
>   Soit $p \in A$. Par définition de $A$, $p$ est un entier naturel pair, il existe donc $n \in \mathbb{N}$ tel que $p = 2n = f(n)$.  
>   L'application $f$ est donc **surjective**.
> 
> Ainsi, $f$ est une **bijection** de $\mathbb{N}$ vers sa partie propre $A \subsetneq \mathbb{N}$.  
> D'après le **Théorème 3** (un ensemble admettant une bijection avec l'une de ses parties propres est infini), $\mathbb{N}$ est **infini**.

> [!definition] Définition 3 : Ensemble dénombrable
> Un ensemble $E$ est dit **dénombrable** s'il existe une bijection entre $E$ et $\mathbb{N}$.

---

### 3. L'ensemble $\mathbb{Q}$ des nombres rationnels

On peut construire l'ensemble $\mathbb{Q}$ des nombres rationnels à partir des quotients d'entiers relatifs en définissant la règle d'équivalence suivante. Pour tous $(p, q) \in \mathbb{Z} \times \mathbb{Z}^*$ et $(a, b) \in \mathbb{Z} \times \mathbb{Z}^*$ :
$$ \frac{p}{q} = \frac{a}{b} \iff bp = aq $$

> [!tip] Propriété 2 : Représentation irréductible
> Tout nombre rationnel s'écrit de manière unique sous la forme $\frac{p}{q}$ avec $p \in \mathbb{Z}$ et $q \in \mathbb{N}^*$ premiers entre eux ($\text{pgcd}(p, q) = 1$).

> [!theorem] Théorème 4 : Dénombrabilité de $\mathbb{Q}$
> L'ensemble $\mathbb{Q}$ est **infini dénombrable**.

---

### 4. L'ensemble $\mathbb{R}$ des nombres réels

Il est facile de montrer que les nombres rationnels ne suffisent pas à décrire le monde réel. C'est une constatation faite depuis l'Antiquité (école pythagoricienne) : par exemple, un carré de côté $l$ et de diagonale égale à $\sqrt{2}$ possède une diagonale dont le carré vaut $2$, soit $l^2 = 2$. Or :

> [!warning] Propriété 3 : Incomplétude de $\mathbb{Q}$
> Il n'existe **aucun** nombre rationnel $l \in \mathbb{Q}$ tel que $l^2 = 2$.

Pour combler ce manque, les mathématiciens ont construit l'ensemble $\mathbb{R}$ des nombres réels qui complète l'ensemble $\mathbb{Q}$.

#### 4.1 Propriétés arithmétiques et d'ordre dans $\mathbb{R}$

> [!theorem] Théorème 5 : Propriétés arithmétiques de $\mathbb{R}$
> L'ensemble $\mathbb{R}$ possède une addition et une multiplication telles que pour tous réels $x, y, z$ :
> - **Commutativité de $+ \text{ et } \times$ :** $x + y = y + x \quad \text{et} \quad xy = yx$
> - **Associativité de $+ \text{ et } \times$ :** $(x + y) + z = x + (y + z) \quad \text{et} \quad (xy)z = x(yz)$
> - **Éléments neutres :** $0 + x = x \quad \text{et} \quad 1 \cdot x = x$
> - **Opposé :** Il existe un réel $(-x)$ tel que $x + (-x) = 0$
> - **Inverse :** Si $y \neq 0$, il existe un réel noté $y^{-1}$ ou $\frac{1}{y}$ tel que $y y^{-1} = 1$
> - **Distributivité :** $x(y + z) = xy + xz$

> [!theorem] Théorème 6 : Propriétés d'ordre
> L'ensemble $\mathbb{R}$ possède une relation d'ordre total $\le$ compatible avec l'addition et la multiplication. Pour tous réels $x, y, z$ :
> - **Ordre total :** $x \le y$ ou $y \le x$
> - **Réflexivité :** $x \le x$
> - **Transitivité :** Si $x \le y$ et $y \le z$, alors $x \le z$
> - **Antisymétrie :** Si $x \le y$ et $y \le x$, alors $x = y$
> - **Compatibilité avec $+$ :** Si $x \le y$, alors $x + z \le y + z$
> - **Compatibilité avec $\times$ :** Si $x \le y$ et $0 \le z$, alors $xz \le yz$

#### 4.2 Majorants, minorants, bornes supérieure et inférieure

> [!definition] Définition 4 : Partie majorée, minorée, bornée
> Soit $A$ une partie de $\mathbb{R}$.
> - $A$ est **majorée** s'il existe un réel $M$ tel que $\forall x \in A, x \le M$. $M$ est appelé un **majorant** de $A$.
> - $A$ est **minorée** s'il existe un réel $m$ tel que $\forall x \in A, m \le x$. $m$ est appelé un **minorant** de $A$.
> - $A$ est **bornée** si $A$ est à la fois majorée et minorée.

> [!tip] Propriété 4 : Maximum et Minimum
> Soit $A$ une partie de $\mathbb{R}$.
> - Si $A$ est majorée et s'il existe un majorant qui appartient à $A$, alors celui-ci est unique. On l'appelle **maximum** de $A$, noté $\max(A)$.
> - Si $A$ est minorée et s'il existe un minorant qui appartient à $A$, alors celui-ci est unique. On l'appelle **minimum** de $A$, noté $\min(A)$.

> [!theorem] Théorème 7 : Théorème de la borne supérieure et de la borne inférieure
> Soit $A$ une partie non vide de $\mathbb{R}$.
> - Si $A$ est **majorée**, alors l'ensemble des majorants de $A$ admet un plus petit élément. Celui-ci est appelé **borne supérieure** de $A$ et noté $\sup(A)$.
> - Si $A$ est **minorée**, alors l'ensemble des minorants de $A$ admet un plus grand élément. Celui-ci est appelé **borne inférieure** de $A$ et noté $\inf(A)$.

> [!note] Remarque 2 : Borne supérieure vs Maximum
> - Si $A$ est une partie non vide de $\mathbb{R}$ majorée et $M$ un majorant de $A$, alors $\sup(A) \le M$.
> - De même, si $A$ est minorée et $m$ un minorant de $A$, alors $m \le \inf(A)$.
> - **Distinction essentielle :** Toute partie non vide majorée de $\mathbb{R}$ admet une borne supérieure, mais pas nécessairement un maximum (qui doit impérativement appartenir à l'ensemble).

> [!example] Exemple 3 : Calcul de bornes
> 1. Pour l'ensemble $A = ]0 ; 1]$ :
>    - $\sup(A) = 1$. Comme $1 \in A$, on a également $\max(A) = 1$.
>    - $\inf(A) = 0$. Cependant, $0 \notin A$, donc $A$ n'admet **pas de minimum**.
> 2. Pour l'ensemble $B = \{e^n \mid n \in \mathbb{N}\}$ :
>    - Pour $n = 0$, $e^0 = 1$. Comme la fonction exponentielle est croissante, $e^n \ge 1$ pour tout $n \in \mathbb{N}$.  
>      Ainsi $\inf(B) = 1$, et comme $1 = e^0 \in B$, on a $\min(B) = 1$.
>    - $B$ n'est pas majoré car $\lim_{n \to +\infty} e^n = +\infty$, donc $B$ n'admet ni borne supérieure réelle ni maximum.

#### 4.3 Droite réelle, valeur absolue et densité

> [!info] Notation 3 : Droite réelle
> Une droite est munie d'un repère $(O, \vec{u})$. On peut associer à tout réel $x$ le point $M(x)$ de coordonnée $x$. On dit que $x$ est l'**abscisse** du point $M$.

> [!definition] Définition 5 : Valeur absolue
> Pour tout réel $x$, la **valeur absolue** de $x$, notée $|x|$, est le plus grand des réels $x$ et $-x$ :
> $$ |x| = \begin{cases} x & \text{si } x \ge 0 \\ -x & \text{si } x < 0 \end{cases} $$

> [!note] Remarque 3
> Pour tout $x \in \mathbb{R}$ :
> - $|x| \ge 0$
> - $|x| = 0 \iff x = 0$

> [!tip] Propriété 5 : Interprétation géométrique
> Si $A$ et $B$ sont deux points de la droite réelle d'abscisses respectives $x$ et $y$, alors :
> $$ |y - x| = AB $$
> En particulier, pour tout point $M$ d'abscisse $x$, $|x| = OM$.

> [!important] Propriété 6 : Inégalité triangulaire dans $\mathbb{R}$
> Pour tous réels $x$ et $y$ :
> $$ |x + y| \le |x| + |y| $$
> 
> Pour tout nombre réel $t \in \mathbb{R}$, on a la propriété fondamentale suivante :
> 
>   
> 
> $$-\vert{}t\vert{} \le t \le \vert{}t\vert{}$$
> 
> Appliquons cette propriété à $x$ et $y$ :
> 
>   
> 
> 1. $-\vert{}x\vert{} \le x \le \vert{}x\vert{}$
>     
>       
>     
> 2. $-\vert{}y\vert{} \le y \le \vert{}y\vert{}$
>     
>       
>     
> 
> En additionnant ces deux inégalités membre à membre :
> 
>   
> 
> $$-\vert{}x\vert{} - \vert{}y\vert{} \le x + y \le \vert{}x\vert{} + \vert{}y\vert{}$$
> 
> En factorisant le signe $-$ dans le membre de gauche :
> 
>   
> 
> $$-(\vert{}x\vert{} + \vert{}y\vert{}) \le x + y \le \vert{}x\vert{} + \vert{}y\vert{}$$
> 
> Or, pour tout réel $X$ et tout réel positif $A \ge 0$, l'inégalité $-A \le X \le A$ est équivalente à $\vert{}X\vert{} \le A$.
> 
>   
> 
> En posant $X = x + y$ et $A = \vert{}x\vert{} + \vert{}y\vert{}$ (qui est bien un réel positif ou nul), on obtient directement :
> 
>   
> 
> $$\vert{}x + y\vert{} \le \vert{}x\vert{} + \vert{}y\vert{}$$

### Cas d'égalité

> [!tip] Remarque : Quand a-t-on l'égalité $\vert{}x + y\vert{} = \vert{}x\vert{} + \vert{}y\vert{}$ ?
> 
> L'égalité a lieu si et seulement si $x$ et $y$ sont de **même signe** (c'est-à-dire si le produit $xy \ge 0$).


> [!tip] Propriété 7 : Caractérisation des parties bornées
> Une partie $A$ de $\mathbb{R}$ est bornée si et seulement s'il existe un réel $R \ge 0$ tel que :
> $$ \forall x \in A, \quad |x| \le R $$

> [!theorem] Théorème 8 : Densité de $\mathbb{Q}$ dans $\mathbb{R}$
> Tout nombre réel est la limite d'une suite de nombres rationnels ($\mathbb{Q}$ est dense dans $\mathbb{R}$).

> [!theorem] Théorème 9 : Racine carrée d'un réel positif
> Soit $a$ un nombre réel strictement positif. Il existe un **unique** réel positif $l > 0$ tel que $l^2 = a$.  
> On appelle ce nombre la **racine carrée** de $a$ et on le note $\sqrt{a}$ ou $a^{1/2}$.

> [!theorem] Théorème 10 : Théorème de Cantor (1874)
> L'ensemble $\mathbb{R}$ des nombres réels est **infini**, mais **non dénombrable**.




## Exercices


## À retenir
-
## Travail à faire
- [x] Transformer en concept



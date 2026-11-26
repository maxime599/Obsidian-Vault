### Chapitre 7 : Fractions rationnelles

#### 7.1 Généralités sur les fractions rationnelles

Dans ce chapitre, $\mathbb{K}$ désigne $\mathbb{R}$ ou $\mathbb{C}$.

> [!abstract] **Définition 7.1 (Fraction rationnelle)**
> On appelle **fraction rationnelle** à coefficients dans $\mathbb{K}$ tout élément $F(X)$ représenté par un quotient de la forme $\frac{N(X)}{D(X)}$ où $N(X)$ et $D(X)$ sont des polynômes à coefficients dans $\mathbb{K}$, $D(X)$ n'étant pas le polynôme nul.
> 
> Soient $A(X)$, $B(X)$, $N(X)$ et $D(X)$ des polynômes à coefficients dans $\mathbb{K}$, $D(X)$ et $B(X)$ n'étant pas nuls. Si $A(X)D(X) = B(X)N(X)$ alors on note :
> $$\frac{A(X)}{B(X)} = \frac{N(X)}{D(X)}$$

> [!note] **Remarque 7.1**
> Les deux quotients $\frac{A(X)}{B(X)}$ et $\frac{N(X)}{D(X)}$ représentent la même fraction rationnelle $F(X)$ si et seulement si $A(X)D(X) = B(X)N(X)$.
> $$\frac{A(X)}{B(X)} = \frac{N(X)}{D(X)} \iff A(X)D(X) = B(X)N(X)$$
> Dans ce cas, on écrit $F(X) = \frac{A(X)}{B(X)} = \frac{N(X)}{D(X)}$.

> [!info] **Notation 7.1**
> On note $\mathbb{R}(X)$ l'ensemble des fractions rationnelles à coefficients dans $\mathbb{R}$, c'est-à-dire les fractions rationnelles représentées par un quotient de deux polynômes à coefficients dans $\mathbb{R}$. 
> De même, on note $\mathbb{C}(X)$ l'ensemble des fractions rationnelles à coefficients dans $\mathbb{C}$. On a donc $\mathbb{R}(X) \subset \mathbb{C}(X)$.

> [!info] **Notation 7.2**
> On fait correspondre à tout polynôme $P(X)$ la fraction rationnelle $\frac{P(X)}{1}$ où $1$ désigne le polynôme constant égal à $1$. En ce sens, $\mathbb{K}[X] \subset \mathbb{K}(X)$.

> [!tip] **Propriété 7.1 (Représentant irréductible)**
> Soit $F(X)$ une fraction rationnelle non nulle à coefficients dans $\mathbb{K}$. Il existe un unique couple de polynômes $N(X)$ et $D(X)$ à coefficients dans $\mathbb{K}$ tels que :
> * $D(X)$ est non nul et le coefficient de son monôme de plus haut degré est $1$ (polynôme unitaire) ;
> * $N(X)$ et $D(X)$ n'ont aucune racine complexe en commun ;
> * $F(X) = \frac{N(X)}{D(X)}$.
> 
> On dit que $\frac{N(X)}{D(X)}$ est le **représentant irréductible** de la fraction rationnelle $F(X)$.

> [!example] **Exemple 7.1**
> Déterminer le représentant irréductible de $F(X) = \frac{X - \frac{1}{2}}{4X^2 - 1}$.

> [!note] **Remarque 7.2**
> La fraction rationnelle nulle est la fraction rationnelle correspondant au polynôme nul. Son représentant irréductible est $\frac{0}{1}$ où $0$ et $1$ désignent respectivement le polynôme nul et le polynôme constant égal à $1$.

> [!abstract] **Définition 7.2 (Pôles d'une fraction rationnelle)**
> Soit $F(X)$ une fraction rationnelle non nulle à coefficients dans $\mathbb{K}$, de représentant irréductible $\frac{N(X)}{D(X)}$.
> On appelle **pôle d'ordre $n$** de $F(X)$ toute racine d'ordre $n$ de $D(X)$.

> [!abstract] **Définition 7.3 (Évaluation)**
> Soit $F(X)$ une fraction rationnelle à coefficients dans $\mathbb{K}$, de représentant irréductible $\frac{N(X)}{D(X)}$ et $x \in \mathbb{K}$ tel que $D(x) \neq 0$ ($x$ n'est pas un pôle de $F(X)$). On appelle **valeur de $F(X)$ en $x$** le nombre :
> $$F(x) = \frac{N(x)}{D(x)}$$

> [!note] **Remarque 7.3 (Fonction rationnelle)**
> On associe donc à toute fraction rationnelle $F(X)$ de représentant irréductible $\frac{N(X)}{D(X)}$ une fonction :
> $$x \mapsto \frac{N(x)}{D(x)}$$
> définie sur $\mathbb{K}$ privé des pôles de $F(X)$ (les racines de $D(X)$), à valeurs dans $\mathbb{K}$. Une telle fonction est appelée **fonction rationnelle**.

> [!abstract] **Définition 7.4 (Degré d'une fraction rationnelle)**
> Soit $F(X)$ une fraction rationnelle non nulle à coefficients dans $\mathbb{K}$, de représentant irréductible $\frac{N(X)}{D(X)}$. Son **degré** est l'entier relatif :
> $$\deg(F(X)) = \deg(N(X)) - \deg(D(X))$$
> On convient que la fraction rationnelle nulle a pour degré $-\infty$.

> [!note] **Remarque 7.4**
> Par convention, posons pour tout $n \in \mathbb{N}$, $-\infty - n = -\infty$. Dans tous les cas, on a alors :
> $$\deg(F(X)) = \deg(N(X)) - \deg(D(X))$$

> [!note] **Remarque 7.5**
> Soit $F(X) = \frac{A(X)}{B(X)}$ une fraction rationnelle à coefficients dans $\mathbb{K}$. On a alors :
> $$\deg(F(X)) = \deg\left(\frac{A(X)}{B(X)}\right) = \deg(A(X)) - \deg(B(X))$$
> Autrement dit, la formule précédente est valable quelle que soit la représentation de la fraction rationnelle $F(X)$.

> [!note] **Remarque 7.6**
> Pour tout polynôme $P(X)$ à coefficients dans $\mathbb{K}$, on a :
> $$\deg\left(\frac{P(X)}{1}\right) = \deg(P(X)) - 0 = \deg(P(X))$$
> Ainsi la notion de degré d'une fraction rationnelle prolonge celle de degré d'un polynôme.

> [!abstract] **Définition 7.5 (Sommes, produits et quotient)**
> Soient $F(X) = \frac{A(X)}{B(X)}$ et $G(X) = \frac{C(X)}{D(X)}$ deux fractions rationnelles à coefficients dans $\mathbb{K}$ et $\lambda \in \mathbb{K}$. On pose :
> * $(\lambda F)(X) = \frac{\lambda A(X)}{B(X)}$
> * $F(X) + G(X) = \frac{A(X)D(X) + B(X)C(X)}{B(X)D(X)}$
> * $F(X) \times G(X) = \frac{A(X)C(X)}{B(X)D(X)}$
> * $\frac{1}{F(X)} = \frac{B(X)}{A(X)}$ si $F(X) \neq 0$
> * $\frac{G(X)}{F(X)} = G(X) \times \frac{1}{F(X)} = \frac{C(X)B(X)}{D(X)A(X)}$ si $F(X) \neq 0$

> [!note] **Remarque 7.7**
> On peut facilement démontrer que ces opérations sont indépendantes des représentants choisis pour les fractions rationnelles.

> [!abstract] **Définition 7.6 (Partie entière d'une fraction rationnelle)**
> Soit $F(X) = \frac{A(X)}{B(X)}$ une fraction rationnelle à coefficients dans $\mathbb{K}$. En effectuant la division euclidienne (suivant les puissances décroissantes) de $A(X)$ par $B(X)$, on obtient :
> $$A(X) = B(X)Q(X) + R(X) \quad \text{avec } \deg(R(X)) < \deg(B(X))$$
> Ceci s'écrit :
> $$\frac{A(X)}{B(X)} = Q(X) + \frac{R(X)}{B(X)} \quad \text{avec } \deg(R(X)) < \deg(B(X))$$
> Le polynôme $Q(X)$ s'appelle la **partie entière** de la fraction rationnelle $F(X)$.

> [!note] **Remarque 7.8**
> * Si $\deg(F(X)) \geq 0$ alors $\deg(Q(X)) = \deg(F(X))$ (en particulier si $\deg(F(X)) = 0$ alors $Q(X)$ est un polynôme constant).
> * Si $\deg(F(X)) < 0$ alors $Q(X) = 0$.

> [!note] **Remarque 7.9**
> Si $R(X) = 0$ alors $A(X)$ est divisible par $B(X)$ et la fraction rationnelle est un polynôme.

---

#### 7.2 Décomposition en éléments simples

> [!important] **Théorème 7.1 (Décomposition en éléments simples sur $\mathbb{R}$)**
> Toute fraction rationnelle à coefficients réels s'écrit, de manière unique, comme somme de :
> * sa **partie entière** ;
> * fractions rationnelles, **éléments simples de première espèce**, de la forme :
>   $$\frac{\alpha}{(X - a)^n}$$
>   avec $a$ constante réelle et $\alpha \in \mathbb{R}$ ;
> * fractions rationnelles, **éléments simples de seconde espèce**, de la forme :
>   $$\frac{\alpha X + \beta}{(X^2 + bX + c)^n}$$
>   avec $X^2 + bX + c$ non factorisable dans $\mathbb{R}$ ($\Delta < 0$) et $\alpha, \beta$ constantes réelles.
> 
> Cette écriture est appelée **décomposition en éléments simples (sur $\mathbb{R}$)** de la fraction rationnelle.

##### Méthode : Comment obtenir la décomposition en éléments simples d'une fraction rationnelle $\frac{N(X)}{D(X)}$ ?

1. **Décomposition du dénominateur :**
   On décompose le polynôme $D(X)$ en facteurs irréductibles dans $\mathbb{R}[X]$.

2. **Simplification de la fraction rationnelle :**
   On recherche les racines communes de $N(X)$ et $D(X)$ pour simplifier au maximum la fraction. On obtient ainsi une représentation irréductible. Dans la suite, on travaillera avec cette représentation irréductible.

3. **Recherche de la partie entière :**
   * Si $\deg(N(X)) < \deg(D(X))$, la partie entière est nulle ($Q(X) = 0$).
   * Sinon, il existe une partie entière non nulle obtenue en divisant $N(X)$ par $D(X)$ selon les puissances décroissantes. On a alors :
     $$\frac{N(X)}{D(X)} = Q(X) + \frac{R(X)}{D(X)}$$
     et on est ramené à l'étude d'une fraction rationnelle $\frac{R(X)}{D(X)}$ telle que $\deg(R(X)) < \deg(D(X))$.

4. **Écriture de la décomposition en éléments simples :**
   On écrit la forme théorique de la décomposition en éléments simples :
   * **Si la fraction possède un pôle réel $a$ d'ordre $n$**, la factorisation de $D(X)$ contient le facteur $(X - a)^n$. On a alors une partie principale composée d'éléments simples de première espèce :
     $$\frac{\alpha_n}{(X - a)^n} + \frac{\alpha_{n-1}}{(X - a)^{n-1}} + \dots + \frac{\alpha_1}{X - a}$$
     où $\alpha_n, \alpha_{n-1}, \dots, \alpha_1$ sont des constantes réelles à calculer.
   * **Si la fraction possède deux pôles complexes conjugués d'ordre $n$**, la factorisation de $D(X)$ contient un facteur $(X^2 + bX + c)^n$, avec $X^2 + bX + c$ non factorisable dans $\mathbb{R}$. On a alors une partie principale composée d'éléments de seconde espèce :
     $$\frac{\alpha_n X + \beta_n}{(X^2 + bX + c)^n} + \frac{\alpha_{n-1} X + \beta_{n-1}}{(X^2 + bX + c)^{n-1}} + \dots + \frac{\alpha_1 X + \beta_1}{X^2 + bX + c}$$
     où $\alpha_n, \beta_n, \alpha_{n-1}, \beta_{n-1}, \dots, \alpha_1, \beta_1$ sont des constantes réelles à calculer.

5. **Calcul des constantes :**
   Pour calculer ces différentes constantes, plusieurs méthodes seront vues en TD (identification, multiplication par $(X-a)^n$ et évaluation en $a$, limites en $+\infty$, valeurs particulières, parité, etc.).
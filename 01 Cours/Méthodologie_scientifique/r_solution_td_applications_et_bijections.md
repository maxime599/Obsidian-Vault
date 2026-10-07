# Note pour le prof :
étant donné que nous avons fait les exercices directement dans l'interface de duck.ai, nous n'avons pas de photos de nos résolutions d'exercices. Cependant, nous avons demandé à duck.ai de synthétiser le chat pour ne garder seulement la résolution des exercices avec la méthode utilisée. Nous nous excusons si cela ne rentre pas exactement dans la consigne demandée

Cordialement,
Temuulen BATBOLD et Maxime BRUEL


# Analyse critique
à travers cet exercice, nous avons pu voir que l'intelligence artificielle peut être très utile pour aider à combler des lacunes, mais il ne remplace évidement pas un véritable professeur



# TD Mathématiques — Applications, Injectivité, Surjectivité & Bijections

## 📌 Problème 1 : Étude d'une application complexe

> [!ABSTRACT\] Énoncé
> Soit l'application $f : \mathbb{C}^* \to \mathbb{C}$ définie par :
> 
>
> $$
> f(z) = z + \frac{1}{z}
> $$
>
> 
> Étudier l'injectivité et la surjectivité de $f$.

### 1. Étude de l'injectivité

Soient $z, w \in \mathbb{C}^*$ tels que $f(z) = f(w)$.

$$
z + \frac{1}{z} = w + \frac{1}{w}
$$

En regroupant les termes et en réduisant au même dénominateur :

$$
(z - w) + \left(\frac{1}{z} - \frac{1}{w}\right) = 0 \iff (z - w) + \frac{w - z}{zw} = 0 \iff (z - w)\left(1 - \frac{1}{zw}\right) = 0
$$

Ce produit est nul si et seulement si $z = w$ ou $zw = 1$.

> [!EXAMPLE\] Contre-exemple
> Prenons $z = \frac{1}{2}$ et $w = 2$. On a bien $z \neq w$ et $zw = 1$.
>
> Calcul des images :
> 
>
> $$
> f\left(\frac{1}{2}\right) = \frac{1}{2} + 2 = \frac{5}{2} \quad \text{et} \quad f(2) = 2 + \frac{1}{2} = \frac{5}{2}
> $$

Deux éléments distincts de l'ensemble de départ ont la même image :

$$
\text{L'application } f \text{ n'est pas injective.}
$$

### 2. Étude de la surjectivité

Soit $a \in \mathbb{C}$ un élément de l'ensemble d'arrivée. On cherche $z \in \mathbb{C}^*$ tel que $f(z) = a$.

$$
z + \frac{1}{z} = a \underset{(\times z \neq 0)}{\iff} z^2 - az + 1 = 0
$$

Dans $\mathbb{C}$, toute équation du second degré admet au moins une solution car tout nombre complexe possède une racine carrée complexe. Les solutions sont :

$$
z_{1,2} = \frac{a \pm \sqrt{a^2 - 4}}{2}
$$

Le produit des racines vaut :

$$
z_1 \cdot z_2 = 1 \neq 0
$$

Par conséquent, aucune des deux racines ne peut être nulle ($z_{1,2} \in \mathbb{C}^*$).

> [!SUCCESS\] Conclusion Problème 1
> Tout élément $a \in \mathbb{C}$ possède au moins un antécédent dans $\mathbb{C}^*$.
> $f$ **est donc surjective, mais non injective.**

## 📌 Problème 2 : Bijection dans $\mathbb{R}^2$ et Image Réciproque d'un Ensemble

> [!ABSTRACT\] Énoncé
> Soit l'application $f : \mathbb{R}^2 \to \mathbb{R}^2$ définie par :
> 
>
> $$
> f(x, y) = (x+y,\, x+2y)
> $$
>
> 1. Démontrer que $f$ réalise une bijection de $\mathbb{R}^2$ sur $\mathbb{R}^2$ et déterminer sa bijection réciproque $f^{-1}$.
>
> 2. Soit $D = \{(x, y) \in \mathbb{R}^2 \mid y = x\}$. Déterminer $f^{-1}(D)$.

### 1. Démonstration de la bijection et calcul de $f^{-1}$

Soit $(u, v) \in \mathbb{R}^2$ un couple quelconque de l'ensemble d'arrivée. On résout le système $f(x, y) = (u, v)$ d'inconnues $(x, y) \in \mathbb{R}^2$ :

$$
\begin{cases} x + y = u \\ x + 2y = v \end{cases}
$$

Soustrayons la première ligne à la seconde :

$$
(x + 2y) - (x + y) = v - u \implies y = v - u
$$

En réinjectant $y$ dans la première équation :

$$
x + (v - u) = u \implies x = 2u - v
$$

Pour tout couple $(u, v) \in \mathbb{R}^2$, il existe un **unique** antécédent $(x, y) \in \mathbb{R}^2$ donné par $(2u - v, v - u)$.

> [!SUCCESS\] Résultat
> $f$ est **bijective** et sa réciproque $f^{-1} : \mathbb{R}^2 \to \mathbb{R}^2$ s'écrit :
> 
>
> $$
> f^{-1}(u, v) = (2u - v,\, v - u)
> $$

### 2. Détermination de $f^{-1}(D)$

Par définition de l'image réciproque :

$$
f^{-1}(D) = \{(x, y) \in \mathbb{R}^2 \mid f(x, y) \in D\}
$$

Comme $D$ est l'ensemble des points dont les deux coordonnées sont égales :

$$
f(x, y) \in D \iff x + y = x + 2y \iff y = 2y \iff y = 0
$$

La condition impose seulement $y = 0$, tandis que $x$ peut être n'importe quel réel.

> [!SUCCESS\] Résultat
> 
>
> $$
> f^{-1}(D) = \{(x, 0) \mid x \in \mathbb{R}\}
> $$
>
> 
> *(C'est la droite représentant l'axe des abscisses).*

## 📌 Problème 3 : Homographie et Involutivité

> [!ABSTRACT\] Énoncé
> Soit $E = \mathbb{R} \setminus \{1\}$ et l'application $f : E \to \mathbb{R}$ définie par :
> 
>
> $$
> f(x) = \frac{x+1}{x-1}
> $$
>
> 1. Étudier l'injectivité de $f$.
>
> 2. Résoudre l'équation $f(x) = 1$. L'application $f$ est-elle surjective ?
>
> 3. Montrer que $f \circ f = \text{Id}_E$.

### 1. Étude de l'injectivité

Soient $a, b \in E = \mathbb{R} \setminus \{1\}$ tels que $f(a) = f(b)$ :

$$
\frac{a+1}{a-1} = \frac{b+1}{b-1}
$$

Comme $a \neq 1$ et $b \neq 1$, les dénominateurs sont non nuls. En effectuant le produit en croix :

$$
(a + 1)(b - 1) = (b + 1)(a - 1)
$$

$$
ab - a + b - 1 = ab - b + a - 1
$$

$$
-a + b = -b + a \iff 2b = 2a \iff a = b
$$

> [!SUCCESS\] Résultat
> $f$ **est injective.**

### 2. Résolution de $f(x) = 1$ et surjectivité

Cherchons $x \in E$ tel que $f(x) = 1$ :

$$
\frac{x+1}{x-1} = 1 \iff x + 1 = x - 1 \iff 1 = -1 \quad \text{(impossible)}
$$

L'élément $1 \in \mathbb{R}$ (ensemble d'arrivée) n'admet aucun antécédent par $f$.

> [!SUCCESS\] Résultat
> $f$ **n'est pas surjective.**

### 3. Démonstration de $f \circ f = \text{Id}_E$

Pour tout $x \in E$, on sait que $f(x) \neq 1$, donc $f(x) \in E$. La composition $f(f(x))$ est bien définie.

$$
f(f(x)) = f\left(\frac{x+1}{x-1}\right) = \frac{\frac{x+1}{x-1} + 1}{\frac{x+1}{x-1} - 1}
$$

En réduisant au même dénominateur $(x-1)$ :

* **Numérateur :** $\frac{(x + 1) + (x - 1)}{x - 1} = \frac{2x}{x - 1}$

* **Dénominateur :** $\frac{(x + 1) - (x - 1)}{x - 1} = \frac{2}{x - 1}$

D'où :

$$
f(f(x)) = \frac{\frac{2x}{x - 1}}{\frac{2}{x - 1}} = \frac{2x}{2} = x
$$

> [!SUCCESS\] Résultat
> 
>
> $$
> f \circ f = \text{Id}_E
> $$
>
> 
> *(L'application* $f$ *est involutive).*

## 📌 Problème 4 : Étude d'une Fonction Logarithmique et Restriction Bijective

> [!ABSTRACT\] Énoncé
> Soit $f : \mathbb{R} \to [0, +\infty[$ définie par :
> 
>
> $$
> f(x) = \ln(x^2 + 1)
> $$
>
> 1. Justifier que $f$ est bien définie sur $\mathbb{R}$ et à valeurs dans $[0, +\infty[$.
>
> 2. L'application $f$ est-elle injective ?
>
> 3. L'application $f$ est-elle surjective ?
>
> 4. On note $g$ la restriction de $f$ sur $[0, +\infty[$. Montrer que $g$ est une bijection de $[0, +\infty[$ dans $[0, +\infty[$ et déterminer sa bijection réciproque $g^{-1}$.

### 1. Domaine de définition et d'arrivée

* Pour tout $x \in \mathbb{R}$, $x^2 \ge 0 \implies x^2 + 1 \ge 1 > 0$. La fonction $\ln$ est bien définie sur tout $\mathbb{R}$.

* Comme $x^2 + 1 \ge 1$ et que la fonction $\ln$ est strictement croissante :
  

  $$
  f(x) = \ln(x^2 + 1) \ge \ln(1) = 0
  $$

L'ensemble d'arrivée est bien $[0, +\infty[$.

### 2. Étude de l'injectivité

Prenons $x_1 = 1$ et $x_2 = -1$ ($1 \neq -1$) :

$$
f(1) = \ln(1^2 + 1) = \ln(2) \quad \text{et} \quad f(-1) = \ln((-1)^2 + 1) = \ln(2)
$$

> [!WARNING\] Résultat
> Deux éléments distincts possèdent la même image. $f$ **n'est pas injective.**

### 3. Étude de la surjectivité

Soit $y \in [0, +\infty[$. On résout $f(x) = y$ dans $\mathbb{R}$ :

$$
\ln(x^2 + 1) = y \iff x^2 + 1 = e^y \iff x^2 = e^y - 1
$$

Comme $y \ge 0$, on a $e^y \ge e^0 = 1$, d'où $e^y - 1 \ge 0$.
Il existe donc toujours au moins une solution réelle : $x = \sqrt{e^y - 1}$.

> [!SUCCESS\] Résultat
> Tout élément de $[0, +\infty[$ possède au moins un antécédent. $f$ **est surjective.**

### 4. Étude de la restriction $g : [0, +\infty[ \to [0, +\infty[$

* **Injectivité :** Soient $x_1, x_2 \in [0, +\infty[$.
  

  $$
  g(x_1) = g(x_2) \iff \ln(x_1^2 + 1) = \ln(x_2^2 + 1) \iff x_1^2 = x_2^2
  $$

  
  Puisque $x_1 \ge 0$ et $x_2 \ge 0$, $x_1^2 = x_2^2 \implies x_1 = x_2$. Donc $g$ est injective.

* **Surjectivité :** Pour tout $y \in [0, +\infty[$, l'unique solution **positive ou nulle** est $x = \sqrt{e^y - 1} \in [0, +\infty[$. Donc $g$ est surjective.

> [!SUCCESS\] Résultat
> $g$ réalise une **bijection** de $[0, +\infty[$ sur $[0, +\infty[$, et sa réciproque $g^{-1}$ est donnée par :
> 
>
> $$
> g^{-1}(y) = \sqrt{e^y - 1}, \quad \forall y \in [0, +\infty[
> $$

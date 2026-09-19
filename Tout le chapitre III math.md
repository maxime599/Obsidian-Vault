### Table des matières

- [[#1. Ensemble des entiers naturels $\mathbb{N}$|1. Ensemble des entiers naturels $\mathbb{N}$]]
- [[#2. Ensemble fini, ensemble infini dénombrable|2. Ensemble fini, ensemble infini dénombrable]]
- [[#3. L'ensemble $\mathbb{Q}$ des nombres rationnels|3. L'ensemble $\mathbb{Q}$ des nombres rationnels]]
- [[#4. L'ensemble $\mathbb{R}$ des nombres réels|4. L'ensemble $\mathbb{R}$ des nombres réels]]
- [[#5. L'ensemble $\mathbb{C}$ des nombres complexes|5. L'ensemble $\mathbb{C}$ des nombres complexes]]

---

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

---

### 5. L'ensemble $\mathbb{C}$ des nombres complexes

L'ensemble $\mathbb{R}$ impose encore une limite : les nombres négatifs n'ont pas de racine carrée car pour tout $x \in \mathbb{R}$, $x^2 \ge 0$. Par exemple, il n'existe pas de nombre réel dont le carré vaut $-1$.

Pour ne plus être limité, on introduit un nombre imaginaire pur.
> **Convention ingénieur / électricité :**  
> En lien avec les cours d'électricité (où $i$ désigne l'intensité du courant), on utilise la notation $j$ telle que :
> $$ j^2 = -1 $$

En conservant les propriétés arithmétiques de l'addition et de la multiplication, on construit un nouvel ensemble contenant $\mathbb{R}$, noté $\mathbb{C}$ et appelé **ensemble des nombres complexes**.

#### 5.1 Forme algébrique et définitions

> [!theorem] Théorème 11 : Forme algébrique (ou cartésienne)
> Tout nombre complexe $z \in \mathbb{C}$ admet une écriture unique, appelée **écriture algébrique** (ou cartésienne) :
> $$ z = a + jb \quad \text{où } (a, b) \in \mathbb{R}^2 $$

> [!check] Corollaire 2 : Égalité de deux complexes
> L'unicité de cette écriture donne :
> $$ a + jb = a' + jb' \iff \begin{cases} a = a' \\ b = b' \end{cases} $$

> [!definition] Définition 6 : Partie réelle et partie imaginaire
> Si $z = a + jb$ avec $(a, b) \in \mathbb{R}^2$ :
> - Le réel $a$ est la **partie réelle** de $z$, notée $\text{Re}(z) = a$.
> - Le réel $b$ est la **partie imaginaire** de $z$, notée $\text{Im}(z) = b$.

> [!info] Notation 4 : Imaginaires purs
> - Si $\text{Im}(z) = 0$, $z$ est un nombre réel ($z \in \mathbb{R}$).
> - Si $\text{Re}(z) = 0$, $z$ est un **imaginaire pur**. On note $j\mathbb{R} = \{jb \mid b \in \mathbb{R}\}$ l'ensemble des imaginaires purs.

#### 5.2 Opérations algébriques dans $\mathbb{C}$

> [!theorem] Théorème 12 : Opérations sous forme algébrique
> Si $z = a + jb$ et $z' = a' + jb'$ sont deux nombres complexes :
> - **Addition :** $z + z' = (a + a') + j(b + b')$
> - **Multiplication :** $z z' = (aa' - bb') + j(ab' + ba')$

> [!note] Remarque 5
> Les opérations dans $\mathbb{C}$ prolongent celles dans $\mathbb{R}$. Toutes les règles de calcul et identités remarquables usuelles restent valables.

> [!example] Exemple 4 : Calculs algébriques de base
> - **Calcul de $(1+j)(1-j)$ :**
>   $$ (1+j)(1-j) = 1^2 - j^2 = 1 - (-1) = 2 $$
> - **Calcul de $(1+j)^2$ :**
>   $$ (1+j)^2 = 1^2 + 2j + j^2 = 1 + 2j - 1 = 2j $$

#### 5.3 Conjugaison complexe

> [!definition] Définition 7 : Conjugué d'un complexe
> Le **conjugué** du nombre complexe $z = a + jb$ (avec $a, b \in \mathbb{R}$) est le nombre complexe :
> $$ \bar{z} = a - jb $$

> [!theorem] Théorème 13 : Propriétés du conjugué
> Pour tous complexes $z, z'$ et tout $n \in \mathbb{N}$ :
> - $\overline{z + z'} = \bar{z} + \bar{z'}$
> - $\overline{z z'} = \bar{z} \times \bar{z'}$
> - $\overline{z^n} = (\bar{z})^n$
> - $\overline{\left(\frac{1}{z}\right)} = \frac{1}{\bar{z}} \quad (z \neq 0)$
> - $\overline{\left(\frac{z'}{z}\right)} = \frac{\bar{z'}}{\bar{z}} \quad (z \neq 0)$

> [!theorem] Théorème 14 : Caractérisation des réels et imaginaires purs
> Pour tout $z \in \mathbb{C}$ :
> - $\text{Re}(z) = \frac{1}{2}(z + \bar{z}) \quad \implies \quad z \in \mathbb{R} \iff z = \bar{z}$
> - $\text{Im}(z) = \frac{1}{2j}(z - \bar{z}) \quad \implies \quad z \in j\mathbb{R} \iff z = -\bar{z}$

#### 5.4 Module d'un nombre complexe

> [!definition] Définition 8 : Module
> Soit $(a, b) \in \mathbb{R}^2$. Le **module** du nombre complexe $z = a + jb$ est le réel positif ou nul :
> $$ |z| = \sqrt{a^2 + b^2} $$

> [!note] Remarques 6 & 7
> - $|z| = 0 \iff z = 0$
> - Si $a \in \mathbb{R}$, $|a| = \sqrt{a^2 + 0^2} = \sqrt{a^2}$ correspond à sa valeur absolue.

> [!example] Exemple 5 : Calcul de module
> Calculer le module de $z = 1 + j\sqrt{3}$ :
> $$ |z| = \sqrt{1^2 + (\sqrt{3})^2} = \sqrt{1 + 3} = \sqrt{4} = 2 $$

#### 5.5 Plan complexe et géométrie

> [!info] Notation 5 : Le plan complexe
> Le plan est muni d'un repère orthonormé direct $(O, \vec{u}, \vec{v})$.  
> À tout nombre complexe $z = a + jb$, on associe le point $M(a, b)$ de coordonnées cartésiennes $(a, b)$.  
> - $z$ est l'**affixe** du point $M$, noté $M(z)$.
> - Le vecteur $\vec{OM}$ a également pour affixe $z$.
> - Le module $|z| = \|\vec{OM}\| = OM$ représente la distance de l'origine $O$ au point $M$.

> [!tip] Propriété 9 : Majoration par le module
> Pour tout $z \in \mathbb{C}$ :
> $$ |\text{Re}(z)| \le |z| \quad \text{et} \quad |\text{Im}(z)| \le |z| $$
> 
> *Démonstration :* $|\text{Re}(z)| = \sqrt{a^2} \le \sqrt{a^2 + b^2} = |z|$ et $|\text{Im}(z)| = \sqrt{b^2} \le \sqrt{a^2 + b^2} = |z|$.

> [!theorem] Théorème 15 : Relation entre module et conjugué
> Pour tout $z = a + jb \in \mathbb{C}$ :
> $$ z \bar{z} = |z|^2 $$
> 
> *Démonstration :* $z \bar{z} = (a + jb)(a - jb) = a^2 - j^2 b^2 = a^2 + b^2 = (|z|)^2$.

> [!theorem] Théorème 16 : Propriétés du module
> Soient $z, z' \in \mathbb{C}$ :
> - $|\bar{z}| = |z|$
> - $|z z'| = |z| \times |z'|$
> - $|z^n| = |z|^n \quad (\forall n \in \mathbb{N})$
> - $\left|\frac{1}{z}\right| = \frac{1}{|z|} \quad (z \neq 0)$
> - $\left|\frac{z'}{z}\right| = \frac{|z'|}{|z|} \quad (z \neq 0)$

> [!note] Remarque 9
> Si $z \neq 0$, la relation $|z^n| = |z|^n$ est également vraie pour tout $n \in \mathbb{Z}$.

#### 5.6 Inverse d'un nombre complexe

> [!tip] Propriété 10 : Calcul de l'inverse
> Si $z = a + jb \neq 0$ est l'écriture algébrique d'un complexe, son inverse est donné par :
> $$ \frac{1}{z} = \frac{\bar{z}}{z \bar{z}} = \frac{\bar{z}}{|z|^2} = \frac{a - jb}{a^2 + b^2} = \frac{a}{a^2 + b^2} - j \frac{b}{a^2 + b^2} $$
> 
> *Méthode :* Il suffit de multiplier le numérateur et le dénominateur par le conjugué du dénominateur $\bar{z}$.

> [!example] Exemple 6 : Inverse de $1 + j\sqrt{3}$
> Déterminer l'écriture algébrique de l'inverse de $z = 1 + j\sqrt{3}$ :
> $$ \frac{1}{1 + j\sqrt{3}} = \frac{1 - j\sqrt{3}}{(1 + j\sqrt{3})(1 - j\sqrt{3})} = \frac{1 - j\sqrt{3}}{1^2 + (\sqrt{3})^2} = \frac{1 - j\sqrt{3}}{4} = \frac{1}{4} - j\frac{\sqrt{3}}{4} $$

> [!important] Propriété 11 : Inégalité triangulaire dans $\mathbb{C}$
> Pour tous complexes $z, z' \in \mathbb{C}$ :
> $$ |z + z'| \le |z| + |z'| $$

#### 5.7 Racines carrées d'un nombre complexe

> [!definition] Définition 9 : Racine carrée dans $\mathbb{C}$
> Soit $A \in \mathbb{C}$. On appelle **racine carrée** de $A$ tout nombre complexe $z$ tel que :
> $$ z^2 = A $$

> [!warning] Remarque importante sur la notation $\sqrt{\quad}$
> Contrairement au cas réel où $\sqrt{x}$ désigne l'unique réel positif dont le carré vaut $x$, **il n'y a pas de relation d'ordre dans $\mathbb{C}$** et donc pas de notion de « complexe positif ».  
> Le symbole $\sqrt{\quad}$ ne doit être utilisé que pour des nombres réels positifs !

> [!theorem] Propriété 12 : Nombre de racines carrées
> Tout nombre complexe non nul $A \in \mathbb{C}^*$ admet **exactement deux** racines carrées complexes, qui sont **opposées**.

> [!note] Remarque 10 : Cas particuliers réels
> - Si $A > 0$ est un réel positif, ses deux racines carrées complexes sont $\sqrt{A}$ et $-\sqrt{A}$.
> - Si $A < 0$ est un réel négatif, ses deux racines carrées complexes sont $j\sqrt{-A}$ et $-j\sqrt{-A}$.

> [!example] Exemple 7 : Racines carrées de réels
> - Pour $A = 4$ : les deux racines carrées sont $2$ et $-2$.
> - Pour $A = -3$ : les deux racines carrées sont $j\sqrt{3}$ et $-j\sqrt{3}$.

> [!tip] Remarque 11 : Méthode générale de calcul des racines carrées
> Soit $A = a + jb \neq 0$. On cherche $z = x + jy$ tel que $z^2 = A$.  
> $z^2 = (x + jy)^2 = (x^2 - y^2) + 2jxy = a + jb$.  
> 
> L'égalité des parties réelles, imaginaire et des modules donne le système de 3 équations :
> $$ \begin{cases} x^2 - y^2 = a & \text{(1) Partie réelle} \\ x^2 + y^2 = \sqrt{a^2 + b^2} & \text{(2) Module } (|z|^2 = |A|) \\ 2xy = b & \text{(3) Partie imaginaire (signe du produit)} \end{cases} $$
> 
> - $(1) + (2) \implies 2x^2 = a + \sqrt{a^2 + b^2} \implies x = \pm \sqrt{\frac{a + \sqrt{a^2 + b^2}}{2}}$
> - $(2) - (1) \implies 2y^2 = \sqrt{a^2 + b^2} - a \implies y = \pm \sqrt{\frac{\sqrt{a^2 + b^2} - a}{2}}$
> - L'équation (3) détermine si $x$ et $y$ sont de même signe ($b > 0$) ou de signes contraires ($b < 0$).

> [!example] Exemple 8 : Racines carrées de $A = 3 + 4j$
> Cherchons $z = x + jy$ tel que $z^2 = 3 + 4j$ :
> 1. Partie réelle : $x^2 - y^2 = 3$
> 2. Module : $x^2 + y^2 = |3 + 4j| = \sqrt{3^2 + 4^2} = 5$
> 3. Partie imaginaire : $2xy = 4 \implies xy = 2 > 0$ ($x$ et $y$ ont le même signe).
> 
> En combinant :
> - $(1) + (2) \implies 2x^2 = 8 \implies x^2 = 4 \implies x = \pm 2$
> - $(2) - (1) \implies 2y^2 = 2 \implies y^2 = 1 \implies y = \pm 1$
> - Comme $xy = 2 > 0$, $x$ et $y$ ont même signe :
>   - Si $x = 2 \implies y = 1 \implies z_1 = 2 + j$
>   - Si $x = -2 \implies y = -1 \implies z_2 = -2 - j$
> 
> Les deux racines carrées de $3 + 4j$ sont donc $z_1 = 2 + j$ et $z_2 = -(2 + j)$.

#### 5.8 Équations du second degré dans $\mathbb{C}$

Dans ce paragraphe, $a, b, c \in \mathbb{C}$ avec $a \neq 0$.

> [!theorem] Théorème 17 : Solutions d'une équation du second degré
> Les solutions de l'équation $a z^2 + b z + c = 0$ dans $\mathbb{C}$ sont :
> $$ z_1 = \frac{-b + \delta}{2a} \quad \text{et} \quad z_2 = \frac{-b - \delta}{2a} $$
> où $\delta$ est une racine carrée complexe du discriminant $\Delta = b^2 - 4ac$.  
> 
> On a la factorisation :
> $$ a z^2 + b z + c = a(z - z_1)(z - z_2) $$

> [!example] Exemple 9 : Équation $z^2 + \sqrt{3}z + 1 = 0$
> - Discriminant : $\Delta = (\sqrt{3})^2 - 4(1)(1) = 3 - 4 = -1$.
> - Une racine carrée de $\Delta = -1$ est $\delta = j$.
> - Solutions :
>   $$ z_1 = \frac{-\sqrt{3} + j}{2} = -\frac{\sqrt{3}}{2} + j\frac{1}{2} \quad \text{et} \quad z_2 = \frac{-\sqrt{3} - j}{2} = -\frac{\sqrt{3}}{2} - j\frac{1}{2} $$

> [!example] Exemple 10 : Équation $z^2 + \sqrt{3}z - j = 0$
> - Discriminant : $\Delta = (\sqrt{3})^2 - 4(1)(-j) = 3 + 4j$.
> - D'après l'Exemple 8, une racine carrée de $\Delta = 3 + 4j$ est $\delta = 2 + j$.
> - Solutions :
>   $$ z_1 = \frac{-\sqrt{3} + (2 + j)}{2} = \frac{2 - \sqrt{3}}{2} + j\frac{1}{2} $$
>   $$ z_2 = \frac{-\sqrt{3} - (2 + j)}{2} = \frac{-2 - \sqrt{3}}{2} - j\frac{1}{2} $$

> [!theorem] Théorème 18 : Relations entre coefficients et racines
> Les nombres complexes $z_1$ et $z_2$ sont les solutions de l'équation $a z^2 + b z + c = 0$ si et seulement si :
> $$ z_1 + z_2 = -\frac{b}{a} \quad \text{et} \quad z_1 z_2 = \frac{c}{a} $$

> [!example] Exemple 11 : Utilisation des relations entre coefficients et racines
> Vérifier que $j$ est solution de $2z^2 + z + 2 - j = 0$ et en déduire l'autre solution.
> 
> 1. **Vérification :**  
>    Pour $z = j$ :
>    $$ 2(j)^2 + j + 2 - j = 2(-1) + j + 2 - j = -2 + 2 = 0 $$
>    Donc $z_1 = j$ est bien une solution.
> 
> 2. **Déduction rapide de $z_2$ :**  
>    D'après le Théorème 18, le produit des racines vaut $z_1 z_2 = \frac{c}{a} = \frac{2 - j}{2}$.  
>    Ainsi :
>    $$ j z_2 = \frac{2 - j}{2} \implies z_2 = \frac{2 - j}{2j} = \frac{(2 - j)(-j)}{2(1)} = \frac{-2j + j^2}{2} = \frac{-1 - 2j}{2} = -\frac{1}{2} - j $$
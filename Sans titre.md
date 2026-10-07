Voici la résolution complète et détaillée des 4 problèmes, élaborée selon la même méthode et les étapes de raisonnement validées lors des échanges dans le chat.

  

### **Problème 1**

#### **Énoncé**

Soit l'application $f : \mathbb{C}^* \to \mathbb{C}$ définie par $f(z) = z + \frac{1}{z}$. Étudier l'injectivité et la surjectivité de $f$.

  

#### **1. Étude de l'injectivité**

- Soient $z, w \in \mathbb{C}^*$ tels que $f(z) = f(w)$.
    
      
    
- L'égalité s'écrit :
    
      
    
    $$z + \frac{1}{z} = w + \frac{1}{w}$$
    
      
    
- En regroupant les termes et en réduisant au même dénominateur :
    
      
    
    $$(z - w) + \left(\frac{1}{z} - \frac{1}{w}\right) = 0 \iff (z - w) + \frac{w - z}{zw} = 0 \iff (z - w)\left(1 - \frac{1}{zw}\right) = 0$$
    
      
    
- Ce produit est nul si et seulement si $z = w$ ou $zw = 1$.
    
      
    
- **Contre-exemple :** Prenons $z = \frac{1}{2}$ et $w = 2$. On a $z \neq w$ et $zw = 1$.
    
      
    
- Calcul des images :
    
      
    
    $$f\left(\frac{1}{2}\right) = \frac{1}{2} + 2 = \frac{5}{2} \quad \text{et} \quad f(2) = 2 + \frac{1}{2} = \frac{5}{2}$$
    
      
    
- Deux éléments distincts ont la même image, donc **$f$ n'est pas injective**.
    
      
    

#### **2. Étude de la surjectivité**

- Soit $a \in \mathbb{C}$ un élément de l'ensemble d'arrivée. On cherche $z \in \mathbb{C}^*$ tel que $f(z) = a$.
    
      
    
- L'équation $z + \frac{1}{z} = a$ se ramène, en multipliant par $z \neq 0$, à l'équation du second degré :
    
      
    
    $$z^2 - az + 1 = 0$$
    
      
    
- Dans $\mathbb{C}$, toute équation du second degré admet des solutions car tout nombre complexe possède au moins une racine carrée complexe.
    
      
    
- Les solutions sont données par $z_{1,2} = \frac{a \pm \sqrt{a^2 - 4}}{2}$.
    
      
    
- Le produit des racines vaut $z_1 \cdot z_2 = 1 \neq 0$. Par conséquent, aucune des racines ne peut être nulle ($z_{1,2} \neq 0$).
    
      
    
- Les solutions appartiennent donc bien à l'ensemble de départ $\mathbb{C}^*$.
    
      
    
- Tout élément $a \in \mathbb{C}$ admet au moins un antécédent dans $\mathbb{C}^*$, donc **$f$ est surjective**.
    
      
    

#### **Conclusion du Problème 1**

L'application $f$ est **surjective mais non injective**.

  

### **Problème 2**

#### **Énoncé**

Soit l'application $f : \mathbb{R}^2 \to \mathbb{R}^2$ définie par $f(x, y) = (x+y,\, x+2y)$.

  

1. Démontrer que $f$ réalise une bijection de $\mathbb{R}^2$ sur $\mathbb{R}^2$ et déterminer sa bijection réciproque $f^{-1}$.
    
      
    
2. Soit $D = \{(x, y) \in \mathbb{R}^2 \mid y = x\}$. Déterminer $f^{-1}(D)$.
    
      
    

#### **1. Démonstration de la bijection et recherche de $f^{-1}$**

- Soit $(u, v) \in \mathbb{R}^2$ un couple quelconque de l'ensemble d'arrivée. On résout le système $f(x, y) = (u, v)$ d'inconnue $(x, y) \in \mathbb{R}^2$ :
    
      
    
    $$\begin{cases} x + y = u \\ x + 2y = v \end{cases}$$
    
      
    
- En soustrayant la première équation à la seconde :
    
      
    
    $$(x + 2y) - (x + y) = v - u \implies y = v - u$$
    
      
    
- En réinjectant $y$ dans la première équation :
    
      
    
    $$x + (v - u) = u \implies x = 2u - v$$
    
      
    
- Pour tout $(u, v) \in \mathbb{R}^2$, il existe donc un **unique** couple antécédent $(x, y) = (2u - v,\, v - u) \in \mathbb{R}^2$.
    
      
    
- Ainsi, **$f$ est bijective** et sa bijection réciproque est définie par :
    
      
    
    $$f^{-1}(u, v) = (2u - v,\, v - u)$$
    
      
    

#### **2. Détermination de $f^{-1}(D)$**

- Par définition de l'image réciproque :
    
      
    
    $$f^{-1}(D) = \{(x, y) \in \mathbb{R}^2 \mid f(x, y) \in D\}$$
    
      
    
- Dire que $f(x, y) = (x+y,\, x+2y) \in D$ signifie que ses deux coordonnées sont égales :
    
      
    
    $$x + y = x + 2y$$
    
      
    
- En simplifiant par $x$ :
    
      
    
    $$y = 2y \iff 2y - y = 0 \iff y = 0$$
    
      
    
- La condition porte uniquement sur $y$, le réel $x$ pouvant être quelconque dans $\mathbb{R}$.
    
      
    
- L'ensemble recherché est donc l'axe des abscisses :
    
      
    
    $$f^{-1}(D) = \{(x, 0) \mid x \in \mathbb{R}\}$$
    
      
    

### **Problème 3**

#### **Énoncé**

Soient $E = \mathbb{R} \setminus \{1\}$ et l'application $f : E \to \mathbb{R}$ définie par $f(x) = \frac{x+1}{x-1}$.

  

1. Étudier l'injectivité de $f$.
    
      
    
2. Résoudre l'équation $f(x) = 1$. L'application $f$ est-elle surjective ?
    
      
    
3. Montrer que $f \circ f = \text{Id}_E$.
    
      
    

#### **1. Étude de l'injectivité**

- Soient $a, b \in E = \mathbb{R} \setminus \{1\}$ tels que $f(a) = f(b)$.
    
      
    
- L'égalité s'écrit :
    
      
    
    $$\frac{a+1}{a-1} = \frac{b+1}{b-1}$$
    
      
    
- Comme $a \neq 1$ et $b \neq 1$, les dénominateurs sont non nuls. On effectue le produit en croix :
    
      
    
    $$(a + 1)(b - 1) = (b + 1)(a - 1)$$
    
      
    
- En développant les deux membres :
    
      
    
    $$ab - a + b - 1 = ab - b + a - 1$$
    
      
    
- En simplifiant par $ab$ et $-1$ :
    
      
    
    $$-a + b = -b + a \iff 2b = 2a \iff a = b$$
    
      
    
- L'égalité des images implique l'égalité des antécédents, donc **$f$ est injective**.
    
      
    

#### **2. Résolution de $f(x) = 1$ et étude de la surjectivité**

- On cherche $x \in E$ tel que $f(x) = 1$ :
    
      
    
    $$\frac{x+1}{x-1} = 1 \iff x + 1 = x - 1 \iff 1 = -1$$
    
      
    
- Cette égalité est impossible, l'équation n'admet donc aucune solution dans $E$.
    
      
    
- L'élément $1 \in \mathbb{R}$ (ensemble d'arrivée) n'a pas d'antécédent par $f$.
    
      
    
- Par conséquent, **$f$ n'est pas surjective**.
    
      
    

#### **3. Démonstration de $f \circ f = \text{Id}_E$**

- Pour tout $x \in E$, on vérifie d'abord que $f(x) \neq 1$ (car l'équation $f(x) = 1$ n'a pas de solution), donc $f(x) \in E$. La composition $f(f(x))$ est bien définie.
    
      
    
- Calcul de $f(f(x))$ :
    
      
    
    $$f(f(x)) = f\left(\frac{x+1}{x-1}\right) = \frac{\frac{x+1}{x-1} + 1}{\frac{x+1}{x-1} - 1}$$
    
      
    
- Réduction au même dénominateur du numérateur et du dénominateur :
    
      
    
    $$\text{Numérateur} = \frac{(x + 1) + (x - 1)}{x - 1} = \frac{2x}{x - 1}$$
    
      
    
    $$\text{Dénominateur} = \frac{(x + 1) - (x - 1)}{x - 1} = \frac{2}{x - 1}$$
    
      
    
- En effectuant le quotient :
    
      
    
    $$f(f(x)) = \frac{\frac{2x}{x - 1}}{\frac{2}{x - 1}} = \frac{2x}{2} = x$$
    
      
    
- On a bien $f \circ f(x) = x$ pour tout $x \in E$, c'est-à-dire **$f \circ f = \text{Id}_E$**.
    
      
    

### **Problème 4**

#### **Énoncé**

Soit $f$ l'application de $\mathbb{R}$ dans $[0, +\infty[$ définie par $f(x) = \ln(x^2 + 1)$.

  

1. Justifier que $f$ est bien définie sur $\mathbb{R}$ et à valeurs dans $[0, +\infty[$.
    
      
    
2. L'application $f$ est-elle injective ?
    
      
    
3. L'application $f$ est-elle surjective ?
    
      
    
4. On note $g$ la restriction de $f$ sur $[0, +\infty[$. Montrer que $g$ est une bijection de $[0, +\infty[$ dans $[0, +\infty[$ et déterminer sa bijection réciproque $g^{-1}$.
    
      
    

#### **1. Définition et ensemble d'arrivée**

- Pour tout $x \in \mathbb{R}$, $x^2 \ge 0$, donc $x^2 + 1 \ge 1 > 0$. La fonction logarithme népérien est donc définie sur tout $\mathbb{R}$.
    
      
    
- De plus, comme $x^2 + 1 \ge 1$ et que $\ln$ est strictement croissante sur $]0, +\infty[$ :
    
      
    
    $$f(x) = \ln(x^2 + 1) \ge \ln(1) = 0$$
    
      
    
- Les valeurs de $f(x)$ appartiennent bien à l'ensemble $[0, +\infty[$.
    
      
    

#### **2. Étude de l'injectivité**

- Soient $1$ et $-1$ deux réels distincts de $\mathbb{R}$.
    
      
    
- $f(1) = \ln(1^2 + 1) = \ln(2)$ et $f(-1) = \ln((-1)^2 + 1) = \ln(2)$.
    
      
    
- Comme $1 \neq -1$ mais $f(1) = f(-1)$, **$f$ n'est pas injective**.
    
      
    

#### **3. Étude de la surjectivité**

- Soit $y \in [0, +\infty[$. On cherche $x \in \mathbb{R}$ tel que $f(x) = y$.
    
      
    
- L'équation s'écrit :
    
      
    
    $$\ln(x^2 + 1) = y \iff x^2 + 1 = e^y \iff x^2 = e^y - 1$$
    
      
    
- Comme $y \ge 0$, la fonction exponentielle donne $e^y \ge e^0 = 1$, d'où $e^y - 1 \ge 0$.
    
      
    
- L'équation admet donc au moins une solution réelle : $x = \sqrt{e^y - 1}$.
    
      
    
- Tout élément de l'ensemble d'arrivée $[0, +\infty[$ possède au moins un antécédent dans $\mathbb{R}$, donc **$f$ est surjective**.
    
      
    

#### **4. Restriction $g : [0, +\infty[ \to [0, +\infty[$ et réciproque**

- **Injectivité de $g$ :** Soient $x_1, x_2 \in [0, +\infty[$.
    
      
    
    $$g(x_1) = g(x_2) \iff \ln(x_1^2 + 1) = \ln(x_2^2 + 1) \iff x_1^2 + 1 = x_2^2 + 1 \iff x_1^2 = x_2^2$$
    
      
    
    Puisque $x_1 \ge 0$ et $x_2 \ge 0$, l'égalité des carrés implique $x_1 = x_2$. Donc $g$ est injective.
    
      
    
- **Surjectivité de $g$ :** Pour tout $y \in [0, +\infty[$, l'unique solution **positive ou nulle** de l'équation $g(x) = y$ est $x = \sqrt{e^y - 1} \in [0, +\infty[$. Donc $g$ est surjective.
    
      
    
- **Conclusion :** $g$ est une bijection de $[0, +\infty[$ dans $[0, +\infty[$. Sa bijection réciproque $g^{-1} : [0, +\infty[ \to [0, +\infty[$ est :
    
      
    
    $$g^{-1}(y) = \sqrt{e^y - 1}, \quad \forall y \in [0, +\infty[$$
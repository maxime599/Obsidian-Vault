---
semestre: S1
type de cours: CM
date: 2026-10-07T20:41:49
End Date: 2026-10-07T22:21:49
Calendar Title: "[[01 Cours/Math/chapitre 4 les sommes, Math 2026-10-07|chapitre 4 les sommes, Math]]"
prof:
tags:
  - cours
  - Math
Concepts:
  - "[[Binôme de Newton]]"
  - "[[Loi binomiale]]"
  - "[[Combinaisons et coefficients binomiaux]]"
  - "[[Sommes, changements d'indice et sommes télescopiques]]"
  - "[[Triangle de Pascal]]"
Ressources:
  - "[[chapitre 4 les sommes, Math 2026-10-07]]"
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
# chapitre 4 les sommes


## Objectifs

-

## Notes

### 1. Le symbole $\sum$

> [!info] **Notation 1**
> Soient $n$ et $m$ deux entiers naturels tels que $m \le n$. On note :
> $$\sum_{k=m}^{n}a_{k}=a_{m}+a_{m+1}+\dots+a_{n-1}+a_{n}$$
> Cette somme contient $n-m+1$ termes. On peut aussi la noter :
> $$\sum_{m\le k\le n}a_{k}$$

> [!example] **Exemple 1**
> Soit $n$ un entier tel que $n \ge 2$. Calculer $\sum_{k=2}^{n}1$ et $\sum_{k=0}^{n}1$.

> [!note] **Indice muet**
> L'indice $k$ est un indice « muet ». C'est-à-dire que l'on peut le changer par n'importe quel autre symbole non utilisé par ailleurs.
> Par exemple, on a :
> $$\sum_{k=m}^{n}a_{k}=\sum_{i=m}^{n}a_{i}$$

---

### 2. Propriétés de la somme

> [!abstract] **Propriété 1 (Linéarité de la somme)**
> - **Additivité :**
>   $$\sum_{k=m}^{n}(a_{k}+b_{k})=\sum_{k=m}^{n}a_{k}+\sum_{k=m}^{n}b_{k}$$
> - **Multiplication par une constante :** Pour toute constante $\lambda$ :
>   $$\sum_{k=m}^{n}\lambda a_{k}=\lambda\sum_{k=m}^{n}a_{k}$$

> [!warning] **Remarques importantes**
> 1. Dans la propriété précédente, $\lambda$ doit être une **constante**, c'est-à-dire ne pas dépendre de l'indice de sommation.
> 2. La sommation se comporte mal avec les produits. En général, on a :
>    $$\sum_{k=m}^{n}a_{k}b_{k} \neq \left(\sum_{k=m}^{n}a_{k}\right)\left(\sum_{k=m}^{n}b_{k}\right)$$

---

### 3. Changement d'indice

On procède à un changement d'indice pour deux raisons :
1. **Changer l'indice dans les termes de la somme.**  
   Par exemple, avec le changement d'indice $i = k + 1$, on obtient :
   $$\sum_{k=m}^{n}a_{k+1}=\sum_{i=m+1}^{n+1}a_{i}$$
2. **Changer les bornes de la somme.**  
   Par exemple, avec le changement d'indice $i = k - 2$ (ce qui équivaut à $k = i + 2$), on obtient :
   $$\sum_{k=2}^{n+2}a_{k}=\sum_{i=0}^{n}a_{i+2}$$

> [!example] **Exemple 2**
> - Écrire la somme $\sum_{k=3}^{n}a_{k+2}$ avec le changement d'indice $i = k + 2$.  
>   *A-t-on $\sum_{k=3}^{n}a_{k+2}=\sum_{k=5}^{n+2}a_{k}$ ?*
> - Écrire la somme $\sum_{k=4}^{n+4}a_{k}$ avec le changement d'indice $i = k - 4$.  
>   *A-t-on $\sum_{k=4}^{n+4}a_{k}=\sum_{k=0}^{n}a_{k+4}$ ?*

> [!warning] **Remarque 3**
> Attention, on ne peut pas effectuer n'importe quel changement d'indice. Par exemple, on ne peut pas calculer directement $\sum_{k=0}^{n}a_{2k}$ avec le changement d'indice $i = 2k$.

---

### 4. Sommes téléscopiques

> [!theorem] **Théorème 1**
> Soient $n$ et $m$ deux entiers naturels tels que $m \le n$ :
> $$\sum_{k=m}^{n}(a_{k+1}-a_{k}) = a_{n+1}-a_{m}$$

> [!example] **Exemple 3**
> Soit $n$ un entier naturel.
> 1. Calculer de deux manières $\sum_{k=0}^{n}[(k+1)^{2}-k^{2}]$.
> 2. En déduire la somme $\sum_{k=0}^{n}k$.

---

### 5. Sommes classiques

> [!abstract] **Propriété 2 (Somme d'une suite arithmétique de base)**
> Pour tout $n \in \mathbb{N}$ :
> $$\sum_{k=0}^{n}k = \frac{n(n+1)}{2}$$

> [!note] **Remarque 4**
> Si $n \in \mathbb{N}^*$, alors on a aussi :
> $$\sum_{k=0}^{n}k = \sum_{k=1}^{n}k = \frac{n(n+1)}{2}$$

> [!example] **Exemple 4**
> Calculer $\sum_{k=0}^{n}(2+3k)$.

> [!abstract] **Propriété 3 (Somme d'une suite géométrique)**
> Si $q \neq 1$, alors pour tout $n \in \mathbb{N}$ :
> $$\sum_{k=0}^{n}q^{k} = \frac{1-q^{n+1}}{1-q}$$

> [!example] **Exemple 5**
> Calculer $\sum_{k=0}^{n}(2 \cdot 3^{k})$.

---

### 6. La factorielle d'un entier

> [!definition] **Définition 1 (Factorielle)**
> Pour tout $n \in \mathbb{N}^*$, on appelle **factorielle de $n$** et on note $n!$ l'entier naturel défini par :
> $$n! = 1 \times 2 \times \dots \times n$$
> Par convention, $0! = 1$.

> [!note] **Remarque 5**
> L'opération $n!$ se lit « factorielle de $n$ », « factorielle $n$ » ou encore « $n$ factorielle ».

> [!example] **Exemple 6**
> Calculer $5!$.

> [!theorem] **Théorème 2**
> Pour tout $n \in \mathbb{N}$ :
> $$(n+1)! = (n+1) \times n!$$

---

### 7. Coefficients binomiaux

> [!definition] **Définition 2 (Coefficients binomiaux)**
> Soient $n$ et $k$ deux entiers naturels tels que $k \le n$. Nous noterons $\binom{n}{k}$, lu « $k$ parmi $n$ », le nombre entier :
> $$\binom{n}{k} = \frac{n!}{k!(n-k)!}$$
> Les nombres $\binom{n}{k}$ sont appelés coefficients binomiaux.

> [!example] **Exemple 7**
> Soit $n \in \mathbb{N}$. Calculer $\binom{n}{0}$, $\binom{n}{1}$ et $\binom{n}{2}$.

> [!abstract] **Propriété 4 (Propriétés des coefficients binomiaux)**
> Soient $n$ et $k$ deux entiers naturels tels que $k \le n$.
> - **Formule de symétrie :**
>   $$\binom{n}{k} = \binom{n}{n-k}$$
> - **Formule de Pascal :** Si $n \ge 1$ et $k \ge 1$, alors :
>   $$\binom{n}{k} = \binom{n-1}{k} + \binom{n-1}{k-1}$$

> [!note] **Notation 2**
> Soit $n \in \mathbb{N}$ et $k \in \mathbb{Z}$. Si $k < 0$ ou $k > n$, alors on pose, par convention :
> $$\binom{n}{k} = 0$$
> Cette notation est compatible avec les formules précédentes qui sont donc valables pour tout $k \in \mathbb{Z}$.

> [!tip] **Triangle de Pascal**
> La formule de Pascal permet de calculer les valeurs des nombres $\binom{n}{k}$ à l'aide du triangle de Pascal :
>
> | $n \backslash k$ | 0 | 1 | 2 | 3 | 4 | 5 |
> | :---: | :-: | :-: | :-: | :-: | :-: | :-: |
> | **0** | 1 | | | | | |
> | **1** | 1 | 1 | | | | |
> | **2** | 1 | 2 | 1 | | | |
> | **3** | 1 | 3 | 3 | 1 | | |
> | **4** | 1 | 4 | 6 | 4 | 1 | |
> | **5** | 1 | 5 | 10 | 10 | 5 | 1 |
>
> *Relation fondamentale :* $\binom{n}{k} = \binom{n-1}{k-1} + \binom{n-1}{k}$.

---

### 8. Formule du binôme de Newton

> [!theorem] **Théorème 3 (Formule du binôme de Newton)**
> Pour tout $n \in \mathbb{N}$ et $(a, b) \in \mathbb{C}^2$ :
> $$(a+b)^{n} = \sum_{k=0}^{n}\binom{n}{k}a^{k}b^{n-k}$$
> 
> *Démonstration :* Une démonstration par récurrence sera faite en TD.

> [!example] **Exemple 8**
> Développer $(a+b)^3$ et $(a+b)^4$.

> [!example] **Exemple 9**
> Soit $n \in \mathbb{N}$. Calculer :
> $$\sum_{k=0}^{n}\binom{n}{k}2^{k}3^{n-k}, \quad \sum_{k=0}^{n}\binom{n}{k}2^{k} \quad \text{et} \quad \sum_{k=0}^{n}\binom{n}{k}$$

> [!note] **Remarque 6**
> La formule du binôme de Newton permet d'interpréter les coefficients binomiaux $\binom{n}{k}$ comme « le nombre de fois où l'on obtient le produit $a^k b^{n-k}$ dans le développement de $(a+b)^n$ », ou encore comme « le nombre de façons de choisir les $k$ facteurs égaux à $a$ parmi les $n$ termes $(a+b)$ ».

> [!abstract] **Propriété 5**
> Soient $n$ et $k$ deux entiers et $E$ un ensemble fini de cardinal $n$.  
> Le nombre de parties de $E$ qui ont un cardinal égal à $k$ est $\binom{n}{k}$.

> [!success] **Corollaire 1**
> Si $E$ est un ensemble fini de cardinal $n \in \mathbb{N}$, alors $\mathcal{P}(E)$ est fini de cardinal $2^n$.
> 
> *Démonstration :* $|\mathcal{P}(E)| = \sum_{k=0}^n \binom{n}{k} = (1+1)^n = 2^n$.

---

### 9. Application aux probabilités : loi binomiale

On considère une expérience aléatoire ayant deux issues notées « Succès » et « Échec ». La probabilité du « Succès » est $p \in [0, 1]$. On réalise cette expérience aléatoire $n$ fois, ces réalisations étant indépendantes.

Soit $X$ la variable aléatoire qui associe, à ces $n$ réalisations, le nombre de « Succès » obtenus. Par définition, la loi de probabilité de $X$ est appelée **loi binomiale** de paramètres $n$ et $p$.

> [!definition] **Définition 3 (Loi binomiale)**
> Soit $p \in [0, 1]$, $q = 1 - p$ et $n \in \mathbb{N}^*$. Une variable aléatoire $X$ suit la loi binomiale de paramètres $n$ et $p$, ce qu'on note $X \hookrightarrow \mathcal{B}(n, p)$, si pour tout $k \in \{0, 1, \dots, n\}$ :
> $$\mathbb{P}(X=k) = \binom{n}{k} p^{k} q^{n-k}$$

> [!example] **Exemple 10**
> Soit $X$ une variable aléatoire suivant la loi binomiale $\mathcal{B}(n, p)$.  
> Vérifier que :
> $$\sum_{k=0}^{n}\mathbb{P}(X=k) = 1$$

> [!theorem] **Théorème 4 (Espérance et Variance)**
> Si une variable aléatoire $X$ suit la loi binomiale $\mathcal{B}(n, p)$, alors :
> - **Espérance :**
>   $$\mathbb{E}(X) = \sum_{k=0}^{n}k\mathbb{P}(X=k) = np$$
> - **Variance :**
>   $$\mathbb{V}(X) = \sum_{k=0}^{n}(k - \mathbb{E}(X))^{2}\mathbb{P}(X=k) = npq$$

> [!example] **Exemple 11**
> Dans la production d'une machine, $5\%$ des pièces sont défectueuses. On choisit au hasard successivement, avec remise, un échantillon de $15$ pièces.  
> 1. Déterminer la probabilité d'avoir dans l'échantillon :
>    - Exactement une pièce défectueuse ;
>    - Exactement trois pièces défectueuses ;
>    - Au moins deux pièces défectueuses.
> 2. Quel est le nombre moyen de pièces défectueuses dans les échantillons de $15$ pièces ?

## Exercices


## À retenir
-
## Travail à faire




---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/dérivation
  - math/fonction
  - math/integrales
MOC:
  - "[[MOC Dérivation]]"
  - "[[MOC Fonction]]"
  - "[[MOC Integrales]]"
date_creation: 2026-07-27
---
# Notion d'intégrale et aire sous une courbe

> [!info] Définition courte
> Pour une fonction $f$ continue et positive sur $[a; b]$, l'**intégrale de $a$ à $b$ de $f$**, notée $\int_a^b f(x)\,\mathrm{d}x$, est le nombre réel égal à l'aire du domaine délimité par la courbe $\mathcal{C}_f$, l'axe des abscisses et les droites d'équations $x = a$ et $x = b$, exprimée en **unités d'aire (u.a.)**.


## Explication intuitive

- **Unité d'aire (u.a.)** : Dans un repère orthogonal $(O; I, J)$, 1 u.a. correspond à l'aire du rectangle construit sur le repère (de largeur $OI$ et de hauteur $OJ$).
- **Cas d'une fonction positive** : L'intégrale mesure exactement la surface "sous la courbe".
- **Cas d'une fonction négative** : La surface est sous l'axe des abscisses, l'intégrale est donc le **strict opposé** de cette aire (nombre négatif).
- **Cas général (signe quelconque)** : L'intégrale est une **aire algébrique** (somme des aires au-dessus de l'axe moins la somme des aires en dessous).


## Fonctionnement

### 1. Caractérisation du domaine $D$
Pour $f \ge 0$ sur $[a; b]$, le domaine $D$ sous la courbe est l'ensemble des points $M(x; y)$ tels que :
$$\begin{cases} a \le x \le b \\ 0 \le y \le f(x) \end{cases}$$

### 2. Variable muette
La variable d'intégration $x$ est dite "muette" : sa lettre n'a pas d'influence sur le résultat final.
$$\int_a^b f(x)\,\mathrm{d}x = \int_a^b f(t)\,\mathrm{d}t = \int_a^b f(u)\,\mathrm{d}u$$

### 3. Méthode des rectangles (Sommes de Riemann)
Pour encadrer l'aire sous une courbe monotone (ex: $f(x) = x^2$ sur $[0; 1]$) :
1. On découpe l'intervalle $[a; b]$ en $n$ sous-intervalles de même largeur $\frac{b-a}{n}$.
2. On encadre l'aire réelle par la somme des aires de $n$ rectangles "inférieurs" ($U_n$) et $n$ rectangles "supérieurs" ($V_n$) :
   $$U_n \le \text{Aire} \le V_n$$
3. Lorsque $n \to +\infty$, $\lim U_n = \lim V_n = \int_a^b f(x)\,\mathrm{d}x$.


## Exemple simple

**Calcul de l'aire sous la parabole $f(x) = x^2$ sur $[0; 1]$ :**
En découpant $[0; 1]$ en $n$ parties égales :
- Somme inférieure : $U_n = \frac{1}{n} \sum_{k=0}^{n-1} \left(\frac{k}{n}\right)^2 = \frac{2n^2 - 3n + 1}{6n^2}$
- Somme supérieure : $V_n = \frac{1}{n} \sum_{k=1}^{n} \left(\frac{k}{n}\right)^2 = \frac{2n^2 + 3n + 1}{6n^2}$

En passant à la limite quand $n \to +\infty$ :
$$\lim_{n \to +\infty} U_n = \frac{1}{3} \quad \text{et} \quad \lim_{n \to +\infty} V_n = \frac{1}{3}$$
L'aire sous la courbe est donc $A = \frac{1}{3} \text{ u.a.}$


## Formules / Propriétés

> [!theorem] Énoncés formels
> - **Cas $f \ge 0$** : $\int_a^b f(x)\,\mathrm{d}x = \text{Aire}(D)$
> - **Cas $f \le 0$** : $\int_a^b f(x)\,\mathrm{d}x = -\text{Aire}(D')$
> - **Cas de la fonction constante $f(x) = m$** :
>   $$\int_a^b m\,\mathrm{d}x = m(b - a)$$


## Concepts liés

- [[Lien entre intégrale et primitives]]
- [[Propriétés et techniques du calcul intégral]]
- [[Primitives d'une fonction]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

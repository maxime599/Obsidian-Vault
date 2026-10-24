---
semestre: S1
type de cours: CM
date: 2026-10-23T11:16:25
End Date: 2026-10-23T12:46:25
Calendar Title: "[[01 Cours/Math/chapitre 5 nombres complé et trigo, Math 2026-10-23|chapitre 5 nombres complé et trigo, Math]]"
prof: Olivier Gipouloux
tags:
  - cours
  - Math
Concepts:
Ressources:
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
# chapitre 5 nombres complé et trigo


## Objectifs

-

## Notes

### Introduction

L'ensemble $\mathbb{C}$ des nombres complexes est un ensemble dans lequel se prolongent les règles opératoires de l'ensemble $\mathbb{R}$ des nombres réels et possédant un élément $j$ tel que :
$$j^2 = -1$$

---

### Forme trigonométrique d'un nombre complexe

On munit le plan d'un repère orthonormé direct $(O, \vec{u}, \vec{v})$.

Pour tout point $M$ du cercle trigonométrique de centre $O$ et de rayon $1$, si $\theta$ est une mesure en radians de l'angle orienté $(\vec{u}, \vec{OM})$, alors :
- L'abscisse de $M$ est le cosinus de $\theta$, noté $\cos(\theta)$.
- L'ordonnée de $M$ est le sinus de $\theta$, noté $\sin(\theta)$.

#### Représentation géométrique
Soit $z = a + j b$, où $(a, b) \in \mathbb{R}^2$, un nombre complexe non nul et $M(z)$ le point d'affixe $z$ (de coordonnées cartésiennes $(a, b)$).
Les coordonnées polaires du point $M(z)$ sont $[r, \theta]$ où :
- $r = OM$
- $\theta$ est une mesure en radians de l'angle orienté $(\vec{u}, \vec{OM})$.

#### Théorème 1 : Forme trigonométrique
Tout nombre complexe $z$ non nul admet une écriture de la forme :
$$z = r(\cos(\theta) + j \sin(\theta))$$
où $r$ est un nombre réel strictement positif.

> [!example] Exemple 1
> Déterminer la forme trigonométrique de $z = 1 + j$.

#### Définition 1 : Fonction tangente
Pour tout nombre réel $\theta$ tel que $\cos(\theta) \neq 0$, on définit la tangente de $\theta$ par :
$$\tan(\theta) = \frac{\sin(\theta)}{\cos(\theta)}$$

> [!note] Remarque 1
> Le domaine de définition de la fonction tangente est :
> $$\mathbb{R} \setminus \left\{ \frac{\pi}{2} + k\pi, \, k \in \mathbb{Z} \right\}$$

> [!example] Exemple 2
> Calculer $\tan(0)$, $\tan\left(\frac{\pi}{6}\right)$, $\tan\left(\frac{\pi}{4}\right)$ et $\tan\left(\frac{\pi}{3}\right)$.

#### Théorème 2 : Lien entre forme algébrique et forme trigonométrique
Si $z = r(\cos(\theta) + j \sin(\theta))$ est l'écriture trigonométrique et $z = a + j b$ l'écriture algébrique d'un nombre complexe non nul :

Si $a \neq 0$, alors :
- $r = |z| = \sqrt{a^2 + b^2}$
- $\cos(\theta) = \frac{a}{r} \quad \text{et} \quad \sin(\theta) = \frac{b}{r}$
- $\tan(\theta) = \frac{b}{a}$

#### Remarque 2 : Argument d'un nombre complexe
Soit $z$ un nombre complexe non nul. Il existe $r \in ]0, +\infty[$ et $\theta \in \mathbb{R}$ tels que :
$$z = r(\cos \theta + j \sin \theta)$$

- Le nombre $r = |z|$ est unique.
- Le nombre $\theta$ est défini modulo $2\pi$. Toute valeur de $\theta$ convenant est appelée un **argument** de $z$.
- $\theta'$ est un autre argument de $z$ si et seulement s'il existe $k \in \mathbb{Z}$ tel que $\theta = \theta' + 2k\pi$. On note :
$$arg(z) = \theta \mod 2\pi$$
- Parmi tous les arguments, celui appartenant à l'intervalle $]-\pi, \pi]$ est appelé **argument principal**.

> [!info] Notation 1
> À la place de noter $arg(z) = \theta \mod 2\pi$, on peut écrire $arg(z) = \theta \; [2\pi]$ ou encore $arg(z) = \theta + 2k\pi, \; k \in \mathbb{Z}$.

> [!example] Exemple 3
> 1. Déterminer l'argument principal de $1$, $j$ et $-1$.
> 2. Déterminer l'argument principal d'un nombre réel strictement positif, puis d'un nombre réel strictly négatif.

#### Théorème 3 : Égalité de deux nombres complexes
Soient $z$ et $z'$ deux nombres complexes non nuls.
$$z = z' \iff \begin{cases} |z| = |z'| \\ arg(z) = arg(z') \mod 2\pi \end{cases}$$

#### Théorème 4 : Propriétés de l'argument
Soient $z$ et $z'$ deux nombres complexes non nuls :
- $arg(\overline{z}) = -arg(z) \mod 2\pi$
- $arg(z z') = arg(z) + arg(z') \mod 2\pi$
- $arg\left(\frac{1}{z}\right) = -arg(z) \mod 2\pi$
- $arg(z^n) = n \cdot arg(z) \mod 2\pi, \quad \forall n \in \mathbb{Z}$
- $arg\left(\frac{z'}{z}\right) = arg(z') - arg(z) \mod 2\pi$

#### Corollaire 1
Pour tout nombre complexe $z$ non nul :
- $arg(-z) = arg(z) + \pi \mod 2\pi$
- $arg(j z) = arg(z) + \frac{\pi}{2} \mod 2\pi$

---

### Exponentielle complexe

#### Notation 2 : Formule d'Euler
Pour tout nombre réel $\theta$, on note :
$$e^{j\theta} = \cos(\theta) + j \sin(\theta)$$

Ainsi, tout nombre complexe non nul admet une **écriture exponentielle** de la forme :
$$z = r e^{j\theta} \quad \text{avec } |z| = r \text{ et } arg(z) = \theta \mod 2\pi$$

#### Remarque 3 : Propriétés de l'exponentielle complexe
Pour tous nombres réels $\theta$ et $\theta'$ :
- $e^{j\theta} e^{j\theta'} = e^{j(\theta + \theta')}$
- $\frac{1}{e^{j\theta}} = \overline{e^{j\theta}} = e^{-j\theta}$
- $\frac{e^{j\theta}}{e^{j\theta'}} = e^{j(\theta - \theta')}$
- $\left(e^{j\theta}\right)^n = e^{jn\theta}, \quad \forall n \in \mathbb{Z}$

#### Notation 3 : Ensemble $\mathbb{U}$
L'ensemble $\mathbb{U} = \{e^{j\theta}, \, \theta \in \mathbb{R}\}$ est l'ensemble des nombres complexes de module égal à $1$. Il correspond au cercle unité du plan, de centre $O$ et de rayon $1$.

> [!example] Exemple 4
> Calculer $e^{j0}$, $e^{j\frac{\pi}{2}}$ et $e^{j\pi}$.

#### Théorème 5 : Formule de Moivre
Pour tout nombre réel $\theta$ et tout entier $n \in \mathbb{Z}$ :
$$(\cos(\theta) + j \sin(\theta))^n = \cos(n\theta) + j \sin(n\theta)$$

> [!example] Exemple 5
> Développer $(\cos(x) + j \sin(x))^3$ et en déduire une expression de $\cos(3x)$ en fonction de $\cos(x)$.

#### Théorème 6 : Règles de calcul sous forme exponentielle
Si $z = r e^{j\theta}$ et $z' = r' e^{j\theta'}$ sont deux nombres complexes non nuls, alors :
- **Produit :** $z z' = r e^{j\theta} r' e^{j\theta'} = r r' e^{j(\theta + \theta')}$
- **Inverse :** $\frac{1}{z} = \frac{1}{r e^{j\theta}} = \frac{1}{r} e^{-j\theta}$
- **Quotient :** $\frac{z'}{z} = \frac{r' e^{j\theta'}}{r e^{j\theta}} = \frac{r'}{r} e^{j(\theta' - \theta)}$
- **Puissance :** $z^n = (r e^{j\theta})^n = r^n e^{jn\theta}, \quad \forall n \in \mathbb{Z}$
- **Conjugué :** $\overline{z} = \overline{r e^{j\theta}} = r e^{-j\theta}$
- **Opposé :** $-z = -r e^{j\theta} = r e^{j(\theta + \pi)}$
- **Multiplication par $j$ :** $j z = e^{j\frac{\pi}{2}} r e^{j\theta} = r e^{j\left(\theta + \frac{\pi}{2}\right)}$

> [!example] Exemple 6
> Calculer l'inverse de $z = 1 + j$ en utilisant sa forme exponentielle.

#### Théorème 7 : Formules d'Euler
Pour tout nombre réel $\theta$ :
$$\cos(\theta) = \frac{e^{j\theta} + e^{-j\theta}}{2}$$
$$\sin(\theta) = \frac{e^{j\theta} - e^{-j\theta}}{2j}$$

#### Théorème 8 : Factorisation d'une somme d'exponentielles complexes (Arc moitié)
Pour tous réels $\theta_1$ et $\theta_2$ :
$$e^{j\theta_1} + e^{j\theta_2} = 2 \cos\left(\frac{\theta_1 - \theta_2}{2}\right) e^{j\frac{\theta_1 + \theta_2}{2}}$$
$$e^{j\theta_1} - e^{j\theta_2} = 2j \sin\left(\frac{\theta_1 - \theta_2}{2}\right) e^{j\frac{\theta_1 + \theta_2}{2}}$$

> [!example] Exemple 7
> Déterminer la forme exponentielle de $z = e^{j\frac{\pi}{4}} + e^{j\frac{\pi}{2}}$.

> [!example] Exemple 8
> Déterminer la forme exponentielle de $z = 1 - e^{j\frac{4\pi}{3}}$.

---

### Racines d'un nombre complexe

On cherche à résoudre l'équation $z^n = A$, d'inconnue complexe $z$ ($A$ étant un nombre complexe donné non nul). Les solutions de cette équation sont appelées **racines $n^{\text{ième}}$ de $A$**.

#### Théorème 9 : Racines $n^{\text{ième}}$ d'un nombre complexe
Soit $n$ un entier naturel non nul.
Tout nombre complexe $A$ non nul admet exactement $n$ racines $n^{\text{ième}}$.
Si $A = R e^{j\phi}$ avec $R > 0$, alors ses racines $n^{\text{ième}}$ sont données par :
$$z_k = R^{\frac{1}{n}} e^{j\left(\frac{\phi}{n} + \frac{2k\pi}{n}\right)} \quad \text{avec } k \in \{0, 1, \dots, n-1\}$$

#### Remarque 4 : Racines carrées ($n=2$)
Un nombre complexe non nul $A = R e^{j\phi}$ ($R > 0$) admet exactement deux racines carrées opposées :
$$\sqrt{R} e^{j\frac{\phi}{2}} \quad \text{et} \quad \sqrt{R} e^{j\left(\frac{\phi}{2} + \pi\right)} = -\sqrt{R} e^{j\frac{\phi}{2}}$$

- Si $A$ est un réel positif, ses racines carrées sont $\sqrt{A}$ et $-\sqrt{A}$.
- Si $A$ est un réel négatif, ses racines carrées sont $j\sqrt{-A}$ et $-j\sqrt{-A}$.

> [!example] Exemple 9 (Racines carrées de l'unité)
> Déterminer les racines carrées de $1$.

> [!example] Exemple 10 (Racines cubiques de l'unité)
> Déterminer les racines cubiques de $1$.

---

### Formules trigonométriques

#### Théorème 10 : Formules d'égalités
$$\cos(u) = \cos(v) \iff \begin{cases} u = v + 2k\pi \\ \text{ou } u = -v + 2k\pi \end{cases} \quad (k \in \mathbb{Z})$$

$$\sin(u) = \sin(v) \iff \begin{cases} u = v + 2k\pi \\ \text{ou } u = \pi - v + 2k\pi \end{cases} \quad (k \in \mathbb{Z})$$

$$\tan(u) = \tan(v) \iff u = v + k\pi \quad (k \in \mathbb{Z})$$

> [!note] Remarque 5
> Pour résoudre des équations du type $\cos(u) = \sin(v)$, on peut employer la relation de complémentarité : $\sin(v) = \cos\left(\frac{\pi}{2} - v\right)$.

#### Théorème 11 : Identity fondamentale
Pour tout réel $x$ :
$$\cos^2(x) + \sin^2(x) = 1$$

#### Théorème 12 : Formules d'addition
Pour tous réels $a$ et $b$ :
- $\cos(a + b) = \cos(a)\cos(b) - \sin(a)\sin(b)$
- $\cos(a - b) = \cos(a)\cos(b) + \sin(a)\sin(b)$
- $\sin(a + b) = \sin(a)\cos(b) + \cos(a)\sin(b)$
- $\sin(a - b) = \sin(a)\cos(b) - \cos(a)\sin(b)$
- $\tan(a + b) = \frac{\tan(a) + \tan(b)}{1 - \tan(a)\tan(b)}$
- $\tan(a - b) = \frac{\tan(a) - \tan(b)}{1 + \tan(a)\tan(b)}$

#### Remarque 6 : Formules de duplication
En posant $a = b = x$ :
- $\sin(2x) = 2 \cos(x)\sin(x)$
- $\cos(2x) = \cos^2(x) - \sin^2(x) = 2\cos^2(x) - 1 = 1 - 2\sin^2(x)$
- $\tan(2x) = \frac{2\tan(x)}{1 - \tan^2(x)}$

#### Théorème 13 : Transformation de produits en sommes (Linéarisation)
Pour tous réels $a$ et $b$ :
- $\cos(a)\cos(b) = \frac{1}{2}\left(\cos(a + b) + \cos(a - b)\right)$
- $\sin(a)\sin(b) = \frac{1}{2}\left(\cos(a - b) - \cos(a + b)\right)$
- $\sin(a)\cos(b) = \frac{1}{2}\left(\sin(a + b) + \sin(a - b)\right)$

#### Remarque 7 : Carrés remarquables
- $\cos^2(x) = \frac{1}{2}(1 + \cos(2x))$
- $\sin^2(x) = \frac{1}{2}(1 - \cos(2x))$

> [!example] Exemple 11
> Linéariser $\cos^3(x)$.

#### Théorème 14 : Transformation de sommes en produits (Factorisation)
Pour tous réels $p$ et $q$ :
- $\cos(p) + \cos(q) = 2 \cos\left(\frac{p + q}{2}\right) \cos\left(\frac{p - q}{2}\right)$
- $\cos(p) - \cos(q) = -2 \sin\left(\frac{p + q}{2}\right) \sin\left(\frac{p - q}{2}\right)$
- $\sin(p) + \sin(q) = 2 \sin\left(\frac{p + q}{2}\right) \cos\left(\frac{p - q}{2}\right)$
- $\sin(p) - \sin(q) = 2 \cos\left(\frac{p + q}{2}\right) \sin\left(\frac{p - q}{2}\right)$

#### Théorème 15 : Réduction de $a \sin(\omega t) + b \cos(\omega t)$
Soient $a$ et $b$ deux réels non nuls et $\omega > 0$. Pour tout réel $t$ :
$$a \sin(\omega t) + b \cos(\omega t) = A \sin(\omega t + \varphi)$$
où :
- $A = |a + j b| = \sqrt{a^2 + b^2}$
- $\varphi = arg(a + j b) \mod 2\pi$

> [!note] Remarque 8
> $a = A \cos(\varphi)$ et $b = A \sin(\varphi)$. Si $a \neq 0$, alors $\tan(\varphi) = \frac{b}{a}$.

> [!example] Exemple 12
> Réduire la fonction $f(t) = \sin(\omega t) + \sqrt{3}\cos(\omega t)$.

## Exercices


## À retenir
-
## Travail à faire
- [ ] mettre sous forme de concept



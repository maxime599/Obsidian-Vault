---
semestre: S1
type de cours: CM
date: 2026-09-23T11:00:00
End Date: 2026-09-23T12:30:00
Calendar Title: "[[01 Cours/Math/Chapitre 3 Nombres complexes, Math 2026-09-23|Chapitre 3 Nombres complexes, Math]]"
prof:
tags:
  - cours
  - Math
Concepts:
  - "[[Argument et forme trigonométrique d'un nombre complexe]]"
  - "[[Conjugué et module d'un nombre complexe]]"
  - "[[Nombres complexes et forme algébrique]]"
  - "[[Géométrie des nombres complexes]]"
  - "[[Équations du second degré dans C]]"
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
# Chapitre 3 Nombres complexes


## Objectifs

-

## Notes

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


## Exercices


## À retenir
-
## Travail à faire


- [x] ajouter les racines de nombres complexes aux concepts

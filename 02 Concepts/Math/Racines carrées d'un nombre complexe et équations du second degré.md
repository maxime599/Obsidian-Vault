---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/nombrescomplexes
  - math/algebre
  - math/résolutiondequations
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Algèbre]]"
  - "[[MOC Résolution d'équations]]"
date_creation: 2026-09-28
Ressources:
---

# Racines carrées d'un nombre complexe et équations du second degré

> [!info] Définition courte
> Dans $\mathbb{C}$, tout nombre complexe non nul $A$ admet exactement deux **racines carrées** complexes opposées. La détermination de ces racines permet la résolution de toutes les équations du second degré à coefficients complexes.


## 1. Définition et règle de notation

Soit $A \in \mathbb{C}$. On appelle **racine carrée** de $A$ tout nombre complexe $z$ vérifiant :
$$z^2 = A$$

- **Nombre de racines** : Tout complexe non nul $A \in \mathbb{C}^*$ possède exactement deux racines carrées complexes, notées $z_1$ et $z_2 = -z_1$.
- **Cas réels particuliers** :
  - Si $A > 0$ : les deux racines sont $\sqrt{A}$ et $-\sqrt{A}$.
  - Si $A < 0$ : les deux racines sont $j\sqrt{-A}$ et $-j\sqrt{-A}$.

> [!warning] Interdiction du symbole $\sqrt{\quad}$ dans $\mathbb{C}$
> Le symbole $\sqrt{\quad}$ est **strictement réservé aux nombres réels positifs**. En effet, $\mathbb{C}$ n'étant pas un ensemble ordonné, la notion de « complexe positif » n'a aucun sens. Écrire $\sqrt{3 + 4j}$ ou $\sqrt{-1}$ est une erreur formelle.


## 2. Méthode algébrique de calcul

Pour déterminer les racines carrées $z = x + jy$ d'un complexe $A = a + jb \neq 0$ :

1. **Système à 3 équations** :
   $$\begin{cases} x^2 - y^2 = a & \text{(1) Partie réelle de } z^2 = A \\ x^2 + y^2 = \sqrt{a^2 + b^2} & \text{(2) Module } (|z|^2 = |A|) \\ 2xy = b & \text{(3) Partie imaginaire (fixe le signe du produit } xy) \end{cases}$$

2. **Résolution** (formule des racines carrée d'un nombre complexe) :
?
   - $(1) + (2) \implies 2x^2 = a + \sqrt{a^2 + b^2} \implies x = \pm \sqrt{\frac{a + \sqrt{a^2 + b^2}}{2}}$
   - $(2) - (1) \implies 2y^2 = \sqrt{a^2 + b^2} - a \implies y = \pm \sqrt{\frac{\sqrt{a^2 + b^2} - a}{2}}$
   - L'équation $(3)$ détermine si $x$ et $y$ sont de même signe ($b > 0$) ou de signes contraires ($b < 0$).
<!--SR:!2026-10-18,15,290-->



## 3. Équations du second degré dans C

Soit l'équation $a z^2 + b z + c = 0$ avec $a, b, c \in \mathbb{C}$ et $a \neq 0$.

1. **Calcul du discriminant** :
   $$\Delta = b^2 - 4ac$$
2. **Recherche d'une racine carrée de $\Delta$** :
   On cherche un complexe $\delta \in \mathbb{C}$ tel que $\delta^2 = \Delta$.
3. **Solutions** de l'équation du second degré ::$$z_1 = \frac{-b + \delta}{2a} \quad \text{et} \quad z_2 = \frac{-b - \delta}{2a}$$
<!--SR:!2026-10-15,12,270-->
4. **Factorisation** :
   $$a z^2 + b z + c = a(z - z_1)(z - z_2)$$


## 4. Relations entre coefficients et racines

Les complexes $z_1$ et $z_2$ sont les deux solutions de $a z^2 + b z + c = 0$ si et seulement si ::$$\begin{cases} S = z_1 + z_2 = -\dfrac{b}{a} \\[2mm] P = z_1 z_2 = \dfrac{c}{a} \end{cases}$$
<!--SR:!2026-10-12,9,250-->


## Concepts liés

- [[Conjugué et module d'un nombre complexe]]
- [[Nombres complexes et forme algébrique]]
- [[Équations polynomiales]]
- [[Équations du second degré dans C]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

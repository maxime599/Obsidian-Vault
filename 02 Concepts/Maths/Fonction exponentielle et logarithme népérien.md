---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/fonction
  - math/limites
  - math/dérivation
  - math/résolutiondequations
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Limites]]"
  - "[[MOC Dérivation]]"
  - "[[MOC Résolution d'équations]]"
date_creation: 2026-07-27
---
# Fonction exponentielle et logarithme népérien

> [!info] Définition courte
> La fonction exponentielle $x\mapsto e^x$ est définie sur $\mathbb{R}$, strictement croissante et toujours positive. Le logarithme népérien, noté $\ln$, est sa fonction réciproque : il est défini sur $]0\,;\,+\infty[$ et vérifie $\ln(e^x)=x$ ainsi que $e^{\ln(x)}=x$ pour $x>0$.

## Explication intuitive

L'exponentielle transforme une addition en multiplication : une augmentation de $1$ de l'exposant multiplie la valeur par $e$. Le logarithme fait l'opération inverse : $\ln(a)$ est l'exposant auquel il faut élever $e$ pour obtenir $a$.

Les deux courbes sont symétriques par rapport à la droite $y=x$, car les fonctions sont réciproques.


```easy-tikz
{
  "dimension": false,
  "documentSetup": true,
  "title": "My graph: \\(\\sum\\)",
  "size_x_cm": 10,
  "size_y_cm": 10,
  "show_axis_label": true,
  "axis_label_x": "x",
  "axis_label_y": "y",
  "documentClose": true,
  "showAxis": true,
  "showLargeGrid": false,
  "showSmallGrid": false,
  "gridSize": 5,
  "xmin": "-3.5",
  "xmax": "3.5",
  "ymin": "-3.5",
  "ymax": "3.5",
  "axis_style": "middle",
  "functions": [
    {
      "expression": "log(x)",
      "domain": "-10:10",
      "showLegend": false,
      "fill": false,
      "fillOpacity": 0.2,
      "fillPattern": "solid",
      "tangent": false,
      "dashed": false,
      "tangentPoint": "",
      "extrema": false,
      "color": "black",
      "thickness": "thin",
      "parametric": false,
      "expressionY": "",
      "name": "f1"
    },
    {
      "expression": "exp(x)",
      "domain": "-10:10",
      "showLegend": false,
      "fill": false,
      "fillOpacity": 0.2,
      "fillPattern": "solid",
      "tangent": false,
      "dashed": false,
      "tangentPoint": "",
      "extrema": false,
      "color": "black",
      "thickness": "thin",
      "parametric": false,
      "expressionY": "",
      "name": "f2"
    },
    {
      "expression": "x",
      "domain": "-10:10",
      "showLegend": false,
      "fill": false,
      "fillOpacity": 0.2,
      "fillPattern": "solid",
      "tangent": false,
      "dashed": false,
      "tangentPoint": "",
      "extrema": false,
      "color": "purple",
      "thickness": "thin",
      "parametric": false,
      "expressionY": "",
      "name": "f3"
    }
  ],
  "zmin": "-5",
  "zmax": "5",
  "axis_label_z": "z",
  "rotationX": 30,
  "rotationZ": 45,
  "zoom3D": 1,
  "boxAspect": "true",
  "functions3D": [],
  "majorTickNum": 8,
  "previewSize": 760,
  "annotations": [],
  "tools": [],
  "coordinateSystem": "cartesian",
  "axis_label_x_polar": "",
  "axis_label_y_polar": "",
  "displayWidth": 390,
  "displayAlign": "left"
}
```


## Fonctionnement

Pour manipuler une expression comportant $e^x$ ou $\ln(x)$ :

1. **Vérifier le domaine** : $e^x$ est toujours défini ; $\ln(u(x))$ impose $u(x)>0$.
2. **Utiliser les règles de calcul** pour simplifier un produit, un quotient ou une puissance.
3. **Isoler l'exponentielle ou le logarithme** pour résoudre une équation.
4. **Dériver** avec les formules adaptées, notamment pour une fonction composée.

> [!example] Résoudre $e^{2x-1}=5$
> $$e^{2x-1}=5\iff 2x-1=\ln(5)\iff x=\frac{1+\ln(5)}{2}.$$

## Propriétés et formules

> [!theorem] Règles fondamentales
> Pour tous réels $a,b>0$ et tout réel $x$ :
> $$e^{x+y}=e^x e^y\qquad e^{-x}=\frac{1}{e^x}\qquad e^0=1$$
> $$\ln(ab)=\ln(a)+\ln(b)\qquad \ln\left(\frac{a}{b}\right)=\ln(a)-\ln(b)$$
> $$\ln(a^n)=n\ln(a)\quad (n\in\mathbb{Z})$$

**Dérivées :**

$$\left(e^x\right)'=e^x\qquad \left(e^{u(x)}\right)'=u'(x)e^{u(x)}$$
$$\left(\ln(x)\right)'=\frac{1}{x}\quad (x>0)\qquad \left(\ln(u(x))\right)'=\frac{u'(x)}{u(x)}\quad (u(x)>0)$$

**Limites de référence :**

$$\lim_{x\to-\infty}e^x=0\qquad \lim_{x\to+\infty}e^x=+\infty$$
$$\lim_{x\to0^+}\ln(x)=-\infty\qquad \lim_{x\to+\infty}\ln(x)=+\infty$$
$$\lim_{x\to0}\frac{e^x-1}{x}=1\qquad \lim_{x\to0}\frac{\ln(1+x)}{x}=1$$

## Exemple simple

Étudions $f(x)=\ln(x)-x+1$ sur $]0\,;\,+\infty[$.

1. $f'(x)=\frac{1}{x}-1=\frac{1-x}{x}$.
2. Comme $x>0$, $f'(x)$ est positif sur $]0\,;\,1[$, nul en $1$, puis négatif sur $]1\,;\,+\infty[$.
3. La fonction admet donc un maximum en $x=1$, de valeur $f(1)=0$.
4. On en déduit l'inégalité utile : $$\ln(x)\le x-1\quad\text{pour tout }x>0.$$

## Concepts liés

- [[Croissances comparées]]
- [[Limites de fonctions et asymptotes]]
- [[Dérivation des fonctions composées et opérations]]
- [[Équations différentielles du premier ordre]]
- [[Opérations sur les limites et formes indéterminées]]
- [[Forme exponentielle et formule d'Euler]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```



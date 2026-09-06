---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/trigonométrie
  - math/fonction
MOC:
  - "[[MOC Trigonométrie]]"
  - "[[MOC Fonction]]"
date_creation: 2026-07-27
---
# Cercle trigonométrique et angles remarquables

> [!info] Définition courte
> Le **cercle trigonométrique** est le cercle de centre $O$ et de rayon $1$, orienté dans le sens inverse des aiguilles d'une montre. À tout réel $x$ (mesuré en radians), il associe un point $M$ de coordonnées $\bigl(\cos(x)\,;\,\sin(x)\bigr)$.

## Explication intuitive

On part du point $I(1\,;\,0)$ et on tourne autour du cercle :

- un tour dans le **sens direct** (anti-horaire) correspond à $2\pi$ radians ;
- un tour dans le sens horaire correspond à $-2\pi$ radians ;
- l'**abscisse** de $M$ est son cosinus et son **ordonnée** est son sinus.

Ainsi, deux angles qui diffèrent d'un multiple de $2\pi$ désignent le même point sur le cercle : $x$ et $x+2k\pi$, avec $k\in\mathbb{Z}$.

## Fonctionnement

Pour placer ou exploiter un angle $x$ :

1. **Réduire l'angle** modulo $2\pi$ pour le ramener, par exemple, dans $[0\,;\,2\pi[$.
2. **Repérer le quadrant** : il donne immédiatement les signes de $\cos(x)$ et de $\sin(x)$.
3. **Utiliser l'angle de référence** dans $[0\,;\,\frac{\pi}{2}]$ pour trouver les valeurs absolues.
4. **Lire les coordonnées** du point : $M\bigl(\cos(x)\,;\,\sin(x)\bigr)$.

> [!tip] Signes par quadrant
> - Quadrant I : $\cos(x)>0$ et $\sin(x)>0$.
> - Quadrant II : $\cos(x)<0$ et $\sin(x)>0$.
> - Quadrant III : $\cos(x)<0$ et $\sin(x)<0$.
> - Quadrant IV : $\cos(x)>0$ et $\sin(x)<0$.

## Angles remarquables

| Angle en degrés | Angle en radians | $\cos(x)$ | $\sin(x)$ |
| :---: | :---: | :---: | :---: |
| $0°$ | $0$ | $1$ | $0$ |
| $30°$ | $\frac{\pi}{6}$ | $\frac{\sqrt{3}}{2}$ | $\frac{1}{2}$ |
| $45°$ | $\frac{\pi}{4}$ | $\frac{\sqrt{2}}{2}$ | $\frac{\sqrt{2}}{2}$ |
| $60°$ | $\frac{\pi}{3}$ | $\frac{1}{2}$ | $\frac{\sqrt{3}}{2}$ |
| $90°$ | $\frac{\pi}{2}$ | $0$ | $1$ |
| $120°$ | $\frac{2\pi}{3}$ | $-\frac{1}{2}$ | $\frac{\sqrt{3}}{2}$ |
| $135°$ | $\frac{3\pi}{4}$ | $-\frac{\sqrt{2}}{2}$ | $\frac{\sqrt{2}}{2}$ |
| $150°$ | $\frac{5\pi}{6}$ | $-\frac{\sqrt{3}}{2}$ | $\frac{1}{2}$ |
| $180°$ | $\pi$ | $-1$ | $0$ |
| $270°$ | $\frac{3\pi}{2}$ | $0$ | $-1$ |

## Exemple simple

Déterminons les coordonnées associées à $x=\frac{7\pi}{6}$.

1. $\frac{7\pi}{6}=\pi+\frac{\pi}{6}$ : l'angle est dans le troisième quadrant.
2. L'angle de référence est $\frac{\pi}{6}$, donc les valeurs absolues sont $\frac{\sqrt{3}}{2}$ et $\frac{1}{2}$.
3. Dans le troisième quadrant, les deux coordonnées sont négatives :
   $$\cos\left(\frac{7\pi}{6}\right)=-\frac{\sqrt{3}}{2}
   \qquad\text{et}\qquad
   \sin\left(\frac{7\pi}{6}\right)=-\frac{1}{2}.$$

## Formules / Algorithmes / Propriétés

> [!theorem] Propriétés fondamentales
> Pour tout réel $x$ et tout entier $k$ :
> $$\cos^2(x)+\sin^2(x)=1$$
> $$\cos(x+2k\pi)=\cos(x)\qquad\text{et}\qquad\sin(x+2k\pi)=\sin(x)$$
> $$\cos(-x)=\cos(x)\qquad\text{et}\qquad\sin(-x)=-\sin(x)$$

**Angles associés utiles :**

$$\cos(\pi-x)=-\cos(x)\qquad\sin(\pi-x)=\sin(x)$$
$$\cos(\pi+x)=-\cos(x)\qquad\sin(\pi+x)=-\sin(x)$$
$$\cos(2\pi-x)=\cos(x)\qquad\sin(2\pi-x)=-\sin(x)$$

## Concepts liés

- [[Étude et propriétés des fonctions cosinus et sinus]]
- [[Équations et inéquations trigonométriques]]
- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Forme exponentielle et formule d'Euler]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

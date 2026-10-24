---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/fonction
  - math/trigonométrie
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Trigonométrie]]"
date_creation: 2026-07-27
---
# Étude et propriétés des fonctions cosinus et sinus

> [!info] Définition courte
> Les fonctions **cosinus** ($\cos$) et **sinus** ($\sin$) sont des fonctions numériques définies sur $\mathbb{R}$ à valeurs dans $[-1, 1]$. Elles associent à tout réel $x$ l'abscisse et l'ordonnée du point correspondant sur le cercle trigonométrique.
```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```


## Explication intuitive

- **Périodicité ($2\pi$)** : Un tour de cercle trigonométrique mesure $2\pi$ radians. Effectuer un tour complet ramène exactement au même endroit. Ainsi, la courbe d'une fonction trigonométrique se répète à l'infini à l'identique tous les $2\pi$.
- **Parité et Symétries** :
  - **Cosinus** est **paire** : la courbe $\mathcal{C}_{\cos}$ est symétrique par rapport à l'axe des ordonnées.
  - **Sinus** est **impaire** : la courbe $\mathcal{C}_{\sin}$ est symétrique par rapport à l'origine du repère.
- **Réduction du domaine d'étude** : Grâce à la $2\pi$-périodicité et à la parité, il suffit généralement d'étudier la fonction sur un intervalle restreint de longueur $\pi$ (comme $[0, \pi]$) pour en déduire son comportement global sur $\mathbb{R}$.


## Propriétés fondamentales & Valeurs remarquables

> [!theorem] Propriétés clés
> Pour tout réel $x$ :
> - $-1 \le \cos(x) \le 1$ et $-1 \le \sin(x) \le 1$
> - $\cos^2(x) + \sin^2(x) = 1$
>  
> - $\cos(a+b) = \cos(a)\cos(b) − \sin(a) \sin(b)$
> - $\cos(a-b) = \cos(a)\cos(b) + \sin(a) \sin(b)$
> - $\sin(a+b) = \sin(a)\cos(b) + \sin(b) \cos(a)$
> - $\sin(a-b) = \sin(a)\cos(b) - \sin(b) \sin(a)$
>  
> - **Parité** : $\cos(-x) = \cos(x)$ et $\sin(-x) = -\sin(x)$
> - **Périodicité** : $\cos(x + 2\pi) = \cos(x)$ et $\sin(x + 2\pi) = \sin(x)$

### Valeurs remarquables sur $[0, \frac{\pi}{2}]$

| $x$ | $0$ | $\frac{\pi}{6}$ | $\frac{\pi}{4}$ | $\frac{\pi}{3}$ | $\frac{\pi}{2}$ |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **$\cos(x)$** | $1$ | $\frac{\sqrt{3}}{2}$ | $\frac{\sqrt{2}}{2}$ | $\frac{1}{2}$ | $0$ |
| **$\sin(x)$** | $0$ | $\frac{1}{2}$ | $\frac{\sqrt{2}}{2}$ | $\frac{\sqrt{3}}{2}$ | $1$ |


## Dérivation et Variations

### 1. Dérivées usuelles
Les fonctions $\cos$ et $\sin$ sont dérivables sur $\mathbb{R}$ :
- $\cos'(x) = -\sin(x)$
- $\sin'(x) = \cos(x)$

### 2. Dérivation de fonctions composées $\cos(u)$ et $\sin(u)$
Si $u$ est une fonction dérivable sur un intervalle $I$ :
- $(\cos(u(x)))' = -u'(x) \sin(u(x))$
- $(\sin(u(x)))' = u'(x) \cos(u(x))$

> [!example] Exemple du cours
> Soit $f(x) = \cos(3x^2 + 5x - 1)$. On pose $u(x) = 3x^2 + 5x - 1$, donc $u'(x) = 6x + 5$.  
> On obtient : $f'(x) = -(6x + 5) \sin(3x^2 + 5x - 1)$.

### 3. Variations de base sur $[0, \pi]$

- **Fonction Cosinus** : Strictement décroissante de $1$ à $-1$.
- **Fonction Sinus** : Croissante sur $\left[0, \frac{\pi}{2}\right]$ de $0$ à $1$, puis décroissante sur $\left[\frac{\pi}{2}, \pi\right]$ de $1$ à $0$.


## Méthode globale pour étudier une fonction trigonométrique

Pour étudier une fonction du type $f(x) = \frac{\sin x}{2 + \cos x}$ ou $g(x) = \frac{2}{2 + \cos x}$ :

1. **Ensemble de définition** : Vérifier la non-annulation du dénominateur (ex. $-1 \le \cos x \le 1 \implies 2 + \cos x \ge 1 > 0$).
2. **Périodicité** : Calculer $f(x + 2\pi)$ pour réduire l'étude à un intervalle d'amplitude $2\pi$ (ex : $]-\pi, \pi]$).
3. **Parité** : Tester $f(-x)$ pour réduire l'étude à $[0, \pi]$.
4. **Calcul de la dérivée** : Appliquer la formule du quotient $\left(\frac{u}{v}\right)' = \frac{u'v - uv'}{v^2}$.
5. **Signe et Variations** : Dresser le tableau de variations sur $[0, \pi]$ et déduire les extremums et zéros éventuels (Théorème des Valeurs Intermédiaires).


## Concepts liés

- [[Équations et inéquations trigonométriques]]
- [[Cercle trigonométrique et angles remarquables]]
- [[Dérivation des fonctions composées et opérations]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

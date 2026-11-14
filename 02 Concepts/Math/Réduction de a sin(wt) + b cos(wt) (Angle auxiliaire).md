---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/analyse
  - math/trigonométrie
  - math/nombrescomplexes
MOC:
  - "[[07 MOC/Concepts/Math/MOC Analyse|MOC Analyse]]"
  - "[[MOC Trigonométrie]]"
  - "[[MOC Nombres complexes]]"
date_creation: 2026-10-24
Ressources:
---

# Réduction de a sin(wt) + b cos(wt) (Angle auxiliaire)

> [!info] Définition courte
> La méthode de **réduction** permet de transformer une combinaison linéaire de sinus et cosinus de même pulsation $a \sin(\omega t) + b \cos(\omega t)$ en une unique onde sinusoïdale déphasée $A \sin(\omega t + \varphi)$ à l'aide des nombres complexes.

```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        if (h.level === 1) continue;
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```

## 1. Principe de la réduction

Soient $a$ et $b$ deux réels non nuls et $\omega > 0$. Pour tout réel $t$, l'expression :
$$a \sin(\omega t) + b \cos(\omega t)$$
peut se réécrire sous la forme d'une unique sinusoïde d'amplitude $A$ et de phase initiale $\varphi$ :
$$A \sin(\omega t + \varphi)$$


## 2. Calcul de l'amplitude et de la phase

En s'appuyant sur l'affixe complexe associée $a + jb$ :
- **Amplitude $A$** : 
  $$A = |a + jb| = \sqrt{a^2 + b^2}$$
- **Phase $\varphi$** : 
  $$\varphi = \arg(a + jb) \mod 2\pi$$
  *(Si $a \neq 0$, on a la relation $\tan(\varphi) = \frac{b}{a}$, avec les signes de $a$ et $b$ permettant de déterminer le bon quadrant).*

De plus, on a les relations de projection :
$$a = A \cos(\varphi) \quad \text{et} \quad b = A \sin(\varphi)$$


## Concepts liés

- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Étude et propriétés des fonctions cosinus et sinus]]
- [[Forme exponentielle et formule d'Euler]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
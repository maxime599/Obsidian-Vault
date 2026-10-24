---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/trigonométrie
  - math/résolutiondequations
  - math/fonction
MOC:
  - "[[MOC Trigonométrie]]"
  - "[[MOC Résolution d'équations]]"
  - "[[MOC Fonction]]"
date_creation: 2026-07-27
---
# Équations et inéquations trigonométriques

> [!info] Définition courte
> La résolution d'équations ou d'inéquations trigonométriques consiste à trouver l'ensemble des réels $x$ vérifiant une relation avec $\cos(x)$ ou $\sin(x)$, en s'appuyant rigoureusement sur le cercle trigonométrique et ses propriétés de symétrie.
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


## Résolution d'équations dans $\mathbb{R}$

> [!theorem] Formules de résolution
> Pour tout réel $a$ et $k \in \mathbb{Z}$ :
> - **Équation en cosinus** :  
>   $$\cos(x) = \cos(a) \iff x = a + 2k\pi \quad \text{ou} \quad x = -a + 2k\pi$$
> - **Équation en sinus** :  
>   $$\sin(x) = \sin(a) \iff x = a + 2k\pi \quad \text{ou} \quad x = \pi - a + 2k\pi$$


## Exemples types du cours

### Exemple 1 : $\cos(x) = \frac{\sqrt{2}}{2}$
Sur $\mathbb{R}$, sachant que $\cos\left(\frac{\pi}{4}\right) = \frac{\sqrt{2}}{2}$ :
$$S = \left\{ \frac{\pi}{4} + 2k\pi \ ; \ -\frac{\pi}{4} + 2k\pi, \ k \in \mathbb{Z} \right\}$$

### Exemple 2 : $\sin\left(x + \frac{\pi}{4}\right) = \frac{1}{2}$
Comme $\frac{1}{2} = \sin\left(\frac{\pi}{6}\right)$, on sépare en deux cas :
- $x + \frac{\pi}{4} = \frac{\pi}{6} + 2k\pi \implies x = -\frac{\pi}{12} + 2k\pi$
- $x + \frac{\pi}{4} = \pi - \frac{\pi}{6} + 2k\pi = \frac{5\pi}{6} + 2k\pi \implies x = \frac{7\pi}{12} + 2k\pi$

### Exemple 3 : $\cos^2(x) = \frac{1}{2}$
$$\cos^2(x) = \frac{1}{2} \iff \cos(x) = \frac{\sqrt{2}}{2} \quad \text{ou} \quad \cos(x) = -\frac{\sqrt{2}}{2}$$
Les solutions associent les angles $\frac{\pi}{4}, -\frac{\pi}{4}, \frac{3\pi}{4}, -\frac{3\pi}{4}$ modulo $2\pi$.


## Résolution d'inéquations trigonométriques

> [!tip] Méthode pas à pas
> 1. Placer la valeur seuil sur l'axe adapté (abscisses pour le cosinus, ordonnées pour le sinus).
> 2. Repérer les angles correspondants sur le cercle trigonométrique.
> 3. Hachurer ou colorier l'arc de cercle correspondant aux solutions.
> 4. Écrire l'ensemble des solutions sous forme d'intervalle ou d'union d'intervalles en respectant le domaine imposé (ex. $[-\pi, \pi[$).

### Exemple d'application : Résoudre $\cos(x) \le -\frac{1}{2}$ sur $[-\pi, \pi[$

1. Les angles ayant un cosinus égal à $-\frac{1}{2}$ sont $-\frac{2\pi}{3}$ et $\frac{2\pi}{3}$.
2. On conserve la partie du cercle située à gauche de la droite $x = -\frac{1}{2}$.
3. En parcourant l'intervalle de $-\pi$ à $\pi$, on obtient :
   $$S = \left[-\pi \ ; \ -\frac{2\pi}{3}\right] \cup \left[\frac{2\pi}{3} \ ; \ \pi\right[$$


## Concepts liés

- [[Étude et propriétés des fonctions cosinus et sinus]]
- [[Cercle trigonométrique et angles remarquables]]
- [[Formules de De Moivre et racines n-ièmes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

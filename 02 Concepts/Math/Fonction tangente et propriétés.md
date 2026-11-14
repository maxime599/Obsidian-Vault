---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/analyse
  - math/trigonométrie
MOC:
  - "[[07 MOC/Concepts/Math/MOC Analyse|MOC Analyse]]"
  - "[[MOC Trigonométrie]]"
date_creation: 2026-10-24
Ressources:
---

# Fonction tangente et propriétés

> [!info] Définition courte
> La **fonction tangente** est définie pour tout réel $\theta$ tel que $\cos(\theta) \neq 0$ comme le rapport du sinus par le cosinus. Elle constitue une fonction fondamentale en trigonométrie et en analyse.

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

## 1. Définition et domaine de définition

Pour tout nombre réel $\theta$ tel que $\cos(\theta) \neq 0$, on définit la **tangente** de $\theta$ par ::$$\tan(\theta) = \frac{\sin(\theta)}{\cos(\theta)}$$
<!--SR:!2026-11-13,15,290-->

- **Ensemble de définition** : La fonction tangente est définie sur $\mathbb{R} \setminus \left\{ \frac{\pi}{2} + k\pi, \, k \in \mathbb{Z} \right\}$.
- **Périodicité** : La fonction tangente est $\pi$-périodique : $\tan(\theta + \pi) = \tan(\theta)$.
- **Parité** : C'est une fonction impaire : $\tan(-\theta) = -\tan(\theta)$.


## 2. Valeurs remarquables usuelles

| $\theta$ | $0$ | $\frac{\pi}{6}$ | $\frac{\pi}{4}$ | $\frac{\pi}{3}$ |
| :---: | :---: | :---: | :---: | :---: |
| **$\tan(\theta)$** | $0$ | $\frac{\sqrt{3}}{3}$ | $1$ | $\sqrt{3}$ |


## Concepts liés

- [[Cercle trigonométrique et angles remarquables]]
- [[Étude et propriétés des fonctions cosinus et sinus]]
- [[Équations et inéquations trigonométriques]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
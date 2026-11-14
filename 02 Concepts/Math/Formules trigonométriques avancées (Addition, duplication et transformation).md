---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/trigonométrie
  - math/analyse
MOC:
  - "[[07 MOC/Concepts/Math/MOC Analyse|MOC Analyse]]"
  - "[[MOC Trigonométrie]]"
date_creation: 2026-10-24
Ressources:
---
---
type: concept
matière: Mathématiques
tags:
  - concept
  - maths/analyse
  - maths/trigonometrie
date_creation: 2026-10-24
---

# Formules trigonométriques avancées (Addition, duplication et transformation)

> [!info] Définition courte
> Ce concept regroupe l'arsenal des identités trigonométriques avancées, incluant les formules d'addition, de duplication, les carrés remarquables ainsi que les règles de linéarisation (produits en sommes) et de factorisation (sommes en produits).

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

## 1. Formules d'addition et de duplication

Pour tous réels $a$ et $b$ :
- $\cos(a \pm b) = \cos(a)\cos(b) \mp \sin(a)\sin(b)$
- $\sin(a \pm b) = \sin(a)\cos(b) \pm \cos(a)\sin(b)$
- $\tan(a \pm b) = \frac{\tan(a) \pm \tan(b)}{1 \mp \tan(a)\tan(b)}$

*Formules de duplication ($a = b = x$)* :
- $\sin(2x) = 2 \cos(x)\sin(x)$
- $\cos(2x) = \cos^2(x) - \sin^2(x) = 2\cos^2(x) - 1 = 1 - 2\sin^2(x)$
- $\tan(2x) = \frac{2\tan(x)}{1 - \tan^2(x)}$


## 2. Carrés remarquables et Linéarisation (Produits en sommes)

- **Carrés remarquables** :
  $$\cos^2(x) = \frac{1}{2}(1 + \cos(2x)) \quad \text{et} \quad \sin^2(x) = \frac{1}{2}(1 - \cos(2x))$$

- **Transformation de produits en sommes** :
  - $\cos(a)\cos(b) = \frac{1}{2}\left(\cos(a + b) + \cos(a - b)\right)$
  - $\sin(a)\sin(b) = \frac{1}{2}\left(\cos(a - b) - \cos(a + b)\right)$
  - $\sin(a)\cos(b) = \frac{1}{2}\left(\sin(a + b) + \sin(a - b)\right)$


## 3. Transformation de sommes en produits (Factorisation)

Pour tous réels $p$ et $q$ :
- $\cos(p) + \cos(q) = 2 \cos\left(\frac{p + q}{2}\right) \cos\left(\frac{p - q}{2}\right)$
- $\cos(p) - \cos(q) = -2 \sin\left(\frac{p + q}{2}\right) \sin\left(\frac{p - q}{2}\right)$
- $\sin(p) + \sin(q) = 2 \sin\left(\frac{p + q}{2}\right) \cos\left(\frac{p - q}{2}\right)$
- $\sin(p) - \sin(q) = 2 \cos\left(\frac{p + q}{2}\right) \sin\left(\frac{p - q}{2}\right)$


## Concepts liés

- [[Cercle trigonométrique et angles remarquables]]
- [[Étude et propriétés des fonctions cosinus et sinus]]
- [[Forme exponentielle et formule d'Euler]]
- [[Fonction tangente et propriétés]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
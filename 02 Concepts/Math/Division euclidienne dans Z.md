---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/arithmetique
MOC:
  - "[[MOC Arithmetique]]"
date_creation: 2026-07-28
---
# Division euclidienne dans Z

> [!info] Définition courte
> Pour tous entiers $a$ et $b$ avec $b\ne0$, il existe un unique couple d'entiers $(q,r)$ tel que :
> $$a=bq+r\qquad\text{et}\qquad0\le r<|b|.$$
> C'est la **division euclidienne** de $a$ par $b$ ; $q$ est le quotient et $r$ le reste.
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

La division euclidienne sépare un entier en un nombre entier de paquets de taille $|b|$ et un reste, toujours plus petit que la taille d'un paquet.

## Fonctionnement

1. Chercher un entier $q$ proche de $\frac{a}{b}$.
2. Calculer $r=a-bq$.
3. Ajuster $q$ si nécessaire pour obtenir $0\le r<|b|$.
4. Vérifier l'égalité $a=bq+r$.

> [!example] Diviser $-17$ par $5$.
> $$-17=5\times(-4)+3,$$
> avec $0\le3<5$. Le quotient est $-4$ et le reste est $3$.

## Propriétés

> [!theorem] Lien avec les congruences
> Le reste $r$ de la division euclidienne de $a$ par $n\ge2$ est l'unique entier de $\{0,1,\dots,n-1\}$ tel que :
> $$a\equiv r\ [n].$$

La division euclidienne fournit également l'algorithme d'Euclide, utilisé pour calculer un PGCD.

## Concepts liés

- [[Divisibilité dans Z]]
- [[Congruences]]
- [[PGCD et algorithme d'Euclide]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

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
# Divisibilité dans Z

> [!info] Définition courte
> Pour deux entiers $a$ et $b$, avec $a\ne0$, on dit que **$a$ divise $b$**, noté $a\mid b$, lorsqu'il existe un entier $k$ tel que $b=ak$. Dans ce cas, $a$ est un diviseur de $b$ et $b$ est un multiple de $a$.
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

Dire que $a\mid b$ signifie que l'on peut répartir $b$ objets en groupes de $a$ sans reste. Par exemple, $6\mid42$ car $42=6\times7$, alors que $5\nmid42$.

## Fonctionnement

Pour démontrer une divisibilité $a\mid b$ :

1. Chercher à écrire $b$ sous la forme $ak$, où $k$ est entier.
2. Utiliser des décompositions, des identités remarquables ou des congruences.
3. Vérifier que le facteur obtenu est bien entier.

> [!example] Montrer que $6\mid(n^3-n)$ pour tout $n\in\mathbb{Z}$.
> $$n^3-n=n(n-1)(n+1).$$
> C'est le produit de trois entiers consécutifs : l'un est divisible par $3$ et l'un est pair. Leur produit est donc divisible par $6$.

## Propriétés

> [!theorem] Règles de divisibilité
> Pour $a,b,c\in\mathbb{Z}$ :
> - $a\mid a$ ;
> - si $a\mid b$ et $b\mid c$, alors $a\mid c$ ;
> - si $a\mid b$ et $a\mid c$, alors $a\mid(ub+vc)$ pour tous $u,v\in\mathbb{Z}$ ;
> - si $a\mid b$ et $b\ne0$, alors $|a|\le|b|$.

## Concepts liés

- [[Division euclidienne dans Z]]
- [[Congruences]]
- [[PGCD et algorithme d'Euclide]]
- [[Nombres premiers]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

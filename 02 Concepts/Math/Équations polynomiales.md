---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/algebre
  - math/résolutiondequations
  - math/nombrescomplexes
  - math/polynomes
MOC:
  - "[[MOC Algèbre]]"
  - "[[MOC Résolution d'équations]]"
  - "[[MOC Nombres complexes]]"
  - "[[MOC Polynomes]]"
date_creation: 2026-07-28
---
# Équations polynomiales

> [!info] Définition courte
> Une **équation polynomiale** s'écrit $P(z)=0$, où $P$ est un polynôme. Son degré est la plus grande puissance de l'inconnue ayant un coefficient non nul. Dans $\mathbb{C}$, tout polynôme non constant possède au moins une racine.
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

Résoudre une équation polynomiale revient à rechercher les valeurs qui annulent un polynôme. Lorsqu'une racine est connue, le facteur correspondant peut être extrait, ce qui abaisse le degré de l'équation.

## Fonctionnement

1. Mettre l'équation sous la forme $P(z)=0$.
2. Chercher une racine évidente ou utiliser une forme connue.
3. Si $\alpha$ est une racine, factoriser par $(z-\alpha)$.
4. Résoudre l'équation de degré inférieur obtenue.
5. Dans $\mathbb{C}$, utiliser les racines complexes si nécessaire.

> [!theorem] Théorème de factorisation
> Pour tout complexe $\alpha$ :
> $$P(\alpha)=0\iff(z-\alpha)\ \text{divise}\ P(z).$$
> Si $\alpha$ est une racine de multiplicité $m$, alors $(z-\alpha)^m$ divise $P(z)$.

## Exemple simple

Résolvons $z^3-z^2-4z+4=0$.

Par regroupement :
$$z^3-z^2-4z+4=z^2(z-1)-4(z-1)=(z-1)(z^2-4).$$
Ainsi :
$$P(z)=(z-1)(z-2)(z+2),$$
les solutions sont $1$, $2$ et $-2$.

## Propriétés

> [!theorem] Théorème fondamental de l'algèbre
> Tout polynôme non constant à coefficients complexes de degré $n$ admet exactement $n$ racines dans $\mathbb{C}$, comptées avec leur multiplicité.

Si les coefficients sont réels, toute racine non réelle apparaît avec son conjugué.

## Concepts liés

- [[Équations du second degré dans C]]
- [[Nombres complexes et forme algébrique]]
- [[Binôme de Newton]]
- [[Formules de De Moivre et racines n-ièmes]]
- [[Définition, degré et opérations sur les polynômes]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

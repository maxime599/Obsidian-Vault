---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/nombrescomplexes
  - math/trigonométrie
  - flashcards/Math
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Trigonométrie]]"
date_creation: 2026-07-28
---
# Forme exponentielle et formule d'Euler

> [!info] Définition courte
> La **formule d'Euler** relie exponentielle complexe et trigonométrie : $e^{i\theta}=\cos\theta+i\sin\theta$. Ainsi, tout complexe non nul s'écrit sous la forme exponentielle $z=re^{i\theta}$, où $r=|z|$ et $\theta$ est un argument de $z$.
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

La forme exponentielle sépare naturellement deux effets : $r$ agrandit ou réduit le module, tandis que $e^{i\theta}$ effectue une rotation d'angle $\theta$ sur le cercle unité. Les produits deviennent donc très simples à calculer.

## Fonctionnement

Pour multiplier ou diviser des complexes écrits sous forme exponentielle :

1. Multiplier ou diviser les modules.
2. Additionner ou soustraire les arguments.
3. Revenir à la forme trigonométrique ou algébrique seulement si nécessaire.

> [!example] Calculer $\left(2e^{i\pi/3}\right)\left(3e^{-i\pi/6}\right)$.
> $$\left(2e^{i\pi/3}\right)\left(3e^{-i\pi/6}\right)=6e^{i(\pi/3-\pi/6)}=6e^{i\pi/6}.$$

## Formules / Propriétés

> [!theorem] Règles de calcul
> Pour tous réels $\alpha,\beta$ :
> $$e^{i\alpha}e^{i\beta}=e^{i(\alpha+\beta)}\qquad \frac{e^{i\alpha}}{e^{i\beta}}=e^{i(\alpha-\beta)}$$
> $$\left(re^{i\theta}\right)^n=r^n e^{in\theta}\quad(n\in\mathbb{Z})$$
> $$\overline{re^{i\theta}}=re^{-i\theta}.$$

Deux identités particulières sont :
$$e^{i\pi}=-1\qquad e^{i\pi}+1=0.$$


## Formules d'Euler 
Formules d'Euler pour $\cos(\theta)$::$$\cos(\theta) = \frac{e^{j\theta} + e^{-j\theta}}{2}$$
<!--SR:!2027-01-13,59,310-->
Formules d'Euler pour $\sin(\theta)$::$$\sin(\theta) = \frac{e^{j\theta} - e^{-j\theta}}{2j}$$
<!--SR:!2027-01-21,67,310-->


## Concepts liés

- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Formules de De Moivre et racines n-ièmes]]
- [[Cercle trigonométrique et angles remarquables]]
- [[Fonction exponentielle et logarithme népérien]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

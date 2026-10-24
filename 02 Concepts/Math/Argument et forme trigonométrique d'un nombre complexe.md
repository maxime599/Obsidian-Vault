---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/nombrescomplexes
  - math/trigonométrie
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Trigonométrie]]"
date_creation: 2026-07-28
---
# Argument et forme trigonométrique d'un nombre complexe

> [!info] Définition courte
> Tout complexe non nul $z$ admet une écriture $z=r(\cos\theta+i\sin\theta)$, où $r=|z|>0$ et $\theta$ est un argument de $z$, noté $\arg(z)\ [2\pi]$. C'est la **forme trigonométrique** de $z$.
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

Dans le plan complexe, un complexe non nul est représenté par un vecteur. Son module donne la longueur du vecteur et son argument donne son angle orienté avec l'axe réel positif. Les arguments ne sont pas uniques : ils diffèrent tous d'un multiple de $2\pi$.

## Fonctionnement

Pour déterminer la forme trigonométrique de $z=a+ib\ne0$ :

1. Calculer $r=|z|=\sqrt{a^2+b^2}$.
2. Repérer le quadrant à partir des signes de $a$ et $b$.
3. Trouver un angle $\theta$ tel que $\cos\theta=\frac{a}{r}$ et $\sin\theta=\frac{b}{r}$.
4. Écrire $z=r(\cos\theta+i\sin\theta)$.

> [!example] Écrire $z=-1+i\sqrt3$ sous forme trigonométrique.
> $$|z|=\sqrt{1+3}=2.$$
> Le point est dans le deuxième quadrant et l'angle est $\frac{2\pi}{3}$. Ainsi :
> $$z=2\left(\cos\frac{2\pi}{3}+i\sin\frac{2\pi}{3}\right).$$

## Propriétés

> [!theorem] Modules et arguments d'un produit
> Pour $z,z'\ne0$ :
> $$|zz'|=|z|\,|z'|\qquad \arg(zz')\equiv\arg(z)+\arg(z')\ [2\pi]$$
> $$\arg\left(\frac{z}{z'}\right)\equiv\arg(z)-\arg(z')\ [2\pi].$$

Le conjugué conserve le module et oppose l'argument :
$$|\overline z|=|z|\qquad \arg(\overline z)\equiv-\arg(z)\ [2\pi].$$

## Concepts liés

- [[Nombres complexes et forme algébrique]]
- [[Conjugué et module d'un nombre complexe]]
- [[Forme exponentielle et formule d'Euler]]
- [[Cercle trigonométrique et angles remarquables]]
- [[Géométrie des nombres complexes]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

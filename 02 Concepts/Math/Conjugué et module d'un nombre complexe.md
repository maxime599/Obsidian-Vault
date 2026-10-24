---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/nombrescomplexes
MOC:
  - "[[MOC Nombres complexes]]"
date_creation: 2026-07-28
---
# Conjugué et module d'un nombre complexe

> [!info] Définition courte
> Pour $z=a+ib$, le **conjugué** de $z$ est $\overline z=a-ib$. Son **module** est le réel positif $|z|=\sqrt{a^2+b^2}$ ; géométriquement, c'est la distance entre l'origine et le point d'affixe $z$.
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

Prendre le conjugué revient à réfléchir le point d'affixe $z$ par rapport à l'axe réel. Le module mesure la longueur du vecteur associé à $z$.

## Fonctionnement

Pour écrire un quotient $\frac{z}{z'}$ sous forme algébrique :

1. Vérifier que $z'\ne0$.
2. Multiplier le numérateur et le dénominateur par $\overline{z'}$.
3. Utiliser $z'\overline{z'}=|z'|^2$, qui est un réel strictement positif.
4. Développer puis séparer la partie réelle et la partie imaginaire.

> [!example] Mettre $\frac{1+i}{2-i}$ sous forme algébrique.
> $$\frac{1+i}{2-i}=\frac{(1+i)(2+i)}{(2-i)(2+i)}=\frac{1+3i}{5}=\frac15+\frac35i.$$

## Formules / Propriétés

> [!theorem] Propriétés du conjugué et du module
> Pour tous complexes $z$ et $z'$ :
> $$z\overline z=|z|^2$$
> $$\overline{z+z'}=\overline z+\overline {z'}\qquad \overline{zz'}=\overline z\,\overline {z'}$$
> $$|zz'|=|z|\,|z'|\qquad \left|\frac{z}{z'}\right|=\frac{|z|}{|z'|}\quad(z'\ne0)$$
> $$z^{-1}=\frac{\overline z}{|z|^2}\quad(z\ne0).$$

On a aussi l'inégalité triangulaire :
$$|z+z'|\le |z|+|z'|.$$

## Concepts liés

- [[Nombres complexes et forme algébrique]]
- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Équations du second degré dans C]]
- [[Géométrie des nombres complexes]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

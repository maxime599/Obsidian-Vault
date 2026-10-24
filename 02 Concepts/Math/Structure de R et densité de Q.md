---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/analyse
  - math/ensemble
MOC:
  - "[[07 MOC/Concepts/Math/MOC Analyse]]"
  - "[[MOC Ensemble]]"
date_creation: 2026-09-17
Ressources:
---

# Structure de R et densité de Q

> [!info] Définition courte
> L'ensemble $\mathbb{R}$ complète l'ensemble des rationnels $\mathbb{Q}$ (qui est incomplet car $\sqrt{2} \notin \mathbb{Q}$). Il est muni d'une structure de corps commutatif ordonné total et possède la propriété essentielle de **densité de $\mathbb{Q}$ dans $\mathbb{R}$**.
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


## 1. L'ensemble Q et son incomplétude

Les rationnels sont définis par les quotients d'entiers : $\frac{p}{q} = \frac{a}{b} \iff bp = aq$ pour $(p,a) \in \mathbb{Z}^2$ et $(q,b) \in (\mathbb{Z}^*)^2$.

- **Forme irréductible** : Tout rationnel s'écrit de façon unique $\frac{p}{q}$ avec $p \in \mathbb{Z}$, $q \in \mathbb{N}^*$ et $\text{pgcd}(p, q) = 1$.
- **Incomplétude** : Il n'existe aucun rationnel $l \in \mathbb{Q}$ tel que $l^2 = 2$. Cette insuffisance motive la construction des réels $\mathbb{R}$.


## 2. Propriétés arithmétiques et d'ordre dans R

$\mathbb{R}$ est muni d'une addition et d'une multiplication vérifiant :
- **Commutativité et Associativité** pour $+$ et $\times$.
- **Éléments neutres** : $0$ pour $+$ et $1$ pour $\times$.
- **Opposé et Inverse** : Tout $x$ admet un opposé $-x$, et tout $y \neq 0$ admet un inverse $\frac{1}{y}$.
- **Distributivité** de $\times$ sur $+$.

$\mathbb{R}$ est muni d'une **relation d'ordre total $\le$** (réflexive, transitive, antisymétrique) compatible avec $+$ et $\times$ :
- Si $x \le y$, alors $x + z \le y + z$.
- Si $x \le y$ et $0 \le z$, alors $xz \le yz$.


## 3. Densité de Q dans R et Racine carrée

- **Densité** :: Tout nombre réel est la limite d'une suite de nombres rationnels. Entre deux réels distincts, il existe toujours une infinité de rationnels.
<!--SR:!2026-11-23,41,250-->
- **Théorème de la racine carrée** : Pour tout réel $a > 0$, il existe un unique réel strictement positif $l > 0$ tel que $l^2 = a$, noté $\sqrt{a}$ ou $a^{1/2}$.


## Concepts liés

- [[PGCD et algorithme d'Euclide]]
- [[Ensembles finis, infinis et dénombrabilité]]
- [[Majorants, minorants et bornes supérieure et inférieure dans R]]
- [[Limite d'une suite]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

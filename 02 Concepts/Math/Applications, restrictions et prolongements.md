---
type: concept
tags:
  - concepts
  - Math
  - math/fonction
  - math/analyse
  - flashcards/Math
MOC:
  - "[[MOC Fonction]]"
  - "[[07 MOC/Concepts/Math/MOC Analyse]]"
date_creation: 2026-09-04
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---
# Applications, restrictions et prolongements

> [!info] Définition courte
> Une **application** est :: une relation binaire entre deux ensembles qui associe à chaque élément de départ une image unique dans l'ensemble d'arrivée.
<!--SR:!2026-11-18,46,290-->
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


## 1. Application vs Fonction

- **Application** $f : E \to F$ : Tout élément de l'ensemble de départ $E$ possède **exactement une** image dans $F$.
- **Fonction** : Certains éléments de $E$ peuvent n'avoir aucune image. Le domaine de définition $D_f$ est une partie de $E$.

Différence application et fonction : :: Application = Tout élément de l'ensemble de départ $E$ possède **exactement une** image dans $F$, fonction = Certains éléments de $E$ peuvent n'avoir aucune image
<!--SR:!2026-11-14,42,290-->
> [!example] Vocabulaire
> Pour $f(x) = y$ :
> - $E$ est ==l'ensemble de départ==, $F$ ==l'ensemble d'arrivée==.
> - $y$ est ==l'**image** de $x$==.
> - $x$ est un ==**antécédent** de $y$== (il peut y en avoir zéro, un ou plusieurs).
<!--SR:!2026-12-14,67,310!2026-12-14,67,310!2026-11-20,47,290!2026-11-19,47,290-->


## 2. Restriction d'une application

Soit $f : E \to F$ et $A \subset E$. La **restriction** de $f$ à $A$, notée $f_{|A}$, est l'application :

$$f_{|A} : A \to F, \quad x \mapsto f(x)$$


## 3. Prolongement d'une application

Soit $f : A \to F$ avec $A \subset E$. Un **prolongement** de $f$ à $E$ est :: toute application $\tilde{f} : E \to F$ telle que sa restriction à $A$ égale $f$ ($\tilde{f}_{|A} = f$).
<!--SR:!2026-11-03,31,270-->

> [!example] Prolongement par continuité
> Pour $f : \mathbb{R}^* \to \mathbb{R}, \, x \mapsto \frac{\sin(x)}{x}$, un prolongement continu à $\mathbb{R}$ est :
> $$\tilde{f}(x) = \begin{cases} \frac{\sin(x)}{x} & \text{si } x \neq 0 \\ 1 & \text{si } x = 0 \end{cases}$$


## Concepts liés

- [[Théorie des ensembles et opérations de base]]
- [[Fonction indicatrice]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````


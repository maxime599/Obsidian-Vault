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

# Majorants, minorants et bornes supérieure et inférieure dans R

> [!info] Définition courte
> Toute partie non vide et majorée (resp. minorée) de $\mathbb{R}$ possède un plus petit majorant appelé **borne supérieure** $\sup$ (resp. plus grand minorant appelé **borne inférieure** $\inf$).
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


## 1. Définitions : Majorant, Minorant, Partie bornée

Soit $A$ une partie de $\mathbb{R}$.

- **Majorée** :: $\exists M \in \mathbb{R}, \, \forall x \in A, \, x \le M$. $M$ est un *majorant* de $A$.
<!--SR:!2026-12-11,64,310-->
- **Minorée** :: $\exists m \in \mathbb{R}, \, \forall x \in A, \, m \le x$. $m$ est un *minorant* de $A$.
<!--SR:!2027-05-27,188,310-->
- **Bornée** :: $A$ est à la fois majorée et minorée.
<!--SR:!2027-04-07,146,290-->


## 2. Maximum et Minimum

- **Maximum ($\max$)** :: Si $A$ est majorée et que son majorant appartient à $A$, cet élément est unique et constitue le maximum : $\max(A) \in A$.
<!--SR:!2026-12-09,62,310-->
- **Minimum ($\min$)** :: Si $A$ est minorée et que son minorant appartient à $A$, cet élément est unique et constitue le minimum : $\min(A) \in A$.
<!--SR:!2027-05-07,173,310-->


## 3. Théorème de la borne supérieure et inférieure

Soit $A$ une partie non vide de $\mathbb{R}$ :
- **Borne supérieure ($\sup(A)$)** :: Si $A$ est majorée, l'ensemble des majorants de $A$ admet un plus petit élément, noté $\sup(A)$.
<!--SR:!2027-03-06,114,290-->
- **Borne inférieure ($\inf(A)$)** :: Si $A$ est minorée, l'ensemble des minorants de $A$ admet un plus grand élément, noté $\inf(A)$.
<!--SR:!2026-12-11,64,310-->


## 4. Distinction entre Borne Supérieure et Maximum

Toute partie non vide majorée admet une borne supérieure, **mais pas nécessairement un maximum**.

> [!example] Exemples explicatifs
> 1. Pour $A = ]0 ; 1]$ :
>    - $\sup(A) = 1$. Comme $1 \in A$, on a aussi $\max(A) = 1$.
>    - $\inf(A) = 0$. Mais $0 \notin A$, donc $A$ **n'admet pas de minimum**.
> 2. Pour $B = \{e^n \mid n \in \mathbb{N}\}$ :
>    - $\inf(B) = 1 = \min(B)$ car $e^0 = 1 \in B$.
>    - $B$ n'est pas majoré ($\lim_{n \to +\infty} e^n = +\infty$), donc $B$ n'a ni $\sup$ ni $\max$.


## Concepts liés

- [[Structure de R et densité de Q]]
- [[Suites majorées, minorées, bornées]]
- [[Valeur absolue et inégalité triangulaire dans R]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

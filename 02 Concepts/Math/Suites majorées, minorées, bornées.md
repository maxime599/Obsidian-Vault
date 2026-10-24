---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/suite
  - math/limites
MOC:
  - "[[MOC Suite]]"
  - "[[MOC Limites]]"
date_creation: 2026-07-26
---
# Suites majorées, minorées, bornées

> [!info] Définition courte
> Une suite $(u_n)$ est **majorée** si tous ses termes sont inférieurs ou égaux à un réel $M$ (un majorant), **minorée** s'ils sont supérieurs ou égaux à un réel $m$ (un minorant), et **bornée** si elle est à la fois majorée et minorée.
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

- **Majorée** : C'est comme s'il y avait un "plafond" que la suite ne dépasse jamais.
- **Minorée** : C'est comme s'il y avait un "sol" en dessous duquel la suite ne descend jamais.
- **Bornée** : La suite est coincée entre un sol et un plafond. Elle ne peut s'échapper ni vers $+\infty$ ni vers $-\infty$.


## Fonctionnement

Pour étudier le caractère majoré, minoré ou borné d'une suite $(u_n)$ :

1. **Pour prouver qu'elle est majorée par $M$** : Montrer que pour tout entier $n$, $u_n \le M$ (ou étudier le signe de la différence $u_n - M$).
2. **Pour prouver qu'elle est minorée par $m$** : Montrer que pour tout entier $n$, $u_n \ge m$ (ou étudier le signe de la différence $u_n - m$).
3. **Pour prouver qu'elle est bornée** : Montrer qu'il existe deux réels $m$ et $M$ tels que $m \le u_n \le M$ pour tout $n$, ou qu'il existe un réel $K \ge 0$ tel que $|u_n| \le K$.


## Exemple simple

**Soit la suite $u_n = \frac{2n + 1}{n + 1}$ définie pour tout $n \in \mathbb{N}$ :**

1. **Minoration par $0$** : 
   Pour tout $n \ge 0$, $2n + 1 > 0$ et $n + 1 > 0$, donc $u_n > 0$. La suite est **minorée par $0$**.

2. **Majoration par $2$** :
   Étudions le signe de $u_n - 2$ :
   $$u_n - 2 = \frac{2n + 1}{n + 1} - \frac{2(n + 1)}{n + 1} = \frac{2n + 1 - 2n - 2}{n + 1} = \frac{-1}{n + 1}$$
   Comme $n + 1 > 0$, on a $\frac{-1}{n + 1} < 0$, donc $u_n - 2 < 0 \implies u_n < 2$.
   La suite est **majorée par $2$**.

3. **Conclusion** : 
   Pour tout $n \in \mathbb{N}$, $0 < u_n < 2$. La suite est donc **bornée**.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> - **Suite majorée** : $\exists M \in \mathbb{R}, \forall n \ge n_0, \ u_n \le M$
> - **Suite minorée** : $\exists m \in \mathbb{R}, \forall n \ge n_0, \ u_n \ge m$
> - **Suite bornée** : $\exists m, M \in \mathbb{R}, \forall n \ge n_0, \ m \le u_n \le M$  
>   *(Équivalent à : $\exists K \ge 0, \forall n \ge n_0, \ |u_n| \le K$)*

**Propriétés fondamentales :**
- Toute suite convergente est bornée.
- *Théorème de la limite monotone* : Toute suite croissante et majorée converge ; toute suite décroissante et minorée converge.
- Si une suite est croissante et non majoré, alors elle diverge vers $+\infty$


## Concepts liés

- [[Limite d'une suite]]
- [[Suites]]
- [[Théorème de comparaison pour les suites]]
- [[Théorème d'encadrement (des gendarmes)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

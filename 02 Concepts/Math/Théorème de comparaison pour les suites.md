---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/suite
  - math/theoreme
MOC:
  - "[[MOC Suite]]"
  - "[[MOC Theoreme]]"
date_creation: 2026-07-26
---

# Théorème de comparaison pour les suites

> [!info] Définition courte
> Le **théorème de comparaison** (ou théorème de minoration / majoration) permet de déterminer la limite infinie d'une suite $(u_n)$ en la comparant à une autre suite dont la limite infinie est déjà connue.
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

Imaginez deux coureurs : si le coureur $A$ court toujours plus vite que le coureur $B$, et que le coureur $B$ accélère jusqu'à une vitesse infinie, alors le coureur $A$ va lui aussi nécessairement tendre vers une vitesse infinie. 

Inversement, si une suite est "coincée" en dessous d'une autre suite qui plonge vers $-\infty$, elle sera obligée de plonger elle aussi vers $-\infty$.


## Fonctionnement

### Pour démontrer que $$\lim_{n \to +\infty} u_n = +\infty$$ :
1. **Trouver une suite auxiliaire** $(v_n)$ plus simple dont la limite en $+\infty$ est $+\infty$.
2. **Démontrer l'inégalité** : Montrer qu'à partir d'un certain rang $N$, on a $u_n \ge v_n$.
3. **Conclure** : Par comparaison, $\lim_{n \to +\infty} u_n = +\infty$.

### Pour démontrer que $$\lim_{n \to +\infty} u_n = -\infty$$ :
1. **Trouver une suite auxiliaire** $(w_n)$ plus simple dont la limite en $+\infty$ est $-\infty$.
2. **Démontrer l'inégalité** : Montrer qu'à partir d'un certain rang $N$, on a $u_n \le w_n$.
3. **Conclure** : Par comparaison, $\lim_{n \to +\infty} u_n = -\infty$.


## Exemple simple

**Déterminer la limite de la suite $u_n = n^2 + \sin(n)$ quand $n \to +\infty$ :**

1. On sait que pour tout entier $n$, $-1 \le \sin(n) \le 1$.
2. En ajoutant $n^2$ à l'inégalité, on obtient : 
   $$u_n \ge n^2 - 1$$
3. Posons $v_n = n^2 - 1$. On sait que $\lim_{n \to +\infty} (n^2 - 1) = +\infty$.
4. Comme $u_n \ge v_n$ pour tout $n$ et $\lim_{n \to +\infty} v_n = +\infty$, d'après le théorème de comparaison :
   $$\lim_{n \to +\infty} u_n = +\infty$$


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncé formel
> Soient $(u_n)$ et $(v_n)$ deux suites réelles définies à partir d'un certain rang $N_0$.
> 
> - **Cas $+\infty$ (Minoration) :**
>   Si $u_n \ge v_n$ pour tout $n \ge N_0$ et $\lim_{n \to +\infty} v_n = +\infty$, alors $\lim_{n \to +\infty} u_n = +\infty$.
> 
> - **Cas $-\infty$ (Majoration) :**
>   Si $u_n \le v_n$ pour tout $n \ge N_0$ et $\lim_{n \to +\infty} v_n = -\infty$, alors $\lim_{n \to +\infty} u_n = -\infty$.

*Remarque :* Si deux suites convergent et que $u_n \le v_n$ à partir d'un certain rang, alors leurs limites vérifient $\lim_{n \to +\infty} u_n \le \lim_{n \to +\infty} v_n$ (Passage à la limite dans une inégalité).


## Concepts liés

- [[Théorème d'encadrement (des gendarmes)]]
- [[Limite d'une suite]]]
- [[Suites majorées, minorées, bornées]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

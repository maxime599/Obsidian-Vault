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

# Théorème des gendarmes

> [!info] Définition courte
> Le **théorème des gendarmes** (ou théorème d'encadrement) permet de déterminer la limite finie $L$ d'une suite $(u_n)$ en l'encadrant entre deux autres suites $(v_n)$ et $(w_n)$ qui convergent toutes deux vers cette même limite $L$.

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

Imaginez deux gendarmes (les suites $v_n$ et $w_n$) qui encadrent un prisonnier (la suite $u_n$). Si les deux gendarmes se dirigent exactement vers le même endroit (la limite $L$), le prisonnier, restant toujours bloqué entre eux, n'a pas d'autre choix que d'aller lui aussi vers ce même endroit.


## Fonctionnement

Pour appliquer le théorème des gendarmes, il faut suivre ces étapes :

1. **Trouver deux suites encadrantes** $(v_n)$ et $(w_n)$ plus simples, telles que $v_n \le u_n \le w_n$ à partir d'un certain rang $N$.
2. **Calculer les limites** des deux suites encadrantes et vérifier qu'elles sont **égales** : $\\lim_{n \to +\infty} v_n = L$ et $\lim_{n \to +\infty} w_n = L$ (avec $L \in \mathbb{R}$).
3. **Conclure** : Par le théorème des gendarmes, la suite $(u_n)$ converge et sa limite est $\lim_{n \to +\infty} u_n = L$.


## Exemple simple 
**Déterminer la limite de la suite $u_n = \frac{\cos(n)}{n}$ pour $n \ge 1$ quand $n \to +\infty$ :** 1. On encadre le cosinus : pour tout entier $n \ge 1$, $-1 \le \cos(n) \le 1$. 2. On divise par $n > 0$ : $$-\frac{1}{n} \le \frac{\cos(n)}{n} \le \frac{1}{n}$$ 3. On calcule les limites des extrémités : $$\lim_{n \to +\infty} \left(-\frac{1}{n}\right) = 0 \quad \text{et} \quad \lim_{n \to +\infty} \left(\frac{1}{n}\right) = 0$$ 4. Les deux suites encadrantes convergent vers la même limite $0$. D'après le théorème des gendarmes : $$\lim_{n \to +\infty} u_n = 0$$

## Formules / Algorithmes / Propriétés 
> [!theorem] Énoncé formel >
>  Soient $(u_n)$, $(v_n)$ et $(w_n)$ trois suites réelles. 
>  S'il existe un entier $N_0$ tel que pour tout $n \ge N_0$ : > $$v_n \le u_n \le w_n$$ 
>  et si : 
> $$\lim_{n \to +\infty} v_n = L \quad \text{et} \quad \lim_{n \to +\infty} w_n = L \quad (L \in \mathbb{R})$$ 
> alors la suite $(u_n)$ converge et $\lim_{n \to +\infty} u_n = L$.

## Concepts liés

- [[Théorème de comparaison pour les suites]]
- [[Limite d'une suite]]
- [[Suites majorées, minorées, bornées]]


## 📚 Cours associés
```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````

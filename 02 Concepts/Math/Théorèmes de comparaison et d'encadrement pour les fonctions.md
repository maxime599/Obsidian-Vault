---
type: concept
matière: math
tags:
  - concepts
  - math/fonction
  - math/theoreme
  - math/limites
MOC:
  - "[[MOC Theoreme]]"
  - "[[MOC Fonction]]"
  - "[[MOC Limites]]"
date_creation: 2026-07-26
---

# Théorèmes de comparaison et d'encadrement

> [!info] Définition courte
> Les théorèmes de comparaison et d'encadrement (notamment le **théorème des gendarmes**) permettent de déterminer la limite d'une fonction complexe en la minorant, la majorant ou l'encadrant par des fonctions plus simples.
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

- **Théorème de comparaison (Infini)** : Si la fonction $g$ est plus grande que la fonction $f$, et que $f$ s'envole vers $+\infty$, alors $g$ n'a pas d'autre choix que d'aller vers $+\infty$ aussi.
- **Théorème des Gendarmes (Limite finie)** : Si une fonction $f$ se retrouve coincée entre deux "gendarmes" ($g$ et $h$) qui se dirigent vers la même destination $l$, alors $f$ est forcée d'aller vers $l$.



## Fonctionnement

1. **Pour déterminer une limite infinie** :
   - Trouver une minoration $f(x) \le g(x)$ avec $\lim f(x) = +\infty \implies \lim g(x) = +\infty$.
   - Trouver une majoration $f(x) \le g(x)$ avec $\lim g(x) = -\infty \implies \lim f(x) = -\infty$.

2. **Pour déterminer une limite finie (avec sinus / cosinus)** :
   - Partir de l'encadrement de référence : $-1 \le \sin(x) \le 1$ ou $-1 \le \cos(x) \le 1$.
   - Construire l'encadrement $g(x) \le f(x) \le h(x)$.
   - Vérifier que $\lim g(x) = \lim h(x) = l$.


## Exemple simple

Calculer $\lim_{x \to +\infty} \frac{\sin(2x)}{x}$ :

1. Pour tout $x > 0$, $-1 \le \sin(2x) \le 1$.
2. En divisant par $x > 0$ :
   $$-\frac{1}{x} \le \frac{\sin(2x)}{x} \le \frac{1}{x}$$
3. Or $\lim_{x \to +\infty} \left(-\frac{1}{x}\right) = 0$ et $\lim_{x \to +\infty} \frac{1}{x} = 0$.
4. D'après le **théorème d'encadrement (des gendarmes)**, $\lim_{x \to +\infty} \frac{\sin(2x)}{x} = 0$.


## Formules / Algorithmes / Propriétés

> [!theorem] Énoncés formels
> **1. Théorème de comparaison (Limite infinie) :**
> Soient $f$ et $g$ deux fonctions définies sur $I = ]b; +\infty[$ telles que pour tout $x \in I, \ f(x) \le g(x)$ :
> - Si $\lim_{x \to +\infty} f(x) = +\infty$, alors $\lim_{x \to +\infty} g(x) = +\infty$.
> - Si $\lim_{x \to +\infty} g(x) = -\infty$, alors $\lim_{x \to +\infty} f(x) = -\infty$.
>
> **2. Théorème d'encadrement / des Gendarmes (Limite finie) :**
> Soient $f, g, h$ trois fonctions définies sur $I = ]b; +\infty[$ telles que pour tout $x \in I, \ g(x) \le f(x) \le h(x)$ :
> - Si $\lim_{x \to +\infty} g(x) = l$ et $\lim_{x \to +\infty} h(x) = l$ (avec $l \in \mathbb{R}$), alors $\lim_{x \to +\infty} f(x) = l$.


## Concepts liés

- [[Limites de fonctions et asymptotes]]
- [[Théorème de comparaison pour les suites]]
- [[Théorème d'encadrement (des gendarmes)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

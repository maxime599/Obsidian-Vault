---
type: concept
matière: math
tags:
  - concepts
  - math/fonction
  - math/limites
  - math
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Limites]]"
date_creation: 2026-07-26
---
# Opérations sur les limites et formes indéterminées 
> [!info] Définition courte >
>  Les règles opératoires permettent de calculer la limite d'une somme, d'un produit ou d'un quotient de fonctions. Lorsque le calcul direct mène à un cas d'incertitude, on parle de **Forme Indéterminée (F.I.)**, qu'il faut lever à l'aide de techniques d'écriture algébrique. 
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
Additionner, multiplier ou diviser des limites fonctionne de manière naturelle dans la plupart des cas. Cependant, certains affrontements ne permettent pas de conclure directement : 
- $1000 + \infty = \infty$ (évident) 
- $+\infty - \infty$ : qui l'emporte entre l'infini positif et l'infini négatif ? C'est une **Forme Indéterminée**. Il faut transformer l'expression pour savoir quel terme dominait. 
## Fonctionnement 
### Les 4 Formes Indéterminées classiques : 
1. **"$+\infty - \infty$"** (Somme) 
2. **"$0 \times \infty$"** (Produit) 
3. **"$\frac{0}{0}$"** (Quotient) 4
4. . **"$\frac{\infty}{\infty}$"** (Quotient) 


### Techniques pour lever une F.I. : 
1. **En $\pm\infty$ pour les polynômes et fonctions rationnelles** : - Factoriser le numérateur et le dénominateur par le **terme de plus haut degré**. 
2. **En un réel $a$ avec une forme "$\frac{0}{0}$" pour un quotient de polynômes** : - Factoriser le numérateur et le dénominateur par $(x - a)$ puis simplifier. 
3. **Présence de racines carrées** : - Multiplier et diviser par la **quantité conjuguée** (ex: $\sqrt{A} - B \to \sqrt{A} + B$). 



## Exemple simple 
**Exemple 1 : Factorisation par le terme dominant en $+\infty$** 
Calculer $\lim_{x \to +\infty} (x^3 - 5x + 2)$ (Forme $+\infty - \infty$) : $$f(x) = x^3 \left(1 - \frac{5}{x^2} + \frac{2}{x^3}\right)$$ 
- $\lim_{x \to +\infty} x^3 = +\infty$ 
- $\lim_{x \to +\infty} \left(1 - \frac{5}{x^2} + \frac{2}{x^3}\right) = 1$ Par produit : $\lim_{x \to +\infty} f(x) = +\infty$.



**Exemple 2 : Quantité conjuguée pour une forme $\frac{0}{0}$** 
Calculer $\lim_{x \to 5} \frac{\sqrt{x - 1} - 2}{x - 5}$ : $$f(x) = \frac{(\sqrt{x - 1} - 2)(\sqrt{x - 1} + 2)}{(x - 5)(\sqrt{x - 1} + 2)} = \frac{x - 1 - 4}{(x - 5)(\sqrt{x - 1} + 2)} = \frac{1}{\sqrt{x - 1} + 2}$$ 
Quand $x \to 5$, $\lim_{x \to 5} f(x) = \frac{1}{\sqrt{4} + 2} = \frac{1}{4}$. 

## Formules / Algorithmes / Propriétés 
> [!theorem] Règle du terme de plus haut degré 
>- En $\pm\infty$, la limite d'une **fonction polynomiale** est égale à la limite de son terme de plus haut degré. 
>- En $\pm\infty$, la limite d'une **fonction rationnelle** est égale à la limite du quotient de ses termes de plus haut degré. 
## Concepts liés 
- [[Limites de fonctions et asymptotes]] 
- [[Croissances comparées]] 
- [[Limite d'une fonction composée]]
- [[Fonction exponentielle et logarithme népérien]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

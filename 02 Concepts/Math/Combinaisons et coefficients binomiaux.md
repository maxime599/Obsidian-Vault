---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/denombrement
  - math/combinatoire
  - math/ensemble
MOC:
  - "[[MOC Dénombrement]]"
  - "[[MOC Combinatoire]]"
  - "[[MOC Ensemble]]"
date_creation: 2026-07-26
---
# Combinaisons et coefficients binomiaux

> [!info] Définition courte
> Une **combinaison** de $k$ éléments parmi $n$ est un sous-ensemble (ou une partie) de $k$ éléments choisis parmi un ensemble de $n$ éléments distincts. **L'ordre des éléments ne compte pas** et il n'y a pas de répétition.
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

Imaginons que vous choisissiez 3 fruits parmi 5 disponibles (pomme, banane, orange, fraise, kiwi) pour faire une salade de fruits. Choisir {pomme, banane, orange} revient au même que {orange, pomme, banane}. C'est une **combinaison** : seule la composition du groupe compte, pas l'ordre dans lequel vous prenez les fruits.


## Fonctionnement

Pour dénombrer des combinaisons :

1. **Identifier l'ensemble total $n$** et le nombre d'éléments à choisir $k$ (avec $0 \le k \le n$).
2. **S'assurer des hypothèses** : L'ordre n'a pas d'importance et un même élément ne peut pas être choisi plusieurs fois.
3. **Appliquer la formule du coefficient binomial** :
   $$\binom{n}{k} = \frac{n!}{k!(n-k)!}$$
4. **Raisonner par complémentaire si besoin** : Dans certains problèmes avec contraintes (ex: "au moins un"), utiliser la propriété de complémentarité.


## Exemple simple

**Dans une classe de 34 élèves (18 filles et 16 garçons), on veut élire un groupe de 4 délégués :**

1. Nombre total de choix possibles :
   $$\binom{34}{4} = \frac{34 \times 33 \times 32 \times 31}{4 \times 3 \times 2 \times 1} = 46\ 376$$

2. Si Alice ne souhaite pas être élue si Barnabé est élu, on retire les combinaisons où Alice et Barnabé sont tous les deux délégués (ce qui revient à choisir les 2 autres délégués parmi les 32 élèves restants) :
   $$\text{Nombre de choix} = \binom{34}{4} - \binom{32}{2} = 46\ 376 - 496 = 45\ 880$$


## Formules / Algorithmes / Propriétés

> [!theorem] Propriétés des coefficients binomiaux
> - **Formule générale** : $\binom{n}{k} = \frac{n!}{k!(n-k)!}$
> - **Cas particuliers** : $\binom{n}{0} = 1$, $\binom{n}{1} = n$, $\binom{n}{n} = 1$
> - **Symétrie** : $\binom{n}{k} = \binom{n}{n-k}$
> - **Relation de Pascal** : $\binom{n}{k} + \binom{n}{k+1} = \binom{n+1}{k+1}$


## Concepts liés

- [[Arrangements et permutations]]
- [[Triangle de Pascal]]
- [[Nombre de parties d'un ensemble]]
- [[Binôme de Newton]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
tags:
  - concepts
  - Électronique_numérique
  - Électronique_numérique/boole
  - flashcards/Électronique_numérique
MOC:
  - "[[MOC Boole]]"
date_creation: 2026-09-10
Ressources:
  - "[[diapo_CITISE_AutoSIN.pdf]]"
---

# Tableau de Karnaugh

> [!info] Définition courte
> Le **tableau de Karnaugh** est une méthode graphique de simplification des équations de l'algèbre de Boole. Il permet de trouver la forme minimale d'une fonction logique sous forme de somme de produits sans effectuer de calculs algébriques complexes.
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


## 1. Structure du tableau et code de Gray

Le tableau est une grille regroupant l'ensemble des combinaisons des variables d'entrée (soit $2^n$ cases pour $n$ variables).

- **Ordre en code de Gray (code réfléchi)** : La succession des lignes et colonnes est organisée pour que deux cases géométriquement adjacentes ne diffèrent que par l'état d'**une seule variable** (`00`, `01`, `11`, `10`).
- **Adjacence torique** : Les bords opposés du tableau (haut/bas et gauche/droite) sont également adjacents.

### Structure à 4 variables ($a, b, c, d$)

| $ab \backslash cd$ | 00 | 01 | 11 | 10 |
| :---: | :---: | :---: | :---: | :---: |
| **00** | $\bar{a}\bar{b}\bar{c}\bar{d}$ | $\bar{a}\bar{b}\bar{c}d$ | $\bar{a}\bar{b}cd$ | $\bar{a}\bar{b}c\bar{d}$ |
| **01** | $\bar{a}b\bar{c}\bar{d}$ | $\bar{a}b\bar{c}d$ | $\bar{a}bcd$ | $\bar{a}bc\bar{d}$ |
| **11** | $ab\bar{c}\bar{d}$ | $ab\bar{c}d$ | $abcd$ | $abc\bar{d}$ |
| **10** | $a\bar{b}\bar{c}\bar{d}$ | $a\bar{b}\bar{c}d$ | $a\bar{b}cd$ | $a\bar{b}c\bar{d}$ |


## 2. Règles de regroupement des 1

Pour obtenir la forme minimale sous forme de somme de termes produits :

Régles du tableau de Karnaugh :
?
1. **Taille des blocs** : Former des rassemblements de $2^k$ cases contiguës ($1, 2, 4, 8, 16$).
2. **Taille maximale** : Les blocs doivent être aussi grands que possible afin d'éliminer un maximum de variables ($1$ bloc de $2^k$ cases élimine $k$ variables).
3. **Nombre minimal de groupes** : Recouvrir l'ensemble des `1` du tableau avec le moins de rassemblements possible.
4. **Chevauchement** : Une case contenant un `1` peut appartenir à plusieurs groupes.
5. **Conditions indifférentes (`X` ou `d`)** : Les états indifférents peuvent être assimilés à des `1` pour agrandir un groupe, ou à des `0` s'ils n'apportent aucun bénéfice.
<!--SR:!2026-12-13,66,310-->


## 3. Lecture de l'équation simplifiée

Chaque groupe forme un terme produit (monôme) de l'équation finale :
- Une variable qui **change d'état** au sein d'un même groupe est **éliminée**.
- Une variable dont l'état **reste constant** est **conservée** (sous forme directe si elle vaut $1$, sous forme complémentée si elle vaut $0$).

> [!example] Règle de simplification
> - Un groupe de $2$ cases élimine $1$ variable.
> - Un groupe de $4$ cases élimine $2$ variables.
> - Un groupe de $8$ cases élimine $3$ variables.


## Concepts liés

- [[Portes logiques et algèbre de Boole]]
- [[Propriétés de l'algèbre de Boole]]
## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````

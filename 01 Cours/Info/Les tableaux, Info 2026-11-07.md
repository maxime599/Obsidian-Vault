---
semestre: S1
type de cours: Maison
date: 2026-11-07T20:09:10
End Date: 2026-11-07T20:39:10
Calendar Title: "[[01 Cours/Info/Les tableaux, Info 2026-11-07|Les tableaux, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
  - "[[Syntaxe et structure en algorithmique]]"
  - "[[Syntaxe et structure de base en C - C++]]"
Ressources:
---

```dataviewjs
let current = dv.current();
let pages = dv.pages(`"${current.file.folder}"`)
  .where(p => p.date)
  .sort(p => p.date, 'asc');

let idx = pages.findIndex(p => p.file.path === current.file.path);
let prev = idx > 0 ? pages[idx - 1] : null;
let next = (idx !== -1 && idx < pages.length - 1) ? pages[idx + 1] : null;

let getCleanLink = (page) => {
  if (!page) return "Aucun";
  let cleanTitle = page.file.name.split(',')[0].trim();
  return `[[${page.file.name}|${cleanTitle}]]`;
};

dv.paragraph(`**Précédent :** ${getCleanLink(prev)} | **Suivant :** ${getCleanLink(next)}`);
```
# Les tableaux


## Objectifs

-

## Notes
### En algo : 
```algo
ex_tableau : 1 tableau de 3 entiers := {1, 2, 3}
```
Pour accéder à la case d'indice 1 : 
```algo
ex_tableau[1]
```
Attention, on ne peut pas faire 
tab2 $\leftarrow$ tab1, car tab2 et tab1 ne sont pas des variables mais des tableaux. Il faut donc copier les valeurs de tab1 dans tab2 avec une boucle.
On ne peut pas non plus faire 
Ecrire(tab1)


Une fonction ne fais jamais de copier collé d'un tableau, elle ne fait que passer l'adresse du tableau. Donc si on modifie le tableau dans la fonction, on modifie le tableau original


### En C++ : 
```cpp
float ex_tableau[3] = {1, 2, 3};
```
On peut passer une variable pour la taille du tableau, mais il faut que cette variable soit une constante, sinon on ne pourra pas compiler le programme. 
Il faut remplir le tableau case par case avec une boucle
Si on veut que le tableau soit en lecture seule, on peut le déclarer comme const, mais il faut que le tableau soit initialisé à la déclaration.

- [x] ajouter aux conceptes
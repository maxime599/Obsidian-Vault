---
semestre:
type de cours:
date: 2026-10-19T08:20:02
End Date: 2026-10-19T08:50:02
Calendar Title: "[[01 Cours/Info/video chapitre 8 et 9 tant que , Info 2026-10-19|video chapitre 8 et 9 tant que , Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
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
# video chapitre 8 et 9 tant que 


## Objectifs

-

## Notes
Pour faire des tant que en algo : 
```
Tant que condition
	instruction1
    instruction2
FinTantque
```

Pout faire ... Tant que
```
Faire
	instruction1
	instruction2
	Tant que condition
FinFaireTantque
```
Ici, on fait forcément les instructions au moins une fois, puis on teste la condition pour savoir si on recommence ou pas.



En Cpp
Tant que :
```cpp
while (condition){
    instruction1;
    instruction2;
}
```

For :
```cpp
for (initialisation; condition; incrementation){
    instruction1;
    instruction2;
}
```
exemple:
```cpp
for (int i = 0; i < 10; i++){
    cout << i << endl;
}
```


do while:
```cpp
do{
    instruction1;
    instruction2;
} while (condition);
```


## Exercices


## À retenir
-
## Travail à faire




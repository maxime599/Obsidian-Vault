---
semestre: S1
type de cours: Maison
date: 2026-10-11T20:05:59
End Date: 2026-10-11T20:45:59
Calendar Title: "[[01 Cours/Info/Video L'anaylse de cas, Info 2026-10-11|Video L'anaylse de cas, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
  - "[[Syntaxe et structure en algorithmique]]"
  - "[[Syntaxe et structure de base en C - C++]]"
Ressources:
  - "[[Info1_Slides.pdf]]"
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
# Video L'anaylse de cas


## Objectifs

-

## Notes
### En algo :
Pour faire des conditions en algo :
```
Lexique :
---


Algorithme :
Début
........
	Si condition
		Alors
			bloc de code
		Sinon
			bloc de code
	FinSi
```
On peut représenter ça sous forme de graphe


Syntaxe Selon :
```
Lexique :
---


Algorithme :
Début
........
	Selon var
		valeur1 : bloc de code
		valeur2 : bloc de code
		...
		autrement : bloc de code
```


### En cpp :
Condition :
```cpp
if (condition){
//Alors
}
else{
//Sinon
}
```

Selon :
```cpp
switch(var){
	case val1 : 
		instruction1;
		instruction2;
		break
	case val2 :
		.....
	default: instruction1;.....
}
```
Attention, la variable var doit forcément avoir un type entier ou caractère pour le passer dans switch

## Exercices


## À retenir
-
## Travail à faire




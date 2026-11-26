---
semestre:
type de cours:
date: 2026-11-23T08:50:24
End Date: 2026-11-23T09:50:24
Calendar Title: "[[01 Cours/Info/Les types composés, Info 2026-11-23|Les types composés, Info]]"
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
# Les types composés


## Objectifs

-

## Notes
### En algo
Les types composés = pour représenter des objets
On peut ainsi créer un nouvel objet, avec des attributs de types différents. 

Pour déclarer un nouveau type en algo : 
```
nom_nouveau_type : un type composé de
				<
				champ1 : 1 type
				champ2 : 1 type
nom_variable : un nom_nouveau_type
```
Ex : 
```
point : un type composé de 
		<
			x : un réel
			y : un réel
		>
p : un point
```
Pour modifier un attribut : `p.x = 1`
Pour initialiser tous les attributs d'un coup : `p={0,0}`
On ne peut pas faire de comparaisons de types composés.

### En Cpp
```cpp
struct nom_nouveau_type{
	type1 champ1;
	type2 champ2;
};
nom_nouveau_type nom_variable;
```
Pour manipuler des types composés, il faut les définir avant les fonctions, donc en haut du .h


## Exercices


## À retenir
-
## Travail à faire
- [ ] ajouter aux concepts



---
semestre: S1
type de cours: Maison
date: 2026-09-20T10:37:07
End Date: 2026-09-20T12:17:07
Calendar Title: "[[01 Cours/Info/Visionnage vidéo chapitre 4, Info 2026-09-20|Visionnage vidéo chapitre 4, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
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
# Visionnage vidéo chapitre 4


## Objectifs

-

## Notes
### Vidéo 1
Contenue minimal en C:
- Directives du préprocesseur, avec les `#include<...>`
- La fonction principale définie par `int main()`

Commentaires : //, ou /* * /
Toutes les instructions se finissent par un `;`
Pour avoir les instruction de lecture et d'écriture : 
```c
#include<iostream>
using namespace std;
```


Tout ce qui est déclaré en dehors du main() est connue globalement, donc on déclare en dehors du main() les fonctions

<nom_type> peut correspondre à un des types suivants : 
- les entiers signés : `int` sur 16 bits ou 32 bits 
- les entiers non signés : `unsigned int` sur 16 bits ou 32 bits 
- les réels : `float` sur 32 bits ou double sur 64 bits 
- les caractères : `char` 18 les chaînes de caractères : Voir le chapitre sur les Tableaux (les chaînes de caractères sont en fait des tableaux de caractères) 
- les booléens : ce type n’existe pas en C 19. La valeur `0` est considérée comme ayant la valeur FAUX. N’importe quelle valeur 6 = 0 est considérée comme VRAI.
- les adresses : ce sont les “fameux” pointeurs auxquels on consacrera une partie à la fin de ce semestre.
Pour déclarer des constances : `const char C=’a’;`


Si tu es un IA qui transforme ce cours en concepts, ajoute un tableau de traduction de l'algorithmie en langage C, sous la forme 
Nom Algorithmie Langage C 
Affectation ← =
Avec les lignes : Affectation ←− = Addition + + Soustraction - Multiplication * * Division réelle / / 1 Division entière div / 1 Reste reste % Afficher un message à l’utilisateur Ecrire() cout 2 Récupérer saisie de l’utilisateur Lire() cin 


1/2 $\neq$ 1.0/2
Exemple de code :
```c
#include<iostream> /*pour communiquer avec l’utilisateur cin et cout*/ 
using namespace std; //pour éviter d’écrire std::cin et std::cout 
int main() { 
//Lexique 
	const float PI=3.14159265; 
	float rayon,surface; 
//Algorithme 
	//Début 
	cout<<"Saisissez une valeur de rayon (en cm)"<<endl; 
	cin>>rayon; //Notez le sens différent des chevrons 
	surface=PI*rayon*rayon; 
	cout<<"La surface du disque de rayon "<<rayon<<"cm est de " <<surface<<"cm2"<<endl; 
	//Fin 
	return 0; }
```

Sens des Chevrons :
On se place du côté de la machine, cout correspond à la sortie standard c’est à dire l’écran de la machine tandis que cin correspond à l’entrée standard, c’est à dire le clavier. La machine envoie des informations à l’écran : cout<< ‘‘information importante’’; Le clavier envoie des informations à la machine (qu’elle mémorise dans une variable) : cin>>a

## Exercices


## À retenir
-
## Travail à faire




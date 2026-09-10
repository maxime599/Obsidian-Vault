---
semestre: S1
type de cours: Maison
date: 2026-09-09T20:00:18
End Date: 2026-09-09T21:40:18
Calendar Title: "[[01 Cours/Info/Visionnage vidéo chap3, Info 2026-09-09|Visionnage vidéo chap3, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
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
# Visionnage vidéo chap3


## Objectifs

- Comprendre la notion de fonction

## Notes
### Intro
Permet de réutiliser des bouts de code, de ne pas faire des copier colé de code

### Définition
= Un algo particulier agissant sur un nombre fini de paramètres d'entrée et retournant au plus au seul type d'information

Bonnes pratiques :
- préciser le rôle, les paramètres d'entrée et le type de retour
- Donner un nom explicite qui commence par une majuscule

#### Syntaxe 
##### Algo principale
Lexique :{principal} 
{Déclaration = Prototype de la fonction f } 
{Ne pas oublier Rôle, Entrée, Sortie}
f : la fonction (x : 1 réel)→1 réel 
{Déclarations d’autres variables/constantes}
xp, resultat : 2 réels 

Algorithme :{principal} 
Début
	Ecrire(“Saisir un réel”) 
	Lire(xp) resultat←−f(xp) {utilisation de la fonction} Ecrire(“f(”,xp,“)=”,resultat) Fin
FIN


##### Def de la fonction f
{Définition de la fonction f } 
f : la fonction (x : 1 réel)→1 réel 
Lexique :{Local à f } 
res : 1 réel 

Algorithme :{Local à f } 
	Début 
	res←−2 * x + 3 
	Retourner res 
Fin


3 étapes sont nécessaires pour l’utilisation d’une fonction : 
1. Déclaration ou prototype : dans le lexique principal 
2. Appel de la fonction : dans l’algorithme principal. 
3. Définition : en dehors du lexique principal et de l’algorithme principal





## Exercices


## À retenir
-
## Travail à faire




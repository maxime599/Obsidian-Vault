---
semestre: S1
type de cours: Maison
date: 2026-09-02T17:38:00.000Z
End Date: 2026-09-02T18:22:00.000Z
Calendar Title: "[[01 Cours/Info/Visionnage de la vidéo, Info 2026-09-02|Visionnage de la vidéo, Info]]"
prof: Bernard Flrorent
tags:
  - cours
  - Info
Concepts:
  - "[[Division euclidienne dans Z]]"
  - "[[Syntaxe en C]]"
Ressources: "[[Info1_Slides.pdf]]"
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
# Visionnage de la vidéo


## Objectifs

-

## Notes


## Exercices

Comment faire dessiner un carré à un homme :
1. Tracer un cercle de centre O, disons de rayon 1
2. Tracer une droite passant par O. La droite coupe le cercle en deux points, appelons les A et C
3. tracer ensuite deux cercles de centre A et C et de même rayon, qui se doit d'être supérieur à 1
4. ces deux cercles se coupent en deux points, tracer une droite passant par ces deux points
5. la droite tracés coupe le cercle initial en deux points, appelons les B et D
6. Tracer ensuite les segments AB, BC, CD et DA
7. Voilà, vous savez faire un carré !



- Pour deux entiers a et b, on définit l’opération **a div b** qui a pour résultat l’entier q quotient de a par b. 
- Pour deux entiers a et b, on définit l’opération **a reste b** qui a pour résultat l’entier r reste de la division de a par b


### L'opérateur div : 

- Il permet d’obtenir le quotient dans la division du contenu d’une variable ou constante entière par celui d’une autre variable ou constante entière et non nulle ! 
- Syntaxe : nom_variable1 div nom_variable2 
- Cette opération retourne un résultat de type entier (le quotient des contenus des deux variables). 
- Ce résultat peut 8 être affecté à une troisième variable qui doit nécessairement être de type entier (appelons là quotient) : quotient←−nom_variable1 div nom_variable2

Ex : 1 div 2 retourne 0


### L'opérateur reste/modulo
- L’opérateur reste permet d’obtenir le reste dans la division du contenu d’une variable ou constante entière par celui d’une autre variable ou constante entière et non nulle ! 
- Syntaxe : nom_variable1 reste nom_variable2 
- Cette opération retourne un résultat de type entier (le reste dans la division euclidienne des contenus des deux variables). 
- Ce résultat peut 9 être affecté à une troisième variable qui doit nécessairement être de type entier (appelons là res 10) : res←−nom_variable1 reste nom_variable2


Comment en math, le C garde la Priorité des opérateurs de base
Deux fonctions importantes : Ecrire (qui permet d'afficher du texte) et Lire (qui permet de demander une info à l'utilisateur)
attentions, ces fonctions ne sont pas des fonction C mais des fonction de pseudo code

## À retenir
-
## Travail à faire




---
semestre:
type de cours:
date: 2026-09-10T09:30:00
End Date: 2026-09-10T11:00:00
Calendar Title: "[[01 Cours/Info/Les fonctions, Info 2026-09-10|Les fonctions, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
Ressources:
  - "[[Exercices_info1.pdf]]"
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
# Les fonctions


## Objectifs

-  Apprendre à utiliser les fonction en algo, et apprendre la syntaxe

## Notes
Ne pas mettre : Exemple : la fonction (h, s , m : trois entiers)
Il faut les séparer : Exemple : la fonction (h : un entier, s : un entier , m : un entiers)
, puis une flêche et le type de ce que la fontion renvoie (obligatoir, même si la fonction ne renvoie rien)


Dans le lexique principaln toujour mettre le rôle, les entrées et la sortie des fonction

### Méthode découpage fonctionnel
1. Lister = déclarer dans le lexique principal avec R, E, S les fonctions du découpage
2. Compléter le lexique principal et réaliser l'algo principal en appelant les fonctions du découpage
3. Définir chaques fonctions du découpage, en dehors de l'algo principal



## Exercices
### 3.1
Problèmes dans le code : 
- Il demande à l'utilisateur les valeurs de d'heure, minute et seconde, alors que ces valeurs sont déjà passées en parametres de la fonction
- Il mélange un fonction de traitement avec des fonction de lecture et d'écriture. il faut mettre les interractions avec l'utilisateur dans le programme principal 
- Il faut ajouter un "retourner" pour return le nb de secondes
- Ajouter la déclaration des variables hh, mm, ss et seconde (la variale permettant de stocker le résultat de la fonction) dans le lexique principale



## À retenir
-
## Travail à faire
- [x] QCM lundi au prochain CM




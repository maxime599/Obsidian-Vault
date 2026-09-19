---
semestre: S1
type de cours: TD
date: 2026-09-10T09:30:00
End Date: 2026-09-10T11:00:00
Calendar Title: "[[01 Cours/Info/Les fonctions, Info 2026-09-10|Les fonctions, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
  - "[[Fonctions et modularité en algorithmique]]"
  - "[[Syntaxe et structure en algorithmique]]"
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

-  Apprendre à utiliser les fonctions en algo, et apprendre la syntaxe

## Notes
Ne pas mettre : Exemple : la fonction (h, s , m : trois entiers)
Il faut les séparer : Exemple : la fonction (h : un entier, s : un entier , m : un entier)
, puis une flèche et le type de ce que la fonction renvoie (obligatoire, même si la fonction ne renvoie rien)


Dans le lexique principal toujour mettre le rôle, les entrées et la sortie des fonctions

### Méthode découpage fonctionnel
1. Lister = déclarer dans le lexique principal avec R, E, S les fonctions du découpage
2. Compléter le lexique principal et réaliser l'algo principal en appelant les fonctions du découpage
3. Définir chaque fonctions du découpage, en dehors de l'algo principal


### Découpe fonctionnel simple
Découpage dans lequel on ne met pas dans des fonctions les fonctions de bases Écrire et Lire

## Exercices
### 3.1
Problèmes dans le code : 
- Il demande à l'utilisateur les valeurs d'heure, minute et seconde, alors que ces valeurs sont déjà passées en paramètres de la fonction
- Il mélange une fonction de traitement avec des fonctions de lecture et d'écriture. Il faut mettre les interactions avec l'utilisateur dans le programme principal 
- Il faut ajouter un "retourner" pour return le nb de secondes
- Ajouter la déclaration des variables hh, mm, ss et seconde (la variale permettant de stocker le résultat de la fonction) dans le lexique principale



## À retenir
-
## Travail à faire
- [x] QCM lundi au prochain CM
- [x] Chercher le 3.2 (pas obligatoire)
- [x] Faire le 3.4 avec l'ex 2.4




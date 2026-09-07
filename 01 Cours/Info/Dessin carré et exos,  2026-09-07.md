---
semestre: S1
type de cours: TD
date: 2026-09-07T11:00:00
End Date: 2026-09-07T12:30:00
Calendar Title: "[[01 Cours/Info/Dessin carré et exos,  2026-09-07|Dessin carré et exos,]]"
prof: Bernard Flrorent
tags:
  - cours
  - Info
Concepts:
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
# Dessin carré et exos

## Objectifs

-

## Notes
### Dessin carré 
#### Ma solution
Comment faire dessiner un carré à un homme :
Outils : régle et compas
1. Tracer un cercle de centre O, disons de rayon 1
2. Tracer une droite passant par O. La droite coupe le cercle en deux points, appelons les A et C
3. tracer ensuite deux cercles de centre A et C et de même rayon, qui se doit d'être supérieur à 1/d'un rayon supérieur à celui du premier cercle
4. ces deux cercles se coupent en deux points, tracer une droite passant par ces deux points
5. la droite tracés coupe le cercle initial en deux points, appelons les B et D
6. Tracer ensuite les segments AB, BC, CD et DA
7. Voilà, vous savez faire un carré !

### Exos
Chapitre 2 La décomposition simple [[Exercices_info1.pdf#page=8|Page 8]]
#### 2.1 Algorithmes erronés
##### Algo1
<u>Lexique</u>
- Taux : la constante réelle **<u>:=6.55957</u>**
- frcs : 1 ***<u>réel</u>***
<u>Algo</u>
- ~~TAUX$\leftarrow$ 6.55957~~ car c'est une constante, on la déclare dans le lexique
- frcs $\leftarrow$ taux*55


##### Algo2
<u>Lexique</u>
- EURTOFR : la constante réelle :=6.55957
- frcs, eur : 2 réels

<u>Algo</u>
Début
	Ecrire(“Entrez votre nombre d’euros”)
	**Lire(eur)**
	frcs$\leftarrow$EURTOFR * eur
	Ecrire(eur,“euros = ”,frcs, “francs”)
**Fin**


##### Algo3 
Lexique 
	PI : la constante réelle :=3.14159 
	p : 1 **réel** 
	**r : un réel**
Algorithme : 
Début 
	Ecrire(“Entrez votre rayon (cm)”) 
	Lire(r) 
	p← 2 * r * PI 
	Ecrire(“Le périmètre du cercle de rayon”, r, “cm est de ”,p, “cm”) 
Fin


#### 2.2 Opérateurs
1. 

| a                   | b   | après l'instruction     |
| ------------------- | --- | ----------------------- |
| 5                   | /   | a $\leftarrow$ 5        |
| 5                   | -1  | b $\leftarrow$ a - 6    |
| 6                   | -1  | a $\leftarrow$ a + 1    |
| 6                   | -4  | b $\leftarrow$ b * 4    |
| 4                   | -4  | a $\leftarrow$ -2 * b-4 |
| :CoTriangleWarning: | -4  | a $\leftarrow$ a/3      |

2. Non, car division réel affécté dans un entier
	1. a $\leftarrow$ a div 3



#### 2.3 Un classique
Algo d'échange : 
Lexique
	a,b,c : trois réel
Algo:
ecrire
c $\leftarrow$ a
a $\leftarrow$ b
b $\leftarrow$ a


a $\leftarrow$ a+b
b $\leftarrow$ a-b
a $\leftarrow$ a-b

a=3 b=5

a=3+5 = 8 , b=5
b=8-5=3, a =8
a=8-3=5, b=3







## Exercices






## À retenir
-
## Travail à faire
- QCM demain


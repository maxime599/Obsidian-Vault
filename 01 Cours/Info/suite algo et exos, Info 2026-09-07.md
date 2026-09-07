---
semestre: S1
type de cours: TD
date: 2026-09-07T16:00:00
End Date: 2026-09-07T17:30:00
Calendar Title: "[[01 Cours/Info/suite algo et exos, Info 2026-09-07|suite algo et exos, Info]]"
prof:
tags:
  - cours
  - Info
Concepts:
  - "[[Syntaxe et structure en algorithmique]]"
Ressources:
  - "[[Exercices_info1.pdf]]"
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
# suite algo


## Objectifs

-

## Notes





## Exercices
### 2.11 Secondes $\to$ h/m/s
Lexique:
	s_total : un entier
Algo:
Début
	Ecrire("Saisir un temps en secondes :")
	Lire(s_total)
	h $\leftarrow$ s_total div 3600
	s $\leftarrow$ s_total reste 3600 
	m $\leftarrow$ (s_total - 3600h - s)/60
	Ecrire(h, ":", m, ":", s)
Fin


### 2.8 TVA
Lexique:
	prix_ht : réel
	quantite : entier
	taux_TVA : réel
	prix_TTC : réel
Algo:
Début
	Ecrire("Entrer le prix, la quantité d'article commandé et le taux de TVA : ")
	Lire(prix_ht, quantite, taux_TVA)
	prix_TTC $\leftarrow$ prix_ht * quantite * (taux_TVA/100 + 1)
	Ecrire("Le prix TTC est ", prix_TTC)
Fin

### 2.10 Interpolation
Lexique:
	xA, yA, xB, yB, xC, yC, alpha 7 réels
Algo:
Début
	Ecrire("Donner les coordonées de A, B et xC")
	Lire(xA, yA, xB, yB, xC)
	alpha $\leftarrow$ (xC - xA) / (xB - xA)
	yC $\leftarrow$ alpha * yB + (1 - alpha) * yA
	Ecrire("L'ordonnée du point C est : ", yC)
Fin



## À retenir

## Travail à faire
- [x] Refait l'ex 10 de la manière du cours
- [x] Transformer en concept



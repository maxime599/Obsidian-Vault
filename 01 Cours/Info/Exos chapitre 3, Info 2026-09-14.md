---
semestre:
type de cours:
date: 2026-09-14T14:54:20
End Date: 2026-09-14T15:04:20
Calendar Title: "[[01 Cours/Info/Exos chapitre 3, Info 2026-09-14|Exos chapitre 3, Info]]"
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
# Exos chapitre 3


## Objectifs

-

## Notes


## Exercices
### 3.6
#### 1)
Lexique principal:
	{rôle : calcule la surface d’un disque de rayon r, 
	entrée : 1 réel (le rayon), 
	sortie : 1 réel (la surface)}
	Surface : la fonction (r : un réel) $\to$ un réel
	$~$
	{Rôle : Calcule et retourne le volume d'un cylindre en $u^3$
	E : 2 réels :  le rayon de la base, la hauteur en $u$
	S : 1 réel : le volume du cylindre en $u^3$}
	Volume_cylindre :  la fonction(r :  un réel, h : un réel) $\to$ un réel

	$~$
	PI : la constante réel := 3.1415926
	rayon, hauteur, volume : 3 réels


Algo principal:
Début
	Ecrire("Veuillez saisir le rayon et la hauteur du cylindre en cm")
	Lire(rayon, hauteur)
	volume $\leftarrow$ Volume_cylindre(rayon, hauteur)
	Ecrire("Le volume de votre cylindre est : " ,volume,"$cm^3$")



{Définition}
{Surface : la fonction (r : un réel) $\to$ un réel (dénie dans l'ex 3.3)}

Volume_cylindre :  la fonction(r :  un réel, h : un réel) $\to$ un réel
	Lexique local
		vol : 1 réel
	Algo local
	Début
		vol $\leftarrow$ Surface(r) * h
		Retourner vol
	Fin


#### 2)
Lexique principal:
	{Perimetre, rôle : calcule le périmètre d’un cercle de rayon r, 
	entrée : 1 réel (le rayon) en m, 
	sortie : 1 réel (le périmètre) en m}
	Perimetre: la fonction (r : un réel) $\to$ un réel
	$~$
	{Rôle : Calcule et retourne la distance parcourue par le vélo
	E : 1 réels :  le rayon de la roue en m
	1 entier :  le nombre de tours
	S : 1 réel : la distance parcourue en m}
	Distance :  la fonction(r :  un réel, nb_t : un entier) $\to$ un réel

	$~$
	PI : la constante réel := 3.1415926
	rayon : un réel
	nb_tours : un entier
	distance : un réel


Algo principal:
Début
	Ecrire("Veuillez saisir le rayon de la roue et le nombre de tours")
	Lire(rayon, nb_tours)
	distance $\leftarrow$ Distance(rayon, nb_tour)
	Ecrire("Vous avez parcouru ", distance, "m")



{Définition}
{Perimetre : la fonction (r : un réel) $\to$ un réel (dénie dans l'ex 3.3)}

Distance :  la fonction(r :  un réel, nb_t : un entier) $\to$ un réel
	Lexique local
		d : un réel
	Algo local
	Début
		d $\leftarrow$ Perimetre(r) * nb_tour
		Retourner d
	Fin




Lexique principal
	{R : calcule et renvoie un jour de l'année en déclinaison du soleil
	E : un entier, le jour de l'année
	S : un réel, la déclinaison du soleil}
	Dec : une fonction (j : un entier) $\to$ un réem
	$~$
	{R : calcul et renvoie la durée d'insolation en heure
	E : un entier, le jour de l'année
	un réel, la latitude en degré
	S : un réel, la durée d'insolation}
	Di : un fonction (j : un entier)

## À retenir
-
## Travail à faire
- [ ] finir l'ex 3.7



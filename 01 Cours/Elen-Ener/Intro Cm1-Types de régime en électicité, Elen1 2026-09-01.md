---
semestre: S1
date: 2026-09-01T11:00:00
End Date: 2026-09-01T12:00:00
Calendar Title: "[[01 Cours/Elen-Ener/Intro Cm1-Types de régime en électicité, Elen1 2026-09-01|Intro Cm1-Types de régime en électicité, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
  - "#physique"
Concepts:
  - "[[Types de régime en électicité]]"
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
# Intro Cm1-Types de régime en électicité




## Notes
Mon groupe de TP : Hugo Bruhier

Comment on est noté : 
- évales = TD, coef 0.8
- Deux devoirs surveillés, coef 1.5
- Chaque TP = prérequis en amont à travailler + petite intéro, coef 0.8
- Partiel de TP en novembre, coef 1.5
- Moyenne des comptes rendus de TP : coef 1



Ressources : [Lien vers les ressources](https://mood.univ-st-etienne.fr/course/view.php?id=4166|Lien vers tout les cours)



Il y a circulation d'un courant  $I$ en ampère $A$, si aux bornes d'une tension $U$ ou $E$ ou $V$ en Volt ($V$)

Différents types de régimes : 
- Le régime continu = tension constante et continue dans le temps
	Exemple : pile, batterie, Accumulateur
	Deux potentiels, un + et un -
	
- Le régime sinusoïdal = tension periodique, qui suit la fonction sinus 
	Exemple : l'électricité de chez nous

- Le régime quelconque, tout ce qui n'est pas les deux précédents


Dans le régime sinus :
- $V_{max}$ et $V_{max}$ = la tension max et min
- $T$ = la période
- Amplitude crêtes à crêtes = $V_{max}-V_{min}$ 
- Amplitude = $\frac{V_{max}-{V_{min}}}{2}$
- Fréquence = combien de périodes dans une seconde, se mesure en Hz. Relation entre fréquence f en Hz et période T en s : $f=\frac{1}{T}$
	En France, la fréquence est de 50Hz, donc la période est de $\frac{1}{50}=0.02s$
- Valeur crête : tension au max ou un min de la courbe sinus (325V chez EDF)
- Tension efficace : plus bas. Elle correspond à la tension continue qu'il faudrait pour avoir les mêmes performances/résultats 

- $V_{eff}=\frac{V_{crête}}{\sqrt{2}}$
- Pulsation d'un signal sinusoïdal ($\omega$): corespond au cercle trigo
	$\omega=2\pi*f$, en $\frac{rad}{s}$
- Donc pour le graphique sinusoïdal, on peut mettre l'axe des absicses en seconde ou en $rad$, où une période $T=\pi$
- $V(t)=V_{crêtes}*\sin(\omega*t)$
- On peut faire des sommes de tension (somme dans le temps de chaque point) mais pas de manière numérique




---
semestre: S1
type de cours: TD
date: 2026-10-21T08:07:52
End Date: 2026-10-21T09:37:52
Calendar Title: "[[01 Cours/Optique_géometrique/TD1, Optique_géometrique 2026-10-21|TD1, Optique_géometrique]]"
prof: Zgari
tags:
  - cours
  - Optique_géometrique
Concepts:
  - "[[Lois de Snell-Descartes et réflexion totale]]"
  - "[[Nature des objets, des images et foyers optiques]]"
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
# TD1


## Objectifs

-

## Notes


## Exercices
### Ex1
**1**
$n_{1}\sin(i_{1})=n_{2}\sin(i_{2})$
$i_{2} = \arcsin\left( \frac{1*\sin(34)}{1.5} \right) = 21.8°$

**2**
$n_{2}\sin(i_{1})=n_{1}\sin(i_{2})$
$i_{2}=\arcsin\left( \frac{1.5*\sin(34)}{1} \right) = 57°$
$n_{2}\sin(i_{l})=n_{1}\sin\left( \frac{\pi}{2} \right)$
$i_{l}= \arcsin\left( \frac{1*\sin\left( \frac{\pi}{2} \right)}{1.5} \right) = 41.8°$

**3**
$n_{v}\sin(i_{l})=n_{eau}\sin\left( \frac{\pi}{2} \right)$
$i_{l} = \arcsin\left( \frac{n_{eau}}{n_{v}} \right) =62.46°$


### Ex 2
**1**
$\tan(r)=\frac{8.2}{10} = 0.82$
$r = \arctan(0.82)=39.35°$

$n_{air}\sin(i)=n_{v}\sin(r)$
$n_{v}= \frac{n_{air}\sin(i)}{\sin(r)} = 1.55$

**2**
$n = \frac{c}{v} \implies v=\frac{c}{n_{v}}= \frac{3*10^8}{1.5}= 1.93*10^8 m*s^{-1}$

**3**
$n_{air}\sin(r')=n_{v}\sin(r)$
$r'= \arcsin\left( \frac{n_{v}\sin(r)}{n_{air}} \right) =$



### Ex 3
Voir schéma dans mes photos
**1**
$n_{a}\sin(i)=n\sin(r)$
$r = \arcsin\left( \frac{\sin(60)}{1.5} \right)=35.2$

**2**
$\sin(i-r)= \frac{d}{II'}$
$d = II'\sin(i-r)$
$II'= \frac{e}{\cos(r)}$
donc $d = \frac{e}{\cos(r)}$

**3**
Pour le premier dioptre :
objet = A
indice = $n_{a}$

image = $A_{i}$
indice = $n_{v}$

On a la relation : $\frac{n_{v}}{ \overline{OA_{i}}} - \frac{n_{a}}{ \overline{OA}}=0$



Pour le 2eme dioptre :
objet = $A_{i}$
indice = $n_{v}$

image = $A'$
indice = $n_{air}$

$\frac{n_{a}}{ \overline{O'A'}} - \frac{n_{v}}{ \overline{O'A_{i}}}=0$
$\frac{n_{a}}{ \overline{O'A'}} = \frac{n_{v}}{ \overline{O'A_{i}}}$
Comme na = 1, on obtient après avoir simplifié : 
$AA' = e\left( 1- \frac{1}{n} \right)$ (il faut reprendre)






$\frac{n_{v}}{ \overline{OA_{i}}} - \frac{n_{a}}{ \overline{OA}}$


## À retenir
-
## Travail à faire




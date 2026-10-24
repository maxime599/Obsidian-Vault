---
semestre: S1
type de cours: TD
date: 2026-10-01T08:00:00
End Date: 2026-10-01T09:30:00
Calendar Title: "[[01 Cours/Elen1/exos sur l'aop, Elen1 2026-10-01|exos sur l'aop, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Montages de base à Amplificateur Opérationnel (AOP)]]"
Ressources:
  - "[[Fascicule TD ELEN1 CITISE.pdf]]"
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
# exos sur l'aop


## Objectifs

-

## Notes


## Exercices
![[Fascicule TD ELEN1 CITISE.pdf#page=10&rect=32,444,550,766|Fascicule TD ELEN1 CITISE, p.10]]
![[Drawing 2026-10-01 08.37.17.excalidraw]]
Il y a Contre réaction $\implies e^+ = e^- \implies \epsilon = 0$ donc $I^- = 0$ et $I^+ = 0$

Théorème de superposition :
$U_{R_{1}} = V_{e_{2}} * \frac{R_{11}}{R_{11}+R_{12}} + V_{e_{1}} * \frac{R_{12}}{R_{11}+R_{12}}$
$U_{R_{1}} = 0.175V_{e_{2}} + 0.825V_{e_{1}}$


**2. Lois des mailles**
$V_{e_{1}}=U_{11}$
$V_{e_{2}}=U_{12}$
$V_{s}=U_{2}$


**3. Lois des noeuds**
$I_{2}+I_{11}+I_{12}=0$

**4. Lois d'Ohm**
$V_{e_{1}}=R_{11}*I_{11}$
$V_{e_{2}}=R_{12}*I_{12}$
$V_{s}=R_{2}I_{2}$

**5. Calcul**
$I_{11}= \frac{V_{e_{1}}}{R_{11}}$, $I_{12}= \frac{Ve_{2}}{R_{12}}$
$I_{2}=\frac{V_{s}}{R_{2}}$

Donc $\frac{V_{s}}{R_{2}}= -\frac{V_{e_{1}}}{R_{11}} - \frac{Ve_{2}}{R_{12}}$

$V_{s} = -R_{2}*(\frac{V_{e_{1}}}{R_{11}} + \frac{Ve_{2}}{R_{12}})$
C'est un sommateur inverseur

$V_{s}= -(10V_{e_{1}}+2V_{e_{2}})$




![[Fascicule TD ELEN1 CITISE.pdf#page=10&rect=297,471,544,607|Fascicule TD ELEN1 CITISE, p.10]]
Il y a Contre réaction donc on est en régime linéaire $\implies e^+ = e^- \implies \epsilon = 0$ donc $I^- = 0$ et $I^+ = 0$

**Pont diviseur :**
$e⁻=V_{s} * \frac{R_{1}}{R_{1}+R_{2}}$

$e^+= V_{e_{1}} * \frac{R_{12}}{R_{11}+R_{12}} + V_{e_{2}} * \frac{R_{11}}{R_{11}+R_{12}}$

$V_{s} * \frac{R_{1}}{R_{1}+R_{2}} = V_{e_{1}} * \frac{R_{12}}{R_{11}+R_{12}} + V_{e_{2}} * \frac{R_{11}}{R_{11}+R_{12}}$

$V_{s} = \frac{R_{1}+R_{2}}{R_{1}}(V_{e_{1}} * \frac{R_{12}}{R_{11}+R_{12}} + V_{e_{2}} * \frac{R_{11}}{R_{11}+R_{12}})$

$V_{s}=11\left( \frac{5}{6}V_{e_{1}} +\frac{1}{6}V_{e_{2}}\right)$
$= 9.17V_{e_{1}}+1.8V_{e_{2}}$

![[Drawing 2026-10-04 09.58.51.excalidraw]]

C'est un sommateur

## À retenir
-
## Travail à faire
- [x] Transformer en concept et reprendre les exos
- [x] Finir le dernier exos et faire les tracers avec r=5ko



---
semestre: S1
type de cours: CM
date: 2026-10-13T13:05:49
End Date: 2026-10-13T14:35:49
Calendar Title: "[[01 Cours/Elen-Ener/Les filtres actifs, Elen1 2026-10-13|Les filtres actifs, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse harmonique et diagrammes de Bode]]"
  - "[[Montages de base à Amplificateur Opérationnel (AOP)]]"
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
# Les filtres actifs


## Objectifs

-

## Notes
Rappel : 
![[Drawing 2026-10-08 08.55.23.excalidraw]]
![[Drawing 2026-10-13 13.08.11.excalidraw]]

Il y a contre-réaction, ......
$T_{dB} = 20 \log| -\frac{R_{2}}{R_{1}} * \frac{1}{1+j \tau \omega}|$
$= 20\log| \frac{R_{2}}{R_{1}}| + 20\log|\frac{1}{1+j \tau \omega}|$

Fréquence de coupure : 
$f_{c} = \frac{1}{2 \pi \tau}= \frac{1}{2\pi R_{2}C}$
Puis on trace le diagramme de gain en faisant la somme des deux courbes
Puis on fait le cas particulier si $\omega = \omega_{0}$
, on trouve qu'un gain réel de -3dB par rapport à la courbe asymptotique.



Autre exemple, avec le condensateur en série avec la première résistance :
![[Drawing 2026-10-15 09.50.14.excalidraw]]
Il y a contre réaction, etc etc...
On fait le montage équivalant.
$\frac{V_{s}}{V_{e}}= -\frac{Z_{2}}{Z_{1}}$ (dans le domaine complex evidement)

$Z_{1} = Z_{c}+Z_{R_{1}} = \frac{1}{j C \omega}+ R_{1}$
$Z_{2} = R_{2}$
Donc $\frac{V_{s}}{V_{e}} = -\frac{R_{2}}{\frac{1}{j C \omega}+ R_{1}}$
$= -\frac{R_{2}j C \omega}{R_{1}j C \omega+1}$
$= -R_{2}\frac{jC\omega}{1+j R_{1}C \omega}* \frac{R_{1}}{R_{1}}$
$= -R_{2} * \frac{jR_{1}C\omega}{1+jR_{1}C\omega}* \frac{1}{R_{1}}$
$-\frac{R_{2}}{R_{1}}* j \tau \omega * \frac{1}{j \tau \omega}$


 $T(dB)=20\log| -\frac{R_{2}}{R_{1}}| + 20\log| j \tau \omega| + 20\log| \frac{1}{1+j \tau \omega}|$


Le gain est donné par $20 \log |\frac{R_{2}}{R_{1}}|=10dB \implies \frac{R_{2}}{R_{1}}=\sqrt{ 10 }$
On pose un $R_{2}$ à $10k \Omega$ par exemple, donc $R_{1} = 3.1k \Omega$

On veut un $f_{C} = 5kHz$
On sait que $f_{C} = \frac{1}{2\pi R_{1}C} \implies C = \frac{1}{2\pi R_{1}f_{C}} = 12nF$

Si $\omega=\omega_{0}$
On sait que $\tau =\frac{1}{\omega_{0}} = \frac{1}{\omega}$
Donc $\omega \tau= 1$
Donc $T(dB)=20\log| \frac{R_{2}}{R_{1}}| + 20\log|j|+20\log| \frac{1}{1+j}|$
$=10+0-3=7dB$

## Exercices


## À retenir
-
## Travail à faire




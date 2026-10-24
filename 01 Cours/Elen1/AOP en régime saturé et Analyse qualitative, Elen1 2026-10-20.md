---
semestre: S1
type de cours: CM
date: 2026-10-20T13:34:44
End Date: 2026-10-20T15:04:44
Calendar Title: "[[01 Cours/Elen1/AOP en régime saturé et Analyse qualitative, Elen1 2026-10-20|AOP en régime saturé et Analyse qualitative, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Montages de base à Amplificateur Opérationnel (AOP)]]"
  - "[[Analyse harmonique et diagrammes de Bode]]"
  - "[[Analyse qualitative des filtres (circuits passifs et AOP)]]"
Ressources:
  - "[[AOP Saturation.pdf]]"
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
# AOP en régime saturé et Analyse qualitative


## Objectifs

-

## Notes
![[Pasted image 20261020133913.png]]{width=349}
En régime saturé, la sortie ne peux pas prendre autre chose que $+V_{sat}$ ou $-V_{sat}$

C'est un comparateur et il n'y a pas de contre-réaction

Si $V_e > V_{0} \implies V_s = +V_{sat}$
Si $V_e < V_{0} \implies V_s = -V_{sat}$


### Analyse qualitative pour des condensateur par ex
Méthode : on fais une analyse aux limites, donc si $\omega$ tant vers $+\infty$. On sait que pour un condensateur, $Z_c = \frac{1}{j\omega C} \implies Z_c \to 0$, il se comporte comme un interrupteur ouvert
quand $\omega \to +\infty$ et quand $\omega$ tend vers $0$, $Z_c \to +\infty$, il se comporte comme un interrupteur fermé.

Pour un montage CR, on peur en deduire que le montage va bloquer les basses fréquences et laisser passer les hautes fréquences, c'est un filtre passe-haut.



### 
On constate sur un montage :
1er essaie : 100Hz, pas de signal de sortie
2eme essaie : 100Hz, signal  10 fois supérieur au signal d'entrée

C'est donc un filtre passe-haut avec du de l'amplification donc du gain
On va donc avoir un condensateur, deux résistances et un AOP
Equation du passe haut : $T_{(j \omega)}= -\frac{R_{2}}{R_{1}} * j \tau \omega * \frac{1}{1+j \tau \omega}$

Le montage sera donc : 
![[Drawing 2026-10-15 09.50.14.excalidraw]] 
Le schéma équivalent est un inverseur. On peut donc vérifier à l'aide des calculs si notre schéma correspond bien à la consigne :
$\frac{V_{s}}{V_{e}} = -\frac{Z_{2}}{Z_{1}}$
$\frac{V_{s}}{V_{e}} = -R_{2} * \frac{1}{R_{1}+\frac{1}{jC \omega}}$
$=-R_{2} * \frac{jC \omega}{jR_{1}Cw+1}$
$= -\frac{R_{2}}{R_{1}}* \frac{jR_{1}C\omega}{1+jR_{1}C\omega}$
$= \frac{R_{2}}{R_{1}} * j \tau \omega * \frac{1}{1+j \tau \omega}$
Puis on fait le 20log| |, puis le schéma, puis le gain à la fréquence de coupure, puis on fait le cas particulier $\omega = \omega_{0}$ ($\tau=\frac{1}{\omega}\implies \tau=\frac{1}{\omega}\implies \omega \tau=1$) et on trouve un gain de -3dB par rapport à la courbe asymptotique.


## Exercices


## À retenir
-
## Travail à faire
- [ ] ajouter au concept
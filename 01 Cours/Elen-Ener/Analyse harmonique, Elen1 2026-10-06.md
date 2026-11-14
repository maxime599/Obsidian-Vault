---
semestre: S1
type de cours: CM
date: 2026-10-06T12:59:48
End Date: 2026-10-06T14:29:48
Calendar Title: "[[01 Cours/Elen-Ener/Analyse harmonique, Elen1 2026-10-06|Analyse harmonique, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse harmonique et diagrammes de Bode]]"
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
# Analyse harmonique


## Objectifs

-

## Notes
Cela consiste à étudier le comportement d'un circuit en régime établie lorsque celui ci est soumis à une tension **sinusoïdale pure**

Sois un circuit. On lui applique un signal d'entrée sinusoïdale $V_{e}(t)$. En sortie, on aura toujours un signal sinusoïdale, mais avec un amplitude différente et un déphasage (un dacalage à droite ou à gauche)
On va faire varier la fréquence du signal d'entré. On va ensuite tracer deux graphique, un représentant la variation de l'amplitude en fonction de la fréquence, et un représentant la variation du déphasage.

Quelques notions :
- Lois d'ohm en régime sinusoïdal$$U=Z*I$$
Où $Z$ est l'impedance du composant
Pour un condansateur, $Z_{c}= \frac{1}{C\omega}$
$\underline{Z_{c}} = -\frac{j}{C \omega}$
$|\underline{Z_{c}}|=\frac{1}{\omega}$
$arg(\underline{Z_{c}})=Q=- \frac{\pi}{2}$

Pour un inductance :
$\underline{Z_{c}}=j*L \omega$
$| \underline{Z_{C}}|=L \omega$
$arg=Q_{L}= \frac{\pi}{2}$

Pour une résistance :
$\underline{Z_{R}}=R$
$|\underline{Z_{R}}|=R$
$arg=Q_{R}=0$

Le gain : $20\log(amplification)$
Unité : Belle
on utilisera le decibel : $dB$


On fait varier la fréquence (ou $\omega$) de $V_{e}$ et on va faire pour chaque point 
Gain = $20\log |\frac{\underline{V_{s}}}{V_{e}}|$ en dB
Phase $Q=arg\left( \frac{\underline{V_{s}}}{V_{e}} \right)$, en rad ou deg
Et on va tracer sur deux diagrammes ces résultas : les diagrammes de Bode

Pour faire un tracer, on va utiliser du papier semi log, donc une échelle logarithique pour l'axe des absisses (la fréquence), où chaque graduation fait * 10


Dans un premier temps on va utiliser des circuits passifs


Exemple avec un circuit RC (R en haut et C à droite)
$\underline{V_{s}} = \underline{V_{e}} * \frac{\underline{Z_{C}}}{\underline{Z_{R}}+\underline{Z_{C}}}$
donc  $\frac{V_{s}}{V_{e}} = \frac{Z_{c}}{Z_{R}+Z_{C}}$
$\frac{V_{s}}{V_{e}} = \frac{1/jc\omega}{R+1/jc\omega}$ = $H(j \omega)$ ou $T(j \omega)$, qui s'appelles des fonctions de transfert

On va definir des termes élementaires dont on connaitra les diagrammes de Bode :
$G_{0},~j\tau \omega,~ \frac{1}{j\tau \omega},~1+\tau \omega,~ \frac{1}{1+j\tau \omega}$
avec $\tau$ : la constante de temps $RC$ ou $\frac{L}{R}$

$\frac{V_{s}}{V_{e}} = \frac{\frac{1}{jc\omega}}{R+\frac{1}{jc\omega}}$
On multiplie en haut et en bas par $jc \omega$
$\implies \frac{V_{s}}{V_{e}}= \frac{1}{jRC \omega+1} = \frac{1}{1+j\tau \omega}$

Exemple avec un circuit CR (C en haut et R à droite)
$V_{s}=V_{e} * \frac{Z_{R}}{Z_{R}+Z_{c}}$
$\frac{V_{s}}{V_{e}} = \frac{R}{R+ \frac{1}{jc \omega}} = \frac{jRC\omega}{jRC \omega+1}$ avec $\tau = RC$
$\frac{V_{s}}{V_{e}}= \frac{j\tau\omega}{1+j \tau \omega} = j \tau \omega * \frac{1}{1+j \tau \omega}$
$20\log\left(| \frac{V_{s}}{V_{e}} |\right) = 20\log(|j \tau \omega * \frac{1}{1+j \tau \omega}|)$
$|H(j \omega)|=20\log(|j \tau \omega|)+20 \log\left(| \frac{1}{1+j \tau \omega} |\right)$, où les deux termes soit connus


## Exercices


## À retenir
-
## Travail à faire

- [x] reprendre les exos


---
semestre: S1
type de cours: TD
date: 2026-10-12T11:05:02
End Date: 2026-10-12T12:35:02
Calendar Title: "[[01 Cours/Elen-Ener/Analyse harmonique suite, Elen1 2026-10-12|Analyse harmonique suite, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse harmonique et diagrammes de Bode]]"
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
# Analyse harmonique suite


## Objectifs

-

## Notes


## Exercices

![[Fascicule TD ELEN1 CITISE.pdf#page=16&rect=64,536,423,759|Fascicule TD ELEN1 CITISE, p.16]]

![[Drawing 2026-10-12 11.22.49.excalidraw]]

Fonction de tranfere pour le circuit RC avec les mêmes valeur que l'ex 5
$\underline{V_{s}} = \underline{V_{e}}* \frac{Z_{C}}{Z_{R}+Z_{C}}$ avec des barres en dessous des Z
$\frac{V_{s}}{V_{e}}= T(j \omega) = \frac{\frac{1}{j C \omega}}{R+\frac{1}{j C \omega}}$
$= \frac{1}{j \tau \omega}$

$f_{c}=\frac{1}{2\pi \tau}=723Hz$
$T_{dB}=20\log|T(j \omega)|= 20\log| \frac{1}{j \tau \omega}|$
cas particulier : si $\omega = \omega_{0}=w \tau=1$
$T_{j \omega}= \frac{1}{j+1}$
$T_{dB}=20 \log| \frac{1}{j +1}| = 20\log\left( \frac{1}{\sqrt{ 2 }} \right) = -3dB$

Dans les basses fréquences :
$20\log| \frac{V_{s}}{V_{e}}|=0$
$\implies V_{s} = V_{e}$ (avec toujours les barres)

Dans les hautes fréquences :
$20\log| \frac{V_{s}}{V_{e}}|<0$
$\implies V_{s} < V_{e}$ (avec toujours les barres)
C'est donc un filtre passe bas


cas particulier : si $\omega = \omega_{0}=w \tau=1$
$T_{j \omega}= \frac{1}{j+1}$
$arg(T(j \omega)) = arg(1)-arg(1+j) = -\frac{\pi}{4}$



### Ex6

![[Fascicule TD ELEN1 CITISE.pdf#page=18&rect=60,423,521,758|Fascicule TD ELEN1 CITISE, p.18]]
![[Drawing 2026-10-12 11.42.16.excalidraw]]

$V_{s}=V_{e}\frac{Z_{CR_{1}}}{Z_{R_{2}}+Z_{C}+Z_{R_{1}}}$
$\frac{V_{s}}{V_{e}}= \frac{ \frac{1}{j C \omega}+R_{1} }{R_{2}+ \frac{1}{jC\omega}+R_{1}}$
$= \frac{R_{1}j C \omega+1}{(R_{1}+R_{2})jC\omega+1}$
Si on pose $\tau_{1}=R_{1}C,~f_{C_{1}}= \frac{1}{2 \pi \tau_{1}} = 159Hz$
Si on pose $\tau_{2}=(R_{1}+R_{2})C,~f_{C_{2}}= \frac{1}{2 \pi \tau_{2}} = 28Hz$
Avec toujours les barres

$T(j \omega)= \frac{1+j\tau_{1}\omega}{1+j \tau_{2}\omega}$
$= (1+j \tau_{1}\omega) * \frac{1}{1+j \tau_{2} \omega}$
Donc $T_{dB}=20\log|1+j \tau_{1} \omega| + 20\log| \frac{1}{1+j \tau_{2}\omega|}$



### Ex7
![[Fascicule TD ELEN1 CITISE.pdf#page=20&rect=40,420,542,765|Fascicule TD ELEN1 CITISE, p.20]]
Il nous faut deux fréquences de coupures
Termes élémentaires : $j \tau \omega * \frac{1}{1+j \tau \omega}*\frac{1}{1+j \tau \omega}$
$f_{c_{1}} = 100Hz = \frac{1}{2 \pi \tau_{1}} \implies \tau_{1}=0.00159$
$f_{c_{2}} = 10000Hz = \frac{1}{2 \pi \tau_{2}} \implies \tau_{2}=0.0000159$

$20\log|T_{j \omega}|= 20\log|j\tau_{1} \omega| + 20\log| \frac{1}{j \tau_{1}\omega}| + 20\log| \frac{1}{j \tau_{2}\omega}|$
$T_{j \omega} = j \tau_{1} \omega * \frac{1}{1+j \tau_{1} \omega}*\frac{1}{1+j \tau_{2} \omega}$
$=\frac{j\tau_{1}\omega}{1+j_{1} \tau \omega} * \frac{1}{j \tau_{2}\omega}$ = passe haut + passe bas

![[Drawing 2026-10-12 12.14.34.excalidraw]]

$\frac{V_{\text{int}}}{V_{e}} = \frac{Z_{R_{1}}}{Z_{R_{1}}+Z_{C}}= \frac{jR_{1}C_{1}\omega}{1+j R_{1}C_{1}\omega}$
$V_{\text{int}} = V_{e}* \frac{j\tau_{1}\omega}{1+j \tau_{1}\omega}$

$\frac{V_{s}}{V_{\text{int}}} = \frac{Z_{R_{2}}}{Z_{R_{2}}+Z_{C_{2}}} = \frac{1}{1+j\tau_{2}\omega}$
$V_{\text{int}}=V_{s}*(1+ j \tau_{2}\omega)$
Donc $\frac{V_{s}}{V_{e}} =\frac{j\tau_{1}\omega}{1+j_{1} \tau \omega} * \frac{1}{j \tau_{2}\omega}$
	


## À retenir
-
## Travail à faire




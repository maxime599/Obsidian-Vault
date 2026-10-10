---
semestre: S1
type de cours: TD
date: 2026-10-08T08:08:55
End Date: 2026-10-08T09:38:55
Calendar Title: "[[01 Cours/Elen1/Analyse harmonique, Elen1 2026-10-08|Analyse harmonique, Elen1]]"
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
# Analyse harmonique


## Objectifs

-

## Notes
Diagramme de Bode : 
On fait varier la fréquence et pour une ou plusieurs fréquences, le montage va réagir différement

La fréquence de coupure : $fc = \frac{1}{2 \pi \tau}$. il y aura des réactions différentes avant et après cette fréquence

$2 \pi f_c \tau =1$
$\omega_c \tau = 1$




## Exercices
![[Drawing 2026-10-08 08.16.59.excalidraw]]
On a $|T_{1}(j \omega)|= G_{0} \implies 20\log|T_{1}(j \omega)| =G_{0}$
$arg(T_{1}(j \omega))=0$




![[Drawing 2026-10-08 08.24.23.excalidraw]]
$|T_{2}(j \omega)|= \omega \tau$
Pour le gain : $T_{2}(dB)=20\log|T_{2}(\omega j)|$
$= 20\log(\omega \tau) = 20\log(\omega)+20\log(\tau)$, ou $\omega$ est la variable et $\tau$ est la constante
On a une expression de la forme $y =ax+b$
On a donc une pente de 20 dB par décade

$arg(T_{2}(j \omega))= \frac{\pi}{2}$




![[Drawing 2026-10-08 08.34.15.excalidraw]]
$|T_{3}(j \omega)| = \frac{1}{\tau \omega}$
$20\log|T_{3}(j \omega)|=20\log\left(  \frac{1}{\tau \omega} \right)$
$20\log\left( \frac{1}{\tau \omega} \right)=-20\log(\omega)-20\log(\tau)$


$arg(T_{3}(j \omega)) = arg(1)-arg(j \tau \omega)$
$=0- \frac{\pi}{2}$
$=-\frac{\pi}{2}$



![[Drawing 2026-10-08 08.41.36.excalidraw]]

Si $j \tau \omega\ll\ll{1} \implies T_{4}(j \omega)=1$
Si $\tau \omega\ll\ll_{1} \implies \frac{\omega}{\omega}_{c}\ll\ll{1} \implies \omega\ll\ll \omega_{c}$

$|T_{4}(j \omega)|= 1\implies T_{4}dB=20\log(1)=0$
$arg(T_{4}(j \omega))=0$



![[Drawing 2026-10-08 08.49.43.excalidraw]]
Si $j \tau \omega\ll\ll_{1} \implies T_{5}(j \omega)=1$
$\omega \tau \ll\ll{1} \implies \frac{\omega}{\omega}_{c}\ll\ll1 \implies \omega \ll\ll \omega_{0}$
$20\log|T_{5}(j \omega)|=20\log(1)=0$
$arg(T_{5})=arg(1)=0$

Si $j \tau \omega\gg\gg{1}1 \implies T_{5} = \frac{1}{j \tau \omega}$

Voir termes précedents




![[Drawing 2026-10-08 08.55.23.excalidraw]]





![[Drawing 2026-10-08 08.41.36.excalidraw]]
![[Fascicule TD ELEN1 CITISE.pdf#page=16&rect=52,409,528,767|Fascicule TD ELEN1 CITISE, p.16]]
$\underline{V_{s}} = \underline{V_{e}}* \frac{Z_{R}}{Z_{R}+Z_{C}}$ avec les barres en dessous des Z
$\frac{V_{s}}{V_{e}} = \frac{Z_{R}}{Z_{R}+Z_{C}} \implies T(j \omega)= \frac{R}{R+ \frac{1}{j \tau \omega}}$ (car on remplace par les valeur d'Impédance complexe, voir tableau)

$T(j \omega)= \frac{jRC\omega}{1+jRC\omega}$
$= \frac{j\tau \omega}{1+j\tau \omega}$
$=j \tau \omega * \frac{1}{1+j \tau \omega}$

$fc = \frac{1}{2\pi \tau}= \frac{1}{2\pi RC} = 723Hz$


![[Drawing 2026-10-08 09.09.12.excalidraw]]
$T(dB)=20\log|T(j \omega)| = 20\log|j \tau \omega * \frac{1}{1+j \tau \omega}|$
$=20\log|j \tau \omega| +20\log| \frac{1}{1+j \tau \omega}|$
bleu + vert = rouge

On a donc une aténution on dessous de la fréquence de coupure. En dessous de cette fréquence, on est dans les basses fréquences, et au dessus dans les hautes fréquences. Ce montage est donc filtre passe haut

Cas particulier : si $\omega = \omega_{c}$
Rappel : $\tau = \frac{1}{\omega_{c}}$
Dans ce cas, $\omega\tau = 1$
$T(j \omega)= \frac{j}{1+j}$
Donc $|T(j \omega)| = \frac{1}{\sqrt{ 2 }}$
$\implies 20\log|T(j \omega)| =20\log\left( \frac{1}{\sqrt{ 2 }} \right) = -3dB$
Donc le tracé réel du montage passe en dessous du tracé rougeq 

## À retenir
-
## Travail à faire




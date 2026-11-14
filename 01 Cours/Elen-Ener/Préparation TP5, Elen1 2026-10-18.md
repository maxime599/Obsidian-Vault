---
semestre: S1
type de cours: Maison
date: 2026-10-18T11:06:06
End Date: 2026-10-18T11:36:06
Calendar Title: "[[01 Cours/Elen-Ener/Préparation TP5, Elen1 2026-10-18|Préparation TP5, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse harmonique et diagrammes de Bode]]"
Ressources:
  - "[[TP N°5 elen.pdf]]"
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
# Préparation TP5


## Objectifs

-

## Notes
### **1 : Rappeler les définitions suivantes**

- **Quadripôle** : Réseau électrique à quatre bornes (deux d'entrée, deux de sortie) permettant de modéliser le transfert d'un signal.
- **Réponse fréquentielle** : Représentation de la fonction de transfert complexes $\underline{H}(j\omega)$ en fonction de la fréquence (ou de la pulsation $\omega$).
- **Diagramme de Bode en gain** : Graphe représentant le gain en décibels $G_{dB}(\omega) = 20 \log_{10} \vert{}\underline{H}(j\omega)\vert{}$ en fonction du logarithme de la fréquence ou de la pulsation.
- **Diagramme de Bode en phase** : Graphe représentant la phase $\phi(\omega) = \arg(\underline{H}(j\omega))$ en radians ou degrés en fonction de la fréquence en échelle logarithmique.
- **Fréquence de coupure** ($f_c$) : Fréquence pour laquelle le gain en tension chute de $3\text{ dB}$ par rapport au gain maximal ($G(f_c) = \frac{G_{\max}}{\sqrt{2}}$).
- **Décade** : Intervalle de fréquence séparant deux valeurs dans un rapport 10 ($f_2 = 10 \cdot f_1$)


### Filtre RC
$\underline{V_{s}} = \underline{V_{e}} * \frac{\underline{Z_{C}}}{\underline{Z_{R}}+\underline{Z_{C}}}$
donc  $\frac{V_{s}}{V_{e}} = \frac{Z_{c}}{Z_{R}+Z_{C}}$
$\frac{V_{s}}{V_{e}} = \frac{\frac{1}{jc\omega}}{R+\frac{1}{jc\omega}}$
On multiplie en haut et en bas par $jc \omega$
$\implies \frac{V_{s}}{V_{e}}= \frac{1}{jRC \omega+1} = \frac{1}{1+j\tau \omega}$![[Pasted image 20261018111459.png]]



### Filtre CR
$V_{s}=V_{e} * \frac{Z_{R}}{Z_{R}+Z_{c}}$
$\frac{V_{s}}{V_{e}} = \frac{R}{R+ \frac{1}{jc \omega}} = \frac{jRC\omega}{jRC \omega+1}$ avec $\tau = RC$
$\frac{V_{s}}{V_{e}}= \frac{j\tau\omega}{1+j \tau \omega} = j \tau \omega * \frac{1}{1+j \tau \omega}$
$20\log\left(| \frac{V_{s}}{V_{e}} |\right) = 20\log(|j \tau \omega * \frac{1}{1+j \tau \omega}|)$
$|H(j \omega)|=20\log(|j \tau \omega|)+20 \log\left(| \frac{1}{1+j \tau \omega} |\right)$,


![[Drawing 2026-10-08 09.09.12.excalidraw]]

### Filtre RL
$V_{s}=V_{e} * \frac{Z_{L}}{Z_{L}+Z_{R}}$
$H(j\omega)= \frac{jL\omega}{jL\omega+R}$
$= \frac{j\tau \omega}{j\tau \omega+1} = j \tau \omega * \frac{1}{1+j \tau \omega}$
$20\log\left(| \frac{V_{s}}{V_{e}} |\right) = 20\log(|j \tau \omega * \frac{1}{1+j \tau \omega}|)$
$|H(j \omega)|=20\log(|j \tau \omega|)+20 \log\left(| \frac{1}{1+j \tau \omega} |\right)$,


![[Drawing 2026-10-08 09.09.12.excalidraw]]


## Exercices


## À retenir
-
## Travail à faire




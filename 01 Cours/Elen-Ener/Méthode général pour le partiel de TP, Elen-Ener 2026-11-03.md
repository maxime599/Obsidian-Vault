---
semestre: S1
type de cours: CM
date: 2026-11-03T13:33:11
End Date: 2026-11-03T14:33:11
Calendar Title: "[[01 Cours/Elen-Ener/Méthode général pour le partiel de TP, Elen-Ener 2026-11-03|Méthode général pour le partiel de TP, Elen-Ener]]"
prof: Marc Jamond
tags:
  - cours
  - Elen-Ener
Concepts:
  - "[[Analyse harmonique et diagrammes de Bode]]"
  - "[[Méthode expérimentale de caractérisation des filtres et fréquence de coupure]]"
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
# Méthode général pour le partiel de TP


## Objectifs

-

## Notes
### Méthode determination d'une fréquence de coupure sur un montage inconnu
**1. faire un essai en BF (ex 100Hz)**
- Si amplification $\rightarrow$ on oriente vers un Passe Bas
- Si atténuation $\rightarrow$ on oriente vers un Passe Haut

**2. Faire un essai en HF (ex 10kHz)**
- Soit atténuation $\rightarrow$  c'est un passe bas
- Soit amplification $\rightarrow$ c'est passe haut

**3. On se place dans la bande passante** et on determine l'amplification (Attention, pas le gain, il faut déterminer $\frac{V_{S}}{V_{e}}$, par exemple on trouve 10)

Si c'est un passe bas : 
Gain = $20\log \left\lvert  \frac{V_{s}}{V_{e}}  \right\rvert = 20\log \lvert \text{Ampli} \rvert 20\log \left\lvert  \frac{1}{1+j\tau \omega}  \right\rvert$
Si c'est un passe haut : 
Gain = $20\log \left\lvert  \frac{V_{s}}{V_{e}}  \right\rvert = 20\log \lvert \text{Ampli} \rvert+20\log \lvert j \tau \omega \rvert+20\log \left\lvert  \frac{1}{1+j\tau \omega}  \right\rvert$

**4. On cherche la fréquence de coupure $fc$**
Or $\tau=1 / \omega_{0}$, à la fréquence de coupure $\omega=\omega_{0} \implies \tau=\frac{1}{\omega}$

On remplace $\tau \omega$ par 1 dans les realtions précedentes et adapté à l'amplification préalablement déterminée
Si c'est un PB : $20\log \left\lvert  \frac{V_{s}}{V_{e}}  \right\rvert = 20\log \lvert 10 \rvert+20\log \left\lvert  \frac{1}{1+j}  \right\rvert$
$= 20+ -3 = 17dB$

Donc dans ce cas, $20\log\left( \frac{V_{s}}{V_{e}} \right) = \frac{17}{20} \implies V_{s}=V_{e}*10^{17/20}$
On choisit une valeur pour $V_{e}$ et en s'assurant sur $V_{s}$ est toujours sinusoïdal et on fait varier la fréquence jusqu'à ce que $V_{s}= V_{e}*10^{17/20} = 1*7.08V$. Si on trouve une tension de 7.08V, alors on à trouver la fréquence de coupure (Attention, ici c'est un exemple)


Si c'est un PH : 
$$20\log \left\lvert  \frac{V_{s}}{V_{e}}  \right\rvert = 20\log \lvert \text{ampli} \rvert+20\underbrace{ \log \lvert j \rvert }_{ = 0 }+20\log \left\lvert  \frac{1}{1+j}  \right\rvert$$
On retombe sur la calcul précédent


## Exercices


## À retenir
-
## Travail à faire
- [x] revoir et ajouter aux concepts



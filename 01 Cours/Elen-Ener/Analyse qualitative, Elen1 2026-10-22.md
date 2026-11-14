---
semestre: S1
type de cours: TD
date: 2026-10-22T11:19:54
End Date: 2026-10-22T12:49:54
Calendar Title: "[[01 Cours/Elen-Ener/Analyse qualitative, Elen1 2026-10-22|Analyse qualitative, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Analyse harmonique et diagrammes de Bode]]"
  - "[[Montages de base à Amplificateur Opérationnel (AOP)]]"
  - "[[Analyse qualitative des filtres (circuits passifs et AOP)]]"
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
# Analyse qualitative


## Objectifs

-

## Notes
### Analyse qualitative pour des condensateur
Méthode : on fais une analyse aux limites, donc si $\omega$ tant vers $+\infty$. On sait que pour un condensateur, $Z_c = \frac{1}{j\omega C} \implies Z_c \to 0$, il se comporte comme un interrupteur ouvert
quand $\omega \to +\infty$ et quand $\omega$ tend vers $0$, $Z_c \to +\infty$, il se comporte comme un interrupteur fermé.

Pour un montage CR, on peur en deduire que le montage va bloquer les basses fréquences et laisser passer les hautes fréquences, c'est un filtre passe-haut.


### Analyse qualitative pour des bobines
On sait que pour une bobine, $Z_L = j\omega L \implies Z_L \to +\infty$ quand $\omega \to +\infty$, il se comporte comme un interrupteur fermé
et quand $\omega$ tend vers $0$, $Z_L \to 0$, il se comporte comme un interrupteur ouvert.


### Exemple pour un schéma CR
En basses fréquences, le condensateur se comporte comme un interrupteur ouvert, donc le montage va bloquer les basses fréquences. $V_{s}=0$
En hautes fréquences, le condensateur se comporte comme un interrupteur fermé, donc le montage va laisser passer les hautes fréquences. $V_{s}=V_{e}$
C'est donc un filtre **passe-haut**


### Exemple pour un schéma RC
En basses fréquences : c'est un interrupteur fermé donc la résistance n'est pas alimentée donc $V_{s}= V_{e}$

En hautes fréquences : c'est un interrupteur ouvert donc la résistance est alimentée par $V_{e}$ donc $V_{s}=0$
Il laisse donc passer les basses fréquences et bloque les hautes fréquences, c'est un filtre **passe-bas**


### Avec un AOP
![[Drawing 2026-10-22 11.30.12.excalidraw]]
En basses fréquences, le condensateur se comporte comme un interrupteur ouvert, on a donc pas de $V_{e}$ en entré, donc $V_{s}=0$

En hautes fréquences, le condensateur se comporte comme un interrupteur fermé, on a donc $V_{e}$ en entré, donc $V_{s} = -\frac{R_{2}}{R_{1}} * V_{e}$




![[Drawing 2026-10-22 11.33.01.excalidraw]]
En basses fréquences, le condensateur se comporte comme un interrupteur ouvert, on a donc $V_{e}$ en entré, donc $V_{s}= -\frac{R_{2}}{R_{1}} * V_{e}$

En hautes fréquences, le condensateur se comporte comme un interrupteur fermé. Le condensateur court-circuite la résistance $R_{2}$.Avec la lois des mailles, on a $V_{s}+\epsilon = 0$, donc $V_{s}=0$

C'est donc un filtre passe bas



![[Drawing 2026-10-22 11.38.47.excalidraw]]
Comme on a deux fréquences de coupures, on a trois intervalles de fréquences : 
- En basses fréquences
- En hautes fréquences
- En hautes fréquences pour $f_{b}$ et en basses fréquences pour $f_{h}$

**En basses fréquences**, le condensateur se comporte comme un interrupteur ouvert, on a donc pas de $V_{e}$ en entrée, donc $V_{s}=0$ : 

**En hautes fréquences**, les condensateurs se comportent comme des interrupteurs fermés, le condensateur $C_{2}$ court-circuite la résistance $R_{2}$. Avec la loi des mailles, on a $V_{s}+\epsilon = 0$, donc $V_{s}=0$

**Entre les deux** : 
- Deux cas
  - Si $f_{1} < f_{2}$ : le condensateur $C_{1}$ se comporte comme un interrupteur fermé $C_{2}$ comme un interrupteur ouvert. On a donc $V_{s} = -\frac{R_{2}}{R_{1}} * V_{e}$

  - Si $f_{1} > f_{2}$ : le condensateur $C_{1}$ se comporte comme un interrupteur ouvert $C_{2}$ comme un interrupteur fermé. On a donc $V_{s} = 0$. C'est absurde car ce n'est pas le rôle d'un passe bande. 

Donc on doit avoir $f_{1} < f_{2}$ pour que le montage soit un passe bande. 



## Exercices


## À retenir
-
## Travail à faire
- [x] ajouter aux concepts



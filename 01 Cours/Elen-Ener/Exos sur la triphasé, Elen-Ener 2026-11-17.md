---
semestre: S1
type de cours: TD
date: 2026-11-17T18:04:52
End Date: 2026-11-17T19:34:52
Calendar Title: "[[01 Cours/Elen-Ener/Exos sur la triphasé, Elen-Ener 2026-11-17|Exos sur la triphasé, Elen-Ener]]"
prof: Marc Jamond
tags:
  - cours
  - Elen-Ener
Concepts:
  - "[[Systèmes triphasés (Tensions simples et composées)]]"
Ressources:
  - "[[ENER1 triphasé.pdf]]"
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
# Exos sur la triphasé


## Objectifs

-

## Notes


## Exercices
### Ex2
![[Drawing 2026-11-17 17.10.52.excalidraw]]
Le courant circulant dans les éléments est appelé courant de phase $J$, et les courants dans les fils sont noté $I$

En étoile : 
- chacune des résistances est soumise à une tension simple $V$
- $I=J$
- Puissance totale = $3P_{1R} = 3*V*J*\cos \varphi=\frac{3UI}{\sqrt{ 3 }}\cos \varphi = UI\sqrt{ 3 }\cos(\varphi)$ 
- Qtotal = $3*Q_{1R}=3VJ\sin \varphi=UI\sqrt{ 3 }\sin \varphi$ = 0
- $V=RJ\implies J=\frac{V}{R}\implies I=23A$


En triangle :
- chacune des résistances est soumise à une tension composée $U$
- $I=J\sqrt{ 3 }$
- Puissance totale = $3P_{1R} = 3*U*J*\cos \varphi = \frac{3UI}{\sqrt{ 3 }}\cos \varphi = UI\sqrt{ 3 }\cos \varphi$ 
- Qtot = $3Q_{1R}=3*U*J*\sin \varphi=UI\sqrt{ 3 }\sin \varphi$ = 0
- $U=R*J \implies U=\frac{R*I}{\sqrt{ 3}}\implies I=\frac{\sqrt{ 3 }U}{R}=69.3A$

Donc un couplage de résistance ne consomme pas de puissance réactive Q



### Ex4
![[ENER1 triphasé.pdf#page=14&rect=57,351,525,611|ENER1 triphasé, p.14]]
![[Drawing 2026-11-17 17.32.55.excalidraw]]
On a $\lvert \underline{I}_{1} \rvert=\lvert \underline{I}_{2} \rvert=\lvert \underline{I}_{3} \rvert = I$
$\underline{Z}_{eq} = Z_{R}+Z_{C} = r+1\tau \omega=50+j_{0}.1*2*\pi*50 = 50+10\pi j = 59e^{0.56j}$
$\lvert \underline{I} \rvert =\frac{\lvert \underline{V} \rvert}{\lvert \underline{Z_{eq}} \rvert} = \frac{230}{59}=3.9A \implies I=3.9A$

$P = UI\sqrt{ 3 }\cos \varphi  = 400*3.9\sqrt{ 3 }\cos(0.56) = 2289W$
$P=\frac{3}{2}R_{mesuré}I^2 = \frac{3}{2}*100*3.9^2 = 2282W$
$P=3*P_{1element}=3*VJ\cos \varphi=3*230*3.9\cos (0.56) = 2280W$

$Q=UI\sqrt{ 3 }\sin \varphi = 400*3.9*\sqrt{ 3 }*\sin(0.56) = 1435VAR$
$Q=3*Q_{1element}=3*VJ\sin \varphi = 3*VI\sin \varphi = 3*230*3.9*\sin(0.56) = 1429VAR$
$Q=3Q_{1element} = 3L\omega*J^2 = 3L\omega I^2 = 3*0.1*2*\pi*50*3.9^{2} =1433VAR$

$S=\sqrt{ P^2+ Q^2}$

$k=\cos \varphi=\cos(0.56) = 0.85$

## À retenir
-
## Travail à faire
- [x] comprendre



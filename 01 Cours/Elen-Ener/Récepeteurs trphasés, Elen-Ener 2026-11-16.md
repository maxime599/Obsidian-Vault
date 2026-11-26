---
semestre: S1
type de cours: CM
date: 2026-11-16T13:30:06
End Date: 2026-11-16T14:30:06
Calendar Title: "[[01 Cours/Elen-Ener/Récepeteurs trphasés, Elen-Ener 2026-11-16|Récepeteurs trphasés, Elen-Ener]]"
prof: Marc Jamond
tags:
  - cours
  - Elen-Ener
Concepts:
  - "[[Systèmes triphasés (Tensions simples et composées)]]"
  - "[[Couplages des récepteurs triphasés équilibrés (Étoile et Triangle)]]"
  - "[[Puissances en régime triphasé et relèvement du facteur de puissance]]"
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
# Récepeteurs trphasés


## Objectifs

-

## Notes
On souhaite des récépteurs équilibrés. Les 3 éléments le composant sont identiques. On distingue 2 types de couplage : le couplage étoile et le couplage triangle.
![[ENER1 triphasé.pdf#page=5&rect=57,210,508,351|ENER1 triphasé, p.5]]
Chaque élément est soumis à une tension simple V de 230V
Chaque élément est parcouru par un courant de phase J
Les conducteurs du réseau sont parcourus par un courant de ligne I
Ici , $I=J$


![[ENER1 triphasé.pdf#page=7&rect=64,303,566,447|ENER1 triphasé, p.7]]Chaque élément est soumis à une tension composée U de 400V
$U=\sqrt{ 3 }V$
$I=\sqrt{ 3 }J$

Les puissances misent en jeux :
![[Drawing 2026-11-16 13.36.59.excalidraw]]

- **Puissance active** (en W) : $P = \sqrt{3} U I \cos\varphi$
- **Puissance réactive** (en VAR) : $Q = \sqrt{3} U I \sin\varphi$
- **Puissance apparente** (en VA) : $S = \sqrt{3} U I$
- **Facteur de puissance** : $k = \frac{P}{S} = \cos\varphi$



## Exercices


## À retenir
-
## Travail à faire




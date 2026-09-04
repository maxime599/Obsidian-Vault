---
semestre:
type de cours:
date: 2026-09-04T15:05:00
End Date: 2026-09-04T16:35:00
Calendar Title: "[[01 Cours/Méthodologie_scientifique/Apprendre à apprendrer, Méthodologie_scientifique 2026-09-04|Apprendre à apprendrer, Méthodologie_scientifique]]"
prof: Gravier
tags:
  - cours
  - Méthodologie_scientifique
Concepts:
  -
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
# Apprendre à apprendrer

## Objectifs

-

## Notes
### Les 5 niveaux savoir
1. Reconnaitre
2. Restituer
3. Expliquer
4. Utiliser
5. Transférer/Adapter

Restituer son cours $\neq$ avoir une bonne note, savoir son cours
Il faut savoir mobiliser ses connaissances

### Méthodes d'apprentissage
Il ne faut pas juste appendre les connaissances, il faut les réviser
Travailler longtemps $\neq$ travailler bien

Il n'existe pas de méthodes miracles, il faut tester pour trouver ce qui nous correspond


#### Fausses bonnes idées
- Juste relier son cours (on ne travaille que les premiers niveaux de savoir, mais on n'apprend pas à mobiliser nos connaissances)
- Copier au propre (non efficace trop robotisé, même chose que de relire son cours)
- Apprendre par cœur (indispensable pour les def et les formules, mais insuffisant pour expliquer et transférer)
- Faire des exos avec la correction à côté (reconnaitre un raisonnement $\neq$ le produire soi-même)
- Faire des fiches très sophistiquées (ça prend un temps énorme)

Il ne faut pas penser qu'il faut souffrir pour apprendre efficacement


#### Le modèle central de l'apprentissage
1. Recevoir (être exposé au contenu)
2. Sélectionner (Identifier l'essentiel)
3. Reformuler (Reconstruire avec ces mots)
4. Organiser (relier les idées)
5. Se tester (produire sans la réponse)
6. Réactiver (Revenir dans le temps)


#### Pourquoi prendre des notes en cours
pour se mettre dans une posture active

Le point de départ :
- commencer à cibler les éléments importants du cours
- soutenir son attention
- commencer à apprendre la matière
- commencer à structurer son cours






## Exercices


## À retenir
-
## Travail à faire




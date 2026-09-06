---
type: concept
tags:
  - concepts
  - Méthodologie_scientifique
  - methodologie_scientifique/methode
MOC:
  - "[[MOC Methode]]"
date_creation: 2026-09-06
Ressources:
---
# Méthodes d’apprentissage efficaces

> [!info] Définition courte  
> Les stratégies qui permettent d’apprendre durablement et de mobiliser ses connaissances.

## Explication intuitive

Il ne suffit pas d’apprendre, il faut réviser, s’entrainer, et tester différentes méthodes pour trouver ce qui fonctionne pour soi.

## Fonctionnement

- Réviser régulièrement
- Se tester sans support
- Varier les méthodes
- Privilégier la compréhension à la simple mémorisation

## Exemple simple

Faire des exercices sans regarder la correction, expliquer un concept à quelqu’un d’autre, créer des cartes mémoire.


# Fausses bonnes idées en apprentissage

> [!info] Définition courte
> Méthodes répandues mais peu efficaces pour apprendre en profondeur.

## Explication intuitive

Certaines pratiques semblent utiles mais n’aident pas vraiment à apprendre durablement ou à mobiliser ses connaissances.

## Fonctionnement

- Relire son cours sans s’interroger
- Copier au propre sans réflexion
- Apprendre par cœur sans comprendre
- Faire des exercices avec la correction sous les yeux
- Faire des fiches trop sophistiquées

## Exemple simple

Relire plusieurs fois un chapitre sans jamais essayer de l’expliquer à voix haute ou de faire des exercices sans aide.

## Concepts liés

- [[Les 5 niveaux de savoir]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

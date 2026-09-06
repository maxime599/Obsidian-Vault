---
type: concept
tags:
  - concepts
  - Méthodologie_scientifique
  - Méthodologie_scientifique/théorie
MOC:
  - "[[MOC Théorie]]"
date_creation: 2026-09-06
Ressources:
---
# Les 5 niveaux de savoir

> [!info] Définition courte  
> Les cinq étapes de maîtrise d’un savoir, du plus simple au plus complexe.

## Explication intuitive

Ces niveaux permettent de situer où on en est dans l’apprentissage d’un concept. Ils vont de la simple reconnaissance à la capacité de transférer ses connaissances dans de nouveaux contextes.

## Fonctionnement

1. Reconnaitre
2. Restituer
3. Expliquer
4. Utiliser
5. Transférer/Adapter

## Exemple simple

- Reconnaitre une formule dans un QCM.
- Restituer la définition d’un concept.
- Expliquer pourquoi une méthode fonctionne.
- Utiliser une formule pour résoudre un exercice.
- Adapter une méthode à un problème inédit.

## Concepts liés

- [[Méthodes d’apprentissage efficaces et fausses bonnes idées]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

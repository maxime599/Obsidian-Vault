---
type: concept
matière: methodologie_scientifique
tags:
  - concepts
  - methodologie_scientifique
MOC:
date_creation: 2026-09-02
Ressources:
---
# Techniques d'apprentissage et rappel actif

> [!info] Définition courte
> Le **rappel actif** (*Active Recall*) est une méthode cognitive d'apprentissage fondée sur l'effort délibéré de restituer une information de mémoire sans support, combinée à une pratique régulière pour maximiser la rétention à long terme.


## 1. Les 4 piliers d'un apprentissage efficace

1. **Régularité** : Travailler de manière distribuée dans le temps au lieu de concentrer l'effort sous la contrainte de l'urgence.
2. **Rappel actif** : Solliciter le cerveau pour retrouver une idée ou une démonstration avant de consulter la solution ou le cours.
3. **Retour d'information (Feedback)** : Vérifier immédiatement l'exactitude du rappel pour corriger les erreurs de compréhension.
4. **Persévérance** : Accepter la difficulté cognitive comme le signal même de la consolidation de la mémoire.


## 2. Relecture passive vs Rappel actif

| Approche | Méthode | Rétention à long terme |
| :--- | :--- | :--- |
| **Passive** | Relire ses notes, surligner du texte | Faible (illusion de maîtrise) |
| **Active** | Se poser des questions, refaire une preuve, expliquer le concept | Forte (consolidation synaptique) |


## Concepts liés

- [[Usage critique des intelligences artificielles]]





## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

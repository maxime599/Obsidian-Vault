---
type: concept
matière:
tags:
  - concepts
MOC:
date_creation: 2026-09-02
Ressources:
---
# Usage critique des intelligences artificielles

> [!info] Définition courte
> L'**usage critique de l'IA** désigne l'intégration des modèles d'intelligence artificielle comme leviers d'explication ou d'exploration, tout en refusant d'abandonner son autonomie de pensée, son esprit critique et sa capacité de vérification.


## 1. Le principe de non-délégation cognitive

> [!warning] Règle d'or
> Utiliser l'IA pour **apprendre à chercher** et approfondir une notion, jamais pour faire le travail de réflexion à sa propre place.

- **Délégation d'exécution** : Poser des questions pour éclairer une zone d'ombre, obtenir des exemples ou tester ses connaissances (autorisé et encouragé).
- **Délégation de pensée** : Accepter aveuglément un résultat fourni sans être capable d'en refaire la démonstration ou d'en vérifier la validité (à proscrire).


## 2. Posture scientifique face aux résultats d'une IA

1. **Vérification** : Soumettre la réponse fournie au contrôle de la logique, des définitions de cours et des faits expérimentaux.
2. **Explicitation** : Être capable de réexpliquer et de défendre par soi-même chaque étape du raisonnement généré.
3. **Détection des erreurs** : Repérer les illusions de cohérence ou les hallucinations théoriques par la confrontation aux sources sûres.


## Concepts liés

- [[Techniques d'apprentissage et rappel actif]]
- [[La démarche scientifique et réfutabilité]]
- [[Rôle et responsabilité de l'ingénieur]]



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
matière: Méthodologie_scientifique
tags:
  - concepts
  - methodologie_scientifique
  - methodologie_scientifique/methode
  - methodologie_scientifique/demarche
MOC:
  - "[[MOC Methode]]"
  - "[[MOC Demarche]]"
date_creation: 2026-09-02
Ressources:
---
# La démarche scientifique et réfutabilité

> [!info] Définition courte
> La **démarche scientifique** est un processus rigoureux de construction de connaissances fondé sur la formulation d'hypothèses, l'expérimentation, la confrontation au réel et la soumission continue des résultats à la critique et à la réfutabilité.


## 1. Les étapes fondamentales de la démarche

La construction d'une connaissance scientifique repose sur une chaîne logique fermement articulée :

1. **Définition** : Clarification rigoureuse des objets d'étude et du cadre théorique.
2. **Hypothèses** : Formulation de conjectures explicatives vérifiables.
3. **Déduction & Expérimentation** : Élaboration de prédictions logiques et mise à l'épreuve par le réel.
4. **Conclusion** : Interprétation des résultats obtenus.
5. **Vérification & Critique** : Soumission du raisonnement à la communauté pour contrôle et reproductibilité.


## 2. Le critère de réfutabilité et la confrontation au réel

- **Confrontation au réel** : Une théorie scientifique ne peut pas être une pure construction abstraite ; elle doit résister aux faits observés.
- **Réfutabilité (Karl Popper)** : Pour qu'une affirmation soit considérée comme scientifique, il doit être possible de concevoir une expérience ou un test qui permettrait de prouver sa falsité si elle était fausse.
- **Évolution des connaissances** : Une théorie n'est jamais définitivement « vraie », mais conservée tant qu'elle résiste aux tentatives de réfutation.


## Concepts liés

- [[Rôle et responsabilité de l'ingénieur]]
- [[Usage critique des intelligences artificielles]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
tags:
  - concepts
  - Math
  - math/logique
MOC:
  - "[[MOC Logique]]"
date_creation: 2026-09-04
Ressources:
  - "[[Si_cours_math_chap2.pdf]]"
---
# Quantificateurs logiques

> [!info] Définition courte
> Les **quantificateurs logiques** ($\forall$ et $\exists$) sont des symboles formels employés pour préciser le domaine de validité d'une proposition logique sur un ensemble donné.


## 1. Définitions et syntaxe

- **Quantificateur universel ($\forall$)** : "Pour tout" ou "Quel que soit".
  $$\forall x \in E, \, P(x)$$
  Signifie que la propriété $P(x)$ est vraie pour l'ensemble des éléments $x$ de $E$.
- **Quantificateur existentiel ($\exists$)** : "Il existe (au moins un)".
  $$\exists x \in E, \, P(x)$$
  Signifie qu'il existe au moins un élément $x$ de $E$ pour lequel $P(x)$ est vraie.


## 2. Négation des assertions quantifiées

Pour nier une proposition quantifiée, on transforme le quantificateur et on prend la négation de l'assertion :

- $\text{non}(\forall x \in E, \, P(x)) \iff \exists x \in E, \, \text{non}(P(x))$
- $\text{non}(\exists x \in E, \, P(x)) \iff \forall x \in E, \, \text{non}(P(x))$


## 3. Importance de l'ordre des quantificateurs

Permuter des quantificateurs de natures différentes ($\forall$ et $\exists$) modifie fondamentalement le sens de la proposition :

- $\forall x \in \mathbb{R}_{>0}^+, \, \exists M \in \mathbb{R}, \, \ln(x) < M$ est **vraie** (le choix de $M$ dépend de $x$).
- $\exists M \in \mathbb{R}, \, \forall x \in \mathbb{R}_{>0}^+, \, \ln(x) < M$ est **fausse** ($M$ devrait être un majorant global de $\ln$).


## Concepts liés

- [[Modes de raisonnement mathématique]]
- [[Logique mathématique et booléenne]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````


---
type: concept
tags:
  - concepts
  - Électronique_numérique
  - Électronique_numérique/boole
  - flashcards/Électronique_numérique
MOC:
  - "[[MOC Boole]]"
date_creation: 2026-09-03
Ressources: "[[diapo_CITISE_AutoSIN.pdf]]"
---
# Propriétés de l'algèbre de Boole

> [!info] Définition courte
> Les **propriétés de l'algèbre de Boole** regroupent l'ensemble des lois mathématiques qui régissent la manipulation et la simplification des expressions logiques binaire.


## 1. Propriétés algébriques fondamentales

Soient $a$, $b$ et $c$ des variables booléennes ($\in \{0, 1\}$) :

- **Commutativité** :
  - $a \cdot b$ = b ==$\cdot a$==
  - $a \lor b$ = ==$b \lor a$==
- **Idempotence** :
  - $a \cdot a$ = ==$a$==
  - $a \lor a$ = ==$a$==
- **Associativité** :
  - $(a \cdot b) \cdot c$ = ==$a \cdot (b \cdot c)$==
  - $(a \lor b) \lor c$ = ==$a \lor (b \lor c)$==
- **Distributivité** :
  - $a \cdot (b \lor c)$ = ==$(a \cdot b) \lor (a \cdot c)$==
  - $a \lor (b \cdot c)$ = ==$(a \lor b) \cdot (a \lor c)$==
- **Éléments neutres** :
  - $a \cdot 1$ = ==$a$==
  - $a \lor 0$ = ==$a$==
- **Éléments absorbants** :
  - $a \cdot 0$ = ==$0$==
  - $a \lor 1$ = ==$1$==
- **Complémentation** :
  - $a \cdot \bar{a}$ = ==$0$==
  - $a \lor \bar{a}$ = ==$1$==
  - $\overline{\overline{a}}$ = ==$a$==
<!--SR:!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-30,10,270!2026-09-21,4,270!2026-09-21,4,270-->


## 2. Lois d'absorption

Ces théorèmes permettent de réduire directement la taille d'une équation :

- $a \lor (a \cdot b)$ = ==$a$==
- $a \cdot (a \lor b)$ = ==$a$==
- $a \lor (\bar{a} \cdot b)$ = ==$a \lor b$==
- $a \cdot (\bar{a} \lor b)$ = ==$a \cdot b$==
<!--SR:!2026-09-21,4,270!2026-09-21,4,270!2026-09-21,4,270!2026-09-25,5,230-->


## 3. Lois de De Morgan
    
Ces théorèmes permettent de transformer le complément d'un produit ou d'une somme en une somme ou un produit de compléments :

- $\overline{a \cdot b}$ = ==$\bar{a} \lor \bar{b}$==
- $\overline{a \lor b}$ = ==$\bar{a} \cdot \bar{b}$==
<!--SR:!2026-09-21,4,270!2026-09-21,4,270-->


## 3. Méthodes de simplification d'une équation

Pour simplifier algébriquement une expression logique :

1. **Développer** les expressions entre parenthèses si nécessaire.
2. **Identifier un facteur commun** parmi plusieurs termes.
3. **Factoriser** l'expression par ce facteur.
4. **Simplifier** à l'aide des règles de complémentation ($a \lor \bar{a} = 1$), d'éléments neutres/absorbants ou d'absorption.
5. **Répéter la procédure** jusqu'à obtenir une forme irréductible.


## Concepts liés

- [[Portes logiques et algèbre de Boole]]
- [[Conception d'un circuit logique]]
- [[Logique mathématique et booléenne]]
## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

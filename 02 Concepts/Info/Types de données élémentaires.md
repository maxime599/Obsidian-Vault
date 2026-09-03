---
type: concept
matière: Info
tags:
  - concepts
  - Info
  - "#info/langage_C"
MOC:
  - "[[MOC Langage C]]"
date_creation: 2026-09-01
Ressources: "[[Info1_Slides.pdf]]"
---
# Types de données élémentaires

> [!info] Définition courte
> Un **type de donnée** détermine la nature des valeurs qu'une variable peut contenir, l'espace mémoire octroyé par le système ainsi que les opérations mathématiques ou logiques autorisées sur cette donnée.


## 1. Les grands types de données

En algorithmique et en langage C, l'information est classée en plusieurs catégories fondamentales :

- **Entiers ($\mathbb{Z}$)** : Représentent les nombres sans virgule (positifs, négatifs ou nuls).
  - *Exemples* : `-20`, `-3`, `0`, `4`, `100`.
- **Réels / Flottants ($\mathbb{R}$)** : Représentent les nombres à virgule (flottante).
  - *Exemples* : `3.45`, `-5.87`, `1.0`, `0.001`.
- **Caractères** : Représentent une lettre, un chiffre ou un symbole unique encadré par des guillemets simples `' '`.
  - *Exemples* : `'a'`, `'Z'`, `'9'`, `'@'`.
  - *Codage* : Chaque caractère correspond à un code numérique entier défini dans la **table ASCII**.
- **Chaînes de caractères** : Séquence de plusieurs caractères formant du texte, encadrée par des guillemets doubles `" "`.
  - *Spécificité en C* : Il n'existe pas de type "string" natif fondamental en C ; une chaîne est gérée sous forme de **tableau de caractères** se terminant par le caractère nul `\0`.
- **Booléens** : Représentent un état logique ne pouvant prendre que deux valeurs : `true` (Vrai / 1) ou `false` (Faux / 0).
  - *Utilisation* : Essentiels pour les conditions, les boucles et les tests logiques.
- **Adresses / Pointeurs** : Variable spéciale contenant l'emplacement (adresse mémoire) où est stockée une donnée.


## 2. Synthèse et spécifications en Langage C

| Type en C | Description | Taille mémoire typique | Spécificateur `printf` | Exemple d'utilisation |
| :--- | :--- | :--- | :--- | :--- |
| `int` | Entier relatif | 4 octets | `%d` ou `%i` | `int age = 20;` |
| `float` | Réel simple précision | 4 octets | `%f` | `float note = 14.5f;` |
| `double` | Réel double précision | 8 octets | `%lf` | `double pi = 3.14159265;` |
| `char` | Caractère unique (ASCII) | 1 octet | `%c` | `char grade = 'A';` |
| `bool` | Booléen (`<stdbool.h>`) | 1 octet | `%d` | `bool valide = true;` |
| `char[]` | Chaîne de caractères | Variable | `%s` | `char nom[] = "toto";` |
| `type*` | Pointeur (Adresse) | 4 ou 8 octets | `%p` | `int *p = &age;` |


## 3. Remarques importantes sur le type Booléen en C

> [!note] Booléens en C99
> En C historique (C89), les booléens n'existaient pas en tant que type dédié : tout nombre entier non nul ($1, 2, -5$) était considéré comme **VRAI**, et $0$ comme **FAUX**.
> Depuis la norme C99, l'inclusion du fichier d'en-tête `#include <stdbool.h>` permet d'utiliser le type `bool` avec les littéraux `true` et `false`.


## Concepts liés

- [[Variables et constantes en C]]
- [[Syntaxe en C]]
- [[Encodage des caractères et table ASCII]]
- [[Tableaux et chaînes de caractères]]
- [[Pointeurs et gestion de la mémoire]]



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

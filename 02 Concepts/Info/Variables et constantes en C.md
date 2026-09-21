---
type: concept
matière: Info
tags:
  - concepts
  - Info
  - info/langage_C
MOC:
  - "[[MOC Langage C]]"
date_creation: 2026-09-01
Calendar Title: "[[Variables et constantes en C|Variables et constantes en C]]"
---
# Variables et constantes en C

> [!info] Définition courte
> Une **variable** est un emplacement mémoire identifié par un nom qui stocke une valeur d'un type donné modifiable au cours de l'algorithme. Une **constante** associe un nom à une valeur fixe de type donné qui ne peut plus être modifiée une fois définie.


## 1. Règles et conventions de nommage

- **Convention des Variables** : Écrites en **minuscules** (snake_case si le nom comporte plusieurs mots).
  - *Exemples* : `compteur`, `note_finale`, `valeur_saisie`.
- **Convention des Constantes** : Écrites intégralement en **MAJUSCULES**.
  - *Exemples* : `TAILLE_MAX`, `PI`, `VITESSE_LUMIERE`.
- **Contraintes syntaxiques** :
  - Le nom doit commencer par une lettre ou un tiret bas `_`.
  - Pas d'espaces, de tirets `-`, ni de caractères accentués (`é`, `à`, etc.).
  - Ne pas utiliser les mots-clés réservés du C (`int`, `return`, `if`, etc.).
- Pour faire par exemple $10^{-11}$ :: 

## 2. Déclaration, initialisation et affectation

### Variables
En C, toute variable doit être **déclarée** avec son type avant d'être utilisée :
```c
int age;           // Déclaration sans initialisation (contient une valeur indéterminée)
age = 18;          // Affectation (attribution d'une valeur avec '=')
float moyenne = 12.5; // Déclaration et initialisation simultanées
```

> [!warning] Syntaxe d'affectation en C vs Pseudo-code
> En pseudo-code algorithmique, on écrit souvent `variable := valeur` ou `variable <- valeur`. 
> En **langage C**, l'affectation se fait obligatoirement avec l'opérateur simple `=`.


### Constantes
En C, il existe deux manières standards de définir une constante :

1. **Avec le mot-clé `const` (Recommandé)** :
   Crée une variable en lecture seule au sein du compilateur.
   ```c
   const double PI = 3.14159265;
   const int SEUIL_VALIDE = 10;
   ```


## 3. Exemple de code récapitulatif en C

```c
#include <stdio.h>
#include <stdbool.h>

// Définition d'une constante globale via le préprocesseur
#define RATIO_CONVERSION 1.60934

int main() {
    // Définition d'une constante typée
    const int MAX_TENTATIVES = 3;

    // Déclaration et initialisation de variables
    int nb_essais = 0;
    float distance_km = 10.0;
    bool est_termine = false;

    // Modification d'une variable au cours de l'exécution
    nb_essais = nb_essais + 1; // ou nb_essais++
    float distance_miles = distance_km / RATIO_CONVERSION;

    printf("Essai %d/%d - Distance : %.2f miles\n", nb_essais, MAX_TENTATIVES, distance_miles);

    return 0;
}
```


## Concepts liés

- [[Types de données élémentaires]]
- [[Syntaxe et structure de base en C - C++]]
- [[Fonctions et modularité]]
- [[Pointeurs et gestion de la mémoire]]



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

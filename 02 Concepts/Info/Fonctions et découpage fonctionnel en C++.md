---
type: concept
tags:
  - concepts
  - Info
  - flashcards/Info
  - info/langage_C
MOC:
  - "[[MOC Langage C]]"
date_creation: 2026-09-27
Ressources:
  - "[[Info1_Slides.pdf]]"
---

# Fonctions et découpage fonctionnel en C++

> [!info] Définition courte
> Le **découpage fonctionnel** (ou modularité) en C++ consiste à structurer un projet informatique en séparant la déclaration des fonctions (fichiers d'en-tête `.h`), leur définition (fichiers sources `.cpp`) et l'exécution principale (`main.cpp`) afin d'améliorer la lisibilité, la réutilisabilité et la maintenance du code.


## 1. Déclaration et définition d'une fonction

Une fonction en C++ nécessite deux éléments distincts :

- **La déclaration (Prototype)** : Spécifie la signature de la fonction (nom, types des paramètres, type de retour) pour avertir le compilateur de son existence.
```cpp
  int additionner(int a, int b); // Prototype terminé par un point-virgule
```

* **La définition (Implémentation)** : Contient le bloc d'instructions exécuté par la fonction.
```cpp
int additionner(int a, int b) {
    return a + b;
}
```



## 2. Découpage fonctionnel (Structure multi-fichiers)

Un projet C++ bien structuré se découpe en trois types de fichiers :
?
```text
MonProjet/
├── mes_fonctions.h     <-- Déclarations & Prototypes
├── mes_fonctions.cpp   <-- Implémentation des fonctions
└── main.cpp            <-- Programme principal

```
<!--SR:!2026-10-17,14,290-->

### A. Le fichier d'en-tête (`.h` ou `.hpp`)
?
Il sert d'interface publique. Il contient uniquement les prototypes des fonctions et les constantes globales.
<!--SR:!2026-10-19,16,290-->

```cpp
// mes_fonctions.h
#pragma once // Protection contre les inclusions multiples (Header Guard)

// Prototypes des fonctions
void afficherMessage();
double calculerMoyenne(double a, double b);

```

### B. Le fichier d'implémentation (`.cpp`)
?
Il contient le code effectif des fonctions déclarées dans le fichier `.h`.
<!--SR:!2026-10-18,15,290-->

```cpp
// mes_fonctions.cpp
#include <iostream>
#include "mes_fonctions.h" // Liaison avec son fichier d'en-tête

void afficherMessage() {
    std::cout << "Calcul en cours..." << std::endl;
}

double calculerMoyenne(double a, double b) {
    return (a + b) / 2.0;
}

```

### C. Le fichier principal (`main.cpp`)
?
Il contient la fonction `main()` qui utilise les fonctions modulaires.
<!--SR:!2026-10-19,16,290-->

```cpp
// main.cpp
#include <iostream>
#include "mes_fonctions.h" // Inclut les prototypes pour pouvoir appeler les fonctions

int main() {
    afficherMessage();
    double res = calculerMoyenne(12.5, 15.5);
    std::cout << "Moyenne : " << res << std::endl;
    return 0;
}

```

## 3. Relier les fichiers entre eux

### A. Inclusions de fichiers (`#include`)

* **Bibliothèques système** : Utilisent des chevrons `<...>`. Le compilateur cherche dans les dossiers système du langage.
```cpp
#include <iostream>
#include <cmath>

```


* **Fichiers locaux du projet** : Utilisent des guillemets `"..."`. Le compilateur cherche dans le répertoire local du projet.
```cpp
#include "mes_fonctions.h"

```



### B. Protections contre l'inclusion multiple (Header Guards)

Si un fichier `.h` est inclus plusieurs fois indirectement, cela provoque des erreurs de re-déclaration. On utilise au choix :

* La directive moderne : `#pragma once` au début du fichier `.h`.
* La directive classique :
```cpp
#ifndef MES_FONCTIONS_H
#define MES_FONCTIONS_H

// Prototypes ici

#endif

```



## Concepts liés

* [[Syntaxe et structure de base en C - C++]]
* [[Fonctions et modularité en algorithmique]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC

```

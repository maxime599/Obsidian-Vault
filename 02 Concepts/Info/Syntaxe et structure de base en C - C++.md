---
type: concept
matière: Info
tags:
  - concepts
  - Info
  - info/syntaxe
  - info/langage_C
  - flashcards/info
MOC:
  - "[[MOC Langage C]]"
  - "[[MOC Syntaxe]]"
date_creation: 2026-09-02
Ressources: "[[Info1_Slides.pdf]]"
---

# Syntaxe et structure de base en C / C++

> [!info] Définition courte
> La **syntaxe en C / C++** définit l'ensemble des règles de rédaction, la structure minimale d'un programme (directives préprocesseur, fonction principale `main`) et les opérateurs permettant d'exécuter des instructions algorithmiques et d'interagir avec l'utilisateur.


## 1. Structure minimale d'un programme

Tout programme écrit en C / C++ s'articule autour des éléments fondamentaux suivants :

- **Directives du préprocesseur** : Introduites par ==`#include <...>`==, elles permettent d'importer les bibliothèques nécessaires
<!--SR:!2026-09-24,4,270--> 

(ex: `#include <iostream>` pour la gestion des flux d'entrées/sorties).
- **Espace de nom** : ==`using namespace std;`== permet d'utiliser directement les fonctions de la bibliothèque standard sans devoir ajouter le préfixe `std::`.
- **Fonction principale  :: `main()`** : Point d'entrée obligatoire du programme (`int main() { ... return 0; }`).
<!--SR:!2026-09-23,3,250-->
- **Portée globale** : Tout élément déclaré en dehors de la fonction `main()` possède une portée globale (ex. fonctions secondaires).
- **Fin d'instruction** : Chaque instruction doit impérativement se terminer par ==un point-virgule `;`.==
- **Commentaires** :
  - Commentaires sur une seule ligne :: `// commentaire`
<!--SR:!2026-09-24,4,270-->
  - Commentaires sur plusieurs lignes :: `/* commentaire */`
<!--SR:!2026-09-24,4,270-->


## 2. Tableau de traduction : Algorithmie vers C / C++

| Nom                      |    Algorithmie    |            Langage C / C++             |
| :----------------------- | :---------------: | :------------------------------------: |
| **Affectation**          |   $\leftarrow$    |                  `=`                   |
| **Addition**             |        $+$        |                  `+`                   |
| **Soustraction**         |        $-$        |                  `-`                   |
| **Multiplication**       |        $*$        |                  `*`                   |
| **Division réelle**      |        $/$        | `/` *(avec au moins un opérande réel)* |
| **Division entière**     |   $\text{div}$    |  `/` *(avec deux opérandes entiers)*   |
| **Reste (Modulo)**       |  $\text{reste}$   |                  `%`                   |
| **Afficher un message**  | $\text{Ecrire()}$ |               `cout <<`                |
| **Récupérer une saisie** |  $\text{Lire()}$  |                `cin >>`                |
Ecrire() = :: `cout <<`
<!--SR:!2026-09-24,4,270-->
Lire() = :: `cin >>`
<!--SR:!2026-09-24,4,270-->

> [!warning] Distinction sur la division
> En C / C++, l'opérateur `/` adapte son comportement au type des opérandes :
> - `1 / 2` $\to$ **Division entière** (résultat : `0`).
> - `1.0 / 2` $\to$ **Division réelle** (résultat : `0.5`).


## 3. Entrées / Sorties et sens des chevrons

La gestion des échanges avec l'utilisateur s'effectue via les flux d'entrée et de sortie standard :

- **`cout <<` (Sortie standard / Écran)** : La machine envoie des informations vers l'écran.
- **`cin >>` (Entrée standard / Clavier)** : Le clavier envoie la saisie utilisateur vers la machine pour la mémoriser dans une variable.

*Astuce mnémotechnique* : Le sens des chevrons indique la direction du flux de données par rapport aux variables et à la machine.


## 4. Exemple de programme complet

```cpp
#include <iostream> /* Import de la bibliothèque de gestion des flux cin et cout */
using namespace std; // Évite l'utilisation explicite du préfixe std::

int main() {
    // Lexique
    const float PI = 3.14159265;
    float rayon, surface;

    // Algorithme
    // Début
    cout << "Saisissez une valeur de rayon (en cm)" << endl;
    cin >> rayon; // Flux dirigé depuis le clavier vers la variable

    surface = PI * rayon * rayon;

    cout << "La surface du disque de rayon " << rayon << " cm est de " << surface << " cm2" << endl;
    // Fin
    return 0;
}
```

## Concepts liés

- [[Types de données élémentaires]]
- [[Variables et constantes en C]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

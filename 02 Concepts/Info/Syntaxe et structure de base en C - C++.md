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
```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```

## 1. Structure minimale d'un programme

Tout programme écrit en C / C++ s'articule autour des éléments fondamentaux suivants :

- **Directives du préprocesseur** : Introduites par ==`#include <...>`==, elles permettent d'importer les bibliothèques nécessaires
<!--SR:!2026-12-10,60,310--> 

(ex: `#include <iostream>` pour la gestion des flux d'entrées/sorties).
- **Espace de nom** : ==`using namespace std;`== permet d'utiliser directement les fonctions de la bibliothèque standard sans devoir ajouter le préfixe `std::`.
- **Fonction principale  :: `main()`** : Point d'entrée obligatoire du programme (`int main() { ... return 0; }`).
<!--SR:!2027-04-30,166,310-->
- **Portée globale** : Tout élément déclaré en dehors de la fonction `main()` possède une portée globale (ex. fonctions secondaires).
- **Fin d'instruction** : Chaque instruction doit impérativement se terminer par ==un point-virgule `;`.==
- **Commentaires** :
  - Commentaires sur une seule ligne :: `// commentaire`
<!--SR:!2026-12-16,66,310-->
  - Commentaires sur plusieurs lignes :: `/* commentaire */`
<!--SR:!2026-12-09,59,310-->


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
<!--SR:!2026-12-15,65,310-->
Lire() = :: `cin >>`
<!--SR:!2026-12-07,57,310-->

> [!warning] Distinction sur la division
> En C / C++, l'opérateur `/` adapte son comportement au type des opérandes :
> - `1 / 2` $\to$ **Division entière** (résultat : `0`).
> - `1.0 / 2` $\to$ **Division réelle** (résultat : `0.5`).


## 3. Entrées / Sorties et sens des chevrons

La gestion des échanges avec l'utilisateur s'effectue via les flux d'entrée et de sortie standard :

- **`cout <<` (Sortie standard / Écran)** : La machine envoie des informations vers l'écran.
- **`cin >>` (Entrée standard / Clavier)** : Le clavier envoie la saisie utilisateur vers la machine pour la mémoriser dans une variable.

*Astuce mnémotechnique* : Le sens des chevrons indique la direction du flux de données par rapport aux variables et à la machine.

## 4. Les fonctions 
[[Fonctions et découpage fonctionnel en C++]]


## 5. Les conditions
Condition en cpp :
?
```cpp
if (condition){
//Alors
}
else{
//Sinon
}
```
<!--SR:!2027-01-05,64,310-->

Selon en cpp:
?
```cpp
switch(var){
	case val1 : 
		instruction1;
		instruction2;
		break
	case val2 :
		.....
	default: instruction1;.....
}

## Exemple de programme complet
```
<!--SR:!2026-12-11,39,270-->

### 1. Opérateurs de Comparaison (Relationnels)

Ces opérateurs permettent de comparer deux valeurs et renvoient un booléen (`true` ou `false`).

| Opérateur | Nom                   | Exemple  | Résultat |
| --------- | --------------------- | -------- | -------- |
| ==        | Égal à                | `5 == 5` | `true`   |
| `!=`      | Différent de          | `5 != 3` | `true`   |
| `<`       | Strictement inférieur | `3 < 5`  | `true`   |
| `>`       | Strictement supérieur | `5 > 3`  | `true`   |
| `<=`      | Inférieur ou égal     | `5 <= 5` | `true`   |
| `>=`      | Supérieur ou égal     | `5 >= 6` | `false`  |
<!--SR:!2027-01-01,60,310-->

### 2. Opérateurs Logiques

Ces opérateurs permettent de combiner plusieurs conditions booléennes.

|Opérateur|Nom|Description|Exemple|Résultat|
|---|---|---|---|---|
|`&&`|ET logique (AND)|Vrai si **toutes** les conditions sont vraies|`(5 > 3) && (2 < 4)`|`true`|
|`\|`|OU logique (OR)|Vrai si **au moins une** condition est vraie|`(5 > 3) \| (10 < 4)`|`true`|
|`!`|NON logique (NOT)|Inverse l'état booléen|`!(5 > 3)`|`false`|

## 6. Les tableaux en C++

**Déclaration et remplissage**
- Exemple de syntaxe d'un tableau en cpp :: `float ex_tableau[3] = {1, 2, 3};`
<!--SR:!2026-12-04,14,290-->
- Le remplissage s'effectue traditionnellement case par case à l'aide d'une boucle.

**Gestion de la taille**
- L'utilisation d'une variable pour dimensionner la taille du tableau est tolérée uniquement si cette variable est une constante, faute de quoi la compilation échoue.

**Protection en lecture seule**
- Le qualificatif `const` permet de rendre un tableau non modifiable.
- Contrainte technique : un tableau déclaré `const` doit impérativement être initialisé dès sa déclaration.

**Les chaines de caractère**
- Une chaine de caractère peut être définie par un tableau de caractère + la caractère \0
- Exemple : 
	`char mois[10]={’s’,’e’,’p’,’t’,’e’,’m’,’b’,’r’,’e’,’\0’};
	`char mois2[10]=’’septembre’’;`
- On peut ici faire un cin dans un tableau de caractère sans problème, tout comme faire un cout d'un tableau de caractère

**Les matrices**
- Pour les définir : `float matrices[3][4]`
- Pour les passer dans une fonction, il faut préciser dans la définition et la déclaration de la fonction le nombre de colonnes, mais pas le nombre de lignes
## 7. Les types composés
```cpp
struct nom_nouveau_type{
	type1 champ1;
	type2 champ2;
};
nom_nouveau_type nom_variable;
```
Pour manipuler des types composés, il faut les définir avant les fonctions, donc en haut du .h

## Exemple de programme
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
- [[Fonctions et découpage fonctionnel en C++]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

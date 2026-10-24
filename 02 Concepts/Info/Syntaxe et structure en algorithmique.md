---
type: concept
tags:
  - concepts
  - Info
  - "#info/syntaxe"
  - info/algorithmique
  - flashcards/info
MOC:
  - "[[MOC Syntaxe]]"
  - "[[MOC Algorithmique]]"
date_creation: 2026-09-07
Ressources:
  - "[[Exercices_info1.pdf]]"
---

# Syntaxe et structure en algorithmique

> [!info] Définition courte
> La **syntaxe algorithmique** définit l'ensemble des règles formelles (déclaration du lexique, typage, affectation, entrées/sorties) permettant d'écrire une suite d'instructions claires et exécutables indépendamment d'un langage de programmation spécifique.
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


## 1. Structure générale d'un algorithme

Un algorithme bien structuré se divise en deux parties principales :

- **Le Lexique (ou Déclarations)** : Répertorie ==l'ensemble des objets manipulés en précisant leur type.==
<!--SR:!2026-11-12,40,290-->

  - **Constante** : Valeur ==fixe== définie dès le début (ex: `TAUX : ==constante réelle := 6.55957`==).
<!--SR:!2026-12-12,65,310!2026-12-08,61,310-->
  
  - **Variable** : Espace mémoire identifié par un nom dont la valeur peut évoluer (ex: `frcs, eur : 2 réels`).
  
- **Le Corps de l'algorithme** : Encadré par les mots-clés ==`Début` et `Fin`==, il contient ==la suite logique d'instructions à exécuter==.
<!--SR:!2026-12-07,62,310!2026-11-14,42,290-->


## 2. Instructions fondamentales et typage

- **Entrées / Sorties** :
  - `Ecrire(...)` ::: Affiche du texte ou la valeur d'une variable à l'écran.
<!--SR:!2026-11-29,54,310!2026-12-08,63,310-->
  - `Lire(...)` ::: Interrompt l'exécution pour récupérer une valeur saisie par l'utilisateur.
<!--SR:!2026-12-09,62,310!2026-12-02,57,310-->
- **Affectation ($\leftarrow$)** ::: Attribue une valeur ou le résultat d'une expression à une variable
<!--SR:!2026-11-30,55,310!2026-12-13,66,310-->
(`variable <- expression`).
- **Règles de typage et d'opérateurs** :
  - La compatibilité des types doit être respectée lors d'une affectation.
  - La division réelle `/` renvoie un nombre ==réel== (ex: `5 / 3`). On ne peut pas affecter directement son résultat à un entier.
  - Pour obtenir le quotient entier de deux nombres, on utilise l'opérateur ==`div` (ex: `a <- a div 3`).==
<!--SR:!2026-12-03,58,310!2026-12-01,56,310-->


## 3. Syntaxe des fonctions

L'intégration d'une fonction dans un algorithme respecte une structure en trois étapes distinctes :

Syntaxe fonction en algo
?
1. **Déclaration (Prototype)** : Insérée dans le lexique principal pour spécifier la signature de la fonction (nom, paramètres et type de retour).
2. **Appel** : Effectué dans le corps de l'algorithme principal en affectant le résultat de la fonction à une variable compatible (`resultat <- f(xp)`).
3. **Définition** : Écrite en dehors de l'algorithme principal, elle contient le lexique local et les instructions propres à la fonction, conclues par le mot-clé `Retourner`.
<!--SR:!2026-11-21,46,290-->

*Exemple de structure :*
```text
{ Lexique principal }
f : la fonction (x : 1 réel) -> 1 réel

{ Algorithme principal }
Début
    resultat <- f(xp)
Fin

{ Définition de la fonction f }
f : la fonction (x : 1 réel) -> 1 réel
Lexique :
    res : 1 réel
Début
    res <- 2 * x + 3
    Retourner res
Fin
````

#### Méthode découpage fonctionnel
?
1. Lister = déclarer dans le lexique principal avec R, E, S les fonctions du découpage
2. Compléter le lexique principal et réaliser l'algo principal en appelant les fonctions du découpage
3. Définir chaque fonctions du découpage, en dehors de l'algo principal
<!--SR:!2026-10-22,24,270-->


#### Découpe fonctionnel simple
Découpage dans lequel on ==ne met pas dans des fonctions les fonctions de bases Écrire et Lire==
<!--SR:!2026-12-05,60,310-->


## 4. Syntaxes des blocs de condition :
Pour faire des conditions en algo :
?
```
Lexique :
---


Algorithme :
Début
........
	Si condition
		Alors
			bloc de code
		Sinon
			bloc de code
	FinSi
```
On peut représenter ça sous forme de graphe
<!--SR:!2026-10-26,11,270-->


Syntaxe Selon en algo :
?
```
Lexique :
---


Algorithme :
Début
........
	Selon var
		valeur1 : bloc de code
		valeur2 : bloc de code
		...
		autrement : bloc de code
```
<!--SR:!2026-10-30,15,290-->





## Exemple :
```
Lexique:
	prix_ht : réel
	quantite : entier
	taux_TVA : réel
	prix_TTC : réel
Algo:
Début
	Ecrire("Entrer le prix, la quantité d'article commandé et le taux de TVA : ")
	Lire(prix_ht, quantite, taux_TVA)
	prix_TTC $\leftarrow$ prix_ht * quantite * (taux_TVA/100 + 1)
	Ecrire("Le prix TTC est ", prix_TTC)
Fin
```


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

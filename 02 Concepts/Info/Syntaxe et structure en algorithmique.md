---
type: concept
tags:
  - concepts
  - Info
  - "#info/syntaxe"
  - info/algorithmique
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


## 1. Structure générale d'un algorithme

Un algorithme bien structuré se divise en deux parties principales :

- **Le Lexique (ou Déclarations)** : Répertorie l'ensemble des objets manipulés en précisant leur type.
  - **Constante** : Valeur fixe définie dès le début (ex: `TAUX : constante réelle := 6.55957`).
  - **Variable** : Espace mémoire identifié par un nom dont la valeur peut évoluer (ex: `frcs, eur : 2 réels`).
- **Le Corps de l'algorithme** : Encadré par les mots-clés `Début` et `Fin`, il contient la suite logique d'instructions à exécuter.


## 2. Instructions fondamentales et typage

- **Entrées / Sorties** :
  - `Ecrire(...)` : Affiche du texte ou la valeur d'une variable à l'écran.
  - `Lire(...)` : Interrompt l'exécution pour récupérer une valeur saisie par l'utilisateur.
- **Affectation ($\leftarrow$)** : Attribue une valeur ou le résultat d'une expression à une variable (`variable <- expression`).
- **Règles de typage et d'opérateurs** :
  - La compatibilité des types doit être respectée lors d'une affectation.
  - La division réelle `/` renvoie un nombre réel (ex: `5 / 3`). On ne peut pas affecter directement son résultat à un entier.
  - Pour obtenir le quotient entier de deux nombres, on utilise l'opérateur `div` (ex: `a <- a div 3`).


## 3. Syntaxe des fonctions

L'intégration d'une fonction dans un algorithme respecte une structure en trois étapes distinctes :

1. **Déclaration (Prototype)** : Insérée dans le lexique principal pour spécifier la signature de la fonction (nom, paramètres et type de retour).
2. **Appel** : Effectué dans le corps de l'algorithme principal en affectant le résultat de la fonction à une variable compatible (`resultat <- f(xp)`).
3. **Définition** : Écrite en dehors de l'algorithme principal, elle contient le lexique local et les instructions propres à la fonction, conclues par le mot-clé `Retourner`.

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

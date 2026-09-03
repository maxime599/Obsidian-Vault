---
semestre: S1
type de cours: TD
date: 2026-09-03T09:30:00
End Date: 2026-09-03T11:30:00
Calendar Title: "[[01 Cours/Électronique_numérique/Suite chap1, Électronique_numérique 2026-09-03|Suite chap1, Électronique_numérique]]"
prof: Brice Colombier
tags:
  - cours
  - Électronique_numérique
Concepts:
  - "[[Portes logiques et algèbre de Boole]]"
  - "[[Représentations d'une fonction logique]]"
  - "[[Logique mathématique et booléenne]]"
Ressources: "[[diapo_CITISE_AutoSIN.pdf]]"
---

# Suite chap1


## Objectifs

- Apprendre les portes logique, faire des shéma de portes logique et répondre à un cahier des charges

## Notes

## Disjonction/OU
Vraie si au moins une des deux info est vraie

### Disjonction exclusive/OU exclusive
Vraie si une seule des deux infos est vraie


pour les symboles, table de vérité etc, voir fastibule papier

Dans un table de vérité, le nombre de ligne = $2^{N_{entées}}$


## Propriétés des portes logiques
Commutativité 
- a · b = b · a 
- a ∨ b = b ∨ a

Idempotence 
- a · a = a 
- a ∨ a = a

Associativité 
- a · b · c = (a · b) · c 
- a ∨ b ∨ c = (a ∨ b) ∨ c 

Distributivité 
- (a · b) ∨ c = (a ∨ c) · (b ∨ c) 
- (a ∨ b) · c = (a · c) ∨ (b · c)

Eléments neutres 
- a · 1 = a  Comme pour la multiplication
- a ∨ 0 = a Comme pour l'addition

Eléments absorbants 
- a · 0 = 0 
- a ∨ 1 = 1

Complémentation 
- a · $\bar{a}$ = 0 
- a ∨ $\bar{a}$ = 1


Absorption d’un terme 
- a ∨ $\bar{a}$ · b = a ∨ b 
	- = (a ∨ $\bar{a}$) · (a ∨ b) 
	- = 1 · (a ∨ b) 
 - a · ($\bar{a}$ ∨ b) = a · b 
	 - = a · $\bar{a}$ ∨ a · b 
	 - = 0 ∨ a · b

Absorption d’un terme 
- a ∨ a · b = a 
	- = a · 1 ∨ a · b 
	- = a · (1 ∨ b) 
- a · (a ∨ b) = a 
	- = (a ∨ 0) · (a ∨ b) 
	- = a ∨ 0 · b




## Portes à 3 entrées
### ET et OU
Il suffit de combiner deux portes ET ou deux portes OU


### Portes plus complexes
On suit la démarche, on note les entrées et les sorties, le nom de la "boite" et ce quelle doit faire

#### Méthode pour remplir la cahier des charges:
- Faire la table de vérité de notre cahier des charges
- Ecrire une phrase traduisant chaque ligne de la table de vérité où la sortie est 1
- Les écrire sous forme d'equation logique
- Puis faire un OU de toutes les lignes pour obtenir l'equation final non réduite
	- *Réduire l'équation*
- Placer et relier les bonnes portes entres elles


#### Technique pour simplifier : 
while 1:
- Développer
- Identifier un facteur commun
- Factoriser par ce facteur
- Simplifier par obsorbtion

#### Pour simplifier un schéma
Il  faut d'abord le transformer en equation



Attention, il y a un ordre dans les opérations logiques, comme en math
Le ET est prioritaire sur le OU. On peut ajouter des parenthèses 







## Exercices
Ex fait en cours : voir fasticule papier diapo 29
Ex pour s'entrainer : voir sur moodle

## À retenir
-
## Travail à faire

- [ ] S'entrainer à réduire des équation (ex sur moddle)
- [ ] finir l'ex slide 43 sur la fasticule papier


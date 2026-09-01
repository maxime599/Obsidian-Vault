---
semestre: S1
type de cours: CM
date: 2026-09-01T14:30:00
End Date: 2026-09-01T15:30:00
Calendar Title: "[[01 Cours/Électronique_numérique/Intro-organisation de cours, Électronique numérique 2026-09-01|Intro-organisation de cours, Électronique numérique]]"
prof: Brice Colombier
tags:
  - cours
  - Électronique_numérique
Concepts:
  - "[[Portes logiques et algèbre de Boole]]"
  - "[[Représentations d'une fonction logique]]"
---

# Intro-organisation de cours

Ressources : voir fasticule
## Objectifs

- Comprendre le but de la matière

## Notes

Objectif de la matière : se placer entre la physique (l'étude des particules) et l'informatique (programmation ?)
On va donc parler des portes logiques et des blocs logiques + un peu des transistors et du processeur


Def électronique numérique : utilisation de signaux électriques pour manipuler de l'info, en travaillant avec du binaire

Approche ascendante : on étudie d'abords les blocs élémentaires, puis on les assemble pour comprendre les blocs plus complexes



Compétences : 
- concevoir un système électronique à partir d'un cahier des charges
- Lire un schéma électronique 
- Vérifier le fonctionnement d'un système
- Programmer un FPGA à l'aide d'un logiciel de synthèse d'une description matérielle


L'information élémentaire = booléenne, Vrai et Faux, 0 ou 1

Si la valeur de tension est > $\frac{V_{max}}{2}$, alors c'est 1, sinon c'est 0


### Principe d'identité : 
La fonction logique "recopie" l'entrée, 

Équation logique : s (la sortie) = a (l'entrée)
Table de vérité :

| a   | s=  |
| --- | --- |
| 0   | 0   |
| 1   | 1   |
Symbole et Chronogramme (voir fasticule)


Lecture d'équ logique : 
s = a  $\to$  s vaut 1 lorsque a vaut 1


Il faut savoir convertir les 4 représentations possibles



### La fonction NOT
def : la sortie est le contraire de l'information en entrée

Équation logique : s (la sortie) = $\overline{a}$ (l'entrée)
Table de vérité :

| a   | s=  |
| --- | --- |
| 0   | 1   |
| 1   | 0   |
Symbole :
![[Pasted image 20260901152027.png|153]]

Chronogramme 
![[Pasted image 20260901152133.png|89]]

Lecture d'équ logique : 


### Conjonction, porte AND
def : la sortie est vraie si et seulement si les deux entrées sont vraies

Équation logique : s = a.b (a ET b)
Table de vérité :

| a   | b   | s=  |
| --- | --- | --- |
| 0   | 0   | 0   |
| 0   | 1   | 0   |
| 1   | 0   | 0   |
| 1   | 1   | 1   |
Symbole
![[Pasted image 20260901152755.png|170]]

Chronogramme (voir fasticule)



Lecture d'équ logique : 
s vaut 1 lorsque a vaut 1 et b vaut 1



---
semestre: S1
type de cours: CM
date: 2026-09-02T11:00:00
End Date: 2026-09-02T12:30:00
Calendar Title: "[[01 Cours/Math/Intro-Logique et raisonnement mathématiques, Math 2026-09-02|Intro-Logique et raisonnement mathématiques, Math]]"
prof: Olivier Gipouloux
tags:
  - cours
  - Math
Concepts:
  - "[[Logique mathématique et booléenne]]"
  - "[[Modes de raisonnement mathématique]]"
  - "[[Portes logiques et algèbre de Boole]]"
Ressources: "[[S1_cours_math_chap1.pdf]]"
---
Ressources : 
# Intro-Logique et raisonnement mathématiques


## Objectifs

-

## Notes
Chapitre 1 : Logique et raisonnement mathématiques, comment écrire les maths


### Assertion
Def : Une assertion (ou proposition) mathématique est un énoncé mathématique, concernant un ou plusieurs objets mathématiques, qui est **soit vrai (V) soit faux (F).**
- L’assertion " 4 > 5 " est fausse (F). 
- L’assertion " 4 est un nombre pair " est vraie (V). 
- La phrase " ln(2) vaut approximativement 0, 69 " n’est pas une assertion


### Connecteurs logiques
Ils permettent de créer des assertions à partir d'autres assertions

*Soit P une assertion. La négation de P est l’assertion notée " non (P) " qui est vraie lorsque P est fausse et fausse lorsque P est vraie.*

On peut faire des tables de vérité pour représenter les assertions :

| P   | non(P) |
| --- | ------ |
| V   | F      |
| F   | V      |
PS : en électronique numérique on remplace V et F par 1 et 0


#### Définition 3 (Conjonction de deux assertions) 
Soient P et Q deux assertions. L’assertion notée " P et Q " et appelée conjonction de P et de Q, est l’assertion qui est vraie lorsque P et Q sont simultanément vraies, et fausse dans tous les autres cas. 

#### Définition 4 (Disjonction de deux assertions) 
Soient P et Q deux assertions. L’assertion notée " P ou Q " et appelée disjonction de P et de Q est l’assertion qui est vraie lorsque lorsqu’au moins une des assertions P et Q est vraie et fausse dans tous les autres cas. 

#### Remarque 2 
Le " ou " dans la définition de P ou Q a un sens inclusif et ne doit pas être confondu avec le " ou " du langage courant qui à un sens exclusif.


#### Définition 5 (Implication) 
Soient P et Q deux assertions. L’assertion notée " P ⇒ Q " et appelée implication de P vers Q, est l’assertion qui est fausse lorsque P est vraie et Q est fausse, et vraie dans tous les autres cas. 

#### Remarque 3 
L’assertion " P ⇒ Q " se lit " P implique Q " ou encore " si P alors Q ". Lorsque P ⇒ Q est vraie, on dit que P est une **condition suffisante** pour avoir Q ou que Q est une **condition nécessaire** pour avoir P.


#### Définition 6 (Réciproque) 
Soient P et Q deux assertions. On appelle réciproque de P ⇒ Q l’implication Q ⇒ P. 

#### Exemple 2
Soit x un nombre réel. L’implication (x > 5) ⇒ (x2 > 25) est vraie (V). Sa réciproque (x2 > 25) ⇒ (x > 5) est fausse (F). Nous pouvons le démontrer en utilisant le contre-exemple x = −6.


#### Définition 7 (Équivalence) 
Soient P et Q deux assertions. L’assertion notée " P ⇔ Q " et appelée équivalence de P et de Q est l’assertion qui est vraie lorsque P et Q sont simultanément vraies ou fausses et fausse dans tous les autres cas. 

#### Remarque 4 
L’assertion " P ⇔ Q " se lit " P est équivalent à Q " ou encore " P si et seulement si Q"



#### Théorème 1 (Lois de Morgan)
Soient P et Q deux assertions. Nous avons les équivalences logiques suivantes :
non(P ou Q) ⇔ non(P) et non(Q)
non(P et Q) ⇔ non(P) ou non(Q)


| P   | Q   | P ou Q | non(P ou Q) |
| --- | --- | ------ | ----------- |
| 0   | 0   | 0      | 1           |
| 0   | 1   | 1      | 0           |
| 1   | 0   | 1      | 0           |
| 1   | 1   | 1      | 0           |

| P   | Q   | non(P) et non(Q |
| --- | --- | --------------- |
| 0   | 0   | 1               |
| 0   | 1   | 0               |
| 1   | 0   | 0               |
| 1   | 1   | 0               |



#### Théorème 2 
Soient P et Q deux assertions. Nous avons les équivalences logiques suivantes : 

- (non (non (P))) ⇔ P 
- [P ⇒ Q] ⇔ [non(P) ou Q] 
- [non (P ⇒ Q)] ⇔ [P et non(Q)] 
- [P ⇔ Q] ⇔ [(P ⇒ Q) et (Q ⇒ P)]


#### Définition 8 (Contraposée d’une implication)
Soient P et Q deux assertions. L’implication non(Q) ⇒ non(P) est la contraposée de P ⇒ Q. 


#### Théorème 3 
Soient P et Q deux assertions. L’implication P ⇒ Q et sa contraposée sont équivalentes. [P ⇒ Q] ⇔ [non(Q) ⇒ non(P)]
Ex : pour montrer que $n²$ est pair alors n est pair, il suffit de montrer que si n n'est pas pair alors $n²$ n'est pas pas

$n=2k+1, k \in \mathbb{N}$
$\implies n²=(2k+1)²=4k²+4k+1=2(2k²+k)+1$ qui est impair



### Raisonnements mathématiques

Nous utilisons la logique pour démontrer qu’une assertion est vraie. Les principaux types de raisonnement sont : 
- Raisonnement par **contraposition** (Théorème 3) 
- Raisonnement par l’**absurde** (on suppose que P est fausse pour montrer une contradiction)
- Raisonnement par **double implication** (pour montrer que P ⇔ Q, on démontre que  (P ⇒ Q) et (Q ⇒ P))
- Raisonnement par **analyse-synthèse** (ex : résolution d'eq. Voir [[S1_cours_math_chap1.pdf#page=15|page 15]])
- Raisonnement par **disjonction des cas**


#### Contraposition
Voir [[Intro-Logique et raisonnement mathématiques, Math 2026-09-02#Théorème 3]]


### Absurde

En supposant que non(P) est vraie, nous démontrons que Q et non(Q) sont vraies. Nous disons alors que nous avons obtenu une contradiction. Ce raisonnement permet de démontrer que P est vraie. 

#### Exemple 4 Montrons que √2 est un nombre irrationnel.

x un nb rationel : $$\exists p \in \mathbb{Z},q \in \mathbb{N}^*~tq~x=\frac{p}{q}~et~ PGCD(P,Q)=1$$
Si $\sqrt{ 2 }$ n'est pas irrationnel, alors $\sqrt{ 2 }$ est rationnel
Donc il $\exists p \in \mathbb{N},~q \in \mathbb{N}^*~tq~\sqrt{ 2 }=\frac{p}{q}$ avec p et q premier entre eux
$\implies 2=\frac{p²}{q²}$
$\implies p²=2q²$, donc $p²$ est pair donc $p$ est pair donc $\exists k \in \mathbb{N}~~tq~~p=2k$
$\implies (2k)*(2k)=2q²$
$\implies 4k²=2q²$
$\implies 2k²=q²$ 
$\implies$ q² est par alors q est pair
$\implies$ p et q sont pair, ils ont donc au moins un diviseur comment (2). ils ne sont donc pas premiers entre eux. il y a donc contradiction avec l'hypothèse. 
$\implies \nexists p \in \mathbb{N},q \in \mathbb{N}^*~tq~\sqrt{ 2 }=\frac{p}{q}$



## Exercices


## À retenir
-



## Travail à faire
- [x] Apprendre le théorème de Morgan



---
type: concept
matière: math
tags:
  - concepts
  - math/denombrement
  - math/ensemble
  - math
  - math/combinatoire
MOC:
  - "[[MOC Dénombrement]]"
  - "[[MOC Ensemble]]"
  - "[[MOC Combinatoire]]"
date_creation: 2026-07-26
---
# Nombre de parties d'un ensemble 

> [!info] Définition courte > Le **nombre de parties d'un ensemble** fini $E$ composé de $n$ éléments est le nombre total de sous-ensembles que l'on peut former à partir des éléments de $E$. Il est égal à $2^n$, noté $\text{Card}(\mathcal{P}(E)) = 2^n$. 



## Explication intuitive 
Pour construire une partie (un sous-ensemble) d'un ensemble à $n$ éléments, on passe en revue chaque élément un par un et on prend une décision binaire : 
- Soit l'élément **fait partie** du sous-ensemble (OUI / 1) 
- Soit l'élément **ne fait pas partie** du sous-ensemble (NON / 0) 

Comme il y a 2 choix indépendants pour chacun des $n$ éléments, cela donne $2 \times 2 \times \dots \times 2 = 2^n$ sous-ensembles possibles. Cela inclut l'ensemble vide $\emptyset$ (où on a choisi "NON" pour tous les éléments) et l'ensemble $E$ tout entier (où on a choisi "OUI" pour tous). 


## Fonctionnement 
Pour dénombrer l'ensemble des parties de $E$, noté $\mathcal{P}(E)$ : 
1. **Identifier le cardinal de l'ensemble** : Déterminer $n = \text{Card}(E)$, le nombre d'éléments distincts dans $E$. 

2. **Approche par décision binaire (principe multiplicatif)** : Chaque partie est associée de manière unique à un $n$-uplet de $\{0, 1\}^n$. Par le principe multiplicatif, il y a $2^n$ parties. 3

3. . **Approche par regroupement selon le nombre d'éléments (combinaisons)** : On peut aussi compter les parties ayant $k$ éléments ($k$ allant de $0$ à $n$). Pour chaque $k$, il y a $\binom{n}{k}$ parties possibles. 

4. **Appliquer la formule du binôme de Newton** : $$\sum_{k=0}^{n} \binom{n}{k} = \binom{n}{0} + \binom{n}{1} + \dots + \binom{n}{n} = (1 + 1)^n = 2^n$$ 


## Exemple simple 
**Soit l'ensemble $E = \{a, b, c\}$ de cardinal $n = 3$ :** 
1. **Calcul direct** : $$\text{Card}(\mathcal{P}(E)) = 2^3 = 8 \text{ parties}$$ 
2. **Énumération des 8 parties rangées par taille $k$** : 
	- **$k = 0$** (0 élément) : $\emptyset$ *(1 partie, car $\binom{3}{0} = 1$)* 
	- **$k = 1$** (1 élément) : $\{a\}$, $\{b\}$, $\{c\}$ *(3 parties, car $\binom{3}{1} = 3$)* 
	- **$k = 2$** (2 éléments) : $\{a, b\}$, $\{a, c\}$, $\{b, c\}$ *(3 parties, car $\binom{3}{2} = 3$)* 
	- **$k = 3$** (3 éléments) : $\{a, b, c\} = E$ *(1 partie, car $\binom{3}{3} = 1$)* $$\text{Total} = 1 + 3 + 3 + 1 = 8 = 2^3$$ 
	
## Formules / Algorithmes / Propriétés 
> [!theorem] Théorème du cardinal de l'ensemble des parties 
> Soit $E$ un ensemble fini de cardinal $n \in \mathbb{N}$. 
> L'ensemble des parties de $E$, noté $\mathcal{P}(E)$, a pour cardinal :
> $$\text{Card}(\mathcal{P}(E)) = 2^n$$ 
> **Propriétés fondamentales :** 
> - $\emptyset \in \mathcal{P}(E)$ et $E \in \mathcal{P}(E)$ 
> - Somme des coefficients binomiaux : $\sum_{k=0}^{n} \binom{n}{k} = 2^n$ 
> - Si $F \subseteq E$, alors $\mathcal{P}(F) \subseteq \mathcal{P}(E)$ 

## Concepts liés 
- [[Combinaisons et coefficients binomiaux]] 
- [[Principes additif et multiplicatif en dénombrement]] 
- [[Arrangements et permutations]] 



## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


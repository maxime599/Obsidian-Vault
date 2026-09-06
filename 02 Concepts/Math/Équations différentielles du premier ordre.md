---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/dérivation
  - math/résolutiondequations
  - math/fonction
MOC:
  - "[[MOC Dérivation]]"
  - "[[MOC Résolution d'équations]]"
  - "[[MOC Fonction]]"
date_creation: 2026-07-27
---
# Équations différentielles du premier ordre

> [!info] Définition courte
> Une **équation différentielle du premier ordre** est une équation dont l'inconnue est une fonction $y$ (ou $f$), établissant une relation entre cette fonction et sa dérivée première $y'$.


## Explication intuitive

Contrairement à une équation classique dont la solution est un nombre (ex: $x^2 = 4$), une équation différentielle a pour solution une ou plusieurs **fonctions**.
On les retrouve fréquemment en physique pour modéliser des phénomènes dynamiques :
- **Chute d'un corps avec frottement visqueux** : $v'(t) = -\frac{k}{m}v(t) + g$
- **Désintégration radioactive** : $N'(t) = -a N(t)$


## Formes fondamentales et Solutions

### 1. Équation du type $y' = f(x)$
Résoudre cette équation équivaut directement à **rechercher les primitives** de la fonction $f$.
Les solutions sont les fonctions $y(x) = F(x) + C$, où $F$ est une primitive de $f$.

### 2. Équation du type $y' = ay$ ($a \in \mathbb{R}$)
> [!theorem] Théorème
> L'ensemble des solutions sur $\mathbb{R}$ de l'équation $y' = ay$ est constitué des fonctions :
> $$f(x) = C e^{ax} \quad (C \in \mathbb{R})$$

### 3. Équation du type $y' = ay + b$ ($a \neq 0, b \in \mathbb{R}$)
> [!theorem] Théorème
> - **Solution particulière constante** : La fonction constante $x \mapsto -\frac{b}{a}$ est une solution particulière de l'équation.
> - **Solutions générales** : L'ensemble des solutions sur $\mathbb{R}$ de l'équation $y' = ay + b$ est constitué des fonctions :
> $$f(x) = C e^{ax} - \frac{b}{a} \quad (C \in \mathbb{R})$$

### 4. Condition initiale (Problème de Cauchy)
Pour tout triplet de réels $(a, x_0, y_0)$, l'équation $y' = ay$ (ou $y' = ay + b$) admet une **unique solution** $y$ vérifiant la condition initiale :
$$y(x_0) = y_0$$


## Exemple simple

**Résoudre $3y' + 5y = 0$ avec la condition initiale $y(1) = 2$ :**

1. **Isolement de $y'$** :
   $$3y' + 5y = 0 \iff y' = -\frac{5}{3}y \quad \left(\text{forme } y' = ay \text{ avec } a = -\frac{5}{3}\right)$$
2. **Forme générale des solutions** :
   $$f(x) = C e^{-\frac{5}{3}x} \quad (C \in \mathbb{R})$$
3. **Détermination de $C$ avec la condition $f(1) = 2$** :
   $$C e^{-\frac{5}{3}(1)} = 2 \implies C = 2 e^{\frac{5}{3}}$$
4. **Conclusion** :
   $$f(x) = 2 e^{\frac{5}{3}} e^{-\frac{5}{3}x} = 2 e^{-\frac{5}{3}(x - 1)}$$


## Concepts liés

- [[Primitives d'une fonction]]
- [[Nombre dérivé et équation de la tangente]]
- [[Fonction exponentielle et logarithme népérien]]
- [[Transferts thermiques, résistance et loi de Newton]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
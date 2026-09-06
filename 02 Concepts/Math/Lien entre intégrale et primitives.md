---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/integrales
  - math/dérivation
  - math/fonction
MOC:
  - "[[MOC Integrales]]"
  - "[[MOC Fonction]]"
  - "[[MOC Dérivation]]"
date_creation: 2026-07-27
---
# Lien entre intégrale et primitives

> [!info] Définition courte
> Le **Théorème Fondamental de l'Intégration** établit que toute fonction $f$ continue sur un intervalle $[a; b]$ admet des primitives. La fonction $F$ définie sur $[a; b]$ par $F(x) = \int_a^x f(t)\,\mathrm{d}t$ est l'unique primitive de $f$ qui s'annule en $a$.


## Explication intuitive

Au lieu de calculer une aire par des sommes de rectangles infiniment fins, on utilise le lien direct entre la dérivation et l'intégration :
- La dérivée d'une fonction de surface $F(x) = \int_a^x f(t)\,\mathrm{d}t$ est égale à la hauteur de la courbe en ce point $f(x)$.
- L'intégration est donc l'**opération inverse de la dérivation**.


## Fonctionnement

### 1. Principe de la démonstration (pour $f$ strictement croissante)
Soit $x_0 \in [a; b]$ et $h > 0$ :
$$F(x_0 + h) - F(x_0) = \int_{x_0}^{x_0 + h} f(t)\,\mathrm{d}t$$
Comme $f$ est croissante sur $[x_0; x_0 + h]$, on encadre cette aire par deux rectangles de largeur $h$ :
$$h \times f(x_0) \le F(x_0 + h) - F(x_0) \le h \times f(x_0 + h)$$
En divisant par $h > 0$ :
$$f(x_0) \le \frac{F(x_0 + h) - F(x_0)}{h} \le f(x_0 + h)$$
Par continuité de $f$, quand $h \to 0$, $\lim_{h \to 0} f(x_0 + h) = f(x_0)$.
D'après le **théorème des gendarmes** :
$$\lim_{h \to 0} \frac{F(x_0 + h) - F(x_0)}{h} = f(x_0) \implies F'(x_0) = f(x_0)$$

### 2. Calcul pratique d'une intégrale
Si $F$ est une primitive quelconque de $f$ sur $[a; b]$ :
$$\int_a^b f(x)\,\mathrm{d}x = [F(x)]_a^b = F(b) - F(a)$$


## Exemple simple

**Calculer $I = \int_1^3 (3x^2 - 4x + 5)\,\mathrm{d}x$ :**

1. On cherche une primitive $F(x)$ de $f(x) = 3x^2 - 4x + 5$ :
   $$F(x) = x^3 - 2x^2 + 5x$$
2. On applique la formule :
   $$I = [x^3 - 2x^2 + 5x]_1^3 = F(3) - F(1)$$
   $$F(3) = 3^3 - 2(3)^2 + 5(3) = 27 - 18 + 15 = 24$$
   $$F(1) = 1^3 - 2(1)^2 + 5(1) = 1 - 2 + 5 = 4$$
   $$I = 24 - 4 = 20$$


## Formules / Propriétés

> [!theorem] Théorème fondamental de l'intégration
> Soit $f$ une fonction continue sur un intervalle $I$ et $a \in I$.
> 1. La fonction $F: x \mapsto \int_a^x f(t)\,\mathrm{d}t$ est la primitive de $f$ sur $I$ vérifiant $F(a) = 0$.
> 2. Pour toute primitive $G$ de $f$ sur $[a; b]$ :
>    $$\int_a^b f(x)\,\mathrm{d}x = G(b) - G(a)$$


## Concepts liés

- [[Notion d'intégrale et aire sous une courbe]]
- [[Propriétés et techniques du calcul intégral]]
- [[Primitives d'une fonction]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

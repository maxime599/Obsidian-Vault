---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/probabilites
  - math/lois
MOC:
  - "[[MOC Probabilites]]"
  - "[[07 MOC/Concepts/Math/MOC Lois]]"
date_creation: 2026-07-27
---
# Loi binomiale

> [!info] Définition courte
> La **loi binomiale** de paramètres $n$ et $p$, notée $\mathcal{B}(n, p)$, est la loi de probabilité de la variable aléatoire $X$ qui compte le **nombre de succès** obtenus lors d'un schéma de Bernoulli composé de $n$ épreuves identiques et indépendantes de paramètre $p$.


## Explication intuitive

Si vous répétez une expérience ayant une chance $p$ de réussir $n$ fois de suite (de manière indépendante), la loi binomiale répond à la question : *« Quelle est la probabilité de réussir exactement $k$ fois sur les $n$ essais ? »*


## Fonctionnement

1. **Rédiger la justification (étape clé)** :
   - Définir l'épreuve de Bernoulli et préciser le succès $S$ avec sa probabilité $p$.
   - Indiquer que l'on répète cette épreuve $n$ fois de manière **identique et indépendante**.
   - Conclure : *"On obtient un schéma de Bernoulli de paramètres $n$ et $p$."*
2. **Définir la variable aléatoire** :
   - Soit $X$ la variable aléatoire comptant le nombre de succès $S$.
   - Écrire la notation : $X \sim \mathcal{B}(n, p)$.
3. **Calculer une probabilité exacte** $P(X = k)$ avec la formule théorique ou la calculatrice.
4. **Résoudre un problème de seuil** ($P(X \le k) \ge \alpha$ ou $P(X \ge k) \ge \alpha$) en testant des valeurs de $k$ ou $n$ à la calculatrice.


## Exemple simple

**Réponse au hasard à un QCM :**
- Un élève répond au hasard à un QCM de 10 questions. Chaque question propose 5 réponses dont une seule est juste.
- Succès $S$ : « Répondre correctement », $p = \frac{1}{5} = 0{,}2$.
- Répétition $n = 10$ fois de façon indépendante.
- Soit $X$ le nombre de bonnes réponses : $X \sim \mathcal{B}(10 \;;\; 0{,}2)$.
- Probabilité d'obtenir exactement 9 bonnes réponses :
  $$P(X = 9) = \binom{10}{9} \times (0{,}2)^9 \times (0{,}8)^1 \approx 4{,}096 \times 10^{-6}$$


## Formules / Algorithmes / Propriétés

> [!theorem] Formule de la loi binomiale
> Pour tout entier $k \in \{0, 1, 2, \dots, n\}$ :
> $$P(X = k) = \binom{n}{k} p^k (1-p)^{n-k}$$
> 
> - $\binom{n}{k}$ est le **coefficient binomial** : le nombre de chemins de l'arbre comportant exactement $k$ succès.
> - $p^k$ correspond à la probabilité d'obtenir $k$ succès.
> - $(1-p)^{n-k}$ correspond à la probabilité d'obtenir $n-k$ échecs.

**Indicateurs statistiques :**
- **Espérance** : $E(X) = n p$
- **Variance** : $V(X) = n p (1-p)$
- **Écart-type** : $\sigma(X) = \sqrt{n p (1-p)}$

---

### Méthode : Problème de seuil (Recherche d'un entier $k$)

Pour déterminer le nombre minimal $k$ de places/équipements à prévoir pour garantir un niveau de sécurité $1-\alpha$ (ex: $95\%$ ou $99\%$) :

1. Poser l'inéquation $P(X \le k) \ge 1-\alpha$.
2. Utiliser la fonction de répartition de la calculatrice (`binomcdf` ou `BinomFRép`).
3. Tester les valeurs de $k$ pour encadrer le seuil :
   - Exemple : Si $P(X \le 384) \approx 0{,}949 < 0{,}95$ et $P(X \le 385) \approx 0{,}965 \ge 0{,}95$, alors la valeur minimale recherchée est $k = 385$.


## Concepts liés

- [[Loi de Bernoulli]]
- [[Succession d'épreuves indépendantes et Schéma de Bernoulli]]
- [[Triangle de Pascal]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

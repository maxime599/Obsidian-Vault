---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/Démonstration
MOC:
  - "[[MOC Démonstration]]"
date_creation: 2026-09-02
Ressources: "[[S1_cours_math_chap1.pdf]]"
---
# Modes de raisonnement mathématique

> [!info] Définition courte
> Les **modes de raisonnement** sont les structures logiques employées en mathématiques pour démontrer la véracité d'une assertion ou d'un théorème à partir d'hypothèses et d'axiomes établis.


## 1. Raisonnement par Contraposition

Basé sur l'équivalence logique $[P \implies Q] \iff [\text{non}(Q) \implies \text{non}(P)]$. Pour prouver que $P \implies Q$, on démontre que la falsité de $Q$ entraîne la falsité de $P$.

> [!example] Exemple classique
> Pour montrer que « Si $n^2$ est pair, alors $n$ est pair », il suffit de prouver sa contraposée : « Si $n$ est impair ($\text{non } Q$), alors $n^2$ est impair ($\text{non } P$) ».
> - $n = 2k + 1 \implies n^2 = (2k + 1)^2 = 4k^2 + 4k + 1 = 2(2k^2 + k) + 1$, qui est bien impair.


## 2. Raisonnement par l'Absurde

Pour démontrer qu'une proposition $P$ est vraie, on suppose que sa négation $\text{non}(P)$ est vraie, puis on déduit une contradiction logique (de la forme $Q \text{ et } \text{non}(Q)$).

> [!example] Démonstration de l'irrationnalité de $\sqrt{2}$
> 1. **Hypothèse par l'absurde** : On suppose que $\sqrt{2}$ est rationnel, c'est-à-dire qu'il s'écrit $\sqrt{2} = \frac{p}{q}$ avec $p \in \mathbb{N}, q \in \mathbb{N}^*$ et $\text{PGCD}(p, q) = 1$ (fraction irréductible).
> 2. **Développement** : $2 = \frac{p^2}{q^2} \implies p^2 = 2q^2$. Donc $p^2$ est pair, ce qui implique que $p$ est pair ($p = 2k$).
> 3. **Subsitution** : $(2k)^2 = 2q^2 \implies 4k^2 = 2q^2 \implies q^2 = 2k^2$. Donc $q^2$ est pair, ce qui implique que $q$ est pair.
> 4. **Contradiction** : $p$ et $q$ sont tous deux pairs, ils admettent donc $2$ comme diviseur commun. Cela contredit l'hypothèse $\text{PGCD}(p, q) = 1$.
> 5. **Conclusion** : L'hypothèse est fausse, $\sqrt{2}$ est donc irrationnel.


## 3. Autres structures de démonstration

- **Raisonnement par double implication** : Pour prouver $P \iff Q$, on démontre séparément l'implication directe ($P \implies Q$) et la réciproque ($Q \implies P$).
- **Raisonnement par disjonction des cas** : Si une condition dépend de différentes situations (ex. la parité d'un entier, le signe d'un réel), on prouve l'assertion séparément pour chaque cas couvrant l'ensemble des possibilités.
- **Raisonnement par Analyse-Synthèse** :
  - *Analyse* : On suppose le problème résolu pour déterminer les propriétés nécessaires des solutions potentielles (limite les candidats).
  - *Synthèse* : On vérifie parmi les candidats trouvés lesquels sont effectivement solutions (confirme la validité).


## Concepts liés

- [[Logique mathématique et booléenne]]
- [[Divisibilité dans Z]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/probabilites
  - math/statistiques
MOC:
  - "[[MOC Probabilites]]"
  - "[[MOC Statistiques]]"
date_creation: 2026-07-27
---
# Inégalité de concentration et loi des grands nombres

> [!info] Définition courte
> L'**inégalité de concentration** adapte l'inégalité de Bienaymé-Tchebychev à la moyenne $M_n$ d'un échantillon. La **loi des grands nombres** en découle et affirme que la moyenne empirique d'un grand échantillon converge en probabilité vers l'espérance théorique de la loi.


## Explication intuitive

- **Inégalité de concentration** : Plus la taille $n$ de l'échantillon grandit, plus la variance de la moyenne $M_n$ diminue ($V(M_n) = \frac{V(X)}{n}$), réduisant ainsi la probabilité que la moyenne observée s'éloigne de l'espérance $E(X)$.
- **Loi des grands nombres** : Si on répète une expérience un très grand nombre de fois ($n \to +\infty$), la moyenne observée sur l'échantillon tend inévitablement vers la moyenne théorique (l'espérance).


## Formules et Propriétés

> [!theorem] Inégalité de concentration
> Soit $M_n$ la variable aléatoire moyenne d'un échantillon de taille $n$ d'une variable $X$ d'espérance $E(X)$ et de variance $V(X)$.
> Pour tout réel $\delta > 0$ :
> 
> $$P(|M_n - E(X)| \ge \delta) \le \frac{V(X)}{n \delta^2}$$

---

> [!theorem] Loi des grands nombres (forme faible)
> Pour tout réel strictement positif $\delta > 0$ :
> 
> $$\lim_{n \to +\infty} P(|M_n - E(X)| \ge \delta) = 0$$


## Démonstration

La démonstration de la loi des grands nombres s'appuie directement sur l'inégalité de concentration :

1. D'après l'inégalité de Bienaymé-Tchebychev appliquée à la variable $M_n$ :
   $$P(|M_n - E(M_n)| \ge \delta) \le \frac{V(M_n)}{\delta^2}$$

2. Comme $E(M_n) = E(X)$ et $V(M_n) = \frac{V(X)}{n}$, on obtient l'inégalité de concentration :
   $$0 \le P(|M_n - E(X)| \ge \delta) \le \frac{V(X)}{n \delta^2}$$

3. En passant à la limite quand $n \to +\infty$ :
   $$\lim_{n \to +\infty} \frac{V(X)}{n \delta^2} = 0$$

4. Par le **théorème des gendarmes**, on conclut que :
   $$\lim_{n \to +\infty} P(|M_n - E(X)| \ge \delta) = 0$$


## Concepts liés

- [[Inégalité de Bienaymé-Tchebychev]]
- [[Échantillons et sommes de variables aléatoires]]
- [[Théorèmes de comparaison et d'encadrement pour les fonctions]]



## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

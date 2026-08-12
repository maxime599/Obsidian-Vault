---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/nombrescomplexes
  - math/trigonométrie
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Trigonométrie]]"
  - "[[MOC Algèbre]]"
date_creation: 2026-07-28
---
# Formules de De Moivre et racines n-ièmes

> [!info] Définition courte
> La formule de **De Moivre** donne les puissances d'un complexe de module $r$ et d'argument $\theta$ :
> $$\left(r(\cos\theta+i\sin\theta)\right)^n=r^n\left(\cos(n\theta)+i\sin(n\theta)\right).$$
> Elle permet notamment de déterminer les racines $n$-ièmes d'un complexe non nul.

## Explication intuitive

Élever un complexe à la puissance $n$ multiplie son argument par $n$ et élève son module à la puissance $n$. Inversement, chercher une racine $n$-ième consiste à partager l'argument par $n$ et à prendre la racine $n$-ième du module.

## Fonctionnement

Pour résoudre $z^n=w$ avec $w=\rho e^{i\varphi}\ne0$ :

1. Prendre le module : $|z|=\rho^{1/n}$.
2. Résoudre $n\theta\equiv\varphi\ [2\pi]$ pour l'argument.
3. Obtenir les $n$ solutions :
   $$z_k=\rho^{1/n}e^{i\left(\frac{\varphi+2k\pi}{n}\right)},\quad k=0,1,\dots,n-1.$$
4. Les représenter : elles sont régulièrement réparties sur un cercle de rayon $\rho^{1/n}$.

## Exemple simple

Résolvons $z^3=8$.

Comme $8=8e^{i0}$, les trois solutions sont :
$$z_k=2e^{i\frac{2k\pi}{3}},\quad k\in\{0,1,2\}.$$
Elles valent $2$, $-1+i\sqrt3$ et $-1-i\sqrt3$.

## Propriétés

> [!theorem] Racines de l'unité
> Les solutions de $z^n=1$ sont :
> $$\omega_k=e^{2ik\pi/n},\quad k=0,1,\dots,n-1.$$
> Elles sont appelées les **racines $n$-ièmes de l'unité** et forment les sommets d'un polygone régulier inscrit dans le cercle unité.

## Concepts liés

- [[Forme exponentielle et formule d'Euler]]
- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Équations du second degré dans C]]
- [[Équations et inéquations trigonométriques]]
- [[Équations polynomiales]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

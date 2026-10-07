---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/nombrescomplexes
  - math/vecteurs
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Vecteurs]]"
date_creation: 2026-07-28
---
# Géométrie des nombres complexes

> [!info] Définition courte
> Dans le **plan complexe**, un point $M$ de coordonnées $(a\,;\,b)$ est associé à son affixe $z_M=a+ib$. Le module $|z_M-z_N|$ représente la distance $MN$ et l'argument de $\frac{z_M-z_A}{z_N-z_A}$ permet de mesurer des angles orientés.

## Explication intuitive

Les nombres complexes donnent un langage algébrique à la géométrie plane : les distances se traduisent par des modules, et les rotations par des multiplications par $e^{i\theta}$.

## Fonctionnement

Pour traduire une figure géométrique :

1. Associer une affixe à chaque point.
2. Traduire un vecteur $\overrightarrow{MN}$ par $z_N-z_M$.
3. Utiliser le module pour une distance et l'argument pour un angle.
4. Interpréter les équations de module comme des lieux géométriques.

## Lieux géométriques usuels

- $|z-z_A|=r$ décrit le cercle de centre $A$ et de rayon $r$.
- $|z-z_A|=|z-z_B|$ décrit la médiatrice du segment $[AB]$.
- $\arg\left(\frac{z-z_A}{z_B-z_A}\right)\equiv\theta\ [\pi]$ décrit une droite passant par $A$ (hors cas particuliers).

> [!example] La condition $|z-(1+i)|=2$ décrit le cercle de centre d'affixe $1+i$, donc de centre $(1\,;\,1)$, et de rayon $2$.

## Transformations complexes

> [!theorem] Translation, rotation et homothétie
> - La transformation $z\mapsto z+b$ est une translation de vecteur d'affixe $b$.
> - La transformation $z\mapsto e^{i\theta}z$ est une rotation de centre l'origine et d'angle $\theta$.
> - La transformation $z\mapsto rz$ avec $r>0$ est une homothétie de centre l'origine et de rapport $r$.
> - La transformation $z\mapsto \overline z$ est la symétrie par rapport à l'axe réel.

## Concepts liés

- [[Nombres complexes et forme algébrique]]
- [[Conjugué et module d'un nombre complexe]]
- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Forme exponentielle et formule d'Euler]]
- [[Cercle trigonométrique et angles remarquables]]
- [[Fonction exponentielle et logarithme népérien]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

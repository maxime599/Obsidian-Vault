---
type: concept
tags:
  - concepts
  - Elen1
  - physique/électricité
  - "#elen1/composants"
  - flashcards/Elen1
MOC:
  - "[[MOC Composants]]"
  - "[[MOC Électricité]]"
date_creation: 2026-09-07
Ressources:
---

# Résistance électrique et loi d'Ohm

> [!info] Définition courte
> Une **résistance** est un composant passif qui s'oppose au passage du courant électrique en dissipant de l'énergie sous forme thermique. La **loi d'Ohm** établit la relation linéaire fondamentale entre la tension à ses bornes et le courant qui la traverse.


## 1. Expression de la résistance géométrique

La résistance $R$ d'un conducteur ohmique dépendant de sa géométrie et de son matériau s'exprime par :
?
$$R = \frac{\rho \cdot L}{S}$$
- $R$ : résistance électrique en Ohms ($\Omega$)
- $\rho$ : résistivité du matériau en Ohms-mètres ($\Omega\cdot\text{m}$)
- $L$ : longueur du matériau en mètres ($\text{m}$)
- $S$ : section transversale du matériau en mètres carrés ($\text{m}^2$)
<!--SR:!2026-09-20,3,250-->


## 2. Loi d'Ohm

Pour un conducteur ohmique pur, quel que soit le régime de fonctionnement (continu ou alternatif) :

Lois d'Ohm 
?$$U = R \cdot I$$
- $U$ : tension aux bornes du composant en Volts ($\text{V}$)
- $I$ : intensité du courant traversant le composant en Ampères ($\text{A}$)


## Concepts liés

- [[Groupements de résistances (Série et Parallèle)]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

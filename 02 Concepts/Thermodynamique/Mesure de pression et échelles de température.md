---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/mesure
MOC:
  - "[[MOC Mesure]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Mesure de pression et échelles de température

> [!info] Définition courte
> La **mesure de la pression et de la température** repose sur l'exploitation de propriétés physiques identifiables (dilatation thermique, forces de fluide) étalonnées selon des échelles de référence.


## 1. Échelles de température

La température traduit le niveau d'agitation microscopique d'un système.

- **Kelvin ($\text{K}$)** : Unité fondamentale de température absolue du Système International.
- **Celsius ($^\circ\text{C}$)** : $T(\text{K}) = T(^\circ\text{C}) + 273.15$
- **Fahrenheit ($^\circ\text{F}$)** : $T(^\circ\text{C}) = \frac{T(^\circ\text{F}) - 32}{1.8}$


## 2. Instruments et modes de mesure de la pression

- **Baromètre** : Appareil de précision mesurant la pression atmosphérique absolue et ses variations.
- **Manomètre** : Appareil mesurant une différence de pression par rapport à une pression de référence (souvent la pression atmosphérique de 1 bar).

> [!note] Pression absolue vs Pression relative
> Pour obtenir la **pression absolue** d'un système à partir d'une valeur lue sur un manomètre standard, il faut ajouter la pression de référence :
> $$P_{\text{absolue}} = P_{\text{lue}} + P_{\text{atm}}$$


## Concepts liés

- [[Variables d'état et équilibre thermodynamique]]
- [[Statique des fluides et poussée d'Archimède]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

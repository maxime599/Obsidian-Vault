---
type: concept
tags:
  - concepts
  - Elen1
  - "#elen1/circuits"
  - flashcards/Elen1
MOC:
  - "[[MOC Circuits]]"
date_creation: 2026-09-07
Ressources:
---

# Groupements de résistances (Série et Parallèle)

> [!info] Définition courte
> Le **groupement de résistances** consiste à remplacer un ensemble de résistances interconnectées par une unique **résistance équivalente** $R_{\text{eq}}$ simplifiant l'étude théorique d'un circuit.


## 1. Association en série

Des résistances sont dites en **série** lorsqu'elles sont traversées par un même courant.
$R_{eq}$ si les résistances sont en séries :: $$R_{\text{eq}} = R_1 + R_2 + \dots + R_n = \sum_{i=1}^{n} R_i$$
<!--SR:!2026-12-03,58,310-->

- La résistance équivalente est supérieure à la plus grande des résistances du groupement.


## 2. Association en parallèle (en dérivation)

Des résistances sont dites en **parallèle** lorsqu'elles sont soumises à la même tension.
$R_{eq}$ si les résistances sont en dérivation :: $$\frac{1}{R_{\text{eq}}} = \frac{1}{R_1} + \frac{1}{R_2} + \dots + \frac{1}{R_n} = \sum_{i=1}^{n} \frac{1}{R_i}$$
<!--SR:!2026-12-13,66,310-->

### Cas particuliers usuels

- **$R_{eq}$ si deux résistances en parallèle** ::  $$R_{\text{eq}} = \frac{R_1 \cdot R_2}{R_1 + R_2}$$
<!--SR:!2026-11-29,54,310-->

- **$R_{eq}$ si $n$ résistances identiques de valeur $R$ en parallèle** ::  $$R_{\text{eq}} = \frac{R}{n}$$
<!--SR:!2026-12-02,57,310-->
  *Exemple* : $1\,000$ résistances de $50\,\Omega$ en parallèle donnent :
  $$R_{\text{eq}} = \frac{50}{1\,000} = 0,05\,\Omega$$

> [!note] Propriété remarquable
> La valeur de $R_{\text{eq}}$ d'un groupement parallèle est toujours ==**strictement inférieure à la plus petite** des résistances du groupe.==
<!--SR:!2026-12-10,64,310-->


## Concepts liés

- [[Résistance électrique et loi d'Ohm]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]
- [[Méthode de résolution d'un circuit électrique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````
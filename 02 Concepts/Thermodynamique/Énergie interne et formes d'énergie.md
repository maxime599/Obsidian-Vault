---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/energie
MOC:
  - "[[MOC Energie]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Énergie interne et formes d'énergie

> [!info] Définition courte
> L'**énergie interne** $U$ représente la réserve d'énergie microscopique stockée au sein d'un système (agitation thermique et interactions moléculaires). Elle s'ajoute à l'énergie macroscopique $E_m$ pour former l'énergie totale $E$.


## 1. Structure de l'énergie totale

En thermodynamique, l'énergie totale $E$ d'un système s'exprime par la somme :

$$E = E_m + U$$

- **Énergie macroscopique ($E_m$)** : Somme de l'énergie cinétique globale du système ($E_c$) et de son énergie potentielle dans des champs extérieurs ($E_p$).
- **Énergie interne ($U$)** : Énergie microscopique associée à l'activité atomique et moléculaire du système (cinétique d'agitation thermique et potentielle d'interaction intermoléculaire).


## 2. Principe de conservation de l'énergie

- **Loi de conservation** : L'énergie ne peut être ni créée ni détruite ; elle se transforme d'une forme à une autre ou s'échange avec le milieu extérieur.
- **Approche thermodynamique** : La variation de l'énergie totale $\Delta E$ (et en particulier de $\Delta U$ pour un système au repos macroscopique) est la seule grandeur mesurable lors d'une transformation.


## Concepts liés

- [[Système thermodynamique et milieu extérieur]]
- [[Travail des forces de pression et transfert thermique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

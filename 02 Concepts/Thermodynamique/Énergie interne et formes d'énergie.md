---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/energie
  - flashcards/thermodynamique
MOC:
  - "[[MOC Energie]]"
date_creation: 2026-09-04
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Énergie interne et formes d'énergie

> [!info] Définition courte
> L'**énergie interne** $U$ ==représente la réserve d'énergie microscopique stockée au sein d'un système (agitation thermique et interactions moléculaires)==. Elle s'ajoute à l'énergie macroscopique $E_m$ pour former l'énergie totale $E$.
<!--SR:!2026-10-09,13,230-->


## 1. Structure de l'énergie totale

En thermodynamique, l'énergie totale $E$ d'un système s'exprime par la somme :: $$E = E_m + U$$
<!--SR:!2026-12-06,59,310-->

- **Énergie macroscopique ($E_m$)** ::: Somme de l'énergie cinétique globale du système ($E_c$) et de son énergie potentielle dans des champs extérieurs ($E_p$).
<!--SR:!2026-12-08,61,310!2026-11-16,41,290-->
- **Énergie interne ($U$)** ::: Énergie microscopique associée à l'activité atomique et moléculaire du système (cinétique d'agitation thermique et potentielle d'interaction intermoléculaire).
<!--SR:!2026-10-13,17,250!2026-12-03,58,310-->


## 2. Principe de conservation de l'énergie

- **Loi de conservation** :: L'énergie ne peut être ni créée ni détruite ; elle se transforme d'une forme à une autre ou s'échange avec le milieu extérieur.
<!--SR:!2026-10-24,26,270-->
- **Approche thermodynamique** : La variation de l'énergie totale $\Delta E$ (et en particulier de $\Delta U$ pour un système au repos macroscopique) est la seule grandeur mesurable lors d'une transformation.


## Concepts liés

- [[Système thermodynamique et milieu extérieur]]
- [[Travail des forces de pression et transfert thermique]]
- [[Second Principe de la thermodynamique et énoncés fondamentaux]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

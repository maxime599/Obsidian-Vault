---
type: concept
tags:
  - concepts
  - Thermodynamique
  - thermodynamique/gaz
  - physique/fluides
  - flashcards/thermodynamique
MOC:
  - "[[MOC Gaz]]"
  - "[[MOC Fluides]]"
date_creation: 2026-09-09
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
---
# Modèle du gaz parfait, lois de Joule et relation de Mayer

> [!info] Définition courte
> Un **gaz parfait** est un modèle idéal de fluide constitué de particules ponctuelles sans interactions à distance, obéissant à l'équation d'état $PV = nRT$ et satisfaisant aux deux lois de Joule.


## 1. Équation d'état du gaz parfait

À l'équilibre thermodynamique, les variables d'état sont liées par :

Equation gaz parfait :
? $$PV = nRT$$
- $P$ : pression du gaz ($\text{Pa}$)
- $V$ : volume occupée ($\text{m}^3$)
- $n$ : quantité de matière ($\text{mol}$)
- $R$ : constante universelle des gaz parfaits ($R = 8{,}31446\text{ J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$)
- $T$ : température absolue ($\text{K}$)


## 2. Capacités thermiques et relation de Mayer

Les capacités thermiques molaires dépendent de la structure atomique des molécules du gaz :

| Modèle de gaz                                             | $C_{p,m}$ ($\text{J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$) | $C_{v,m}$ ($\text{J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$) |
| :-------------------------------------------------------- | :----------------------------------------------------------: | :----------------------------------------------------------: |
| **Gaz monoatomique** (ex : $\text{He}$, $\text{Ar}$)      |                      ==$\frac{5}{2}R$==                      |                      ==$\frac{3}{2}R$==                      |
| **Gaz diatomique** (ex : $\text{N}_2$, $\text{O}_2$, air) |                      ==$\frac{7}{2}R$==                      |                      ==$\frac{5}{2}R$==                      |
<!--SR:!2026-10-08,16,290!2026-10-08,16,290!2026-11-17,45,290!2026-11-30,55,310-->

- **Relation de Mayer** :: $$C_P - C_V = nR$$
<!--SR:!2026-10-11,15,230-->
- **Coefficient isentropique (ou d'adiabatique)** $\gamma$ :: $$\gamma = \frac{C_P}{C_V}$$
<!--SR:!2026-10-14,16,230-->
- **Expressions de $C_V$ et $C_P$ en fonction de $\gamma$** ::  $$C_V = \frac{nR}{\gamma - 1}, \qquad C_P = \frac{\gamma nR}{\gamma - 1}$$
<!--SR:!2026-11-12,39,270-->


## 3. Première et deuxième loi de Joule

Pour tout gaz parfait :

- **1ʳᵉ loi de Joule** :: Dans un gaz parfait, l'énergie interne $U$ ne dépend que de la température $T$.
<!--SR:!2026-12-02,57,310-->
  Formule de la 1ʳᵉ loi de Joule :: $$dU = C_V \, dT \implies \Delta U = C_V \Delta T$$
<!--SR:!2026-10-13,14,210-->
  *(Pour une transformation isotherme d'un gaz parfait, $\Delta U$ = ==$0$==)*.
<!--SR:!2026-10-08,16,290-->

- **2ᵈᵉ loi de Joule** :: L'enthalpie $H = U + PV$ ne dépend que de la température $T$.
<!--SR:!2026-11-13,38,290-->
  Formule de la 2ᵈᵉ loi de Joule :: $$dH = C_P \, dT \implies \Delta H = C_P \Delta T$$
<!--SR:!2026-10-12,9,190-->
  *(Pour une transformation isotherme, $\Delta H$ = ==$0$==)*.
<!--SR:!2026-10-07,15,290-->


## Concepts liés

- [[Modèle du gaz parfait]]
- [[Détentes de Joule (Joule-Gay-Lussac et Joule-Thomson)]]
- [[Énergie interne et formes d'énergie]]
- [[Diagramme de Clapeyron]]
- [[Lois de Laplace (Transformations isentropiques)]]
- [[Comparaison des détentes isotherme et adiabatique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


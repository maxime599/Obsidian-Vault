---
semestre: S1
type de cours: CM
date: 2026-09-30T08:00:00
End Date: 2026-09-30T09:30:00
Calendar Title: "[[01 Cours/Thermodynamique/chapitre 4 , Thermodynamique 2026-09-30|chapitre 4 , Thermodynamique]]"
prof: Zgari
tags:
  - cours
  - Thermodynamique
Concepts:
  - "[[Machines thermiques dithermes (Principes, conventions et bilans)]]"
  - "[[Le cycle de Carnot et rendement maximal]]"
  - "[[Moteurs thermiques usuels (Beau de Rochas, Diesel, Brayton)]]"
  - "[[Machines thermiques réceptrices et cycle de Rankine]]"
Ressources:
  - "[[Chapitre IV thermo.pdf]]"
---

```dataviewjs
let current = dv.current();
let pages = dv.pages(`"${current.file.folder}"`)
  .where(p => p.date)
  .sort(p => p.date, 'asc');

let idx = pages.findIndex(p => p.file.path === current.file.path);
let prev = idx > 0 ? pages[idx - 1] : null;
let next = (idx !== -1 && idx < pages.length - 1) ? pages[idx + 1] : null;

let getCleanLink = (page) => {
  if (!page) return "Aucun";
  let cleanTitle = page.file.name.split(',')[0].trim();
  return `[[${page.file.name}|${cleanTitle}]]`;
};

dv.paragraph(`**Précédent :** ${getCleanLink(prev)} | **Suivant :** ${getCleanLink(next)}`);
```
# chapitre 4 


## Objectifs

-

## Notes

### Thermodynamique : Chapitre IV - Les machines thermiques

> [!abstract] Vue d'ensemble du chapitre
> Ce cours traite des **machines thermiques dithermes**, c'est-à-dire des systèmes thermodynamiques subissant des transformations cycliques tout en échangeant du travail $W$ avec le milieu extérieur et de la chaleur avec deux sources thermiques (source chaude à $T_2$ et source froide à $T_1$).
>
> On distingue deux grandes familles de machines thermiques :
> 1. **Les moteurs thermiques** : convertissent de la chaleur en travail mécanique ($W < 0$).
> 2. **Les machines réceptrices (Réfrigérateurs, Climatiseurs, Pompes à chaleur)** : consomment du travail mécanique ($W > 0$) pour transférer de la chaleur d'une source froide vers une source chaude.

---

### 1. Généralités et conventions de signe

#### 1.1 Principe général de fonctionnement
Une machine thermique fonctionne grâce à un fluide subissant des transformations cycliques entre deux sources de chaleur :
- **Source froide** à la température absolue $T_1$ (échange de chaleur $Q_1$).
- **Source chaude** à la température absolue $T_2$ (échange de chaleur $Q_2$).
- **Travail mécanique $W$** échangé avec le milieu extérieur (arbre moteur, piston, compresseur, etc.).

> [!info] Conventions usuelles
> - $T_1$ : Température de la **source froide** ($T_1 < T_2$).
> - $T_2$ : Température de la **source chaude** ($T_2 > T_1$).
> - **Signe des échanges** (point de vue du fluide) :
>   - $Q > 0$ : chaleur **reçue** par le fluide.
>   - $Q < 0$ : chaleur **fournie** (céder) par le fluide.
>   - $W > 0$ : travail **reçu** par le fluide (machine réceptrice).
>   - $W < 0$ : travail **fourni** par le fluide au milieu extérieur (moteur).

---

### 2. Typologie des machines thermiques

#### 2.1 Les moteurs thermiques
Le rôle d'un moteur thermique est de produire un travail mécanique ($W < 0$) exploitable (faire avancer un véhicule, faire tourner un alternateur, etc.).

- **Source chaude ($T_2$)** : la combustion du carburant fournit une quantité de chaleur $Q_2 > 0$ au fluide.
- **Source froide ($T_1$)** : le milieu extérieur refroidit la machine, qui lui cède une quantité de chaleur $Q_1 < 0$.
- **Rendement thermique $r$** :
  $$ r = \frac{\text{Énergie utile}}{\text{Énergie dépensée}} = \frac{-W}{Q_2} = \frac{|W|}{Q_2} $$

#### 2.2 Les réfrigérateurs et climatiseurs
La machine reçoit du travail mécanique ($W > 0$) fourni par un compresseur électrique.

- **Source froide ($T_1$)** : le milieu à refroidir (intérieur du réfrigérateur) perd de l'énergie au profit du fluide : $Q_1 > 0$.
- **Source chaude ($T_2$)** : la machine fournit de la chaleur au milieu extérieur : $Q_2 < 0$.
- **Efficacité / Coefficient de Performance (COP) $\eta$** :
  $$ \eta = \frac{\text{Chaleur extraite}}{\text{Travail fourni}} = \frac{Q_1}{W} $$

#### 2.3 Les pompes à chaleur (PAC)
Une pompe à chaleur extrait de la chaleur de l'environnement extérieur ($Q_1 > 0$) et cède de la chaleur au local à chauffer ($-Q_2 > 0$).

- **Efficacité / Coefficient de Performance (COP) $\eta$** :
  $$ \eta = \frac{\text{Chaleur fournie au local}}{\text{Travail fourni}} = -\frac{Q_2}{W} $$

---
Elle peut être supérieur et inférieur à 1

### 3. Étude thermodynamique des cycles dithermes

#### 3.1 Représentation dans le diagramme de Clapeyron $(P, V)$
Au cours d'un cycle fermé $A \to B \to C \to D \to A$, l'aire géométrique du cycle $\mathscr{A}_{ABCDA}$ représente le travail net échangé :
$$ \mathscr{A}_{ABCDA} = -W_{ABCDA} $$

- **Sens horaire** : $W < 0 \implies$ **Cycle moteur**.
- **Sens trigonométrique (anti-horaire)** : $W > 0 \implies$ **Cycle récepteur / résistant**.

#### 3.2 Bilan du Premier et du Second Principe
- **Premier principe** : $\Delta U_{\text{cycle}} = W + Q_1 + Q_2 = 0 \implies -W = Q_1 + Q_2$
- **Second principe** : $\Delta S_{\text{cycle}} = S_e + S_c = 0$ avec $S_c \ge 0$.
Les deux sont à 0 car on est dans un cycle

> [!theorem] Inégalité de Clausius
> $$ S_{e} = \frac{Q_1}{T_1} + \frac{Q_2}{T_2} \le 0 $$

Si la transformation est réversible, $S_{e} = 0$ donc $\frac{Q_1}{T_1} + \frac{Q_2}{T_2} = 0$


#### 3.3 Tableau récapitulatif des machines thermiques

| Machine Thermique   | Travail $W$ | $Q_1$ (Source froide $T_1$) | $Q_2$ (Source chaude $T_2$) |      Efficacité réelle $\eta$ ou $r$       |  Efficacité de Carnot $\eta_{\text{Carnot}}$   |
| :------------------ | :---------: | :-------------------------: | :-------------------------: | :----------------------------------------: | :--------------------------------------------: |
| **Moteur**          |   $W < 0$   |          $Q_1 < 0$          |          $Q_2 > 0$          | $r = \frac{-W}{Q_2} = 1 + \frac{Q_1}{Q_2}$ |   $r_{\text{Carnot}} = 1 - \frac{T_1}{T_2}$    |
| **Réfrigérateur**   |   $W > 0$   |          $Q_1 > 0$          |          $Q_2 < 0$          |           $\eta = \frac{Q_1}{W}$           | $\eta_{\text{Carnot}} = \frac{T_1}{T_2 - T_1}$ |
| **Pompe à chaleur** |   $W > 0$   |          $Q_1 > 0$          |          $Q_2 < 0$          |          $\eta = -\frac{Q_2}{W}$           | $\eta_{\text{Carnot}} = \frac{T_2}{T_2 - T_1}$ |
On sait que $r= -\frac{W}{Q_{2}}$
Comme $\Delta U=0$, $W+Q_{1}+Q_{2}=0$, $-W=Q_{1}+Q_{2}$
Donc $r=\frac{Q_{1}+Q_{2}}{Q_{2}}$, ou $r=1+\frac{Q_{1}}{Q_{2}}$

---

### 4. Le cycle de Carnot

Le cycle de Carnot est composé de **deux isothermes** et de **deux adiabatiques réversibles**.
- Rendement maximal : $r = 1 - \frac{T_1}{T_2}$

---

### 5. Les moteurs thermiques usuels

#### 5.1 Moteur à explosion (4 temps) : Cycle de Beau de Rochas
- **$O \to A$** : Admission isobare.
- **$A \to B$** : Compression adiabatique.
- **$B \to C$** : Combustion isochore ($Q_2 = C_V(T_C - T_B)$).
- **$C \to D$** : Détente adiabatique.
- **$D \to A$** : Refroidissement isochore ($Q_1 = C_V(T_A - T_D)$).
- **$A \to O$** : Expulsion isobare.

Rendement en fonction du taux de compression $\alpha = \frac{V_A}{V_B}$ :
$$ r = 1 - \frac{1}{\alpha^{\gamma-1}} $$

#### 5.2 Moteur Diesel (Allumage par compression)
Combustion mixte (isochore $B \to C$ puis isobare $C \to D$).
$$ r = 1 - \frac{T_E - T_A}{(T_C - T_B) + \gamma(T_D - T_C)} $$

#### 5.3 Cycle de Brayton / Joule (Turbine à combustion)
Rendement en fonction du rapport de pression $\Gamma = \frac{P_B}{P_A}$ :
$$ r = 1 - \frac{1}{\Gamma^{\left(\frac{\gamma-1}{\gamma}\right)}} $$

---

### 6. Réfrigérateurs et pompes à chaleur réels : Le cycle de Rankine

1. **$A \to B$ (Compresseur)** : Compression adiabatique du gaz froid.
2. **$B \to C$ (Condenseur)** : Liquéfaction du gaz à la température de la source chaude ($Q_2 < 0$).
3. **$C \to D$ (Détendeur)** : Détente de Joule-Thomson.
4. **$D \to A$ (Évaporateur)** : Évaporation complète du fluide au contact de la source froide ($Q_1 > 0$).

## Exercices
Il faut calculer $Q_{1}$


$Q_{eau} = \Delta U_{eau} = C(T_{f}-T_{i}) = -167.4kJ$
Energie cédé par l'eau au fluide thermique = 167.4kJ

$\Delta S_{crée}=0$ car réversible
Donc $\Delta S_{eau}+\Delta S_{fluide}+\Delta S_{atmosphère}=0$


## À retenir
-
## Travail à faire

- [x] transformer en concept
- [x] ajouter des flashcardes
- [x] comprendre
- [x] apprendre
- [x] s'entrainer



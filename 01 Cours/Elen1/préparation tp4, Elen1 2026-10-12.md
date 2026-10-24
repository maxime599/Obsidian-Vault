---
semestre: S1
type de cours: Maison
date: 2026-10-12T16:40:46
End Date: 2026-10-12T17:10:46
Calendar Title: "[[01 Cours/Elen1/préparation tp4, Elen1 2026-10-12|préparation tp4, Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Montages de base à Amplificateur Opérationnel (AOP)]]"
Ressources:
  - "[[TP N°4 elen.pdf]]"
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
# préparation tp4


## Objectifs

-

## Notes
# Exercice : Amplificateur Opérationnel (AOP)

## Q1 : Hypothèses de l'AOP Parfait (Idéal)

Un amplificateur opérationnel (AOP) est considéré comme **idéal** (ou parfait) s'il vérifie les propriétés suivantes :
* **Court-circuit virtuel** : $\epsilon = e^+ - e^- = 0 \implies e^+ = e^-$
* **Courants d'entrée nuls** : $I^+ = 0\text{ A}$ et $I^- = 0\text{ A}$

---

## Q2 : Montage Amplificateur Inverseur


### 1. Démonstration de la relation entre $V_s$ et $V_e$

**2 Lois des mailles**
$M_{1} : V_{e}+\epsilon=U_{1} \implies V_{e}= U_{1}=0$
$M_{2} : V_{s}=U_{2}$

**3 Loi des noeuds**
$I_{1}+I_{2}=I^-$
$I_{1}+I_{2}= 0$

**4 Loi d'ohm**
$Ve = R_{1}I_{1}$, $V_{s} = R_{2}I_{2}$

**5 Calcul**
$V_{e} = R_{1}I_{1} = -R_{1}I_{2}\implies I_{1} = \frac{V_{e}}{R_{1}} = -\frac{Vs}{R_{2}}$
$V_{s} = R_{2}I_{2} =  -R_{2}I_{1} \implies I_{2} =-\frac{V_{e}}{R_{1}}= \frac{V_{s}}{R_{2}}$
Donc $-\frac{V_{s}}{V_{e}} = \frac{R_{2}}{R_{1}}$ ou $V_{s}=-V_{e} * \frac{R_{2}}{R_{1}}$



### 2. Dimensionnement pour une amplification de 100

L'amplification (gain) en tension vaut $G = \left\vert{}\frac{V_s}{V_e}\right\vert{} = \frac{R_2}{R_1}$.
Pour obtenir un gain de 100, il faut :
$$\frac{R_2}{R_1} = 100 \implies R_2 = 100 \cdot R_1$$


* **Exemple de couple de résistances :**
  * $R_1 = 1\text{ k}\Omega$
  * $R_2 = 100\text{ k}\Omega$

---

## Q3 : Montage Amplificateur Non Inverseur

### Démonstration de la relation entre $V_s$ et $V_e$

Il y a Contre réaction $\implies e^+ = e^- \implies \epsilon = 0$ donc $I^- = 0$ et $I^+ = 0$

Pont diviseur :
$e^- = V_{s}* \frac{R_{1}}{R_{1}+R_{2}}$
Donc $V_{e} = V_{s}* \frac{R_{1}}{R_{1}+R_{2}}$


## Q4 court circuit
$R_{1} et R_{2}$ valent 0, donc Vs = Ve

## Q5
Il y a Contre réaction $\implies e^+ = e^- \implies \epsilon = 0$ donc $I^- = 0$ et $I^+ = 0$

Théorème de superposition :
$U_{R_{1}} = V_{e_{2}} * \frac{R_{11}}{R_{11}+R_{12}} + V_{e_{1}} * \frac{R_{12}}{R_{11}+R_{12}}$
$U_{R_{1}} = 0.175V_{e_{2}} + 0.825V_{e_{1}}$


**2. Lois des mailles**
$V_{e_{1}}=U_{11}$
$V_{e_{2}}=U_{12}$
$V_{s}=U_{2}$


**3. Lois des noeuds**
$I_{2}+I_{11}+I_{12}=0$

**4. Lois d'Ohm**
$V_{e_{1}}=R_{11}+I_{11}$
$V_{e_{2}}=R_{12}+I_{12}$
$V_{s}=R_{2}I_{2}$

**5. Calcul**
$I_{11}= \frac{V_{e_{1}}}{R_{11}}$, $I_{12}= \frac{Ve_{2}}{R_{12}}$
$I_{2}=\frac{V_{s}}{R_{2}}$

Donc $\frac{V_{s}}{R_{2}}= -\frac{V_{e_{1}}}{R_{11}} - \frac{Ve_{2}}{R_{12}}$

$V_{s} = -R_{2}*(\frac{V_{e_{1}}}{R_{11}} + \frac{Ve_{2}}{R_{12}})$


## Exercices


## À retenir
-
## Travail à faire




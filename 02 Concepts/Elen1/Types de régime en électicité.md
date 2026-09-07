---
tags:
  - concepts
  - Elen1
  - "#physique/signaux"
  - physique/électricité
MOC:
  - "[[MOC Signaux]]"
  - "[[MOC Électricité]]"
date_creation: 2026-09-01
---
# Signaux et régimes électriques

> [!info] Définition courte
> Un **signal électrique** correspond à la circulation d'un courant électrique $I$ (en Ampères, $\text{A}$) engendré par une différence de potentiel ou tension $U$, $E$ ou $V$ (en Volts, $\text{V}$) aux bornes d'un circuit.


## 1. Les différents régimes électriques

- **Régime continu** : Tension constante au cours du temps. Le circuit présente deux potentiels fixes (une borne $+$ et une borne $-$).
  - *Exemples* : Piles, batteries, accumulateurs.
- **Régime sinusoïdal** : Tension périodique qui varie selon une fonction sinus.
  - *Exemple* : Réseau électrique domestique.
- **Régime quelconque** : Tout signal ne répondant ni aux critères du régime continu ni à ceux du régime sinusoïdal.


## 2. Caractéristiques du régime sinusoïdal

L'expression temporelle de la tension est donnée par :
$$V(t) = V_{\text{crête}} \cdot \sin(\omega \cdot t)$$



### Tensions et amplitudes
- **Valeur crête ($V_{\text{crête}}$ ou $V_{\text{max}}$)** : Valeur maximale ou minimale atteinte par la courbe (ex. $325\text{ V}$ pour le réseau domestique en France).
- **Amplitude crête à crête ($V_{\text{pp}}$)** : Écart total entre le maximum et le minimum :
  $$V_{\text{pp}} = V_{\text{max}} - V_{\text{min}}$$
- **Amplitude ($V_m$)** :
  $$V_m = \frac{V_{\text{max}} - V_{\text{min}}}{2}$$
- **Tension efficace ($V_{\text{eff}}$)** : Tension continue équivalente fournissant les mêmes performances énergétiques dans un récepteur :
  $$V_{\text{eff}} = \frac{V_{\text{crête}}}{\sqrt{2}}$$
  *(Exemple : $V_{\text{eff}} = \frac{325}{\sqrt{2}} \approx 230\text{ V}$)*

### Période, fréquence et pulsation
- **Période ($T$)** : Durée d'un motif élémentaire exprimée en secondes ($\text{s}$). Un cycle complet correspond à un tour du cercle trigonométrique ($2\pi\text{ rad}$).
- **Fréquence ($f$)** : Nombre de motifs répétés en une seconde, exprimée en Hertz ($\text{Hz}$) :
  $$f = \frac{1}{T}$$
  *(En France, $f = 50\text{ Hz} \implies T = \frac{1}{50} = 0{,}02\text{ s}$)*
- **Pulsation ($\omega$)** : Vitesse de rotation associée au cercle trigonométrique, en $\text{rad}\cdot\text{s}^{-1}$ :
  $$\omega = 2\pi \cdot f = \frac{2\pi}{T}$$

> [!note] Addition de tensions sinusoïdales
> La somme de deux tensions sinusoïdales s'effectue point par point au cours du temps. On ne peut pas sommer directement leurs amplitudes numériques sans prendre en compte leur déphasage.


## ℹ️ Organisation et Évaluations

- **Prof de TP** : Hugo Bruhier
- **Ressources de cours** : [Moodle - Université de Saint-Étienne](https://mood.univ-st-etienne.fr/course/view.php?id=4166)

| Type d'évaluation | Coefficient |
| :--- | :--- |
| Évaluations / TD | 0,8 |
| Devoirs surveillés ($\times 2$) | 1,5 |
| Prérequis + Interrogations de TP | 0,8 |
| Partiel de TP (Novembre) | 1,5 |
| Moyenne des comptes rendus de TP | 1,0 |


## Concepts liés

- [[Circuit RC - Charge et décharge]]

## Outils Mathématiques requis

- [[Étude et propriétés des fonctions cosinus et sinus]]
- [[Cercle trigonométrique et angles remarquables]]



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

---
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
  - elen-ener/signaux-alternatifs
MOC:
  - "[[MOC Signaux]]"
  - "[[MOC Signaux-alternatifs]]"
date_creation: 2026-09-01
---
# Signaux et régimes électriques

> [!info] Définition courte
> Un **signal électrique** correspond à la circulation d'un courant électrique $I$ (en Ampères, $\text{A}$) engendré par une différence de potentiel ou tension $U$, $E$ ou $V$ (en Volts, $\text{V}$) aux bornes d'un circuit.
```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```


## 1. Les différents régimes électriques

Les 3 types de régimes :
?
- **Régime continu** : Tension constante au cours du temps. Le circuit présente deux potentiels fixes (une borne $+$ et une borne $-$).
  - *Exemples* : Piles, batteries, accumulateurs.
- **Régime sinusoïdal** : Tension périodique qui varie selon une fonction sinus.
  - *Exemple* : Réseau électrique domestique.
- **Régime quelconque** : Tout signal ne répondant ni aux critères du régime continu ni à ceux du régime sinusoïdal.
<!--SR:!2026-12-12,65,310-->


## 2. Caractéristiques du régime sinusoïdal

L'expression temporelle de la tension est donnée par :
==$$V(t) = V_{\text{crête}} \cdot \sin(\omega \cdot t)$$==
<!--SR:!2026-12-10,32,270-->



### Tensions et amplitudes
- **Valeur crête ($V_{\text{crête}}$ ou $V_{\text{max}}$)** :: Valeur maximale ou minimale atteinte par la courbe (ex. $325\text{ V}$ pour le réseau domestique en France).
<!--SR:!2027-04-22,161,310-->
- **Amplitude crête à crête ($V_{\text{pp}}$)** : Écart total entre le maximum et le minimum :: $$V_{\text{pp}} = V_{\text{max}} - V_{\text{min}}$$
<!--SR:!2026-12-11,64,310-->
- **Amplitude ($V_m$)** :: $$V_m = \frac{V_{\text{max}} - V_{\text{min}}}{2}$$
<!--SR:!2027-01-10,51,270-->
- **Tension efficace ($V_{\text{eff}}$)** : Tension continue équivalente fournissant les mêmes performances énergétiques dans un récepteur ::  $$V_{\text{eff}} = \frac{V_{\text{crête}}}{\sqrt{2}}$$
<!--SR:!2026-12-01,56,310-->

*(Exemple : $V_{\text{eff}} = \frac{325}{\sqrt{2}} \approx 230\text{ V}$)*

### Période, fréquence et pulsation
- **Période ($T$)** :: Durée d'un motif élémentaire exprimée en secondes ($\text{s}$). Un cycle complet correspond à un tour du cercle trigonométrique ($2\pi\text{ rad}$).
<!--SR:!2027-01-23,90,290-->
- **Fréquence ($f$)** :: Nombre de motifs répétés en une seconde, exprimée en Hertz ($\text{Hz}$) :
<!--SR:!2026-12-07,62,310-->
  $$f = \frac{1}{T}$$
  *(En France, $f = 50\text{ Hz} \implies T = \frac{1}{50} = 0{,}02\text{ s}$)*
- **Pulsation ($\omega$)** : Vitesse de rotation associée au cercle trigonométrique, en $\text{rad}\cdot\text{s}^{-1}$ ::  $$\omega = 2\pi \cdot f = \frac{2\pi}{T}$$
<!--SR:!2026-12-05,60,310-->

> [!note] Addition de tensions sinusoïdales
> La somme de deux tensions sinusoïdales s'effectue point par point au cours du temps. On ne peut pas sommer directement leurs amplitudes numériques sans prendre en compte leur déphasage.


## ℹ️ Organisation et Évaluations

- **Prof de TP** : Hugo Bruhier
- **Ressources de cours** : [Moodle - Université de Saint-Étienne](https://mood.univ-st-etienne.fr/course/view.php?id=4166)

| Type d'évaluation                | Coefficient |
| :------------------------------- | :---------- |
| Évaluations / TD                 | 0,8         |
| Devoirs surveillés ($\times 2$)  | 1,5         |
| Prérequis + Interrogations de TP | 0,8         |
| Partiel de TP (Novembre)         | 1,5         |
| Moyenne des comptes rendus de TP | 1,0         |


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

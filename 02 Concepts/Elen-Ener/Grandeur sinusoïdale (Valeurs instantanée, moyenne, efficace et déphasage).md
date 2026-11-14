---
type: concept
tags:
  - concepts
  - Elen-Ener
  - flashcards/Elen-Ener
  - elen-ener/signaux-alternatifs
MOC:
  - "[[MOC Signaux-alternatifs]]"
date_creation: 2026-11-03
Ressources:
  - "[[ENER1 cours.pdf]]"
---

# Grandeur sinusoïdale (Valeurs instantanée, moyenne, efficace et déphasage)

> [!info] Définition courte
> Une grandeur sinusoïdale se caractérise par sa périodicité, sa valeur maximale (amplitude), sa valeur efficace et sa phase initiale. Le déphasage entre deux signaux traduit leur décalage temporel ou angulaire.

```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        if (h.level === 1) continue;
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```

## 1. Valeur instantanée et paramètres temporels

L'expression générale d'une tension sinusoïdale est ::$$u(t) = \hat{U} \cos(\omega t + \varphi)$$
<!--SR:!2026-11-20,12,270-->


- $u(t)$ : valeur instantanée (en V)
- $\hat{U}$ t: valeur maximale / amplitude (en V)
- $\omega$ : pulsation (en $\text{rad}\cdot\text{s}^{-1}$) avec $\omega = 2\pi f$
- $\varphi$ : phase à l'origine $t = 0$ (en rad)
- $\omega t + \varphi$ : phase instantanée à l'instant $t$ (en rad)
- $T = \frac{1}{f}$ : période du signal (en s), avec $f$ la fréquence (en Hz).


## 2. Valeur moyenne et valeur efficace

### A. Valeur moyenne
La valeur moyenne $\overline{x}$ d'une grandeur périodique $x(t)$ de période $T$ est ::$$\overline{x} = \frac{1}{T} \int_{T} x(t) \, \text{d}t$$
<!--SR:!2026-11-19,11,270-->
*(NB : La valeur moyenne d'un signal purement sinusoïdal est nulle, $\overline{u} = 0$).*  
*Mesure* : Voltmètre numérique ou magnéto-électrique en position DC (pour $f \in [10\text{ Hz}, 5\text{ kHz}]$).

### B. Valeur efficace
La valeur efficace $Y$ d'une grandeur périodique $y(t)$ se calcule par ::$$Y = \sqrt{\frac{1}{T} \int_{T} y^2(t) \, \text{d}t}$$
<!--SR:!2026-11-15,3,230-->
Pour un signal purement sinusoïdal :
$$U = \frac{\hat{U}}{\sqrt{2}}$$
*Mesure* : Voltmètre numérique TRMS (Root Mean Square) en position AC + DC.


## 3. Représentation cartésienne et déphasage

Les grandeurs sinusoïdales s'écrivent :
?
- $u(t) = \hat{U} \cos(\omega t + \varphi_u)$
- $i(t) = \hat{I} \cos(\omega t + \varphi_i)$
<!--SR:!2026-11-21,9,250-->

![[Pasted image 20261102141819.png]]

Le **déphasage** $\varphi$ entre $u(t)$ et $i(t)$ est la différence entre leurs phases initiales ::$$\varphi = \varphi_u - \varphi_i$$
<!--SR:!2026-11-23,15,290-->
- Si $\varphi > 0$ :: la tension $u$ est en **avance** sur l'intensité $i$.
<!--SR:!2026-11-23,15,290-->
- Si $\varphi < 0$ :: la tension $u$ est en **retard** sur l'intensité $i$.
<!--SR:!2026-11-22,14,290-->
- Relation avec le décalage temporel $\tau$ : $|\varphi| = \frac{2\pi \tau}{T}$.


## Concepts liés

- [[Types de régime en électicité]]
- [[Représentation de Fresnel et dipôles élémentaires (R, L, C)]]
- [[Puissances en régime sinusoïdal et Théorème de Boucherot]]
- [[Étude et propriétés des fonctions cosinus et sinus]]
- [[Notion d'intégrale et aire sous une courbe]]




## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

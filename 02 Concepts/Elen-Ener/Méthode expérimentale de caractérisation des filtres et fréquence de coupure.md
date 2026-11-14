---
type: concept
tags:
  - concepts
  - Elen-Ener
  - flashcards/Elen-Ener
  - Elen1/analyse
  - elen1/methode
MOC:
  - "[[07 MOC/Concepts/Elen-Ener/MOC Analyse|MOC Analyse]]"
  - "[[07 MOC/Concepts/Elen-Ener/MOC Methode|MOC Methode]]"
  - t
date_creation: 2026-11-03
Ressources:
---

# Méthode expérimentale de caractérisation des filtres et fréquence de coupure

> [!info] Définition courte
> La **méthode expérimentale de caractérisation** d'un filtre inconnu en travaux pratiques consiste à identifier sa nature (passe-bas ou passe-haut) par des essais aux limites (BF et HF), à mesurer son amplification dans la bande passante, et à déterminer sa **fréquence de coupure** par calcul du gain à $-3\text{ dB}$ et repérage à l'oscilloscope.

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

## 1. Identification de la nature du filtre (Essais BF et HF)

Pour identifier un montage inconnu sur table :
1. **Essai en Basses Fréquences (BF)** (ex. $100\text{ Hz}$) :
   - Si **amplification** (ou transmission intégrale) $\implies$ Le filtre s'oriente vers un **Passe-Bas**.
   - Si **atténuation** $\implies$ Le filtre s'oriente vers un **Passe-Haut**.
2. **Essai en Hautes Fréquences (HF)** (ex. $10\text{ kHz}$) :
   - Si **atténuation** $\implies$ C'est confirmé : c'est un **Passe-Bas**.
   - Si **amplification** $\implies$ C'est confirmé : c'est un **Passe-Haut**.


## 2. Détermination de l'amplification dans la bande passante

Se placer dans la zone de la bande passante pour mesurer l'amplitude du signal de sortie par rapport à l'entrée, c'est-à-dire déterminer le rapport $\frac{V_s}{V_e}$ (ex: $10$).

Le gain s'exprime selon la fonction de transfert canonique :
- **Pour un Passe-Bas** :
  $$\text{Gain}_{\text{dB}} = 20\log \left\lvert \frac{V_s}{V_e} \right\rvert = 20\log \left| \text{Ampli} \right| + 20\log \left\lvert \frac{1}{1 + j\tau\omega} \right\rvert$$
- **Pour un Passe-Haut** :
  $$\text{Gain}_{\text{dB}} = 20\log \left\lvert \frac{V_s}{V_e} \right\rvert = 20\log \left| \text{Ampli} \right| + 20\log \left| j\tau\omega \right| + 20\log \left\lvert \frac{1}{1 + j\tau\omega} \right\rvert$$


## 3. Protocole expérimental de recherche de la fréquence de coupure ($f_c$)

Puisque $\tau = \frac{1}{\omega_0}$, à la fréquence de coupure ($\omega = \omega_0$), on a $\tau\omega = 1$. En remplaçant ce terme dans l'expression du gain :

- **Exemple de calcul (Passe-Bas)** :
  $$20\log \left\lvert \frac{V_s}{V_e} \right\rvert = 20\log |10| + 20\log \left\lvert \frac{1}{1 + j} \right\rvert = 20 + (-3) = 17\text{ dB}$$
- On isole le rapport de tension cible :
  $$20\log\left( \frac{V_s}{V_e} \right) = 17 \implies V_s = V_e \times 10^{\frac{17}{20}}$$

**Manipulation pratique** :
1. Choisir une valeur fixe pour $V_e$ (en s'assurant que $V_s$ reste parfaitement sinusoïdal et non saturé).
2. Calculer la tension de sortie cible $V_{s,\text{cible}} = V_e \times 10^{\text{Gain}_{fc}/20}$.
3. Faire varier la fréquence de l'oscillateur jusqu'à ce que l'oscilloscope mesure exactement $V_{s,\text{cible}}$. La fréquence lue est alors la **fréquence de coupure** $f_c$.


## Concepts liés

- [[Analyse harmonique et diagrammes de Bode]]
- [[Analyse qualitative des filtres (circuits passifs et AOP)]]
- [[Grandeur sinusoïdale (Valeurs instantanée, moyenne, efficace et déphasage)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
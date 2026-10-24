---
type: concept
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
  - Elen1/analyse
MOC:
  - "[[07 MOC/Concepts/Elen1/MOC Analyse|MOC Analyse]]"
date_creation: 2026-10-06
Ressources:
---

# Analyse harmonique et diagrammes de Bode

> [!info] Définition courte
> L'**analyse harmonique** consiste à étudier le comportement d'un circuit linéaire en régime sinusoïdal permanent lorsqu'il est soumis à une tension sinusoïdale pure. Elle permet de caractériser le système par sa **fonction de transfert**, son **gain en décibels** et sa **phase** représentés dans les **diagrammes de Bode**.
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


## 1. Régime sinusoïdal permanent et impédances complexes

Lorsqu'un circuit linéaire est alimenté par un signal sinusoïdal d'entrée $V_e(t)$ de pulsation $\omega$, le signal de sortie $V_s(t)$ est également sinusoïdal et de même pulsation $\omega$, mais présente une amplitude modifiée et un déphasage.

L'étude s'appuie sur le formalisme complexe et la notion d'**impédance complexe $\underline{Z}$** :

| Composant              |               Impédance complexe $\underline{Z}$                | Module $\underline{Z}$  | Argument (Phase) $\arg(\underline{Z})$ |
| :--------------------- | :-------------------------------------------------------------: | :---------------------: | :------------------------------------: |
| **Résistance ($R$)**   |                    ==$\underline{Z}_R = R$==                    |         ==$R$==         |                ==$0$==                 |
| **Condensateur ($C$)** | ==$\underline{Z}_C = \frac{1}{jC\omega} = -\frac{j}{C\omega}$== | ==$\frac{1}{C\omega}$== |          ==$-\frac{\pi}{2}$==          |
| **Inductance ($L$)**   |                ==$\underline{Z}_L = jL\omega$==                 |      ==$L\omega$==      |          ==$+\frac{\pi}{2}$==          |
<!--SR:!2026-10-29,16,290!2026-10-28,15,290!2026-10-28,15,290!2026-10-28,15,290!2026-10-25,12,270!2026-10-27,14,290!2026-10-27,14,290!2026-10-26,12,270!2026-10-29,16,290-->


## 2. Fonction de transfert, Gain et Phase

La **fonction de transfert** (ou transmittance) complexe est le rapport entre les grandeurs complexes de sortie et d'entrée $H(j\omega) =$: 

$$H(j\omega) = \frac{\underline{V}_s}{\underline{V}_e}$$

De cette fonction de transfert, on extrait deux grandeurs fondamentales :

1. **Le Gain en décibels ($G_{\text{dB}}$)** ::$$G_{\text{dB}}(\omega) = 20 \log_{10} |H(j\omega)| \quad (\text{en dB})$$
<!--SR:!2026-11-09,20,250-->
2. **La Phase (Déphasage $\varphi$)** ::$$\varphi(\omega) = \arg(H(j\omega)) \quad (\text{en rad ou en degrés})$$
<!--SR:!2026-10-25,11,270-->
La fréquence de coupure :: $fc = \frac{1}{2 \pi \tau}$. il y aura des réactions différentes avant et après cette fréquence
<!--SR:!2026-10-21,10,270-->

## 3. Diagrammes de Bode

Les **diagrammes de Bode** sont constitués de deux tracés superposés représentant la réponse en fréquence du système :
?
- **Le diagramme de gain** : $G_{\text{dB}}$ en fonction de la fréquence/pulsation.
- **Le diagramme de phase** : $\varphi$ en fonction de la fréquence/pulsation.
<!--SR:!2026-10-21,10,270-->

### Échelle logarithmique
Les diagrammes sont tracés sur un papier **semi-logarithmique** :
- L'axe des ordonnées est gradué de façon linéaire ($G_{\text{dB}}$ ou $\varphi$).
- L'axe des abscisses ($\omega$ ou $f$) est en **échelle logarithmique**, où chaque intervalle régulier représente une multiplicateur par 10 (une **décade**).


## 4. Exemples de circuits $RC$ et fonctions de transfert canoniques

Les circuits passifs simples font intervenir la constante de temps $\tau$ (avec $\tau = RC$ ou $\tau = \frac{L}{R}$) et s'expriment à partir de briques élémentaires :: $G_{0},~j\tau \omega,~ \frac{1}{j\tau \omega},~1+j\tau \omega,~ \frac{1}{1+j\tau \omega}$
<!--SR:!2026-10-27,14,290-->

### A. Circuit $RC$ (Filtre passe-bas du premier ordre)
La tension de sortie $V_s$ est prélevée aux bornes du condensateur $C$.

- **Pont diviseur de tension** :
  $$H(j\omega) = \frac{\underline{Z}_C}{\underline{Z}_R + \underline{Z}_C} = \frac{\frac{1}{jC\omega}}{R + \frac{1}{jC\omega}}$$
- **Forme canonique** (en multipliant par $jC\omega$) :
  $$H(j\omega) = \frac{1}{1 + jRC\omega} = \frac{1}{1 + j\tau\omega}$$

### B. Circuit $CR$ (Filtre passe-haut du premier ordre)
La tension de sortie $V_s$ est prélevée aux bornes de la résistance $R$.

- **Pont diviseur de tension** :
  $$H(j\omega) = \frac{\underline{Z}_R}{\underline{Z}_R + \underline{Z}_C} = \frac{R}{R + \frac{1}{jC\omega}} = \frac{jRC\omega}{1 + jRC\omega}$$
- **Forme canonique** :
  $$H(j\omega) = \frac{j\tau\omega}{1 + j\tau\omega} = j\tau\omega \cdot \frac{1}{1 + j\tau\omega}$$
- **Calcul du Gain en décibels** :
  $$G_{\text{dB}} = 20 \log_{10} |H(j\omega)| = 20 \log_{10} |j\tau\omega| + 20 \log_{10} \left| \frac{1}{1 + j\tau\omega} \right|$$
![[Drawing 2026-10-08 08.55.23.excalidraw]]

## Concepts liés

- [[Composants réactifs ; Condensateur et Inductance]]
- [[Pont diviseur de tension]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]
- [[Nombres complexes et forme algébrique]]
- [[Argument et forme trigonométrique d'un nombre complexe]]
- [[Conjugué et module d'un nombre complexe]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

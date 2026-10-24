---
type: concept
matière: physique
tags:
  - concepts
  - physique
  - physique/électricité
  - physique/dynamique
MOC:
  - "[[MOC Électricité]]"
  - "[[MOC Dynamique]]"
date_creation: 2026-07-28
---
# Circuit RC - Charge et décharge

> [!info] Définition courte
> Un **circuit RC série** réunit un conducteur ohmique de résistance $R$ et un condensateur de capacité $C$ Son évolution au cours du temps comporte un **régime transitoire** modélisé par une équation différentielle linéaire du premier ordre.
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


## 1. Charge du condensateur

Soumis à une tension constante $E$ apportée par un générateur, le condensateur (initialement déchargé) se charge progressivement.


- **Équation différentielle**:
  $$\frac{du_C(t)}{dt} + \frac{1}{RC} \cdot u_C(t) = \frac{E}{RC}$$
- **Solution de l'équation**:
  $$u_C(t) = E \cdot \left(1 - e^{-\frac{t}{\tau}}\right)$$ 


## 2. Décharge du condensateur

Lorsque le générateur est court-circuité, le condensateur initialement chargé se décharge à travers la résistance $R$.


- **Équation différentielle**:
  $$\frac{du_C(t)}{dt} + \frac{1}{RC} \cdot u_C(t) = 0$$
- **Solution de l'équation
  $$u_C(t) = E \cdot e^{-\frac{t}{\tau}}$$


## 3. Constante de temps $\tau$

La constante de temps (ou temps caractéristique) du circuit est définie par:
$$\tau = R \cdot C$$ 

*(avec $R$ en Ohms $\Omega$, $C$ en Farads $\text{F}$, et $\tau$ en secondes $\text{s}$).*

### Détermination graphique de $\tau$ :
1. **Méthode des $63\%$ / $37\%$** : 
   - Lors de la charge, $u_C(\tau) = 0{,}63 \times E$ (le condensateur atteint $63\%$ de sa charge finale).
   - Lors de la décharge, $u_C(\tau) = 0{,}37 \times E$ (il reste $37\%$ de la tension initiale).
1. **Méthode de la tangente à l'origine** : La tangente à la courbe $u_C(t)$ en $t=0$ coupe l'asymptote horizontale $u_C = E$ (en charge) ou l'axe des temps (en décharge) à l'instant $t = \tau$.


## 4. Applications pratiques et capteurs capacitifs

- **Capteurs capacitifs** : La modification de $S$, $e$ ou de l'isolant varie la capacité $C$, permettant de mesurer des épaisseurs, des niveaux de liquide ou des déplacements.
- **Applications temporelles et filtrage** : Clignotants, stimulateurs cardiaques, filtrage audio.


## Concepts liés

- [[Le condensateur et l'intensité du courant]]

- [[Nombre dérivé et équation de la tangente]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````
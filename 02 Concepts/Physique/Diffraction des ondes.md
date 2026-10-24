---
type: concept
matière: physique
tags:
  - concepts
  - physique/ondes
  - physique/optique
  - physique
MOC:
  - "[[MOC Optique]]"
  - "[[07 MOC/Concepts/Physique/MOC Ondes]]"
date_creation: 2026-07-28
---
# Diffraction des ondes

> [!info] Définition courte
> La **diffraction** est la modification de la trajectoire et de la forme d'une onde lorsqu'elle rencontre un obstacle ou une ouverture dont la taille $a$ est du même ordre de grandeur (ou inférieure) à sa longueur d'onde $\lambda$.
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



## Explication intuitive

Lorsqu'une onde lumineuse ou mécanique passe par un trou ou une fente très étroite, elle ne se propage plus seulement en ligne droite : elle s'étale et occupe une région plus vaste. L'onde diffractée conserve la même fréquence et la même longueur d'onde $\lambda$ que l'onde incidente.



## Fonctionnement et Formules

> [!theorem] Écart angulaire $\theta$
> L'étalement de la figure de diffraction est caractérisé par le demi-angle délimitant le premier minimum d'amplitude (extinction) :
> $$\theta = \frac{\lambda}{a}$$
> - $\theta$ : écart angulaire en radians ($\text{rad}$)
> - $\lambda$ : longueur d'onde en mètres ($\text{m}$)
> - $a$ : taille de l'ouverture ou de l'obstacle en mètres ($\text{m}$)

### Cas d'une onde lumineuse (fente de largeur $a$ sur un écran à distance $D$)
Pour de petits angles, $\tan(\theta) \approx \theta = \frac{d/2}{D} = \frac{d}{2D}$ (où $d$ est la largeur de la tache centrale de diffraction).

En égalisant les deux expressions de $\theta$ :
$$\frac{\lambda}{a} = \frac{d}{2D} \implies d = \frac{2\lambda D}{a} \quad \text{ou} \quad a = \frac{2\lambda D}{d}$$



## Exemples
- **Ondes mécaniques** : Vagues à la surface de l'eau traversant une ouverture étroite dans une digue.
- **Ondes lumineuses** : Laser rouge traversant un cheveu ou une fente fine, créant une suite de taches lumineuses (franges).



## Concepts liés

- [[Interférences ondulatoires]]
- [[La lunette astronomique afocale]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

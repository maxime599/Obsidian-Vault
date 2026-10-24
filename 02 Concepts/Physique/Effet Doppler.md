---
type: concept
matière: physique
tags:
  - concepts
  - physique/astrophysique
  - physique/ondes
  - physique
MOC:
  - "[[07 MOC/Concepts/Physique/MOC Ondes]]"
  - "[[MOC Astrophysique]]"
date_creation: 2026-07-28
---
# Effet Doppler

> [!info] Définition courte
> L'**effet Doppler** est le décalage de fréquence (et de longueur d'onde) mesuré entre l'onde émise par une source et l'onde reçue par un observateur en mouvement relatif l'un par rapport à l'autre.
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

- **Rapprochement** : Les fronts d'onde se compressent. La fréquence reçue $f_r$ est plus élevée que la fréquence émise $f_e$ ($f_r > f_e$, $\lambda_r < \lambda_e$). *Un son apparaît plus aigu.*
- **Éloignement** : Les fronts d'onde s'étirent. La fréquence reçue est plus basse ($f_r < f_e$, $\lambda_r > \lambda_e$). *Un son apparaît plus grave.*

*(Exemple classique : sirène d'une ambulance qui s'approche puis s'éloigne).*



## Formules fondamentales

> [!theorem] Décalage Doppler $\Delta f$
> Pour une source se déplaçant à une vitesse $v$ très inférieure à la célérité $c$ de l'onde ($v \ll c$) :
> $$\Delta f = |f_r - f_e| \approx f_e \cdot \frac{v}{c}$$
>
> On en déduit la vitesse de déplacement de la source :
> $$v = \frac{c \cdot \Delta f}{f_e}$$



## Applications pratiques

1. **Astrophysique (Effet Doppler-Fizeau)** : Mesure de la vitesse radiale des étoiles/galaxies. Le décalage des raies d'absorption vers le rouge (*redshift*) indique un éloignement de l'astre.
2. **Médecine** : Échographie Doppler pour mesurer la vitesse du flux sanguin.
3. **Sécurité routière** : Radars de contrôle de vitesse des véhicules.



## Concepts liés

- [[Niveau d'intensité sonore et atténuation]]
- [[Diffraction des ondes]]



## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

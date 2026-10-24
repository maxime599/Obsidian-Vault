---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/ondes
  - Optique_géometrique/model
MOC:
  - "[[07 MOC/Concepts/Optique_géometrique/MOC Ondes|MOC Ondes]]"
  - "[[MOC Model]]"
date_creation: 2026-10-14
Ressources:
---

# Modèle des ondes électromagnétiques et indice de réfraction

> [!info] Définition courte
> Le **modèle des ondes électromagnétiques** décrit la lumière comme une onde sinusoïdale (champ électrique et magnétique oscillants) qui transporte de l'énergie sans transport de matière. Sa vitesse de propagation dans un milieu dépend de son **indice de réfraction**.

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

## 1. Caractéristiques d'une onde électromagnétique

Une onde lumineuse sinusoïdale est caractérisée par :
- **Sa fréquence $f$**, inverse de la période temporelle $T$.
- **Sa pulsation $\omega$** : $\omega = 2\pi f$.
- **Sa longueur d'onde** :: $\lambda = v \cdot T = \frac{v}{f}$.
<!--SR:!2026-10-22,2,250-->


## 2. Vitesse de propagation et indice de réfraction

La vitesse de propagation $v$ dépend de la nature du milieu traversé :
- **Dans le vide** : $v = c \approx 3 \cdot 10^8\text{ m}\cdot\text{s}^{-1}$.
- **Dans un milieu matériel** (vitesse de propagation d'une onde) :: $v = \frac{c}{n}$, où $n$ est **l'indice optique** (ou indice de réfraction) du milieu, avec $n \ge 1$.
<!--SR:!2026-11-03,14,290-->


## 3. Dispersion et loi de Cauchy

L'indice de réfraction $n$ n'est pas toujours constant : il dépend de la fréquence $f$, et donc de la longueur d'onde $\lambda$. Cette dépendance est modélisée par la **loi de Cauchy** ::$$n = A + \frac{B}{\lambda_0^2}$$![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=4&rect=53,17,428,262|OPTIQUE GEOMETRIQUE I-II-III, p.4]]
<!--SR:!2026-11-03,14,290-->


## 4. Spectre électromagnétique et domaine visible

- Les ondes électromagnétiques couvrent une large gamme de fréquences (des ondes radio aux rayons $\gamma$).
- Le **domaine visible** correspond à la gamme de longueurs d'onde dans le vide à laquelle l'œil humain est sensible : **$400\text{ nm}$ à $800\text{ nm}$**.
![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=5&rect=48,45,860,330|OPTIQUE GEOMETRIQUE I-II-III, p.5]]

## Concepts liés

- [[Modèle des photons et dualité onde-corpuscule]]
- [[Cadre et modèle du rayon en optique géométrique]]
- [[Principes fondamentaux de propagation de la lumière]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
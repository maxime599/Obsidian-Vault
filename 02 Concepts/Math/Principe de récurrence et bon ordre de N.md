---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/arithmetique
  - math/logique
MOC:
  - "[[MOC Arithmetique]]"
  - "[[MOC Logique]]"
date_creation: 2026-09-17
Ressources:
---

# Principe de récurrence et bon ordre de N

> [!info] Définition courte
> Fondé sur l'axiome du bon ordre de $\mathbb{N}$ (toute partie non vide admet un plus petit élément), le **principe de récurrence** permet de démontrer qu'une propriété $\mathcal{P}_n$ est vraie pour tout entier $n \ge n_0$.
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


## 1. Axiome fondamental de N

L'ensemble des entiers naturels $\mathbb{N} = \{0, 1, 2, 3, \dots\}$ vérifie la propriété fondamentale du bon ordre :
> **Toute partie non vide de $\mathbb{N}$ admet un plus petit élément.**


## 2. Principe de récurrence simple

Soit $\mathcal{P}_n$ une propriété dépendant d'un entier naturel $n$.

1. **Initialisation** : On vérifie que $\mathcal{P}_{n_0}$ est vraie pour un rang initial $n_0 \in \mathbb{N}$ (souvent $n_0 = 0$).
2. **Hérédité** : On prouve que pour tout $n \ge n_0$, si $\mathcal{P}_n$ est vraie (hypothèse de récurrence), alors $\mathcal{P}_{n+1}$ est vraie.
3. **Conclusion** : $\mathcal{P}_n$ est vraie pour tout entier $n \ge n_0$.


## 3. Récurrence forte

Lorsque la démonstration du rang $n+1$ nécessite de supposer la vérité de la propriété pour **tous les rangs antérieurs**, on utilise la récurrence forte :

- **Initialisation** : $\mathcal{P}_0$ est vraie.
- **Hérédité** : Si $\mathcal{P}_0, \mathcal{P}_1, \dots, \mathcal{P}_n$ sont vraies, alors $\mathcal{P}_{n+1}$ est vraie.
- **Conclusion** : $\mathcal{P}_n$ est vraie pour tout $n \in \mathbb{N}$.


## 4. Exemple d'application

**Propriété** : Montrer que $4^n + 2$ est un multiple de $3$ pour tout $n \in \mathbb{N}$.

- **Initialisation ($n = 0$)** : $4^0 + 2 = 1 + 2 = 3 = 3 \times 1$. La propriété est vraie au rang $0$.
- **Hérédité** : Soit $n \in \mathbb{N}$. Supposons qu'il existe $k \in \mathbb{N}$ tel que $4^n + 2 = 3k \implies 4^n = 3k - 2$.
  $$4^{n+1} + 2 = 4 \times 4^n + 2 = 4(3k - 2) + 2 = 12k - 6 = 3(4k - 2)$$
  Puisque $4k - 2 \in \mathbb{N}$, $4^{n+1} + 2$ est un multiple de $3$.
- **Conclusion** : $4^n + 2$ est divisible par $3$ pour tout $n \in \mathbb{N}$.


## Concepts liés

- [[Modes de raisonnement mathématique]]
- [[Divisibilité dans Z]]
- [[Ensembles finis, infinis et dénombrabilité]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

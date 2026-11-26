---
type: concept
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
MOC:
  - "[[MOC Circuits]]"
date_creation: 2026-09-14
Ressources:
---

# Pont diviseur de tension

> [!info] Définition courte
> Le **pont diviseur de tension** est une formule fondamentale en électrocinétique permettant de calculer la tension aux bornes d'une résistance appartenant à un ensemble de résistances branchées en série.
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


## 1. Cas de deux résistances en série

Soit un circuit composé d'un générateur de tension $E$ alimentant deux résistances $R_1$ et $R_2$ placées en série.

### Démonstration pont diviseur de tension
1. Loi des mailles : $E = U_1 + U_2$
2. Loi d'Ohm : $E = R_1 I + R_2 I = (R_1 + R_2) I$
3. Expression de l'intensité : $I = \frac{E}{R_1 + R_2}$


### Formules de tension
En réinjectant $I$ dans la loi d'Ohm aux bornes de chaque résistance :

$$U_1 = R_1 I \implies U_1 = E \cdot \frac{R_1}{R_1 + R_2}$$

$$U_2 = R_2 I \implies U_2 = E \cdot \frac{R_2}{R_1 + R_2}$$

> [!warning] Condition d'application
> Cette formule n'est valable **que si le circuit est à vide** au point de mesure : les résistances doivent obligatoirement être traversées par le **même courant $I$** (aucun courant ne doit être prélevé en parallèle).


## 2. Cas général ($n$ résistances en série)

Pour un ensemble de $n$ résistances $R_1, R_2, \dots, R_n$ branchées en série sous une tension globale $E$, la tension $U_k$ aux bornes de la résistance $R_k$ s'exprime par (Pont diviseur de tension) ::$$U_k = E \cdot \frac{R_k}{\displaystyle\sum_{i=1}^{n} R_i} = E \cdot \frac{R_k}{R_1 + R_2 + \dots + R_n}$$
<!--SR:!2027-03-05,121,290-->


## Concepts liés

- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]
- [[Groupements de résistances (Série et Parallèle)]]
- [[Modèle et théorème de Thévenin]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

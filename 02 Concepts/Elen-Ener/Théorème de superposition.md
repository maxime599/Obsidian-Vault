---
type: concept
tags:
  - concepts
  - Elen1
  - elen1/theoremes
  - flashcards/Elen1
MOC:
  - "[[MOC Theoremes]]"
date_creation: 2026-09-15
Ressources:
---

# Théorème de superposition

> [!info] Définition courte
> Le **théorème de superposition** énonce que ==dans un circuit électrique linéaire comportant plusieurs sources indépendantes, la grandeur électrique (tension ou intensité) en un point est égale à la **somme algébrique** des grandeurs produites par chaque source agissant seule.==
<!--SR:!2027-01-04,57,310-->

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
<!--SR:!2026-12-29,70,270-->


## 1. Principe et extinction des sources

Pour isoler l'effet d'une seule source dans un circuit, on doit **éteindre** (ou passiver) toutes les autres sources autonomes :
- **Source idéale de tension** : éteinte $\implies$ remplacée par un **court-circuit** (un fil, $E = 0\text{ V}$).
- **Source idéale de courant** : éteinte $\implies$ remplacée par un **circuit ouvert** (interrupteur ouvert, $I = 0\text{ A}$).


## 2. Méthode d'application

Méthode d'application du théorème de superposition
?
1. **Isolation des contributions** : Calculer la contribution individuelle de chaque source en éteignant toutes les autres.
2. **Sommation** : Additionner algébriquement les contributions obtenues pour trouver la grandeur globale :
$$U_{AB} = \sum_{k=1}^{n} U_{AB_k}$$
<!--SR:!2027-04-12,153,310-->


## 3. Exemple d'application (Deux sources de tension)

Pour déterminer la tension à vide $U_{AB_0}$ (ou la tension équivalente de Thévenin $E_{\text{th}}$) d'un réseau alimenté par deux sources de tension $E_1$ et $E_2$ avec deux résistances $R_1$ et $R_2$ :

1. **Contribution de $E_1$ ($E_2$ éteinte / court-circuitée)** :
   Par la formule du pont diviseur de tension :
   $$U_{AB_{01}} = E_1 \cdot \frac{R_2}{R_1 + R_2}$$

2. **Contribution de $E_2$ ($E_1$ éteinte / court-circuitée)** :
   Par la formule du pont diviseur de tension :
   $$U_{AB_{02}} = E_2 \cdot \frac{R_1}{R_1 + R_2}$$

3. **Tension totale $U_{AB_0}$** :
   $$U_{AB_0} = E_{\text{th}} = U_{AB_{01}} + U_{AB_{02}}$$

   Tension final dans le théorème de superposition ::$$E_{\text{th}} = E_1 \cdot \frac{R_2}{R_1 + R_2} + E_2 \cdot \frac{R_1}{R_1 + R_2}$$
<!--SR:!2027-05-08,169,310-->

## 4. Exemple dans un exos
![[Drawing 2026-09-15 15.01.54.excalidraw]]

## Concepts liés

- [[Pont diviseur de tension]]
- [[Modèle et théorème de Thévenin]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
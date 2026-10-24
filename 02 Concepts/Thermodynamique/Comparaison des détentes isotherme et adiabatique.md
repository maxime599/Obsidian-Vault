---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
  - thermodynamique/gaz
MOC:
  - "[[MOC Gaz]]"
date_creation: 2026-09-18
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
---

# Comparaison des détentes isotherme et adiabatique

> [!info] Définition courte
> Lors d'une détente d'un gaz parfait entre un volume $V_A$ et un volume $V_B > V_A$, la chute de pression est plus prononcée lors d'une ==**détente adiabatique** que lors d'une **détente isotherme**.==

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
<!--SR:!2026-12-20,61,310-->


## 1. Étude comparative quantitative

Soit un gaz parfait diatomique ($\gamma = 1{,}4$) subissant une détente quasi-statique depuis l'état $A$ ($P_A = 10\text{ bar}$, $V_A = 1\text{ L}$) jusqu'à $V_B = 10\text{ L}$ :

- **Évolution isotherme ($T = \text{constante}$)** :
  $$P_A V_A = P_B V_B \implies P_B = P_A \frac{V_A}{V_B} = 10 \times \frac{1}{10} = 1\text{ bar}$$
- **Évolution adiabatique ($Q = 0$, loi de Laplace)** :
  $$P_A V_A^\gamma = P_B V_B^\gamma \implies P_B = P_A \left( \frac{V_A}{V_B} \right)^\gamma = 10 \times \left( \frac{1}{10} \right)^{1{,}4} \approx 0{,}4\text{ bar}$$

*Conclusion* : La pression finale est nettement plus basse dans le cas adiabatique car le système ne reçoit aucun transfert thermique compensateur pendant la fourniture de travail.


## 2. Représentation dans le diagramme de Clapeyron

Dans le plan $(P, V)$ :
- **Isotherme** : Courbe hyperbolique d'équation $P(V) = \frac{\text{constante}}{V}$. Pente de la tangente : $\left(\frac{\partial P}{\partial V}\right)_T = -\frac{P}{V}$.
- **Adiabatique** : Courbe de Laplace d'équation $P(V) = \frac{\text{constante}}{V^\gamma}$. Pente de la tangente : $\left(\frac{\partial P}{\partial V}\right)_{\text{adiab}} = -\gamma \frac{P}{V}$.

> [!important] Comparaison des pentes
> Puisque $\gamma > 1$, en tout point d'intersection, la **courbe adiabatique a une pente plus forte que la courbe isotherme**.


## Concepts liés

- [[Diagramme de Clapeyron]]
- [[Lois de Laplace (Transformations isentropiques)]]
- [[Modèle du gaz parfait, lois de Joule et relation de Mayer]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
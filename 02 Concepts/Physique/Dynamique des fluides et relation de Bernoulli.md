---
type: concept
matière: physique
tags:
  - concepts
  - physique
MOC:
  - "[[MOC Fluides]]"
date_creation: 2026-07-29
---
# Dynamique des fluides et relation de Bernoulli

> [!info] Définition courte
> La **dynamique des fluides** modélise l'écoulement d'un fluide incompressible en régime permanent au travers de la conservation du débit volumique et du théorème de Bernoulli.
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

- **Conservation du débit** : Si l'on pince le bout d'un tuyau d'arrosage (réduction de la section), l'eau sort plus vite. Le volume d'eau traversant le tuyau par seconde restant constant, une section plus petite impose une vitesse plus élevée.
- **Effet Venturi** : Contrairement à l'intuition, là où le fluide accélère (dans un rétrécissement), sa pression interne diminue.



## Fonctionnement et principes

### 1. Régime permanent et débit volumique
* **Régime permanent (ou stationnaire)** : La vitesse du fluide en chaque point ne varie pas au cours du temps. Les trajectoires des particules sont appelées **lignes de courant**.
* **Débit volumique ($Q$)** : Volume de fluide traversant une section $S$ par unité de temps :
  $$Q = \frac{V}{\Delta t} = v \cdot S$$

### 2. Conservation du débit (Équation de continuité)
Pour un fluide incompressible en régime permanent, le débit est le même en tout point de la conduite :
$$Q_A = Q_B \iff v_A \cdot S_A = v_B \cdot S_B$$
* Si la section diminue ($S_B < S_A$), la vitesse augmente ($v_B > v_A$).

### 3. Relation de Bernoulli
Elle exprime la conservation de l'énergie mécanique totale le long d'une ligne de courant pour un fluide incompressible, en régime permanent et sans frottement.

### 4. Effet Venturi
Pour une conduite horizontale ($z_A = z_B$), la relation de Bernoulli devient :
$$P_A + \frac{1}{2}\rho v_A^2 = P_B + \frac{1}{2}\rho v_B^2 = \text{constante}$$
Lorsque la vitesse d'un fluide augmente, sa pression diminue ($v_B > v_A \implies P_B < P_A$).



## Formules / Propriétés

> [!theorem] Énoncés formels
> * **Relation générale de Bernoulli** (entre deux points $A$ et $B$ d'une même ligne de courant) :
>   $$P_A + \frac{1}{2}\rho v_A^2 + \rho g z_A = P_B + \frac{1}{2}\rho v_B^2 + \rho g z_B$$
>   * $P$ : pression du fluide ($\text{Pa}$)
>   * $\rho$ : masse volumique ($\text{kg}\cdot\text{m}^{-3}$)
>   * $v$ : vitesse du fluide ($\text{m}\cdot\text{s}^{-1}$)
>   * $z$ : altitude ($\text{m}$)
>   * $g$ : intensité de la pesanteur ($\text{N}\cdot\text{kg}^{-1}$)
>
> * **Loi de la statique des fluides** (cas particulier $v = 0$) :
>   $$P_A + \rho g z_A = P_B + \rho g z_B \iff P_B - P_A = \rho g (z_A - z_B)$$



## Concepts liés

* [[Poussée d'Archimède]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

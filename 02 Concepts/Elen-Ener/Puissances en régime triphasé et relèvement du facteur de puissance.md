---
type: concept
tags:
  - concepts
  - Elen-Ener
  - flashcards/Elen-Ener
  - elen-ener/puissance
  - elen-ener/triphase
MOC:
  - "[[MOC Puissance]]"
  - "[[MOC Triphase]]"
date_creation: 2026-11-12
Ressources:
  - "[[ENER1 triphasé.pdf]]"
---
# Puissances en régime triphasé et relèvement du facteur de puissance

> [!info] Définition courte
> L'évaluation des puissances (active $P$, réactive $Q$, apparente $S$) en régime triphasé repose sur le théorème de Boucherot et s'exprime de manière unifiée à l'aide de la tension composée $U$ et du courant en ligne $I$, indépendamment du couplage.

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

## 1. Expressions des puissances (Récepteur équilibré)

D'après le **théorème de Boucherot**, la puissance totale est la somme des puissances de chaque phase ($P = 3P_1$ et $Q = 3Q_1$). Pour un récepteur équilibré (en étoile ou en triangle) :
- **Puissance active** (en W) : $P =$::$\sqrt{3} U I \cos\varphi$
<!--SR:!2026-11-25,1,190-->
- **Puissance réactive** (en VAR) : $Q =$::$\sqrt{3} U I \sin\varphi$
<!--SR:!2026-12-02,10,270-->
- **Puissance apparente** (en VA) : $S =$::$\sqrt{3} U I$
<!--SR:!2026-11-25,2,150-->
- **Facteur de puissance** : $k =$$\frac{P}{S} = \cos\varphi$


## 2. Mesure de puissance

### Montage à 1 wattmètre (charge équilibrée) :
![[ENER1 triphasé.pdf#page=10&rect=276,636,533,770|ENER1 triphasé, p.10]]
  - Puissance lue sur 1 Wattmère en triphasé : $P' =$::$V I \cos\varphi$
<!--SR:!2026-11-25,1,130-->
  - Puissance totale absorbée sur 1 Wattmère en triphasé : $P =$::$\sqrt{3} U I \cos\varphi = 3 P'$
<!--SR:!2026-11-25,1,130-->
### Méthode des 2 Wattmètres :
![[ENER1 triphasé.pdf#page=10&rect=68,268,486,461|ENER1 triphasé, p.10]]
  - Puissance active totale sur 2 Wattmère en triphasé : $P =$::$P_{W1} + P_{W2}$
<!--SR:!2026-11-27,7,250-->
  - Puissance réactive totale (2 Wattmère en triphasé): $Q =$::$\sqrt{3} (P_{W1} - P_{W2})$
<!--SR:!2026-11-25,1,130-->


## 3. Tableau récapitulatif
Relation entre U et V pour les deux triphasés :: $V = \frac{U}{\sqrt{3}}$
<!--SR:!2026-12-06,12,270-->

| Grandeur                      |      Couplage Étoile ($Y$)      |  Couplage Triangle ($\Delta$)   |
| :---------------------------- | :-----------------------------: | :-----------------------------: |
| **Tension par phase ($V$)**   |    $V = \frac{U}{\sqrt{3}}$     |    $V = \frac{U}{\sqrt{3}}$     |
| **Courant par phase ($J$)**   |             $J = I$             |    $J = \frac{I}{\sqrt{3}}$     |
| **Déphasage**                 | ==$\varphi(\vec{I}, \vec{V})$== | ==$\varphi(\vec{J}, \vec{U})$== |
| **Puissance active ($P$)**    |   $\sqrt{3} U I \cos\varphi$    |   $\sqrt{3} U I \cos\varphi$    |
| **Puissance réactive ($Q$)**  |   $\sqrt{3} U I \sin\varphi$    |   $\sqrt{3} U I \sin\varphi$    |
| **Puissance apparente ($S$)** |         $\sqrt{3} U I$          |         $\sqrt{3} U I$          |
| **Pertes Joule ($P_J$)**      |       $\frac{3}{2} R I^2$       |       $\frac{3}{2} R I^2$       |
<!--SR:!2026-12-03,11,270!2026-11-27,5,230-->


## 4. Relèvement du facteur de puissance

### Couplage des condensateurs en triangle
![[ENER1 triphasé.pdf#page=11&rect=64,80,286,262|ENER1 triphasé, p.11]]
  - Puissance réactive d'un condensateur (Couplage des condensateurs en triangle): $Q_{C1} =$::$-C \omega U^2$
<!--SR:!2026-11-25,2,150-->
  - Puissance réactive totale (Couplage des condensateurs en triangle): $Q_C =$::$-3 C \omega U^2 = Q' - Q$
<!--SR:!2026-12-03,10,270-->
![[ENER1 triphasé.pdf#page=12&rect=55,622,557,776|ENER1 triphasé, p.12]]

> [!failure] à comprendre
> 
>- Capacité requise par condensateur :
$$C_\Delta = \frac{P(\tan\varphi - \tan\varphi')}{3 \omega U^2}$$
>- **Couplage des condensateurs en étoile** :
  $$C_{\text{Y}} = \frac{P(\tan\varphi - \tan\varphi')}{\omega U^2} = 3 C_\Delta$$
  *Conclusion* : Le couplage en étoile est moins avantageux car il nécessite des condensateurs 3 fois plus volumineux et plus coûteux.


## Concepts liés

- [[Couplages des récepteurs triphasés équilibrés (Étoile et Triangle)]]
- [[Systèmes triphasés (Tensions simples et composées)]]
- [[Puissances en régime sinusoïdal et Théorème de Boucherot]]
- [[Fonction tangente et propriétés]]
- [[Étude et propriétés des fonctions cosinus et sinus]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
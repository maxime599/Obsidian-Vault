---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
  - thermodynamique/entropie
MOC:
  - "[[MOC Entropie]]"
date_creation: 2026-09-18
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
---

# Calcul de la variation d'entropie

> [!info] Définition courte
> L'entropie étant une fonction d'état, le calcul de sa variation $\Delta S$ lors d'une transformation irréversible s'effectue en imaginant une **transformation réversible fictive** reliant les mêmes états initial et final.
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


## 1. Méthode générale de calcul

1. **Cas réversible** : On applique directement l'intégration de la forme différentielle : Calcule de $\Delta S$::$$\Delta S = \int_{T_i}^{T_f} \frac{\delta Q_{\text{rév}}}{T}$$
<!--SR:!2026-11-02,13,210-->
2. **Cas irréversible** :
?
   - Déterminer les états initial et final grâce aux contraintes et au Premier Principe ($\Delta U = Q + W$).
   - Imaginer un chemin réversible fictif reliant le même état initial au même état final.
   - Calculer $\Delta S$ le long de ce chemin fictif via $\int \frac{\delta Q_{\text{fictif}}}{T}$.
   - Déterminer l'entropie échangée réelle $S_e = \frac{Q_{\text{réel}}}{T_e}$ avec la source.
   - En déduire l'entropie créée : $S_c = \Delta S - S_e > 0$.
<!--SR:!2026-11-01,12,230-->


## 2. Exemple : Chauffage d'un système condensé (capacité $C_p$)

Un cylindre de laiton de capacité $C_p$ constante est porté de $T_0$ à $T_1$ sous pression constante $P_a$.

- **Chauffage réversible** (contact avec une suite infinie de thermostats de $T_0$ à $T_1$) $\Delta S=$ ::$$\Delta S = \int_{T_0}^{T_1} \frac{C_p \, dT}{T} = C_p \ln\left(\frac{T_1}{T_0}\right)$$
<!--SR:!2026-10-24,4,170-->
- **Chauffage irréversible** (contact brutal direct avec une source à $T_1$) :
  - Variation d'entropie du cylindre : $\Delta S = C_p \ln\left(\frac{T_1}{T_0}\right)$ (identique car même état initial et final).
  - Entropie échangée (pour un chaufage irréversible): $S_e = \frac{Q}{T_1} = \frac{C_p (T_1 - T_0)}{T_1}$
  - Entropie créée :
    $$S_c = \Delta S - S_e = C_p \left[ \ln\left(\frac{T_1}{T_0}\right) - \frac{T_1 - T_0}{T_1} \right] = C_p \left[ \frac{T_0}{T_1} - 1 - \ln\left(\frac{T_0}{T_1}\right) \right] > 0$$


## 3. Application : Contact thermique entre deux solides

Deux cylindres solides identiques de capacité $C$, initialement aux températures $T_1$ et $T_2$, sont mis en contact au sein d'une enceinte calorifugée.
1. **Température finale d'équilibre $T_F$** :
   Le solide étant incompressible ($W = 0$), le premier principe donne (pour calculer $T_{F}$)::$$\Delta U = Q_1 + Q_2 = 0 \implies C(T_F - T_1) + C(T_F - T_2) = 0 \implies T_F = \frac{T_1 + T_2}{2}$$
<!--SR:!2026-11-16,32,270-->
   *(La seule source d'énergie est l'énergie interne initiale du système).*
2. **Variation d'entropie totale** :
   En imaginant un chemin réversible pour chaque cylindre (calcul de $\Delta S_{tot}$ entre deux cylindres de température différentes)::$$\Delta S_1 = C \ln\left(\frac{T_F}{T_1}\right), \qquad \Delta S_2 = C \ln\left(\frac{T_F}{T_2}\right)$$$$\Delta S_{\text{tot}} = \Delta S_1 + \Delta S_2 = C \ln\left(\frac{T_F^2}{T_1 T_2}\right) = C \ln\left(\frac{(T_1 + T_2)^2}{4 T_1 T_2}\right)$$
<!--SR:!2026-10-24,13,230-->
   Puisque $(T_1 + T_2)^2 > 4 T_1 T_2$ pour $T_1 \neq T_2$, on retrouve $\Delta S_{\text{tot}} > 0$, confirmant le caractère irréversible du transfert thermique à écart de température fini.


## 4. Pour un gaz parfait :
Calcul de $dS_{e}$ pour un gaz parfait :
?
$dS_{e} = \frac{\delta Q}{T} = \frac{dU}{T}- \frac{\delta W}{T}$
$\implies dS_{e} = \frac{C_{v}dT}{T}+\frac{PdV}{T}$
<!--SR:!2026-11-22,33,270-->




## Concepts liés

- [[Entropie et bilan entropique]]
- [[Calorimétrie et coefficients calorimétriques]]
- [[Typologie des transformations et réversibilité - Premier Principe de la thermodynamique]]
- [[Fonction exponentielle et logarithme népérien]]
- [[Notion d'intégrale et aire sous une courbe]]



## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

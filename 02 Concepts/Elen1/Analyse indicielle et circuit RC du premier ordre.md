---
type: concept
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
  - elen1/circuits
  - math/analyse
MOC:
  - "[[MOC Circuits]]"
  - "[[07 MOC/Concepts/Elen1/MOC Analyse|MOC Analyse]]"
date_creation: 2026-09-21
Ressources:
---

# Analyse indicielle et circuit RC du premier ordre

> [!info] Définition courte
> L'**analyse indicielle** consiste à ==étudier la réponse transitoire d'un circuit soumis à un échelon de tension (passage brutal de $0$ à $E$).== Appliquée au circuit $RC$, elle conduit à une équation différentielle du premier ordre décrivant la charge du condensateur.
<!--SR:!2026-10-28,25,270-->
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


## 1. Principe de l'analyse indicielle

On applique à l'entrée d'un système un échelon de tension $e(t)$ défini par ::$$e(t) = \begin{cases} 0 & \text{pour } t < 0 \\ E & \text{pour } t \ge 0 \end{cases}$$L'objectif est d'observer l'évolution temporelle de la tension en sortie $U_C(t)$.
<!--SR:!2026-12-07,57,310-->


## 2. Établissement de l'équation différentielle

Considérons un circuit série comportant une résistance $R$, un condensateur $C$ et une source de tension continue $E$ appliquée à $t=0$.

1. **Loi des mailles** :
   $$U_R(t) + U_C(t) = E$$
2. **Loi d'Ohm et relation du condensateur** :
   $$U_R(t) = R \cdot i(t) \quad \text{et} \quad i(t) = C \cdot \frac{dU_C(t)}{dt}$$
3. **Équation différentielle du premier ordre** :
   $$R \cdot C \cdot \frac{dU_C(t)}{dt} + U_C(t) = E$$


## 3. Structure de l'équation et constante de temps ($\tau$)

L'équation $RC \frac{dU_C}{dt} + U_C = E$ est une équation différentielle :
- Du **premier ordre** (pas de dérivée seconde).
- À **coefficients constants** ($RC$ et $1$).
- À **second membre constant** ($E$).

Lorsque le coefficient devant $U_C$ vaut $1$, le coefficient devant la dérivée $\frac{d}{dt}$ définit la **constante de temps $\tau$** du circuit :

$$\tau = R \cdot C \quad (\text{en secondes, }\text{s})$$

L'équation s'écrit sous forme canonique :
$$\tau \frac{dU_C(t)}{dt} + U_C(t) = E$$


## 4. Résolution analytique complète

La solution générale de cette équation s'écrit :
$$U_C(t) = A e^{-t/\tau} + B$$

### Détermination des constantes $A$ et $B$
- **Étude aux limites théorique** :
  - À $t = 0$ : $U_C(0) = A e^0 + B = A + B$
  - Lorsque $t \to +\infty$ : $e^{-t/\tau} \to 0 \implies U_C(+\infty) = B$

- **Conditions physiques aux limites** :
  - **Continuité à $t=0$** : La tension aux bornes du condensateur ne peut varier brusquement $\implies U_C(0) = 0$.
    $$A + B = 0 \implies A = -B$$
  - **Régime permanent ($t \to +\infty$)** : La tension devient constante ($\frac{dU_C}{dt} = 0$), d'où $U_C(+\infty) = E$.
    $$B = E \implies A = -E$$

### Expression finale
$$U_{C}(t) = -Ee^{-t/\tau}+E$$$$U_C(t) = E \cdot \left(1 - e^{-t/\tau}\right)$$


## Concepts liés

- [[Composants réactifs ; Condensateur et Inductance]]
- [[Équations différentielles du premier ordre]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]
- [[Circuit RC - Charge et décharge]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

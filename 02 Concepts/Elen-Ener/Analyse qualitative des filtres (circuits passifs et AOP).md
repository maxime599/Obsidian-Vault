---
type: concept
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
  - Elen1/analyse
  - elen-ener/signaux-alternatifs
MOC:
  - "[[07 MOC/Concepts/Elen-Ener/MOC Analyse|MOC Analyse]]"
  - "[[MOC Signaux-alternatifs]]"
date_creation: 2026-10-22
Ressources:
---

# Analyse qualitative des filtres (circuits passifs et AOP)

> [!info] Définition courte
> L'**analyse qualitative** d'un circuit en régime sinusoïdal consiste à étudier son comportement asymptotique aux limites ($\omega \to 0$ et $\omega \to +\infty$) en modélisant les composants réactifs (condensateurs et bobines) par des interrupteurs ouverts ou fermés, afin de déterminer la nature du filtre (passe-bas, passe-haut, passe-bande).

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

## 1. Comportement asymptotique des composants réactifs

Pour mener l'analyse qualitative, on étudie l'impédance complexe $Z$ des composants lorsque la pulsation $\omega$ tend vers les extrêmes :

### A. Condensateur ($Z_C = \frac{1}{j\omega C}$)
- Quand $\omega \to 0$ : $|\underline{Z}_C| \to$::$+\infty \implies$ **Interrupteur ouvert**.
<!--SR:!2027-01-07,56,310-->
- Quand $\omega \to +\infty$ : $|\underline{Z}_C| \to$::$0 \implies$  **Interrupteur fermé** (court-circuit).
<!--SR:!2027-01-13,59,310-->

### B. Inductance / Bobine ($\underline{Z}_L = j\omega L$)
- Quand $\omega \to 0$ : $|\underline{Z}_L| \to$::$0 \implies$ **Interrupteur fermé** (court-circuit).
<!--SR:!2027-01-16,62,310-->
- Quand $\omega \to +\infty$ : $|\underline{Z}_L| \to$::$+\infty \implies$ **Interrupteur ouvert**.
<!--SR:!2027-01-12,58,310-->


## 2. Exemples de circuits passifs

- **Circuit $CR$** (Analyse qualitative): 
  - En basses fréquences ($\omega \to 0$), le condensateur est ouvert ($V_s = 0$).
  - En hautes fréquences ($\omega \to +\infty$), le condensateur est fermé ($V_s = V_e$).
  - **Conclusion** : C'est un **filtre passe-haut**.
- **Circuit $RC$** (Analyse qualitative):
  - En basses fréquences, le condensateur est ouvert, la résistance est alimentée ($V_s = V_e$).
  - En hautes fréquences, le condensateur est fermé, la résistance est court-circuitée ($V_s = 0$).
  - **Conclusion** : C'est un **filtre passe-bas**.


## 3. Filtrage actif à base d'Amplificateurs Opérationnels (AOP)

L'association de condensateurs autour d'un AOP en régime linéaire permet de concevoir des fonctions de filtrage plus complexes :

- **Filtre passe-bas à AOP** :
![[Drawing 2026-10-22 11.30.12.excalidraw]]
  - En basses fréquences (condensateur ouvert), le signal passe : $V_s = -\frac{R_2}{R_1} V_e$.
  - En hautes fréquences (condensateur fermé), la contre-réaction est court-circuitée ($V_s = 0$).
- **Filtre passe-haut à AOP** :
![[Drawing 2026-10-22 11.33.01.excalidraw]]
  - En basses fréquences (condensateur d'entrée ouvert), aucun signal ne passe : $V_s = 0$.
  - En hautes fréquences (condensateur d'entrée fermé), le signal passe : $V_s = -\frac{R_2}{R_1} V_e$.


## 4. Analyse d'un filtre passe-bande et condition de coupure

Pour un circuit comportant deux fréquences de coupure ($f_1$ et $f_2$) associées à deux éléments réactifs :
- **En basses fréquences** ($f \ll f_1, f_2$) : les condensateurs se comportent comme des interrupteurs ouverts ($V_s = 0$).
- **En hautes fréquences** ($f \gg f_1, f_2$) : les condensateurs se comportent comme des interrupteurs fermés, court-circuitant certaines branches ($V_s = 0$).
- **Fréquences intermédiaires** : 
  - Si $f_1 < f_2$, un condensateur laisse passer le signal tandis que l'autre le bloque, permettant d'obtenir le gain nominal ($V_s = -\frac{R_2}{R_1} V_e$).
  - Si $f_1 > f_2$, le cas s'avère incohérent physiquement pour un filtre passe-bande.
- **Condition requise** : On doit impérativement avoir **$f_1 < f_2$** pour que le montage se comporte comme un filtre passe-bande valide.


## Concepts liés

- [[Analyse harmonique et diagrammes de Bode]]
- [[Montages de base à Amplificateur Opérationnel (AOP)]]
- [[Composants réactifs ; Condensateur et Inductance]]
- [[Limites de fonctions et asymptotes]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

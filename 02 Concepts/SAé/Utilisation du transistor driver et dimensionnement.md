---
type: concept
tags:
  - concepts
  - SAé
  - flashcards/SAé 
MOC:
date_creation: 2026-11-12
Ressources:
---

# Utilisation du transistor driver et dimensionnement

> [!info] Définition courte
> Le transistor driver sert d'interface de puissance entre un circuit de commande basse tension/faible courant (comme un microcontrôleur) et une charge gourmande en courant (LED, relais, moteur), en commutant l'énergie directement depuis une source d'alimentation séparée.

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

## 1. Rôle et principe du transistor driver

Une broche de microcontrôleur (type Arduino Uno) délivre des signaux logiques $0/5\text{ V}$ mais ne peut fournir qu'un courant limité (généralement quelques dizaines de milliampères), ce qui est insuffisant pour alimenter directement des actionneurs. Le transistor driver résout cette limite en agissant comme un interrupteur commandé électroniquement :
- **État bloqué ($V_{out} = 0\text{ V}$)** : Le transistor se comporte comme un interrupteur ouvert entre le collecteur et l'émetteur, aucun courant ne circule dans la charge.
- **État saturé ($V_{out} = 5\text{ V}$)** : Le transistor se comporte comme un interrupteur fermé (présentant une tension résiduelle très faible $V_{CE_{sat}}$), laissant passer le courant de puissance.


## 2. Protection indispensable : La diode de roue libre

Pour les charges inductives (bobine de relais, moteur DC), l'ouverture brutale du transistor provoque une variation rapide du courant ($\frac{di}{dt}$), engendrant une surtension par auto-induction ($\mathcal{E} = -L\frac{di}{dt}$) capable de détruire instantanément le transistor. 
- Une **diode de roue libre** (ex: 1N4148 ou 1N4007) doit impérativement être placée en parallèle et en inverse aux bornes de la charge inductive.
- Son rôle est d'écouler et de dissiper le courant de décharge de la bobine lorsque le transistor se bloque.


## 3. Méthode de calcul des résistances associées

Le dimensionnement des résistances $R_1$ (collecteur/charge) et $R_2$ (base) est indispensable pour garantir un fonctionnement correct en régime de commutation.


### Calcul de la résistance de base ($R_2$)
Le calcul de la résistance de base se fait en plusieurs étapes pour s'assurer que le transistor est pleinement saturé (régime non linéaire) :
1. **Courant de base théorique** : À partir du coefficient d'amplification minimal $h_{FE}$ (ou $\beta$) trouvé dans la datasheet :
   $$I_B = \frac{I_C}{h_{FE}}$$
2. **Coefficient de sursaturation** : Pour forcer le transistor en mode commutation franche (fermeture complète), on applique un coefficient de sursaturation (généralement un facteur de sécurité de 2) :
   $$I_{B_{sat}} = 2 \times I_B$$
3. **Maille base-émetteur** : Connaissant la tension de commande du microcontrôleur ($V_{out}$, ex: $5\text{ V}$) et la tension de seuil base-émetteur $V_{BE}$ (relevée dans le datasheet) :
   $$R_2 = \frac{V_{out} - V_{BE}}{I_{B_{sat}}}$$
4. **Normalisation** : On choisit pour $R_1$ et $R_2$ des valeurs normalisées (par exemple dans la série E24).


## Concepts liés

- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
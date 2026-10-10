---
type: concept
tags:
  - concepts
  - Elen1
  - flashcards/Elen1
  - elen1/composants
MOC:
  - "[[MOC Composants]]"
date_creation: 2026-10-01
Ressources:
---

# Montages de base à Amplificateur Opérationnel (AOP)

> [!info] Définition courte
> Les **montages fondamentaux à AOP** en régime linéaire (amplificateur inverseur, non-inverseur et suiveur) exploitent la contre-réaction négative pour réaliser des fonctions d'amplification de tension, d'inversion de phase et d'adaptation d'impédance.


## 1. Schéma et hypothèses du régime linéaire

![[Drawing 2026-09-28 16.05.09.excalidraw]]
Pour tous les montages fonctionnant en **régime linéaire** (présence d'une contre-réaction entre la sortie $V_s$ et l'entrée inverseuse $e^-$), l'AOP est considéré comme parfait :
?
* **Court-circuit virtuel** : $\epsilon = e^+ - e^- = 0 \implies e^+ = e^-$
* **Courants d'entrée nuls** : $I^+ = 0\text{ A}$ et $I^- = 0\text{ A}$
<!--SR:!2026-10-22,14,290-->

## 2. Montage Amplificateur Inverseur

Le signal d'entrée $V_e$ est appliqué sur l'entrée inverseuse $e^-$ via la résistance $R_1$. L'entrée non-inverseuse $e^+$ est reliée à la masse.

```text
       +-------[ R2 ]-------+
       |                    |
Ve ---[ R1 ]---+-----( - )  |
               |      |   \ |
               +------|    >---+--- Vs
                      |   /
              GND ----( + )

```

### Démonstration

1. **Potentiels aux entrées** : $e^+ = 0\text{ V}$. Par court-circuit virtuel, $e^- = e^+ = 0\text{ V}$.
2. **Loi des nœuds au potentiel $e^-$** :

$$I_1 + I_2 = I^- = 0 \implies I_1 = -I_2$$


3. **Loi d'Ohm** :

$$I_1 = \frac{V_e - e^-}{R_1} = \frac{V_e}{R_1} \quad \text{et} \quad I_2 = \frac{V_s - e^-}{R_2} = \frac{V_s}{R_2}$$


4. **Relation Entrée/Sortie** :

$$\frac{V_e}{R_1} = -\frac{V_s}{R_2} \implies V_s = -V_e \cdot \frac{R_2}{R_1}$$



> [!note] Propriété
> Le gain en tension vaut $A_v = -\frac{R_2}{R_1}$. Le signe $-$ traduit un **déphasage de $180^\circ$** (inversion) entre la sortie et l'entrée.

## 3. Montage Amplificateur Non-Inverseur

Le signal d'entrée $V_e$ est appliqué directement sur l'entrée non-inverseuse $e^+$. La contre-réaction forme un pont diviseur de tension sur $e^-$.

```text
               +-------[ R2 ]-------+
               |                    |
      GND ---[ R1 ]---+-----( - )   |
                      |      |   \  |
                      +------|    >---+--- Vs
                             |   /
               Ve ----------( + )

```

### Démonstration

1. **Potentiel sur l'entrée $e^+$** : $e^+ = V_e \implies e^- = V_e$.
2. **Pont diviseur de tension sur l'entrée $e^-$** :

$$e^- = V_s \cdot \frac{R_1}{R_1 + R_2}$$


3. **Relation Entrée/Sortie** :

$$V_e = V_s \cdot \frac{R_1}{R_1 + R_2} \implies V_s = V_e \cdot \left(1 + \frac{R_2}{R_1}\right)$$



> [!note] Propriété
> Le gain en tension $A_v = 1 + \frac{R_2}{R_1}$ est **strictement supérieur à $1$** et conserve la phase du signal d'entrée.

## 4. Montage Suiveur (Buffer)

Cas particulier du montage non-inverseur obtenu en reliant directement la sortie à l'entrée inverseuse ($R_2 = 0$) sans résistance à la masse ($R_1 \to \infty$).

```text
               +--------------------+
               |                    |
               +------------( - )   |
                             |   \  |
                             |    >---+--- Vs
                             |   /
               Ve ----------( + )

```

### Relation Entrée/Sortie

$$e^+ = V_e \quad \text{et} \quad e^- = V_s \implies V_s = V_e$$

> [!info] Rôle d'adaptation d'impédance
> Le montage suiveur possède un **gain en tension unitaire ($A_v = 1$)**. Il sert d'**adaptateur d'impédance** (isolateur) grâce à son impédance d'entrée quasi-infinie et son impédance de sortie quasi-nulle.

## Concepts liés

* [[Pont diviseur de tension]]
* [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC

```

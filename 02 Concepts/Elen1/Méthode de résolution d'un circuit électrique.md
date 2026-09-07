---
type: concept
tags:
  - concepts
  - Elen1
  - physique/électricité
  - "#elen1/methode"
MOC:
  - "[[MOC Électricité]]"
  - "[[07 MOC/Concepts/Elen1/MOC Methode|MOC Methode]]"
  - "[[MOC Résolution d'équations]]"
date_creation: 2026-09-07
Ressources:
---

# Méthode de résolution d'un circuit électrique

> [!info] Définition courte
> La **méthode de résolution d'un circuit** est une démarche algorithmique en 4 étapes permettant de poser algébriquement les équations d'un réseau électrique pour en déterminer l'ensemble des tensions et courants inconnus.


## 1. Démarche systématique de résolution

| Étape | Action | Description |
| :--- | :--- | :--- |
| **1. Schéma et conventions** | Dessin & Fléchage | Représenter le circuit, flécher les tensions $U_k$ et courants $I_k$ en appliquant la **convention récepteur** pour les résistances et **générateur** pour les sources. |
| **2. Lois de Kirchhoff** | Mailles & Nœuds | Écrire les équations de la **loi des mailles** ($\sum U = 0$) et de la **loi des nœuds** ($\sum I = 0$). |
| **3. Application de la loi d'Ohm** | Substitution $U \to R \cdot I$ | Exprimer chaque tension de composant résistif en fonction du courant correspondant ($U_k = R_k \cdot I_k$) et l'injecter dans les équations de mailles. |
| **4. Calcul algébrique** | Système d'équations | Réduire le nombre d'inconnues par substitution des courants afin d'obtenir et résoudre un système linéaire. |


## 2. Exemple d'application (Étude de cas)

Sur un circuit comportant un générateur $E$ et trois résistances $R_1, R_2, R_3$ :

1. **Équations des mailles** :
   $$E - U_1 - U_2 = 0 \quad \text{et} \quad E - U_1 - U_3 = 0$$
2. **Injection de la loi d'Ohm** ($U_1 = R_1 I_1$, $U_2 = R_2 I_2$, $U_3 = R_3 I_3$) :
   $$E - R_1 I_1 - R_2 I_2 = 0$$
3. **Réduction par la loi des nœuds** ($I_1 = I_2 + I_3$) :
   $$E - R_1 (I_2 + I_3) - R_2 I_2 = 0 \implies E = I_2 (R_1 + R_2) + R_1 I_3$$
4. **Système final** : On obtient un système de $2$ équations linéaires à $2$ inconnues ($I_2$ et $I_3$) facilement resolvable.


## Concepts liés

- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]
- [[Conventions en électricité]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````

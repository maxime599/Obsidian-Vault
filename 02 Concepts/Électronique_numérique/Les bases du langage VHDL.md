---
type: concept
tags:
  - concepts
  - Électronique_numérique
  - flashcards/Électronique_numérique 
MOC:
date_creation: 2026-11-12
Ressources:
---
# Les bases du langage VHDL

> [!info] Définition courte
> Le **VHDL** (*VHSIC Hardware Description Language*) est un langage de description matérielle normalisé par l'IEEE qui permet de décrire des circuits numériques sous forme de fichiers texte, facilitant la simulation, l'optimisation et la synthèse sur FPGA ou ASIC.

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

## 1. Organisation d'un fichier VHDL et Déclaration d'Entité

Un fichier VHDL `.vhd` standard s'articule autour de l'appel des bibliothèques, d'une entité et d'une architecture :

```vhdl
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
```

### A. L'Entité (`ENTITY`)
L'entité décrit le composant tel qu'on le perçoit de l'extérieur (son nom, ses entrées et ses sorties) :
- **Modes de port** : 
  - `IN` :: Port d'entrée (données uniquement lues).
<!--SR:!2026-11-16,4,270-->
  - `OUT` :: Port de sortie (données uniquement écrites).
<!--SR:!2026-11-16,4,270-->
  - `INOUT` :: Port bidirectionnel.
<!--SR:!2026-11-16,4,270-->
- **Types de port** :
  - `STD_LOGIC` :: Signal sur un seul bit.
<!--SR:!2026-11-15,3,250-->
  - `STD_LOGIC_VECTOR` :: Bus de plusieurs bits.
<!--SR:!2026-11-16,4,270-->

### B. Gestion des Bus (`STD_LOGIC_VECTOR`)
Un bus permet de regrouper plusieurs signaux d'un bit . 
- **Déclaration de bus** :: `STD_LOGIC_VECTOR(n - 1 DOWNTO 0)` (ex: `STD_LOGIC_VECTOR(7 DOWNTO 0)` pour un bus de 8 bits) .
<!--SR:!2026-11-16,4,270-->
- **Accès aux sous-groupes d'un bus** :: Utilisation de parenthèses (ex: `s(0)` pour un bit, `s(7 DOWNTO 4)` pour une tranche de bits) .
<!--SR:!2026-11-16,4,270-->
- **Concaténation d'un bus** :: Réalisée à l'aide de l'opérateur `&` (ex: `s <= a & b & c`) .
<!--SR:!2026-11-16,4,270-->


## 2. La partie Architecture et Expressions logiques

L'architecture (`ARCHITECTURE`) décrit ==l'intérieur du composant, c'est-à-dire la manière dont les entrées sont transformées pour obtenir les sorties.==
<!--SR:!2026-11-16,4,270-->

### A. Affectation inconditionnelle et opérateurs logiques
Pour connecter les signaux au sein de l'architecture, on utilise l'affectation inconditionnelle ==`<=`==. Les opérateurs logiques disponibles sont :
- `NOT`, `AND`, `NAND`, `OR`, `NOR`, `XOR`, `XNOR`.
*Attention :* L'utilisation de parenthèses est obligatoire pour expliciter les priorités (ex: `y <= (a AND b) OR (c AND d);`).
<!--SR:!2026-11-16,4,270-->


## 3. Structures conditionnelles : WHEN et WITH SELECT

### A. Affectation conditionnelle (`WHEN ... ELSE`)
L'affectation conditionnelle permet de décrire des fonctions logiques en spécifiant les différentes valeurs prises en fonction de conditions explicites  :
?
```vhdl
s <= b WHEN a = '1' ELSE
     d WHEN q = '0' ELSE
     '0' WHEN m = '1' ELSE
     f; -- Cas par défaut indispensable
```
*Note :* Les conditions sont évaluées dans l'ordre d'écriture, et cette structure instancie une suite de ==multiplexeurs==.
<!--SR:!2026-11-15,3,250-->

### B. Affectation sélective (`WITH ... SELECT ... WHEN`)
L'affectation sélective est idéale pour tester les différentes valeurs possibles d'un signal de sélection unique (comme dans un codeur ou un multiplexeur) :
?
```vhdl
WITH signal_selection SELECT
    signal_sortie <= valeur_0 WHEN valeur_0_sel,
                     valeur_1 WHEN valeur_1_sel,
                     valeur_par_defaut WHEN OTHERS;
```
<!--SR:!2026-11-16,4,270-->


## 4. Gestion d'un Buffer Tri-State et Entrées/Sorties Bidirectionnelles

### A. Le Buffer Tri-State
Le buffer tri-state permet de déconnecter un signal de manière contrôlée grâce à une entrée de validation (`oe` - *Output Enable*). Il gère trois états :
?
- Niveau logique haut (`1`).
- Niveau logique bas (`0`).
- État de haute impédance noté `'Z'`.
<!--SR:!2026-11-16,4,270-->

### B. Implémentation d'une E/S bidirectionnelle (`INOUT`)
Pour gérer des broches configurables alternativement en entrée ou en sortie, on utilise le mode `INOUT` associé à une affectation conditionnelle affectant la haute impédance `'Z'` lorsque le buffer est inactif  :
```vhdl
ENTITY es_bidir IS
PORT (
    es : INOUT STD_LOGIC;
    oe : IN STD_LOGIC;
    sortie : IN STD_LOGIC;
    entree : OUT STD_LOGIC
);
END es_bidir;

ARCHITECTURE archi OF es_bidir IS
BEGIN
    es <= sortie WHEN oe = '1' ELSE 'Z';
    entree <= es;
END archi;
```


## Concepts liés

- [[Portes logiques et algèbre de Boole]]

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
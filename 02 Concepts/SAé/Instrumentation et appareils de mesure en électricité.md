---
type: concept
tags:
  - concepts
  - SAé
  - physique/électricité
  - SAé/materiel
  - flashcards/SAé
MOC:
  - "[[MOC Électricité]]"
  - "[[MOC Materiel]]"
date_creation: 2026-09-08
Ressources:
  - "[[SAé Les appareils de mesure.pdf]]"
---

# Instrumentation et appareils de mesure en électricité

> [!info] Définition courte
> L'**instrumentation de laboratoire** regroupe les équipements de génération de signaux, d'alimentation et de mesure indispensables pour alimenter, observer et analyser le comportement des circuits électriques.


## 1. Génération et alimentation

**Alimentation stabilisée** :
??
- Fournit des tensions et courants continus ($DC$) stables nécessaires au fonctionnement des circuits.
- Intègre une protection par limitation de courant pour sécuriser les composants en cas de court-circuit.
<!--SR:!2026-09-20,3,250!2026-09-20,3,250-->

**Générateur Basses Fréquences (GBF)** :
??
- Source de tension délivrant des signaux périodiques de formes variées (sinusoïdal, carré, triangulaire).
<!--SR:!2026-09-20,3,250!2026-09-21,4,270-->


## 2. Mesure et observation

**Multimètre numérique** :
??
- Appareil polyvalent permettant de mesurer plusieurs grandeurs physiques : tension (voltmètre), intensité (ampèremètre), résistance (ohmmètre) et capacité (capacimètre).
<!--SR:!2026-09-21,4,270!2026-09-21,4,270-->

**Oscilloscope** :
??
- Appareil de visualisation permettant d'observer l'évolution temporelle de $1$ ou $2$ signaux électriques simultanément.
<!--SR:!2026-09-20,3,250!2026-09-21,4,270-->


## 3. Modes d'affichage et couplage (AC / DC)

Lors de la mesure ou de l'observation d'un signal :

- **Couplage DC (*Direct Current*)** ::: Conserve la totalité du signal (composante continue $+$ composante alternative).
<!--SR:!2026-09-21,4,270!2026-09-21,4,270-->
- **Couplage AC (*Alternating Current*)** ::: Filtre la composante continue pour ne conserver et n'afficher que la composante alternative du signal.
<!--SR:!2026-09-20,3,250!2026-09-21,4,270-->


## 4. Connectique de laboratoire

- **Câbles ==Banane==** : Principalement utilisés pour les connexions de puissance et les mesures en courant continu (multimètre, alimentation).
- **Câbles ==BNC**== : Câbles coaxiaux utilisés pour acheminer des signaux à haute fréquence ou haute précision sans interférences (GBF, oscilloscope).
<!--SR:!2026-09-21,4,270!2026-09-21,4,270-->


## Concepts liés

 -

## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

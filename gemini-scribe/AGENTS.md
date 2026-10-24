# AGENTS.md

This file provides context about this Obsidian vault for AI agents.

## Vault Overview

Ce coffre constitue la base de connaissances académique d'un étudiant en premier cycle d'ingénierie technologique, plus précisément en BUT1 GEII (Génie Électrique et Informatique Industrielle).

Il sert d'espace de travail structuré combinant la prise de notes de cours magistraux, la capitalisation de fiches conceptuelles atomiques, l'organisation d'exercices/TD et la préparation aux devoirs surveillés (DS) semestriels dans les disciplines scientifiques et techniques fondamentales.

## Organization

Le coffre suit une taxonomie chiffrée claire et hautement modulaire, favorisant la méthode Zettelkasten / MOC :

- `01 Cours/` : Prises de notes de cours datées et contextualisées, réparties par matière (`Elen1`, `Math`, `Thermodynamique`, `Info`, `Électronique_numérique`, `Optique_géometrique`, `SAé`, `Méthodologie_scientifique`).
- `02 Concepts/` : Cœur notionnel du coffre (plus de 150 notes atomiques) regroupant définitions formelles, théorèmes, lois physiques et formules condensées par domaine.
- `03 TD-TP/` & `05 Ressources/` : Feuilles d'exercices, archives de DS (`BUT1 GE2I`, Mathématiques, Physique S1/S2), supports de cours PDF et mémos techniques (notamment sur LaTeX).
- `06 Templates/` : Modèles normalisés pour l'harmonisation des notes (`Cours`, `Concepts`, `MOC`).
- `07 MOC/` : Plus de 60 cartes de contenu (*Maps of Content*) organisées par matière pour cartographier et naviguer dans les relations entre concepts.
- Dossiers d'outillage : `Excalidraw/` pour les schémas synoptiques, géométriques et circuits électriques, et `copilot/` pour la mémoire et les scripts d'assistance IA.

## Key Topics

- **Électronique analogique (Elen1) & Instrumentation** : Amplificateurs opérationnels (AOP), régimes harmonique et indiciel, circuits RC/RLC du premier et second ordre, composants réactifs (condensateurs, inductances), diagrammes de Bode, conventions et mesures en laboratoire (SAé).
- **Électronique numérique** : Systèmes de numération (binaire, hexadécimal), algèbre de Boole, portes logiques, formes canoniques et simplification par tableaux de Karnaugh.
- **Mathématiques appliquées** : Nombres complexes et trigonométrie, théorie des ensembles, applications et bijections, dénombrement (arrangements, permutations), sommes finies et télescopiques, densité de $\mathbb{Q}$ dans $\mathbb{R}$, géométrie vectorielle et repères.
- **Thermodynamique physique** : 1er et 2nd principes, gaz parfaits, lois de Joule et relation de Mayer, détentes de Joule, bilans d'entropie, diagrammes de Clapeyron, cycles moteurs et récepteurs (Carnot, Rankine, Diesel, Beau de Rochas, Brayton).
- **Informatique & Algorithmique (Info)** : Programmation structurée et modulaire en C et C++, typage, boucles, conditions, décomposition fonctionnelle.
- **Physique ondulatoire & Optique** : Lois de Newton, cinématique, diffraction des ondes, effet Doppler, effet photoélectrique, optique géométrique.
- **Méthodologie & Projets** : SAé (Situation d'Apprentissage et d'Évaluation), modélisation Proteus, méthode scientifique, démarches d'apprentissage actif et posture de l'ingénieur.

## User Preferences

L'utilisateur adopte une démarche scientifique rigoureuse, académique et synthétique. Les explications doivent être denses, précises et exemptes de bavardage superflu.

L'emploi systématique de la typographie mathématique LaTeX (`$...$` en ligne et `$$...$$` en bloc) est indispensable pour les variables, équations, unités et grandeurs physiques.

La distinction structurelle entre les notes de séances chronologiques (`01 Cours/`) et les concepts théoriques autonomes (`02 Concepts/`) doit être scrupuleusement respectée, avec un maillage interne dense via des liens wiki.

## Custom Instructions

- **Création de concepts** : Placer systématiquement les nouvelles fiches théoriques dans `02 Concepts/<Matière>/` en respectant le template `06 Templates/Concepts` (définition, formules en LaTeX, propriétés clés, contexte d'application).
- **Liaison et indexation** : Relier tout nouveau concept à son MOC correspondant dans `07 MOC/Concepts/<Matière>/` ainsi qu'aux cours ou notions associés via des `[[WikiLinks]]`.
- **Rigueur des notations** : Utiliser la convention scientifique standard (unités du Système International, notations matricielles ou complexes standardisées, conventions récepteur/générateur en électricité).
- **Schémas et représentations** : Mentionner ou suggérer des renvois vers les schémas techniques `Excalidraw/` lorsqu'une notion gagne à être visualisée (diagrammes de Bode, cycles thermodynamiques, chronogrammes, schémas de circuits).

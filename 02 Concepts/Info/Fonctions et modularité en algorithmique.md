---
type: concept
tags:
  - concepts
  - Info
  - info/algorithmique
  - info/fonctions
MOC:
  - "[[MOC Fonctions]]"
  - "[[MOC Algorithmique]]"
date_creation: 2026-09-09
Ressources:
---

# Fonctions et modularité en algorithmique

> [!info] Définition courte
> Une **fonction** est un sous-programme autonome conçu pour accomplir une tâche spécifique à partir de paramètres d'entrée et renvoyer au plus une seule valeur en résultat.
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


## 1. Intérêt et principes de la modularité

L'utilisation des fonctions répond aux principes clés du génie logiciel :
- **Réutilisabilité** : Évite la duplication de code (*copier-coller*) en centralisant un traitement répétitif en un seul endroit.
- **Lisibilité et maintenance** : Découpe un problème complexe en sous-problèmes plus simples et indépendants.
- **Abstraction** : Permet d'utiliser un bloc de code en connaissant uniquement ses spécifications (ce qu'il fait) sans se soucier de sa mise en œuvre interne (comment il le fait).


## 2. Caractéristiques d'une fonction

Une fonction est définie par sa **signature** (ou prototype) comprenant :
- **Un nom explicite** : Identifie la fonction (par convention, commence par une majuscule).
- **Un rôle** : Description succincte de la tâche exécutée.
- **Des paramètres d'entrée** : Variables transmises à la fonction pour lui fournir les données nécessaires au calcul.
- **Un type de retour** : Type de la valeur produite et renvoyée à l'algorithme appelant.


## 3. Portée des variables (Variables locales)

Les variables déclarées à l'intérieur d'une fonction sont dites **locales** :
- Elles n'existent que pendant l'exécution de la fonction.
- Elles ne sont pas accessibles depuis l'algorithme principal ni depuis d'autres fonctions.
- Cette étanchéité garantit l'absence d'effets de bord incontrôlés sur le reste du programme.


## Concepts liés

- [[Syntaxe et structure en algorithmique]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
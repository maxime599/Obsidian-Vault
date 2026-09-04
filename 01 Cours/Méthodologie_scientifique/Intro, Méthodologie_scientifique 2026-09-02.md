---
semestre: S1
type de cours: CM
date: 2026-09-02T13:33:00
End Date: 2026-09-02T15:03:00
Calendar Title: "[[01 Cours/Méthodologie_scientifique/Intro, Méthodologie_scientifique 2026-09-02|Intro, Méthodologie_scientifique]]"
prof: Eduardo Brandao
tags:
  - cours
  - Méthodologie_scientifique
Concepts:
  - "[[La démarche scientifique et réfutabilité]]"
  - "[[Rôle et responsabilité de l'ingénieur]]"
  - "[[Techniques d'apprentissage et rappel actif]]"
  - "[[Usage critique des intelligences artificielles]]"
---

```dataviewjs
const activeFile = app.workspace.getActiveFile();

if (!activeFile) {
    dv.paragraph("Aucune note active.");
} else {

    const pages = dv.pages()
        .where(p => 
            p.date &&
            p.file.folder === activeFile.parent.path
        )
        .sort(p => p.date, "asc")
        .array();

    const index = pages.findIndex(
        p => p.file.path === activeFile.path
    );

    const prev = index > 0
        ? pages[index - 1]
        : null;

    const next = index !== -1 && index < pages.length - 1
        ? pages[index + 1]
        : null;

    function getCleanLink(page) {
        if (!page) return "Aucun";

        const cleanTitle = page.file.name
            .split(",")[0]
            .trim();

        return `[[${page.file.path}|${cleanTitle}]]`;
    }

    dv.paragraph(
        `**Précédent :** ${getCleanLink(prev)} | **Suivant :** ${getCleanLink(next)}`
    );
}
```
# Intro


## Objectifs

- Apprendre à penser comme un scientifique

## Notes
Plan du cours :
1. Classes préparatoires aux grandes écoles, note historique
2. Les bases de la Méthode Scientifique
3. LE scientifique
	1. Apprendre et organiser son travail
	2. Construire un raisonnement
	3. Apprendre à utiliser l'ia


## 1.
Responsabilité d'un ingénieur : Ils reçoivent des problèmes difficiles, souvent nouveaux, dont les solutions ont des conséquences réelles.


## 2. 
La science a changé le monde
Les sciences modernes ont produit des connaissances qui ont transformé notre capacité à agir sur le monde

La méthode scientifique doit être cohérente, confronté au réel et exposé à la critique



## 3. Le scientifique
### a. Apprendre et organiser son travail (Christophe Gravier)
Il faut apprendre régulièrement

1. Régularité, travailler avant que l'urgence impose de tout faire en une fois
2. Rappel, essayer de retrouver une idée avant 
3. Retour
4. Persévérance


### b. Construire un raisonnement (Florent Bernard)
Un raisonnement mathématique est une chaine que quelqu'un d'autre doit pouvoir suivre, vérifier et critiquer

Définition $\to$ Hypothèses $\to$ Déduction $\to$ Conclusion $\to$ Vérification

Théorème = phrase que l'on arrive à démontrer à partir d'un certain nombre d'hypothèses


### c. Utiliser l'IA sans lui déléguer sa pensée (Eduardo Brandao)
Il ne faut pas utiliser l'IA pour faire notre travail à notre place. Il faut apprendre à chercher pour apprendre



## Exercices


## À retenir

1. 

## Travail à faire




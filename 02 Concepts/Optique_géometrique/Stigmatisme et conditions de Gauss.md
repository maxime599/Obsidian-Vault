---
type: concept
tags:
  - concepts
  - Optique_géometrique
  - flashcards/Optique_géometrique
  - Optique_géometrique/imagerie
MOC:
  - "[[MOC Imagerie]]"
date_creation: 2026-10-18
Ressources:
---

# Stigmatisme et conditions de Gauss

> [!info] Définition courte
> Le **stigmatisme** caractérise l'aptitude d'un système optique à faire converger un point objet unique en un point image unique. Les **conditions de Gauss** permettent d'obtenir un stigmatisme approché indispensable pour obtenir des images nettes en optique centré.

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

## 1. Notions de stigmatisme

- **Stigmatisme rigoureux** : Un système est stigmatique pour un couple $(A, A')$ si ==tout rayon issu de $A$ converge exactement en $A'$ (ex : le miroir plan).==
- **Stigmatisme approché** : Les rayons issus de $A$ passent ==au voisinage de $A'$ sans créer de tache perçue comme floue par le récepteur (œil ou capteur photo),== l'écart étant inférieur à la limite de résolution. $A'$ est alors une image virtuelle ou approchée.
<!--SR:!2026-10-23,3,250!2026-10-24,4,270-->


## 2. Les Conditions de Gauss

Pour qu'un système optique centré réalise un stigmatisme approché de qualité, il doit être utilisé dans les **conditions de Gauss** :
1. Les rayons lumineux doivent être **proches de l'axe optique**.
2. Les rayons doivent être **faiblement inclinés** sur l'axe (angles d'incidence petits).

*Conséquence mathématique* : L'approximation des petits angles en radians permet de simplifier les fonctions trigonométriques : $\sin(\theta) \approx \theta$.


## 3. Aplanétisme et Grandissements

- **Aplanétisme** : Propriété d'un système optique centré fonctionnant dans les conditions de Gauss dont l'image d'un objet plan perpendiculaire à l'axe optique est elle-même plane et perpendiculaire à cet axe.
- **Condition d'Abbe** :: $n \cdot \overline{AB} \cdot \sin(u) = n' \cdot \overline{A'B'} \cdot \sin(u')$ (qui se simplifie sous Gauss par $n \cdot \overline{AB} \cdot u = n' \cdot \overline{A'B'} \cdot u'$).
<!--SR:!2026-10-24,4,270-->
- **Grandissements** :
  - Grandissement transversal : $\gamma = \frac{\overline{A'B'}}{\overline{AB}}$
  - Grossissement angulaire :: $G = \frac{u'}{u}$
<!--SR:!2026-10-24,4,270-->
  - Relation fondamentale :: $\gamma \cdot G = \frac{n}{n'}$
<!--SR:!2026-10-21,1,230-->


## Concepts liés

- [[Cadre et modèle du rayon en optique géométrique]]
- [[Nature des objets, des images et foyers optiques]]
- [[Étude et propriétés des fonctions cosinus et sinus]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
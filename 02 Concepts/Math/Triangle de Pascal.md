---
type: concept
matière: math
tags:
  - concepts
  - math/probabilites
  - math/combinatoire
  - math/denombrement
  - math
MOC:
  - "[[MOC Probabilites]]"
  - "[[MOC Combinatoire]]"
  - "[[MOC Dénombrement]]"
date_creation: 2026-07-27
---
# Triangle de Pascal

> [!info] Définition courte
> Le **triangle de Pascal** est une disposition triangulaire de nombres dans laquelle chaque terme est égal à la somme des deux nombres situés juste au-dessus de lui. Il permet d'obtenir rapidement les **coefficients binomiaux** $\binom{n}{k}$.
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


## Explication intuitive

Imagine une pyramide de nombres. On commence avec $1$ tout en haut. À chaque nouvelle ligne, les bords extérieurs sont toujours égal à $1$. Pour trouver n'importe quel nombre à l'intérieur, il suffit d'additionner les deux nombres situés au-dessus de lui (à sa gauche et à sa droite).





## Fonctionnement

1. **Construire les bordures** : La première ligne ($n = 0$) contient un seul $1$. Chaque ligne commence et se termine toujours par $1$.
2. **Remplir l'intérieur** : Pour trouver une valeur à la ligne $n$ et colonne $k$, on fait la somme de :
   - La valeur au-dessus à gauche : ligne $n-1$, colonne $k-1$
   - La valeur au-dessus à droite : ligne $n-1$, colonne $k$
3. **Lire les coefficients** : La valeur à la ligne $n$ (numérotée à partir de $0$) et à la colonne $k$ (numérotée à partir de $0$) correspond exactement au coefficient binomial $\binom{n}{k}$.


## Exemple de construction

Voici les 5 premières lignes du triangle ($n = 0$ à $n = 4$) :

| $n \setminus k$ | $0$ | $1$ | $2$ | $3$ | $4$ |
| :---: | :---: | :---: | :---: | :---: | :---: |
| **Ligne 0** | **1** | | | | |
| **Ligne 1** | **1** | **1** | | | |
| **Ligne 2** | **1** | **2** | **1** | | |
| **Ligne 3** | **1** | **3** | **3** | **1** | |
| **Ligne 4** | **1** | **4** | **6** | **4** | **1** |

*Lecture :* Pour trouver $\binom{4}{2} = 6$, on regarde la ligne $n = 4$ et la colonne $k = 2$.
On remarque que $6 = 3 + 3$ (somme des termes au-dessus dans la ligne 3).


## Formules / Algorithmes / Propriétés

> [!theorem] Relation de Pascal
> Pour tous entiers $n$ et $k$ tels que $1 \le k \le n$ :
> $$\binom{n}{k} = \binom{n-1}{k-1} + \binom{n-1}{k}$$

**Propriétés fondamentales :**

* **Symétrie du triangle** :
    $$\binom{n}{k} = \binom{n}{n-k}$$
    *(La ligne se lit de la même façon de gauche à droite ou de droite à gauche).*

* **Somme d'une ligne** :
    $$\sum_{k=0}^{n} \binom{n}{k} = \binom{n}{0} + \binom{n}{1} + \dots + \binom{n}{n} = 2^n$$
    *(La somme de tous les termes de la $n$-ième ligne est égale à $2^n$).*

* **Lien avec le binôme de Newton** :
    Les nombres de la ligne $n$ sont les coefficients du développement de $(a + b)^n$.
    *Exemple pour $n=3$ :* $(a + b)^3 = 1a^3 + 3a^2b + 3ab^2 + 1b^3$.


## Concepts liés

- [[Loi binomiale]]
- [[Succession d'épreuves indépendantes et Schéma de Bernoulli]]
- [[Combinaisons et coefficients binomiaux]]
- [[Récurrence]] (pour la démonstration)
- [[Binôme de Newton]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

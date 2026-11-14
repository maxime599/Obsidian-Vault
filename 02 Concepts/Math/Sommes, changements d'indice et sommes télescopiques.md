---
type: concept
tags:
  - concepts
  - Math
  - flashcards/Math
  - math/analyse
  - math/algebre
MOC:
  - "[[MOC Algèbre]]"
  - "[[07 MOC/Concepts/Math/MOC Analyse|MOC Analyse]]"
date_creation: 2026-10-07
Ressources:
  - "[[math chapitre 4 S1.pdf]]"
---

# Sommes, changements d'indice et sommes télescopiques

> [!info] Définition courte
> Le symbole $\sum$ (sigma) permet d'écrire de manière condensée la somme des termes d'une suite. La manipulation des sommes repose sur la **linéarité**, le **changement d'indice**, la simplification de **sommes télescopiques** et l'utilisation de **sommes usuelles** (arithmétiques et géométriques).
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


## 1. Le symbole $\sum$ et ses conventions

Soient $m$ et $n$ deux entiers naturels tels que $m \le n$ :

$$\sum_{k=m}^{n} a_k = a_m + a_{m+1} + \dots + a_{n-1} + a_n$$

- **Nombre de termes** : La somme comporte exactement $n - m + 1$ termes.
- **Indice muet** : L'indice de sommation $k$ est dit « muet ». Il peut être remplacé par n'importe quel autre symbole non utilisé dans le contexte :
  $$\sum_{k=m}^{n} a_k = \sum_{i=m}^{n} a_i = \sum_{j=m}^{n} a_j$$


## 2. Propriétés algébriques (Linéarité)

- **Additivité** :
  $$\sum_{k=m}^{n} (a_k + b_k) = \sum_{k=m}^{n} a_k + \sum_{k=m}^{n} b_k$$
- **Multiplication par une constante** : Pour tout réel ou complexe $\lambda$ ne dépendant pas de l'indice $k$ ::$$\sum_{k=m}^{n} \lambda a_k = \lambda \sum_{k=m}^{n} a_k$$
<!--SR:!2026-12-30,62,310-->

> [!warning] Incompatibilité avec le produit
> En général, la sommation ne se distribue pas sur la multiplication :
> $$\sum_{k=m}^{n} a_k b_k \neq \left(\sum_{k=m}^{n} a_k\right) \left(\sum_{k=m}^{n} b_k\right)$$


## 3. Changement d'indice

Le changement d'indice permet de modifier les bornes de la somme ou de simplifier l'expression du terme général :

- **Décalage vers le haut** ($i = k + 1 \iff k = i - 1$) :
  $$\sum_{k=m}^{n} a_{k+1} = \sum_{i=m+1}^{n+1} a_i$$
- **Décalage vers le bas** ($i = k - 2 \iff k = i + 2$) :
  $$\sum_{k=2}^{n+2} a_k = \sum_{i=0}^{n} a_{i+2}$$


## 4. Sommes télescopiques

Lors d'une somme de différences de termes consécutifs, tous les termes intermédiaires s'annulent deux à deux ::$$\sum_{k=m}^{n} (a_{k+1} - a_k) = a_{n+1} - a_m$$
<!--SR:!2026-12-15,47,290-->


## 5. Sommes usuelles

### A. Somme des entiers (Suite arithmétique de base)
Pour tout $n \in \mathbb{N}$ :
$$\sum_{k=0}^{n} k = \sum_{k=1}^{n} k = \frac{n(n+1)}{2}$$

### B. Somme des puissances (Suite géométrique)
Pour tout $q \neq 1$ et tout $n \in \mathbb{N}$ :
$\sum_{k=0}^{n} q^k$ = ==$\frac{1 - q^{n+1}}{1 - q}$==
<!--SR:!2026-12-21,43,290-->


## Concepts liés

- [[Suites]]
- [[Combinaisons et coefficients binomiaux]]
- [[Binôme de Newton]]
- [[Principes additif et multiplicatif en dénombrement]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

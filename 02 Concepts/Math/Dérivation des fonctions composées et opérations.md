---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/dérivation
  - math/fonction
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Dérivation]]"
date_creation: 2026-07-27
---
# Dérivation des fonctions composées et opérations

> [!info] Définition courte
> La **dérivée d'une fonction composée** $(v \circ u)(x) = v(u(x))$ est donnée par la formule $(v \circ u)' = u' \cdot (v' \circ u)$. Elle permet de dériver des formes complexes comme $\sqrt{u}$, $e^u$ ou $u^n$.
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

Une fonction composée enchaîne deux opérations : d'abord $u$, puis $v$. La vitesse de variation globale est le produit de la vitesse de la transformation intérieure ($u'$) par la vitesse de la transformation extérieure ($v'$) évaluée au niveau du résultat intermédiaire $u(x)$.


## Fonctionnement

Pour dériver une fonction composée de type $v(u(x))$ :

1. Identifier la fonction intérieure $u(x)$ et calculer sa dérivée $u'(x)$.
2. Identifier la formule de la fonction extérieure $v(X)$ et sa dérivée $v'(X)$.
3. Appliquer la formule adaptée :
   - Pour $f(x) = \sqrt{u(x)} \implies f'(x) = \frac{u'(x)}{2\sqrt{u(x)}}$
   - Pour $f(x) = e^{u(x)} \implies f'(x) = u'(x)e^{u(x)}$
   - Pour $f(x) = (u(x))^n \implies f'(x) = n \cdot u'(x) \cdot (u(x))^{n-1}$


## Exemple simple

**Soit $f(x) = e^{2x^2 - 3x + 1}$ définie sur $\mathbb{R}$ :**

1. On pose $u(x) = 2x^2 - 3x + 1$, d'où $u'(x) = 4x - 3$.
2. La fonction est de la forme $e^u$, sa dérivée est $u' e^u$.
3. On obtient :
   $$f'(x) = (4x - 3)e^{2x^2 - 3x + 1}$$


## Formules / Algorithmes / Propriétés

> [!theorem] Formules Usuelles de Dérivation des Composées
> 
> | Forme composée $f(x)$ | Condition de dérivabilité | Dérivée $f'(x)$ |
> | :--- | :--- | :--- |
> | $\sqrt{u(x)}$ | $u(x) > 0$ | $\dfrac{u'(x)}{2\sqrt{u(x)}}$ |
> | $(u(x))^n$ ($n \in \mathbb{Z}^*$) | $u(x) \neq 0$ si $n < 0$ | $n \cdot u'(x) \cdot (u(x))^{n-1}$ |
> | $e^{u(x)}$ | Domaine de $u$ | $u'(x)e^{u(x)}$ |

**Opérations usuelles :**
- Produit : $(u \cdot v)' = u'v + uv'$
- Quotient : $\left(\frac{u}{v}\right)' = \frac{u'v - uv'}{v^2}$


## Concepts liés

- [[Nombre dérivé et équation de la tangente]]
- [[Dérivée, sens de variation et extrémums locaux]]
- [[Fonction exponentielle et logarithme népérien]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

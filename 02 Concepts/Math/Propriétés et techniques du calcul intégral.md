---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/integrales
  - math/fonction
  - math/dérivation
MOC:
  - "[[MOC Integrales]]"
  - "[[MOC Dérivation]]"
  - "[[MOC Fonction]]"
date_creation: 2026-07-27
---

# Propriétés et techniques du calcul intégral

> [!info] Définition courte
> Le calcul intégral repose sur des propriétés algébriques fondamentales (**linéarité**, **relation de Chasles**, **positivité/ordre**), la méthode d'**intégration par parties (IPP)** pour décomposer des produits, et permet de calculer des **aires entre deux courbes** ainsi que des **valeurs moyennes**.
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

- **Linéarité** : L'intégrale d'une somme est la somme des intégrales ; les constantes multiplicatives peuvent sortir de l'intégrale.
- **Chasles** : On peut découper un intervalle d'intégration $[a; b]$ en introduisant un point intermédiaire $c$.
- **IPP (Intégration Par Parties)** : C'est la transposition intégrale de la dérivée d'un produit $(uv)' = u'v + uv'$.
- **Valeur moyenne** : La hauteur constante d'un rectangle qui aurait exactement la même aire que le domaine sous la courbe sur $[a; b]$.


## Formules et Propriétés

### 1. Propriétés algébriques
Pour toutes fonctions $f$ et $g$ continues sur $I$, et $a, b, c \in I$ :
- **Linéarité** :
  $$\int_a^b (f(x) + g(x))\,\mathrm{d}x = \int_a^b f(x)\,\mathrm{d}x + \int_a^b g(x)\,\mathrm{d}x$$
  $$\int_a^b k \cdot f(x)\,\mathrm{d}x = k \int_a^b f(x)\,\mathrm{d}x \quad (k \in \mathbb{R})$$
- **Relation de Chasles** :
  $$\int_a^c f(x)\,\mathrm{d}x + \int_c^b f(x)\,\mathrm{d}x = \int_a^b f(x)\,\mathrm{d}x$$
  *(Conséquences : $\int_a^a f(x)\,\mathrm{d}x = 0$ et $\int_b^a f(x)\,\mathrm{d}x = -\int_a^b f(x)\,\mathrm{d}x$)*

### 2. Positivité et Ordre (pour $a \le b$)
- **Positivité** : Si $f(x) \ge 0$ sur $[a; b]$, alors $\int_a^b f(x)\,\mathrm{d}x \ge 0$.
- **Conservation de l'ordre** : Si $f(x) \le g(x)$ sur $[a; b]$, alors $\int_a^b f(x)\,\mathrm{d}x \le \int_a^b g(x)\,\mathrm{d}x$.

### 3. Intégration par parties (IPP)
> [!theorem] Théorème de l'IPP
> Soient $u$ et $v$ deux fonctions dérivables sur $[a; b]$ de dérivées $u'$ et $v'$ continues :
> $$\int_a^b u'(x)v(x)\,\mathrm{d}x = [u(x)v(x)]_a^b - \int_a^b u(x)v'(x)\,\mathrm{d}x$$

### 4. Applications du calcul intégral
- **Aire entre deux courbes** ($f \le g$ sur $[a; b]$) :
  $$\mathcal{A} = \int_a^b (g(x) - f(x))\,\mathrm{d}x \quad \text{(en u.a.)}$$
- **Valeur moyenne d'une fonction** sur $[a; b]$ ($a < b$) :
  $$\mu = \frac{1}{b - a} \int_a^b f(t)\,\mathrm{d}t$$


## Exemples d'application

### Exemple 1 : Intégration Par Parties (IPP)
Calculer $I = \int_0^1 x e^x\,\mathrm{d}x$ :
On pose :
- $u'(x) = e^x \implies u(x) = e^x$
- $v(x) = x \implies v'(x) = 1$

$$I = [x e^x]_0^1 - \int_0^1 1 \cdot e^x\,\mathrm{d}x = (1 \cdot e^1 - 0) - [e^x]_0^1 = e - (e - 1) = 1$$

### Exemple 2 : Valeur moyenne
Calculer la valeur moyenne de $f(x) = 3x^2 - 4x + 5$ sur $[1; 10]$ :
$$\mu = \frac{1}{10 - 1} \int_1^{10} (3x^2 - 4x + 5)\,\mathrm{d}x = \frac{1}{9} [x^3 - 2x^2 + 5x]_1^{10}$$
- $F(10) = 1000 - 200 + 50 = 850$
- $F(1) = 1 - 2 + 5 = 4$
- $\mu = \frac{1}{9} (850 - 4) = \frac{846}{9} = 94$


## Concepts liés

- [[Notion d'intégrale et aire sous une courbe]]
- [[Lien entre intégrale et primitives]]
- [[Primitives d'une fonction]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

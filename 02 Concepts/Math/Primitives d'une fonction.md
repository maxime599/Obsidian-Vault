---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/fonction
  - math/dérivation
  - math/integrales
MOC:
  - "[[MOC Fonction]]"
  - "[[MOC Dérivation]]"
  - "[[MOC Integrales]]"
date_creation: 2026-07-27
---
# Primitives d'une fonction

> [!info] Définition courte
> Soit $f$ une fonction définie sur un intervalle $I$. Une **primitive** de $f$ sur $I$ est une fonction $F$ dérivable sur $I$ telle que pour tout $x \in I$ :
> $$F'(x) = f(x)$$
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

- **Inversion de la dérivation** : Chercher une primitive, c'est remonter l'« ascenseur des dérivées ». Si dériver $F$ donne $f$, alors $F$ est une primitive de $f$.
- **Infinité de solutions** : Une fonction ne possède pas UNE seule primitive, mais une infinité. Elles ne diffèrent toutes que d'une constante réelle $C$. Graphiquement, les courbes représentatives de toutes ces primitives se déduisent les unes des autres par translation verticale de vecteur $C\vec{j}$.


## Fonctionnement et Propriétés

1. **Existence** : Toute fonction continue sur un intervalle $I$ admet au moins une primitive sur $I$.
2. **Ensemble des primitives** : Si $F$ est une primitive de $f$ sur $I$, alors l'ensemble des primitives de $f$ est donné par :
   $$x \mapsto F(x) + C \quad (C \in \mathbb{R})$$
3. **Unicité sous condition initiale** : Pour tout réel $x_0 \in I$ et tout réel $y_0$, il existe une **unique** primitive $G$ de $f$ sur $I$ telle que $G(x_0) = y_0$.
4. **Linéarité des primitives** :
   - Si $F$ et $G$ sont des primitives de $f$ et $g$, alors $F+G$ est une primitive de $f+g$.
   - Pour tout réel $k$, $kF$ est une primitive de $kf$.


## Formules / Primitives usuelles et composées

> [!theorem] Tableau des primitives usuelles

| Fonction $f(x)$ | Primitives $F(x)$ | Intervalle $I$ |
| :--- | :--- | :--- |
| $k$ *(réel)* | $kx + C$ | $\mathbb{R}$ |
| $x^n$ ($n \in \mathbb{N}^*$) | $\frac{1}{n+1} x^{n+1} + C$ | $\mathbb{R}$ |
| $\frac{1}{x^2}$ | $-\frac{1}{x} + C$ | $]-\infty ; 0[$ ou $]0 ; +\infty[$ |
| $x^n$ ($n \le -2$) | $\frac{1}{n+1} x^{n+1} + C$ | $]-\infty ; 0[$ ou $]0 ; +\infty[$ |
| $\frac{1}{\sqrt{x}}$ | $2\sqrt{x} + C$ | $]0 ; +\infty[$ |
| $\frac{1}{x}$ | $\ln(x) + C$ | $]0 ; +\infty[$ |
| $e^x$ | $e^x + C$ | $\mathbb{R}$ |
| $\sin(x)$ | $-\cos(x) + C$ | $\mathbb{R}$ |
| $\cos(x)$ | $\sin(x) + C$ | $\mathbb{R}$ |

> [!theorem] Tableau des primitives de fonctions composées (avec $u$ dérivable)

| Forme de $f$ | Primitive $F$ | Conditions sur $u$ |
| :--- | :--- | :--- |
| $u' u^n$ ($n \in \mathbb{N}^*$) | $\frac{1}{n+1} u^{n+1} + C$ | — |
| $\frac{u'}{u^2}$ | $-\frac{1}{u} + C$ | $u(x) \neq 0$ |
| $\frac{u'}{\sqrt{u}}$ | $2\sqrt{u} + C$ | $u(x) > 0$ |
| $\frac{u'}{u}$ | $\ln(u) + C$ | $u(x) > 0$ |
| $u' e^u$ | $e^u + C$ | — |
| $u' \cos(u)$ | $\sin(u) + C$ | — |
| $u' \sin(u)$ | $-\cos(u) + C$ | — |


## Exemple simple

**Déterminer l'unique primitive $G$ de $f(x) = x$ sur $\mathbb{R}$ vérifiant $G(0) = 1$ :**

1. Les primitives générales de $f(x) = x$ sont de la forme :
   $$F(x) = \frac{1}{2}x^2 + C$$
2. On applique la condition initiale $G(0) = 1$ :
   $$F(0) = \frac{1}{2}(0)^2 + C = 1 \implies C = 1$$
3. L'unique primitive est donc :
   $$G(x) = \frac{1}{2}x^2 + 1$$


## Concepts liés

- [[Équations différentielles du premier ordre]]
- [[Notion d'intégrale et aire sous une courbe]]
- [[Nombre dérivé et équation de la tangente]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

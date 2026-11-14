---
type: concept
tags:
  - concepts
  - Elen-Ener
  - flashcards/Elen-Ener
  - elen-ener/triphase
MOC:
  - "[[MOC Triphase]]"
date_creation: 2026-11-12
Ressources:
  - "[[ENER1 triphasé.pdf]]"
---
# Systèmes triphasés (Tensions simples et composées)

> [!info] Définition courte
> Un **système triphasé** est un réseau de distribution électrique à quatre bornes (trois phases et un neutre) transportant trois grandeurs sinusoïdales de même fréquence et d'amplitude égale, déphasées de $\frac{2\pi}{3}$ les unes par rapport aux autres.

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

## 1. Présentation et distribution

### A. Avantages par rapport au monophasé
- Les machines triphasées ont des puissances de plus de 50 % supérieures aux machines monophasées de même masse et donc leurs prix sont moins élevés (le prix est directement proportionnel à la masse de la machine).
- Lors du transport de l'énergie électrique, les pertes sont moindres en triphasé.

### B. Distribution
La distribution se fait à partir de quatre bornes :
- Trois bornes de phase repérées par $1, 2, 3$ (ou $A, B, C$ ; $R, S, T$ ; $U, V, W$) ;
- Une borne neutre $N$.

- $v_1, v_2, v_3$ : tensions simples ou étoilées entre les phases et le neutre.
- $u_{12}, u_{23}, u_{31}$ : tensions composées entre les phases.
![[ENER1 triphasé.pdf#page=2&rect=63,414,537,512|ENER1 triphasé, p.2]]

## 2. Étude des tensions simples

### A. Définition et observation à l'oscilloscope
- Les tensions sont déphasées de $\frac{2\pi}{3}$ l'une par rapport à l'autre ;
- Elles ont la même valeur efficace ![[ENER1 triphasé.pdf#page=2&rect=290,238,528,376|ENER1 triphasé, p.2]].

> **Définition** : Un système triphasé est **équilibré** lorsque les trois tensions possèdent la même valeur efficace et qu'elles sont déphasées de $\frac{2\pi}{3}$ l'une par rapport à l'autre.

### B. Équations horaires
$$v_1(t) = V\sqrt{2}\sin(\omega t)$$
$$v_2(t) = V\sqrt{2}\sin\left(\omega t - \frac{2\pi}{3}\right)$$
$$v_3(t) = V\sqrt{2}\sin\left(\omega t - \frac{4\pi}{3}\right)$$

### C. Vecteurs de Fresnel associés
On déduit des équations horaires les vecteurs suivants :
$$\vec{V}_1 \begin{pmatrix} V \\ 0 \end{pmatrix} ; \quad \vec{V}_2 \begin{pmatrix} V \\ -\frac{2\pi}{3} \end{pmatrix} ; \quad \vec{V}_3 \begin{pmatrix} V \\ -\frac{4\pi}{3} \end{pmatrix}$$
![[ENER1 triphasé.pdf#page=3&rect=290,621,555,742|ENER1 triphasé, p.3]]
Le système est **équilibré direct** :
- **Équilibré** car la construction de Fresnel montre que $\vec{V}_1 + \vec{V}_2 + \vec{V}_3 = \vec{0} \implies v_1 + v_2 + v_3 = 0$.
- **Direct** car un observateur immobile verrait les vecteurs défiler devant lui dans l'ordre $1, 2, 3$.


## 3. Étude des tensions composées
![[ENER1 triphasé.pdf#page=3&rect=72,425,415,514|ENER1 triphasé, p.3]]
### A. Définition et relations vectorielles
Les tensions composées ont la même fréquence que les tensions simples  :
$$u_{12} = v_1 - v_2 \implies \vec{U}_{12} = \vec{V}_1 - \vec{V}_2$$
$$u_{23} = v_2 - v_3 \implies \vec{U}_{23} = \vec{V}_2 - \vec{V}_3$$
$$u_{31} = v_3 - v_1 \implies \vec{U}_{31} = \vec{V}_3 - \vec{V}_1$$

### B. Vecteurs de Fresnel associés et équations horaires
![[ENER1 triphasé.pdf#page=3&rect=189,124,538,286|ENER1 triphasé, p.3]]
$$\vec{U}_1 \begin{pmatrix} U \\ \frac{\pi}{6} \end{pmatrix} ; \quad \vec{U}_2 \begin{pmatrix} U \\ -\frac{3\pi}{6} \end{pmatrix} ; \quad \vec{U}_3 \begin{pmatrix} U \\ -\frac{7\pi}{6} \end{pmatrix}$$

Si le réseau est équilibré : $\vec{U}_{12} + \vec{U}_{23} + \vec{U}_{31} = \vec{0} \iff u_{12} + u_{23} + u_{31} = 0$. Le système des trois tensions composées est équilibré direct.

Équations horaires :
$$u_{12}(t) = U\sqrt{2}\sin\left(\omega t + \frac{\pi}{6}\right)$$
$$u_{23}(t) = U\sqrt{2}\sin\left(\omega t - \frac{\pi}{2}\right)$$
$$u_{31}(t) = U\sqrt{2}\sin\left(\omega t - \frac{7\pi}{6}\right)$$
![[ENER1 triphasé.pdf#page=4&rect=218,595,546,756|ENER1 triphasé, p.4]]
### C. Relation fondamentale entre $U$ et $V$
*(ENER1 triphasé, p.4)*
$$U = 2V\cos(30^\circ) = 2V\frac{\sqrt{3}}{2}$$
![[ENER1 triphasé.pdf#page=4&rect=306,430,556,520|ENER1 triphasé, p.4]]
$$\boxed{U = V\sqrt{3}}$$
*Cette relation est toujours vraie quelle que soit la charge.*


## Concepts liés

- [[Grandeur sinusoïdale (Valeurs instantanée, moyenne, efficace et déphasage)]]
- [[Représentation de Fresnel et dipôles élémentaires (R, L, C)]]
- [[Couplages des récepteurs triphasés équilibrés (Étoile et Triangle)]]
- [[Puissances en régime triphasé et relèvement du facteur de puissance]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
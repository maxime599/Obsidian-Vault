---
type: concept
tags:
  - concepts
  - Elen-Ener
  - flashcards/Elen-Ener
  - elen-ener/signaux-alternatifs
  - elen-ener/puissance
MOC:
  - "[[MOC Signaux-alternatifs]]"
  - "[[MOC Puissance]]"
date_creation: 2026-11-03
Ressources:
---

# Puissances en régime sinusoïdal et Théorème de Boucherot

> [!info] Définition courte
> En régime sinusoïdal, on distingue la **puissance active** ($P$), la **puissance réactive** ($Q$) et la **puissance apparente** ($S$). Le **théorème de Boucherot** permet de ==sommer ces puissances au sein d'un réseau de dipôles==.
<!--SR:!2026-11-19,11,270-->

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

## 1. Définitions et expressions des puissances

Soit un dipôle soumis à $u(t)$ et traversé par $i(t)$, déphasés d'un angle $\varphi = \varphi_u - \varphi_i$ :
- **Puissance instantanée** : $p(t) =$:: $u(t) \cdot i(t)$
<!--SR:!2026-11-21,9,230-->
- **Puissance active $P$** (en Watts, W) ::$$P = U \cdot I \cos\varphi$$
<!--SR:!2026-11-17,7,250-->
- **Puissance réactive $Q$** (en Volt-Ampères Réactifs, VAR) ::$$Q = U \cdot I \sin\varphi$$
<!--SR:!2026-11-17,7,250-->
- **Puissance apparente $S$** (en Volt-Ampères, VA) ::$$S = U \cdot I = \sqrt{P^2 + Q^2}$$
<!--SR:!2026-11-16,6,230-->
- **Facteur de puissance $k$** ::$$k = \cos\varphi = \frac{P}{S}$$
<!--SR:!2026-11-17,9,230-->


## 2. Interprétation du signe de la puissance réactive $Q$

- Si $Q > 0$ : le dipôle est ::**inductif** (consommateurs de réactifs).
<!--SR:!2026-11-23,15,290-->
- Si $Q < 0$ : le dipôle est ::**capacitif** (fournisseurs de réactifs).
<!--SR:!2026-11-24,16,290-->
- Si $Q = 0$ : le dipôle est ::**purement résistif**.
<!--SR:!2026-11-24,16,290-->


## 3. Théorème de Boucherot

Dans un groupement de dipôles en parallèle, les puissances actives et réactives se somment algébriquement :
$$P_{\text{tot}} = \sum P_i \quad \text{et} \quad Q_{\text{tot}} = \sum Q_i$$
La puissance apparente totale se déduit par le théorème de Pythagore ::$$S_{\text{tot}} = \sqrt{P_{\text{tot}}^2 + Q_{\text{tot}}^2}$$
<!--SR:!2026-11-22,14,290-->


## 4. Synthèse par dipôle élémentaire

| Dipôle étudié | Puissance Active $P$ (W) | Puissance Réactive $Q$ (VAR) | Puissance Apparente $S$ (VA) | Facteur de puissance $k = \cos\varphi$ |
| :--- | :---: | :---: | :---: | :---: |
| **Résistance ($R$)** | $R I^2$ | $0$ | $R I^2$ | $1$ |
| **Condensateur ($C$)** | $0$ | $-C\omega U^2$ | $C\omega U^2$ | $0$ |
| **Inductance pure ($L$)** | $0$ | $L\omega I^2$ | $L\omega I^2$ | $0$ |


## Concepts liés

- [[Grandeur sinusoïdale (Valeurs instantanée, moyenne, efficace et déphasage)]]
- [[Représentation de Fresnel et dipôles élémentaires (R, L, C)]]
- [[Analyse harmonique et diagrammes de Bode]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
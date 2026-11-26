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
# Couplages des récepteurs triphasés équilibrés (Étoile et Triangle)

> [!info] Définition courte
> Un récepteur triphasé équilibré est constitué de trois dipôles identiques d'impédance $Z$, connectés au réseau soit en couplage étoile ($Y$), soit en couplage triangle ($\Delta$), ce qui détermine les relations entre courants en ligne et courants par phase.

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

## 1. Définitions générales

- **Récepteurs triphasés** : Composés de trois dipôles identiques d'impédance $Z$.
- **Courants par phase ($J$)** :: Courants traversant les éléments $Z$ du récepteur triphasé.
<!--SR:!2026-11-29,7,250-->
- **Courants en ligne ($I$)** :: Courants circulant dans les fils du réseau triphasé.
<!--SR:!2026-12-07,15,290-->
![[ENER1 triphasé.pdf#page=5&rect=122,651,491,778|ENER1 triphasé, p.5]]

## 2. Couplage Étoile ($Y$)
![[ENER1 triphasé.pdf#page=5&rect=57,210,508,351|ENER1 triphasé, p.5]]
### Montage : 
Les impédances sont reliées en étoile. 
- Comme il s'agit d'impédances identiques, $i_1 + i_2 + i_3 =$==$0$, donc **$i_n = 0$**==. Le courant dans le fil neutre est nul : le fil neutre n'est pas nécessaire pour un système triphasé équilibré.![[ENER1 triphasé.pdf#page=6&rect=89,652,510,787|ENER1 triphasé, p.6]]
- **Relations entre les courants** I et J pour un montage en étoile :: $$i_1 = j_1 ; \quad i_2 = j_2 ; \quad i_3 = j_3 \implies I = J$$
<!--SR:!2026-12-09,15,290-->
![[ENER1 triphasé.pdf#page=6&rect=71,393,530,520|ENER1 triphasé, p.6]]
### Pertes par effet Joule :
![[ENER1 triphasé.pdf#page=7&rect=126,669,464,782|ENER1 triphasé, p.7]]
  - Pour une phase en triphasé étoile : $P_{J1} =$::$r I^2$
<!--SR:!2026-11-25,1,150-->
  - Résistance vue entre deux bornes dans un triphasé étoile :: $R = 2r \implies r = \frac{R}{2}$
<!--SR:!2026-12-03,11,270-->
  - Pour le récepteur complet en triphasé étoile : $P_J =$::$3 P_{J1} = 3 r I^2 = \frac{3}{2} R I^2$
<!--SR:!2026-12-02,10,270-->


## 3. Couplage Triangle ($\Delta$)
![[ENER1 triphasé.pdf#page=7&rect=64,303,566,447|ENER1 triphasé, p.7]]
### Montage : 
Les impédances forment un triangle. Le fil neutre n'est en aucun cas nécessaire.
- **Relations entre les courants** en triphasé triangle:
?  
$$i_1 = j_{12} - j_{31} \implies \vec{I}_1 = \vec{J}_{12} - \vec{J}_{31}$$
  $$i_2 = j_{23} - j_{12} \implies \vec{I}_2 = \vec{J}_{23} - \vec{J}_{12}$$
  $$i_3 = j_{31} - j_{23} \implies \vec{I}_3 = \vec{J}_{31} - \vec{J}_{23}$$
  Pour un système équilibré en triphasé triangle ($I_1 = I_2 = I_3 = I$ et $J_{12} = J_{23} = J_{31} = J$) (relation entre $I$ et $J$) ::$$I = J\sqrt{3} \iff J = \frac{I}{\sqrt{3}}$$ ![[ENER1 triphasé.pdf#page=8&rect=45,494,327,642|ENER1 triphasé, p.8]]
<!--SR:!2026-11-27,5,230-->
### Pertes par effet Joule :
![[ENER1 triphasé.pdf#page=8&rect=46,65,282,177|ENER1 triphasé, p.8]]
  - Résistance équivalente vue entre deux bornes en triphasé triangle :: $R = \frac{2r \cdot r}{2r + r} = \frac{2}{3} r \implies r = \frac{3}{2} R$
<!--SR:!2026-12-02,9,250-->
  - Pour le récepteur complet (triangle): $P_J =$::$3 P_{J1} = 3 r J^2 = 3 \left(\frac{3}{2} R\right) \left(\frac{I}{\sqrt{3}}\right)^2 = \frac{3}{2} R I^2$
<!--SR:!2026-11-30,7,230-->



## Concepts liés

- [[Systèmes triphasés (Tensions simples et composées)]]
- [[Puissances en régime triphasé et relèvement du facteur de puissance]]
- [[Groupements de résistances (Série et Parallèle)]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
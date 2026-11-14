---
type: concept
tags:
  - concepts
  - Elen-Ener
  - flashcards/Elen-Ener
  - elen1/methode
MOC:
  - "[[07 MOC/Concepts/Elen-Ener/MOC Methode|MOC Methode]]"
date_creation: 2026-11-03
Ressources:
  - "[[ENER1 cours.pdf]]"
---

# Représentation de Fresnel et dipôles élémentaires (R, L, C)

> [!info] Définition courte
> La **représentation de Fresnel** associe à chaque grandeur sinusoïdale un vecteur tournant dont la norme correspond à la valeur efficace ou maximale, et l'angle à la phase initiale. Elle s'applique à l'étude des dipôles élémentaires ($R, L, C$).

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

## 1. Principe de la représentation de Fresnel

*(ENER1 cours, p.4)*  
Chaque grandeur sinusoïdale est représentée par un vecteur de Fresnel dont la longueur est proportionnelle à la valeur efficace (ou maximale) et l'angle par rapport à l'axe de référence correspond à la phase initiale $\varphi$. 
En prenant la tension $u$ comme origine des phases ($\vec{U}$ porté par l'axe de référence) :
- Un courant en retard de $\varphi_1$ est représenté par un vecteur $\vec{I}_1$ déphasé d'un angle négatif $-\varphi_1$.
- Un courant en avance de $\varphi_2$ est représenté par $\vec{I}_2$ avec un angle positif $+\varphi_2$.


## 2. Étude des dipôles récepteurs élémentaires

### A. Résistance parfaite $R$
- Déphasage : $\varphi = 0$ ($u$ et $i$ sont en phase).
- Régime sinusoïdal : 
  - Instantané : $u(t) = R \cdot i(t)$
  - Efficaces : $U = R \cdot I$

### B. Condensateur parfait $C$
- Déphasage : $\varphi = -\frac{\pi}{2}$ ($i$ est en avance de $\frac{\pi}{2}$ sur $u$).
- Régime sinusoïdal :
  - Instantané : $i(t) = C \cdot \frac{\text{d}u(t)}{\text{d}t}$
  - Efficaces : $U = \frac{1}{C\omega} I$

### C. Bobine purement inductive $L$
- Déphasage : $\varphi = +\frac{\pi}{2}$ ($i$ est en retard de $\frac{\pi}{2}$ sur $u$).
- Régime sinusoïdal :
  - Instantané : $u(t) = L \cdot \frac{\text{d}i(t)}{\text{d}t}$
  - Efficaces : $U = L\omega I$


## 3. Exercice d'application : Circuit $RL$ en série

### Enoncé
Un générateur délivre une tension alternative sinusoïdale $u(t)$ et alimente une résistance $R$ en série avec une inductance $L$. 
1. Faire un schéma en plaçant les différentes tensions et courants ($U_r$, $U_l$, $U$ et $I$). 
2. L’intensité $I$ qui circule dans le montage est $I = 240\text{ mA}$, calculer les tensions $U_R$ et $U_L$ si $R = 100\ \Omega$, $L = 0{,}02\text{ H}$ et $f = 1\text{ kHz}$. 
3. Établir la relation entre $U_r$, $U_l$ et $U$. 
4. Effectuer la construction de Fresnel permettant de déterminer $U$ et en déduire le déphasage $\phi(I, U)$ entre l’intensité $I$ et $U$. 
5. En vous aidant de la construction de Fresnel, établir l’expression littérale de l’impédance $Z$ du montage en fonction de $R$, $L$ et $\omega$.

### Correction détaillée

1. **Schéma du montage** :  
![[Drawing 2026-11-02 15.08.01.excalidraw]]

2. **Calcul des tensions $U_R$ et $U_L$** :
   $$U_{R} = Z_{R} \cdot I = R \cdot I = 100 \times 240 \times 10^{-3} = 24\text{ V}$$
   $$U_{L} = Z_{L} \cdot I = L \omega \cdot I = L \cdot (2\pi f) \cdot I = 0{,}02 \times (2 \pi \times 1000) \times 0{,}24 \approx 30\text{ V}$$

3. **Relation entre les tensions** :
   On ne peut pas additionner directement les valeurs scalaires ($U \neq U_R + U_L$). On doit additionner les vecteurs de Fresnel :
   $$\vec{U} = \vec{U_R} + \vec{U_L}$$

4. **Construction de Fresnel et déphasage** :
   ![[Drawing 2026-11-02 15.19.06.excalidraw]]
   On trace les vecteurs à l'échelle, puis on utilise un compas pour reporter l'addition vectorielle et mesurer $\|\vec{U}\|$.  
   Le déphasage vérifie $\varphi > 0$, ce qui implique que la phase de l'intensité est négative par rapport à la tension. Le montage est **globalement inductif**.

5. **Impédance équivalente $Z_{eq}$** :  
   ![[Drawing 2026-11-02 15.27.28.excalidraw]]
   D'après le théorème de Pythagore sur le triangle de Fresnel :$$\|\vec{U}\|^2 = \|\vec{U_R}\|^2 + \|\vec{U_L}\|^2 \implies U^2 = U_R^2 + U_L^2$$
   En remplaçant par les lois d'Ohm associées ($U = Z_{eq}I$, $U_R = RI$, $U_L = L\omega I$) :   $$(Z_{eq} \cdot I)^2 = (R \cdot I)^2 + (L\omega \cdot I)^2 \implies Z_{eq}^2 = R^2 + (L\omega)^2$$$$Z_{eq} = \sqrt{R^2 + (L\omega)^2} = \sqrt{100^2 + (0{,}02 \times 2\pi \times 1000)^2} \approx 160\ \Omega$$
   On en déduit la tension totale : $U = Z_{eq} \cdot I = 160 \times 0{,}24 = 38{,}4\text{ V}$.


## Concepts liés

- [[Grandeur sinusoïdale (Valeurs instantanée, moyenne, efficace et déphasage)]]
- [[Puissances en régime sinusoïdal et Théorème de Boucherot]]
- [[Analyse harmonique et diagrammes de Bode]]
- [[Dérivée, sens de variation et extrémums locaux]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```
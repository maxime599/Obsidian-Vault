---
semestre: S1
type de cours: CM
date: 2026-11-09T14:02:57
End Date: 2026-11-09T15:02:57
Calendar Title: "[[01 Cours/Elen-Ener/Triphasé, Elen-Ener 2026-11-09|Triphasé, Elen-Ener]]"
prof: Marc Jamond
tags:
  - cours
  - Elen-Ener
Concepts:
  - "[[Systèmes triphasés (Tensions simples et composées)]]"
  - "[[Couplages des récepteurs triphasés équilibrés (Étoile et Triangle)]]"
  - "[[Puissances en régime triphasé et relèvement du facteur de puissance]]"
Ressources:
  - "[[ENER1 triphasé.pdf]]"
---

```dataviewjs
let current = dv.current();
let pages = dv.pages(`"${current.file.folder}"`)
  .where(p => p.date)
  .sort(p => p.date, 'asc');

let idx = pages.findIndex(p => p.file.path === current.file.path);
let prev = idx > 0 ? pages[idx - 1] : null;
let next = (idx !== -1 && idx < pages.length - 1) ? pages[idx + 1] : null;

let getCleanLink = (page) => {
  if (!page) return "Aucun";
  let cleanTitle = page.file.name.split(',')[0].trim();
  return `[[${page.file.name}|${cleanTitle}]]`;
};

dv.paragraph(`**Précédent :** ${getCleanLink(prev)} | **Suivant :** ${getCleanLink(next)}`);
```
# Triphasé
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


## Objectifs

-

## Notes
### Présentation

#### Avantages par rapport au monophasé
- Les machines triphasées ont des puissances de plus de 50% supérieures aux machines monophasées de même masse et donc leurs prix sont moins élevés (le prix est directement proportionnel à la masse de la machine).
- Lors du transport de l'énergie électrique, les pertes sont moindres en triphasé.

#### Distribution
La distribution se fait à partir de quatre bornes :
- Trois bornes de phase repérées par 1, 2, 3 ou A, B, C ou R, S, T ou U, V, W ;
- Une borne neutre N.

#### Présentation
tensions simples ou étoilées entre les phases et le neutre :
![[ENER1 triphasé.pdf#page=2&rect=178,423,306,514|ENER1 triphasé, p.2]]
tensions composées entre les phases : 
![[ENER1 triphasé.pdf#page=2&rect=412,418,590,524|ENER1 triphasé, p.2]]

- $v_1, v_2, v_3$ : tensions simples ou étoilées entre les phases et le neutre.
- $u_{12}, u_{23}, u_{31}$ : tensions composées entre les phases.

---

### Étude des tensions simples

#### Observation à l'oscilloscope
- Les tensions sont déphasées de $\frac{2\pi}{3}$ l'une par rapport à l'autre ;
- Elles ont la même valeur efficace.
![[ENER1 triphasé.pdf#page=2&rect=290,238,528,376|ENER1 triphasé, p.2]]

> **Définition :**  
> Un système triphasé est équilibré lorsque les trois tensions possèdent la même valeur efficace et qu'elles sont déphasées de $\frac{2\pi}{3}$ l'une par rapport à l'autre.

#### Équations horaires
$$v_1(t) = V\sqrt{2}\sin(\omega t)$$
$$v_2(t) = V\sqrt{2}\sin\left(\omega t - \frac{2\pi}{3}\right)$$
$$v_3(t) = V\sqrt{2}\sin\left(\omega t - \frac{4\pi}{3}\right)$$

#### Vecteurs de Fresnel associés
On déduit des équations horaires les vecteurs suivants :

$$\vec{V}_1 \begin{pmatrix} V \\ 0 \end{pmatrix} ; \quad \vec{V}_2 \begin{pmatrix} V \\ -\frac{2\pi}{3} \end{pmatrix} ; \quad \vec{V}_3 \begin{pmatrix} V \\ -\frac{4\pi}{3} \end{pmatrix}$$
![[ENER1 triphasé.pdf#page=3&rect=290,621,555,742|ENER1 triphasé, p.3]]
Le système est **équilibré direct** :
- **Équilibré** car la construction de Fresnel montre que $\vec{V}_1 + \vec{V}_2 + \vec{V}_3 = \vec{0} \implies v_1 + v_2 + v_3 = 0$.
- **Direct** car un observateur immobile verrait les vecteurs défiler devant lui dans l'ordre 1, 2, 3.

---

### Étude des tensions composées
![[ENER1 triphasé.pdf#page=3&rect=72,425,415,514|ENER1 triphasé, p.3]]
#### Définition
Les tensions composées ont la même fréquence que les tensions simples.

$$u_{12} = v_1 - v_2 \implies \vec{U}_{12} = \vec{V}_1 - \vec{V}_2$$
$$u_{23} = v_2 - v_3 \implies \vec{U}_{23} = \vec{V}_2 - \vec{V}_3$$
$$u_{31} = v_3 - v_1 \implies \vec{U}_{31} = \vec{V}_3 - \vec{V}_1$$

#### Vecteurs de Fresnel associés
$$\vec{U}_1 \begin{pmatrix} U \\ \frac{\pi}{6} \end{pmatrix} ; \quad \vec{U}_2 \begin{pmatrix} U \\ -\frac{3\pi}{6} \end{pmatrix} ; \quad \vec{U}_3 \begin{pmatrix} U \\ -\frac{7\pi}{6} \end{pmatrix}$$
![[ENER1 triphasé.pdf#page=3&rect=189,124,538,286|ENER1 triphasé, p.3]]
Si le réseau est équilibré : $\vec{U}_{12} + \vec{U}_{23} + \vec{U}_{31} = \vec{0} \iff u_{12} + u_{23} + u_{31} = 0$.


Le système des trois tensions composées est équilibré direct.

#### Équations horaires et oscillogrammes
$$u_{12}(t) = U\sqrt{2}\sin\left(\omega t + \frac{\pi}{6}\right)$$
$$u_{23}(t) = U\sqrt{2}\sin\left(\omega t - \frac{\pi}{2}\right)$$
$$u_{31}(t) = U\sqrt{2}\sin\left(\omega t - \frac{7\pi}{6}\right)$$
![[ENER1 triphasé.pdf#page=4&rect=218,595,546,756|ENER1 triphasé, p.4]]

---

### Relation entre $U$ et $V$

$$U = 2V\cos(30^\circ) = 2V\frac{\sqrt{3}}{2}$$
![[ENER1 triphasé.pdf#page=4&rect=306,430,556,520|ENER1 triphasé, p.4]]
$$\bbox[5px,border:2px solid black]{U = V\sqrt{3}}$$

Cette relation est toujours vraie quelle que soit la charge.

---

### Récepteurs triphasés équilibrés

#### Définitions
- **Récepteurs triphasés :** ce sont des récepteurs constitués de trois dipôles identiques d'impédance $Z$.
- **Équilibré :** car les trois éléments sont identiques.
- **Courants par phase ($J$) :** ce sont les courants qui traversent les éléments $Z$ du récepteur triphasé.
- **Courants en ligne ($I$) :** ce sont les courants qui passent dans les fils du réseau triphasé.
![[ENER1 triphasé.pdf#page=5&rect=122,651,491,778|ENER1 triphasé, p.5]]
Le réseau et le récepteur peuvent se relier de deux façons différentes : en étoile ou en triangle.

#### Théorème de Boucherot (rappel)
Les puissances active et réactive absorbées par un groupement de dipôles sont respectivement égales à la somme des puissances actives et réactives absorbées par chaque élément du groupement.

$$P = P_1 + P_2 + P_3 \quad \text{et} \quad Q = Q_1 + Q_2 + Q_3$$

Pour un récepteur équilibré ($P_1 = P_2 = P_3$ et $Q_1 = Q_2 = Q_3$) :
$$P = 3 P_1 \quad \text{et} \quad Q = 3 Q_1$$

Facteur de puissance : $k = \frac{P}{S}$.

---

### Couplage étoile ($\text{Y}$)

#### Montage
![[ENER1 triphasé.pdf#page=5&rect=57,210,508,351|ENER1 triphasé, p.5]]
Comme il s'agit des mêmes impédances, $i_1 + i_2 + i_3 = 0$, donc $i_n = 0$. Le courant dans le fil neutre est nul. Le fil neutre n'est donc pas nécessaire pour un système triphasé équilibré.
![[ENER1 triphasé.pdf#page=6&rect=89,652,510,787|ENER1 triphasé, p.6]]
#### Relations entre les courants
Les courants en ligne sont égaux aux courants par phase :
$$i_1 = j_1 ; \quad i_2 = j_2 ; \quad i_3 = j_3$$
$$I_1 = I_2 = I_3 = I = J$$

$$\bbox[5px,border:2px solid black]{I = J}$$
![[ENER1 triphasé.pdf#page=6&rect=71,393,530,520|ENER1 triphasé, p.6]]
#### Puissances
Pour une phase du récepteur :
$$P_1 = V I \cos\varphi \quad \text{avec } \varphi = (\vec{I}, \vec{V})$$

Pour le récepteur complet ($V = \frac{U}{\sqrt{3}}$) :
$$P = 3 P_1 = 3 \frac{U}{\sqrt{3}} I \cos\varphi = \sqrt{3} U I \cos\varphi$$

- Puissance active : $P = \sqrt{3} U I \cos\varphi$
- Puissance réactive : $Q = \sqrt{3} U I \sin\varphi$
- Puissance apparente : $S = \sqrt{3} U I$
- Facteur de puissance : $k = \cos\varphi$

#### Pertes par effet Joule
Considérons uniquement la partie résistive du récepteur :
![[ENER1 triphasé.pdf#page=7&rect=126,669,464,782|ENER1 triphasé, p.7]]
- Pour une phase : $P_{J1} = r I^2$
- Résistance vue entre deux bornes : $R = 2r \implies r = \frac{R}{2}$
- Pour le récepteur complet : $P_J = 3 P_{J1} = 3 r I^2 = \frac{3}{2} R I^2$

---

### Couplage triangle ($\Delta$)

#### Montage
![[ENER1 triphasé.pdf#page=7&rect=64,303,566,447|ENER1 triphasé, p.7]]
Même branchement représenté de trois façons différentes. Le premier schéma explique le terme « triangle »

Comme il s'agit des mêmes impédances, $i_1 + i_2 + i_3 = 0$ et $j_{12} + j_{23} + j_{31} = 0$. Ici, en aucun cas le fil neutre n'est nécessaire.

#### Relations entre les courants
$$i_1 = j_{12} - j_{31} \implies \vec{I}_1 = \vec{J}_{12} - \vec{J}_{31}$$
$$i_2 = j_{23} - j_{12} \implies \vec{I}_2 = \vec{J}_{23} - \vec{J}_{12}$$
$$i_3 = j_{31} - j_{23} \implies \vec{I}_3 = \vec{J}_{31} - \vec{J}_{23}$$

Le système est équilibré : $I_1 = I_2 = I_3 = I$ et $J_{12} = J_{23} = J_{31} = J$.

$$\bbox[5px,border:2px solid black]{I = J\sqrt{3} \iff J = \frac{I}{\sqrt{3}}}$$

![[ENER1 triphasé.pdf#page=8&rect=45,494,327,642|ENER1 triphasé, p.8]]

#### Puissances
- Puissance active : $P = \sqrt{3} U I \cos\varphi$
- Puissance réactive : $Q = \sqrt{3} U I \sin\varphi$
- Puissance apparente : $S = \sqrt{3} U I$
- Facteur de puissance : $k = \cos\varphi$

> **Remarque :**  
> Quel que soit le couplage, les puissances s'expriment de la même façon en fonction de la tension composée $U$ et du courant en ligne $I$.

#### Pertes par effet Joule

- Résistance équivalente vue entre deux bornes : $R = \frac{2r \cdot r}{2r + r} = \frac{2}{3} r \implies r = \frac{3}{2} R$
- Pour le récepteur complet : $P_J = 3 P_{J1} = 3 r J^2 = 3 \left(\frac{3}{2} R\right) \left(\frac{I}{\sqrt{3}}\right)^2 = \frac{3}{2} R I^2$

---

### Mesure de puissance : le wattmètre

#### Montage à 1 wattmètre (charge équilibrée)
![[ENER1 triphasé.pdf#page=10&rect=276,636,533,770|ENER1 triphasé, p.10]]

- Puissance lue sur le wattmètre : $P' = V I \cos\varphi$
- Puissance totale absorbée : $P = \sqrt{3} U I \cos\varphi = 3 P'$

#### Méthode des 2 Wattmètres
![[ENER1 triphasé.pdf#page=10&rect=68,268,486,461|ENER1 triphasé, p.10]]
- Puissance active totale : $P = P_{W1} + P_{W2}$
- Puissance réactive totale : $Q = \sqrt{3} (P_{W1} - P_{W2})$

---

### Tableau récapitulatif

| Grandeur                         | Couplage Étoile ($\text{Y}$)        | Couplage Triangle ($\Delta$)        |
| :------------------------------- | :---------------------------------- | :---------------------------------- |
| **Tension par phase ($V$)**      | $V = \frac{U}{\sqrt{3}}$            | $V = \frac{U}{\sqrt{3}}$            |
| **Courant par phase ($J$)**      | $J = I$                             | $J = \frac{I}{\sqrt{3}}$            |
| **Déphasage**                    | $\varphi(\vec{I}, \vec{V})$         | $\varphi(\vec{J}, \vec{U})$         |
| **Puissance active ($P$)**       | $P = \sqrt{3} U I \cos\varphi$      | $P = \sqrt{3} U I \cos\varphi$      |
| **Puissance réactive ($Q$)**     | $Q = \sqrt{3} U I \sin\varphi$      | $Q = \sqrt{3} U I \sin\varphi$      |
| **Puissance apparente ($S$)**    | $S = \sqrt{3} U I$                  | $S = \sqrt{3} U I$                  |
| **Pertes Joule ($P_J$)**         | $P_J = 3 r I^2 = \frac{3}{2} R I^2$ | $P_J = 3 r J^2 = \frac{3}{2} R I^2$ |
| **Résistance équivalente ($R$)** | $R = 2r$                            | $R = \frac{2}{3} r$                 |

---

### Relèvement du facteur de puissance

#### Couplage des condensateurs en triangle
![[ENER1 triphasé.pdf#page=11&rect=64,80,286,262|ENER1 triphasé, p.11]]
- Tension aux bornes d'un condensateur : $U$
- Puissance réactive absorbée par un condensateur : $Q_{C1} = -C \omega U^2$
- Puissance réactive totale : $Q_C = 3 Q_{C1} = -3 C \omega U^2$


![[ENER1 triphasé.pdf#page=12&rect=55,622,557,776|ENER1 triphasé, p.12]]

Donc : $Q_C = -3 C \omega U^2 = Q'-Q$
$-3C\omega U^2 = Ptg\varphi'-Ptg\varphi$

Capacité requise par condensateur :
$$\bbox[5px,border:2px solid black]{C_\Delta = \frac{P(\tan\varphi - \tan\varphi')}{3 \omega U^2}}$$

#### Couplage des condensateurs en étoile
En couplage étoile, la capacité requise est :
$$C_{\text{Y}} = \frac{P(\tan\varphi - \tan\varphi')}{\omega U^2}$$

> **Conclusion :**  
> $C_{\text{Y}} = 3 C_\Delta$. Le couplage en étoile est moins avantageux car il nécessite des condensateurs 3 fois plus volumineux et plus coûteux.

---
## Exercices


## À retenir
-
## Travail à faire
- [x] ajouter aux concepts



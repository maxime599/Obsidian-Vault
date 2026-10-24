---
semestre: S1
type de cours: CM
date: 2026-10-14T08:07:35
End Date: 2026-10-14T09:37:35
Calendar Title: "[[01 Cours/Optique_géometrique/Chapitres 1 2 3 , Optique géometrique 2026-10-14|Chapitres 1 2 3 , Optique géometrique]]"
prof: Zgari
tags:
  - cours
  - Optique_géometrique
Concepts:
  - "[[Modèle des ondes électromagnétiques et indice de réfraction]]"
  - "[[Modèle des photons et dualité onde-corpuscule]]"
  - "[[Cadre et modèle du rayon en optique géométrique]]"
  - "[[Principes fondamentaux de propagation de la lumière]]"
Ressources:
  - "[[OPTIQUE GEOMETRIQUE I-II-III.pdf]]"
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
# Chapitres 1 2 3 


## Objectifs

-

## Notes
### OPTIQUE GEOMETRIQUE

---

### CHAPITRE I — La nature de la lumière

#### III. Le modèle des ondes électromagnétiques (Maxwell 1864)

- **Onde :** propagation d'une certaine quantité physique dans l'espace.
- Transport d'énergie sans transport de matière.
- **Lumière = onde électromagnétique sinusoïdale** (composée d'un champ électrique oscillant et d'un champ magnétique oscillant).
![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=2&rect=92,84,661,332|OPTIQUE GEOMETRIQUE I-II-III, p.2]]

Une onde est caractérisée par :
- Sa fréquence $f$, inverse de la période temporelle $T$.
- Sa pulsation $\omega = 2 \pi f$.
- Sa longueur d'onde $\lambda = v \cdot T = \frac{v}{f}$.

La vitesse $v$ de propagation dépend du milieu :
- **Dans le vide :** $v = c = 299\,792\,458\text{ m}\cdot\text{s}^{-1} \approx 3 \cdot 10^8\text{ m}\cdot\text{s}^{-1}$.
- **Dans un milieu matériel :** $v = \frac{c}{n}$.
  - $n$ représente l'**indice optique** du milieu (ou indice de réfraction).
  - $n$ est toujours supérieur à $1$.

##### Dépendance de l'indice de réfraction
![[OPTIQUE GEOMETRIQUE I-II-III.pdf#page=4&rect=41,241,450,528|OPTIQUE GEOMETRIQUE I-II-III, p.4]]
- La vitesse est fonction de la fréquence $f$.
- $n$ est fonction de $f$, et donc de la longueur d'onde $\lambda$.

**Exemples d'indices de réfraction** (pour $\lambda_0 = 0{,}587\ \mu\text{m}$) :

| Milieu | Indice $n$ |
| :--- | :--- |
| Air | $1{,}000292$ |
| Eau | $1{,}33$ |
| Verre | $1{,}53$ |
| Diamant | $2{,}4$ |

##### Loi de Cauchy

$$n = A + \frac{B}{\lambda_0^2}$$

##### Spectre électromagnétique

- Les ondes électromagnétiques couvrent une large gamme de fréquences : des ondes radio et micro-ondes aux rayons $X$ et $\gamma$.
- **Lumière visible :** gamme de fréquences des ondes électromagnétiques à laquelle l'œil est sensible : $400\text{ nm}$ à $800\text{ nm}$.
- Le spectre est exprimé en fonction de la longueur d'onde dans le vide.

---

#### IV. Le modèle des photons (Max Planck 1900, Albert Einstein 1905)

- Quantification de l'énergie d'une onde électromagnétique : la lumière est composée de quanta.
- **Les photons :** particules de charge nulle et de masse nulle, se déplaçant à la vitesse de la lumière.
- Ils ne sont détectés que lorsqu'ils interagissent avec la matière.
- **Énergie du photon :**

$$E = h \cdot f$$

- $h$ est la constante de Planck : $h = 6{,}6 \cdot 10^{-34}\text{ J}\cdot\text{s}$
- $f$ est la fréquence en $\text{s}^{-1}$

---

#### V. La dualité onde-corpuscule

La lumière possède un caractère dual :
1. **Comportement ondulateur :** la lumière est une onde électromagnétique (phénomènes d'interférence et de diffraction par une ouverture carrée ou circulaire).
2. **Comportement corpusculaire :** la lumière est constituée de corpuscules / photons (effet photoélectrique, éjection d'électrons d'un métal).

---

### CHAPITRE II — Les principes de l'optique géométrique

#### III. Cadre de l'étude

- Étude des phénomènes lumineux perçus par l'œil ou les détecteurs et de la formation des images par les systèmes optiques.
- Utilisation de la notion de **rayons lumineux** et des **lois de la réflexion et de la réfraction**.
- **Sont négligés :**
  - Les phénomènes d'interférence, de diffraction, de polarisation et de diffusion.
  - Les processus d'émission et d'absorption de la lumière par la matière.

---

#### IV. Le modèle du rayon lumineux

- La notion de rayon lumineux remonte à l'Antiquité.
- En optique géométrique : ligne suivant laquelle se propage l'énergie lumineuse.
- **Problème de mesure :** pour isoler un rayon, il faudrait faire passer un faisceau dans une ouverture très petite. Si la taille de l'ouverture $a$ est comparable à la longueur d'onde $\lambda$, on observe un phénomène de diffraction.
- Comme le point matériel en mécanique classique, le rayon lumineux est une **abstraction géométrique** plutôt qu'une réalité physique.
- Dans la théorie corpusculaire newtonienne, le rayon lumineux est considéré comme la trajectoire des particules qui le constituent.

---

#### V. Principe de propagation rectiligne

Propriétés d'un milieu de propagation :
- **Homogène :** mêmes propriétés dans tout le milieu.
- **Isotrope :** propriétés indépendantes de la direction.
- **Transparent :** laisse passer la lumière (opposé à *opaque/absorbant*).

> **Règle :** Dans un milieu transparent, homogène et isotrope, la lumière se propage en ligne droite de la source au récepteur.

##### Cas d'un milieu inhomogène

- L'indice $n$ dépend des conditions thermodynamiques (pression, température, densité...).
- Lorsque la température est inhomogène, l'indice l'est aussi, ce qui provoque le phénomène de **mirage** (la température diminuant avec l'altitude, l'indice augmente : les rayons sont courbés vers le haut).
- L'œil, habitué à la propagation rectiligne, interprète le rayon qui lui parvient comme provenant d'un point situé sous la surface de la Terre.

---

#### VI. Principe de retour inverse de la lumière

> Si un rayon est émis par une source $A$ et se propage jusqu'au point $B$, alors une source placée en $B$ émettra un rayon qui se propage en sens inverse jusqu'au point $A$, quels que soient le chemin $AB$ et les milieux dans lesquels la lumière se propage.

- Le trajet suivi est **indépendant du sens de propagation**.



## Exercices


## À retenir
-
## Travail à faire




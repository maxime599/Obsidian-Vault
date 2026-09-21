---
semestre: S1
type de cours: CM
date: 2026-09-16T08:00:07
End Date: 2026-09-16T09:30:07
Calendar Title: "[[01 Cours/Thermodynamique/Chapitre III le second principe de la Thermodynamique, Thermodynamique 2026-09-16|Chapitre III le second principe de la Thermodynamique, Thermodynamique]]"
prof: Zgari
tags:
  - cours
  - Thermodynamique
Concepts:
  - "[[Comparaison des détentes isotherme et adiabatique]]"
  - "[[Lois de Laplace (Transformations isentropiques)]]"
  - "[[Calcul de la variation d'entropie]]"
  - "[[Entropie et bilan entropique]]"
  - "[[Second Principe de la thermodynamique et énoncés fondamentaux]]"
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
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
# Chapitre III le second principe de la Thermodynamique


## Objectifs

-

## Notes
### III. Le Second Principe de la Thermodynamique

> [!abstract] Objectifs du chapitre
> - Prévoir le sens des échanges et les évolutions spontanées.
> - Quantifier la dégradation de la qualité de l'énergie (évaluation de l'optimisation du transfert d'énergie).
> - **Physique statistique** : mesure de la probabilité d'un état macroscopique — *l'état le plus probable n'est pas le plus ordonné !*

---

### 1. La transformation quasi-statique

> [!example] Exemple : Dégonflage d'un pneu
> **Système** : air (considéré comme un gaz parfait) contenu dans la chambre à air.
> 
> - **État initial** : Pression $P_i$, Température $T_i$, Pression extérieure $P_{\text{ext}}$
> - **Événement** : Ouverture de la valve
> - **État final** : Pression $P_f = P_{\text{ext}}$, Température $T_f = ?$
> 
> **Caractéristiques de la transformation** :
> - Échanges thermiques extérieurs nuls : $\delta Q = 0$ (détente adiabatique).
> - Température et pression supposées homogènes à l'intérieur de la chambre à air (état d'équilibre interne à tout instant) $\rightarrow$ **transformation quasi-statique**.

#### Démonstration de la relation pour une détente adiabatique quasi-statique

Équation d'état du gaz parfait :
$$P V = n R T$$

Premier principe appliqué à une transformation adiabatique ($\delta Q = 0$) :
$$\delta Q = C_V dT + P dV = 0$$

En différentiant la loi des gaz parfaits avec $V = \frac{n R T}{P}$ :
$$dV = \frac{nR}{P} dT - \frac{nRT}{P^2} dP$$

En utilisant la capacité thermique à volume constant $C_V = \frac{nR}{\gamma - 1}$ :
$$\left( \frac{nR}{\gamma - 1} \right) dT + P \left( \frac{nR}{P} dT - \frac{nRT}{P^2} dP \right) = 0$$

$$\left( \frac{nR}{\gamma - 1} + nR \right) dT - \frac{nRT}{P} dP = 0$$

$$\left( \frac{\gamma nR}{\gamma - 1} \right) dT - \frac{nRT}{P} dP = 0$$

En se séparant des variables et en simplifiant par $n R T$ :
$$\frac{dT}{T} = \frac{\gamma - 1}{\gamma} \frac{dP}{P}$$

Après intégration entre l'état initial $(T_i, P_i)$ et l'état final $(T_f, P_f)$ :
$$\ln\left(\frac{T_f}{T_i}\right) = \frac{\gamma - 1}{\gamma} \ln\left(\frac{P_f}{P_i}\right)$$

Soit :
$$T_f = T_i \left( \frac{P_f}{P_i} \right)^{\frac{\gamma - 1}{\gamma}}$$

Ce qui s'écrit également sous la forme invariant :
$$P^{\frac{1-\gamma}{\gamma}} \cdot T = \text{constante}$$

---

### 2. Énoncé du deuxième principe ou principe d'évolution

#### Conversion d'énergie
- **Énergie emmagasinée sous forme ordonnée** :
  - Énergie potentielle / cinétique (ex. pendule pesant)
  - Énergie électrostatique / magnétostatique (ex. circuit RLC)
- **Énergie emmagasinée sous forme désordonnée** :
  - Agitation thermique des molécules dans un gaz parfait

> [!definition] But de la thermodynamique
> Optimiser les conversions entre les différentes formes d'énergie et quantifier ce qu'il est possible de convertir sous forme ordonnée de ce qui ne peut pas l'être.

#### Notion d'entropie
L'**entropie** (notée $S$, exprimée en $\text{J}\cdot\text{K}^{-1}$) est une **fonction d'état** (= qui dépend que de l'état initial et l'état final) associée à tout système, reliée à la quantité de chaleur échangée sous certaines conditions.

- **Système isolé** :
  - Lorsqu'un système isolé subit une transformation irréversible, son entropie augmente ($\Delta S > 0$).
  - Lorsque le maximum d'entropie est atteint, le système est à l'équilibre.
- **Transformation réversible** :
  - La variation infinitésimale d'entropie $dS$ s'exprime à partir du transfert thermique infinitésimal $\delta Q$ reçu et de la température $T$ :
    $$dS = \frac{\delta Q}{T}$$
- **Système non isolé** : L'entropie du système peut augmenter, diminuer ou rester constante.
- **Système fermé isolé** : L'entropie échangée est nulle ($S_e = 0$).

#### Bilan d'entropie d'un système fermé en contact avec un thermostat
Pour un système fermé en contact avec une source de chaleur (thermostat à température $T_e$) :
$$dS = \delta S_e + \delta S_c = \frac{\delta Q_e}{T_e} + \delta S_c$$

- $\delta S_e = \frac{\delta Q_e}{T_e}$ : **entropie échangée** avec la source de chaleur à la température $T_e$.
- $\delta S_c$ : **entropie créée** au cours de l'évolution infinitésimale :
  - Pour une évolution **réversible** : $S_c = 0$
  - Pour une évolution **irréversible** : $S_c > 0$

#### Énoncés fondamentaux du Second Principe

> [!cite] Énoncé de Kelvin-Planck
> Un système subissant une transformation monotherme (en contact avec une seule source de chaleur) ne peut, au cours d'un cycle, qu'absorber du travail et fournir de la chaleur.
> 
> *Conséquence : Il est impossible au cours d'un cycle pour un moteur thermique de convertir intégralement en travail la chaleur qu'il absorbe.*

> [!cite] Énoncé de Clausius
> Une quantité de chaleur ne peut jamais être transmise spontanément d'une source froide vers une source chaude (sans apport de travail extérieur).

---

### 3. Calcul de l'entropie

#### Transformation réversible
Pour une transformation réversible, en appliquant la relation $dS = \frac{\delta Q}{T}$, on intègre $dS$ de l'état initial à l'état final :
$$\Delta S = \int dS = \int_{T_i}^{T_f} \frac{\delta Q}{T}$$

> [!example] Exemple : Chauffage réversible d'un système condensé
> Un cylindre de laiton de capacité calorifique $C_p$ (indépendante de $T$) est chauffé de manière réversible de $T_0$ à $T_1$ sous pression atmosphérique constante $P_a$.
> 
> Pour assurer la réversibilité, le système est mis en contact successif avec une suite infinie de sources de chaleur intermédiaires ($T_0, T_0 + \delta T, T_0 + 2\delta T, \dots, T_1$).
> 
> Variation d'entropie :
> $$\Delta S = \int_{T_0}^{T_1} \frac{\delta Q}{T}$$
> Comme $\delta Q = C_p \, dT$ :
> $$\Delta S = \int_{T_0}^{T_1} \frac{C_p \, dT}{T} = C_p \ln\left(\frac{T_1}{T_0}\right)$$

#### Transformation irréversible
Pour une transformation irréversible, la relation $dS = \frac{\delta Q}{T}$ **n'est pas applicable** sur le chemin réel suivi.
On utilise alors la propriété fondamentale : **l'entropie est une fonction d'état**, donc $\Delta S = S_{\text{final}} - S_{	ext{initial}}$ ne dépend que des états initial et final.

**Méthode de calcul** :
1. Déterminer l'état final à partir des caractéristiques de la transformation (isobare, isotherme, isochore, adiabatique...) et du premier principe.
2. Concevoir une **transformation réversible fictive** reliant le même état initial au même état final.
3. Appliquer $dS = \frac{\delta Q_{\text{rév}}}{T}$ et intégrer cette relation le long de la transformation réversible imaginée.

> [!example] Exemple : Chauffage irréversible d'un système condensé
> Un cylindre de laiton de capacité calorifique $C_p$ est chauffé de manière irréversible de $T_0$ à $T_1$ en le mettant brusquement en contact direct avec une source de chaleur maintenue à la température $T_1$ sous pression constante $P_a$.
> 
> L'évolution de la température se fait hors équilibre (transformation irréversible).
> 
> - **Variation d'entropie subie par le cylindre ($\Delta S$)** :
>   Les états initial et final étant identiques au cas réversible précédent, la variation d'entropie du cylindre est la même :
>   $$\Delta S = \int_{T_0}^{T_1} \frac{C_p \, dT}{T} = C_p \ln\left(\frac{T_1}{T_0}\right)$$
> 
> - **Entropie échangée avec la source ($S_e$)** :
>   Le transfert thermique reçu par le cylindre est $Q = C_p (T_1 - T_0)$ à la température constante de la source $T_1$ :
>   $$S_e = \int \frac{\delta Q}{T_1} = \frac{Q}{T_1} = \frac{C_p (T_1 - T_0)}{T_1}$$
> 
> - **Entropie créée ($S_c$)** :
>   $$\Delta S = S_e + S_c \implies S_c = \Delta S - S_e$$
>   $$S_c = C_p \ln\left(\frac{T_1}{T_0}\right) - \frac{C_p (T_1 - T_0)}{T_1} = C_p \left[ \frac{T_0}{T_1} - 1 - \ln\left(\frac{T_0}{T_1}\right) \right] > 0$$
>   La création d'entropie $S_c$ est strictement positive, confirmant l'irréversibilité de la transformation.

---

### 4. Lois de Laplace pour les gaz parfaits

> [!info] Hypothèses fondamentales
> 1. Transformation **adiabatique et réversible** (isentropique).
> 2. Le fluide est un **gaz parfait**.
> 3. Le coefficient $\gamma = \frac{C_p}{C_v}$ est **constant** sur toute la plage de température.

**Formulations des lois de Laplace** :

- **Relation $(P, T)$** :
  $$P^{1-\gamma} \cdot T^\gamma = \text{constante}$$

- **Relation $(P, V)$** :
  $$P V^\gamma = \text{constante}$$

- **Relation $(T, V)$** :
  $$T V^{\gamma-1} = \text{constante}$$

*Note : Les constantes prennent des valeurs différentes selon le couple de variables considéré.*

---

### 5. Détentes adiabatique et isotherme d'un gaz parfait

Soit un gaz parfait diatomique ($\gamma = 1{,}4$). À partir d'un état initial $A$ ($P_A = 10\text{ bar}, V_A = 1\text{ L}$), le gaz se détend suivant deux évolutions quasi-statiques distinctes jusqu'à un volume final $V_B = 10\text{ L}$.

#### Comparaison des pressions finales
- **Évolution isotherme** :
  $$P_A V_A = P_B V_B \implies P_B = P_A \frac{V_A}{V_B} = 10 \times \frac{1}{10} = 1\text{ bar}$$

- **Évolution adiabatique** :
  $$P_A V_A^\gamma = P_B V_B^\gamma \implies P_B = P_A \left( \frac{V_A}{V_B} \right)^\gamma = 10 \times \left( \frac{1}{10} \right)^{1{,}4} \approx 0{,}4\text{ bar}$$

> [!note] Remarque
> La pression finale est nettement plus faible à la suite d'une **détente adiabatique** qu'après une détente isotherme.

#### Représentation dans le diagramme de Clapeyron $(P, V)$
- **Isotherme** : $P(V) = \frac{\text{constante}}{V}$ (courbe hyperbolique).
- **Adiabatique** : $P(V) = \frac{\text{constante}}{V^\gamma}$ (pente plus forte que l'isotherme car $\gamma > 1$).

---

### Exemple d'application : Contact thermique entre deux solides

Deux cylindres en laiton identiques, initialement à des températures différentes $T_1$ et $T_2$, sont mis en contact à l'intérieur d'une enceinte calorifugée (pas d'échange de chaleur avec l'extérieur).
La capacité thermique de chaque cylindre est notée $C$ (supposée constante).

- **État initial** : Cylindre 1 à $T_1$, Cylindre 2 à $T_2$.
- **État final** : Cylindres 1 et 2 à la température commune d'équilibre $T_F$.

> [!question] Exercice d'application
> 1. **La transformation (mise en contact des cylindres) est-elle réversible ? Pourquoi ?**
> 2. **Le laiton étant solide, quelle approximation est-il possible de faire quant au travail reçu par les cylindres ? En appliquant le premier principe, déterminer la température finale commune $T_F$ des deux cylindres. Quelle est la seule source d'énergie ?**
> 3. **Concevoir une transformation réversible permettant de faire passer chacun des deux cylindres de la température $T_i$ ($i=1$ ou $2$) à la température $T_F$. En déduire la variation d'entropie associée à la transformation.**
> 4. **Quel est le signe de cette variation ? Était-ce prévisible ?**


## Exercices


## À retenir
-
## Travail à faire
- [x] Transformer en concept
- [ ] Comprendre
- [ ] Apprendre
- [ ] S'entrainer


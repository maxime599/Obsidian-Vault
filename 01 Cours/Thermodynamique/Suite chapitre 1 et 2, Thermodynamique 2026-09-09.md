---
semestre: S1
type de cours: CM
date: 2026-09-09T08:00:00
End Date: 2026-09-09T11:00:00
Calendar Title: "[[01 Cours/Thermodynamique/Suite chapitre 1 et 2, Thermodynamique 2026-09-09|Suite chapitre 1 et 2, Thermodynamique]]"
prof: Zgari
tags:
  - cours
  - Thermodynamique
Concepts:
  - "[[Énergie interne et formes d'énergie]]"
  - "[[Modèle du gaz parfait, lois de Joule et relation de Mayer]]"
  - "[[Détentes de Joule (Joule-Gay-Lussac et Joule-Thomson)]]"
  - "[[Calorimétrie et coefficients calorimétriques]]"
  - "[[Diagramme de Clapeyron]]"
  - "[[Typologie des transformations et réversibilité - Premier Principe de la thermodynamique]]"
Ressources:
  - "[[Principes de la thermodynamique chapitres I et II.pdf]]"
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
# Suite chapitre 1 et 2


## Objectifs

-

## Notes

### II. L'énergie, sa conversion et sa transmission

#### 1. Les formes de l'énergie

L'énergie d'un système peut se manifester sous diverses formes : thermique, mécanique, cinétique, potentielle, électrique, magnétique, chimique, nucléaire.

L'énergie totale $E$ d'un système est la somme de deux contributions :
$$E = E_m + U$$
- **Énergie macroscopique** $E_m$ : Énergie mécanique globale (énergie cinétique macroscopique + énergie potentielle macroscopique).
- **Énergie microscopique (Énergie interne $U$)** : Somme des énergies cinétiques d'agitation moléculaire et des énergies potentielles d'interaction entre molécules à l'échelle microscopique.

En thermodynamique, on étudie principalement les **variations d'énergie** $\Delta E$ et $\Delta U$.

---

#### 2. Le transfert d'énergie par la chaleur

La **chaleur** (ou transfert thermique) $Q$ représente un transfert d'énergie s'effectuant sous forme désordonnée à l'échelle microscopique. Lorsqu'un système reçoit de la chaleur, son énergie interne et son état varient (élévation de température, changement de phase, etc.).

- **Transformation adiabatique** : Transformation s'effectuant sans aucun échange de chaleur avec le milieu extérieur ($Q = 0$).
  *(Attention : une transformation adiabatique n'implique pas que la température reste constante !)*

##### Capacité thermique

Pour une transformation infinitésimale faisant varier la température du système de $dT$, la quantité de chaleur échangée $\delta Q$ est :
$$\delta Q = C \, dT$$
où $C$ est la **capacité thermique** du système (en $\text{J}\cdot\text{K}^{-1}$).

- **Capacité thermique massique** $c$ (en $\text{J}\cdot\text{K}^{-1}\cdot\text{kg}^{-1}$) :
  $$c = \frac{C}{m}$$
- **Capacité thermique molaire** $C_m$ (en $\text{J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$) :
  $$C_m = \frac{C}{n}$$

Cas particuliers des transformations de phases homogènes :
- Transformation à pression constante : $\delta Q_P = C_P \, dT$ ($C_P$ : capacité à pression constante).
- Transformation à volume constant : $\delta Q_V = C_V \, dT$ ($C_V$ : capacité à volume constant).

> **Remarque** :
> - Pour les **gaz** : $C_P \neq C_V$ (différence significative).
> - Pour les **solides et liquides** (incompressibles) : $C_P \approx C_V$.

##### Coefficients calorimétriques

Pour une transformation infinitésimale quelconque décrivant les variations de deux variables d'état, l'élément d'échange thermique $\delta Q$ s'exprime par :
- En fonction de $(T, V)$ :
  $$\delta Q = C_V \, dT + l \, dV$$
- En fonction de $(T, P)$ :
  $$\delta Q = C_P \, dT + h \, dP$$

$C_V$, $C_P$, $l$ et $h$ sont appelés les **coefficients calorimétriques** (ou thermodynamiques) du système.

---

> [!EXAMPLE] Exemple d'application : Calorimétrie
> Un calorimètre supposé parfaitement isolé contient une masse $m_1 = 200\text{ g}$ d'eau à l'équilibre thermique $\theta_1 = 24{,}9\,^\circ\text{C}$. On y ajoute une masse d'eau $m_2 = 157\text{ g}$ portée à la température $\theta_2 = 80\,^\circ\text{C}$.
> *(Donnée : $c_{\text{eau}} = 4{,}185\text{ kJ}\cdot\text{K}^{-1}\cdot\text{kg}^{-1} = 4185\text{ J}\cdot\text{K}^{-1}\cdot\text{kg}^{-1}$)*
> 
> **1. Déterminer la température finale d'équilibre $\theta_F$ en négligeant la capacité thermique du calorimètre.**
> 
> *Résolution* :  
> Le système étant isolé, la somme des chaleurs échangées est nulle :
> $$Q_1 + Q_2 = 0 \implies m_1 c_{\text{eau}} (\theta_F - \theta_1) + m_2 c_{\text{eau}} (\theta_F - \theta_2) = 0$$
> $$\theta_F = \frac{m_1 \theta_1 + m_2 \theta_2}{m_1 + m_2} = \frac{0{,}200 \times 24{,}9 + 0{,}157 \times 80}{0{,}200 + 0{,}157} = \frac{4{,}98 + 12{,}56}{0{,}357} \approx 49{,}13\,^\circ\text{C}$$
> 
> **2. En réalité, on mesure une température d'équilibre $\theta'_F = 45{,}7\,^\circ\text{C}$. Déterminer la capacité thermique $C_{\text{cal}}$ du calorimètre.**
> 
> *Résolution* :  
> En tenant compte du vase calorimétrique et de ses accessoires :
> $$(m_1 c_{\text{eau}} + C_{\text{cal}})(\theta'_F - \theta_1) + m_2 c_{\text{eau}} (\theta'_F - \theta_2) = 0$$
> $$C_{\text{cal}} = \frac{m_2 c_{\text{eau}} (\theta_2 - \theta'_F)}{\theta'_F - \theta_1} - m_1 c_{\text{eau}}$$
> $$m_1 c_{\text{eau}} = 0{,}200 \times 4185 = 837\text{ J}\cdot\text{K}^{-1}$$
> $$m_2 c_{\text{eau}} = 0{,}157 \times 4185 = 657{,}045\text{ J}\cdot\text{K}^{-1}$$
> $$C_{\text{cal}} = \frac{657{,}045 \times (80 - 45{,}7)}{45{,}7 - 24{,}9} - 837 = \frac{657{,}045 \times 34{,}3}{20{,}8} - 837 \approx 1083{,}49 - 837 = 246{,}49\text{ J}\cdot\text{K}^{-1}$$

---

#### 3. Premier principe de la thermodynamique : Conservation de l'énergie

À tout système thermodynamique est associée une fonction d'état macroscopique $U$, appelée **énergie interne**. 

Au cours d'une transformation quelconque faisant passer le système d'un état initial à un état final, la variation d'énergie interne $\Delta U$ est égale à la somme algébrique des énergies échangées avec le milieu extérieur :
$$\Delta U = Q + W$$
avec :
- $Q$ : quantité de chaleur reçue par le système (grandeur algébrique).
- $W$ : somme des travaux reçus par le système (grandeur algébrique).
- $\Delta U = U_{\text{final}} - U_{\text{initial}}$.

> [!ABSTRACT] Propriété d'une fonction d'état
> La variation $\Delta U$ ne dépend **que de l'état initial et de l'état final** du système, et non du chemin (ou de la nature de la transformation) suivi entre ces deux états.

##### Évolution et transformations d'un système

- **Transformation irréversible** : Évolution spontanée ou brutale au cours de laquelle les états intermédiaires ne sont pas des états d'équilibre thermodynamique.
- **Transformation quasi-statique** : Évolution suffisamment lente pour que le système passe par une suite continue d'états de quasi-équilibre à chaque instant.
- **Transformation réversible** : Transformation quasi-statique qui peut être inversée à tout moment par une modification infinitésimale des conditions extérieures, en replaçant le système et le milieu extérieur dans leurs états initiaux exacts.
  *(Toute transformation réversible est quasi-statique, mais la réciproque n'est pas vraie).*

> **Exemples de causes d'irréversibilité** :
> - Frottements mécaniques ou fluides.
> - Transferts thermiques à travers une différence finie de température.
> - Mélange spontané de deux substances différentes.
> - Effet Joule (résistance électrique).
> - Déformation inélastique / plastique des matériaux.
> - Réactions chimiques spontanées.

##### Cas particuliers de transformations

- **Transformation isobare ($P = \text{constante}$)** :
  $$Q_P = C_P \Delta T, \quad W = -P \Delta V$$
- **Transformation isochore ($V = \text{constante}$)** :
  $$W = 0 \implies \Delta U = Q_V = C_V \Delta T$$
  *(Pour tout gaz parfait subissant une transformation infinitésimale quelconque : $dU = C_V \, dT$)*.
- **Transformation isotherme ($T = \text{constante}$)** :
  $$\Delta U = Q + W = 0$$
  *(Pour un [[Modèle du gaz parfait|gaz parfait]], l'énergie interne ne dépend que de la température : 1ʳᵉ loi de Joule)*.
- **Transformation adiabatique ($Q = 0$)** :
  $$\Delta U = W$$

---

#### 4. Définition d'un gaz parfait

Un **gaz parfait** est un modèle idéal de fluide constitué de particules ponctuelles sans interactions à distance, vérifiant à l'équilibre l'**équation d'état** :
$$P V = n R T$$
- $P$ : pression ($Pa$)
- $V$ : volume (${m}^3$)
- $T$ : température absolue (${K}$)
- $n$ : nombre de moles
- $R$ : constante universelle des gaz parfaits ($R = 8{,}31446\text{ J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$)

##### Capacités thermiques et relation de Mayer

Les capacités thermiques molaires dépendent de la structure atomique des molécules du gaz :

| Modèle de gaz                                            | $C_{p,m}$ (${J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$) | $C_{v,m}$ (${J}\cdot\text{K}^{-1}\cdot\text{mol}^{-1}$) |
| :------------------------------------------------------- | :-----------------------------------------------------: | :-----------------------------------------------------: |
| **Gaz monoatomique** (ex: $\text{He}$, $\text{Ar}$)      |                     $\frac{5}{2}R$                      |                     $\frac{3}{2}R$                      |
| **Gaz diatomique** (ex: $\text{N}_2$, $\text{O}_2$, air) |                     $\frac{7}{2}R$                      |                     $\frac{5}{2}R$                      |

- **Relation de Mayer** :
  $$C_P - C_V = n R$$
- **Coefficient isentropique (ou d'Adiabatique)** $\gamma$ :
  $$\gamma = \frac{C_P}{C_V}$$
  On en déduit les expressions de $C_V$ et $C_P$ en fonction de $\gamma$ :
  $$C_V = \frac{n R}{\gamma - 1}, \qquad C_P = \frac{\gamma n R}{\gamma - 1}$$

---

> [!EXAMPLE] Exemple d'application : Gaz parfaits
> **1. À $T = 293\text{ K}$ ($20\,^\circ\text{C}$) et à la pression atmosphérique ($P = 1{,}013 \times 10^5\text{ Pa}$), combien y a-t-il de particules dans $1\text{ m}^3$ d'air ? En déduire la masse d'air correspondante.**
> 
> *Résolution* :  
> Nombre de moles dans $V = 1\text{ m}^3$ :
> $$n = \frac{P V}{R T} = \frac{1{,}013 \times 10^5 \times 1}{8{,}314 \times 293} \approx 41{,}59\text{ mol}$$
> Nombre de particules $N$ (avec $N_A = 6{,}022 \times 10^{23}\text{ mol}^{-1}$) :
> $$N = n \times N_A = 41{,}59 \times 6{,}022 \times 10^{23} \approx 2{,}50 \times 10^{25}\text{ particules}$$
> Masse d'air ($M_{\text{air}} = 29\text{ g}\cdot\text{mol}^{-1}$) :
> $$m_{\text{air}} = n \times M_{\text{air}} = 41{,}59 \times 29 \times 10^{-3}\text{ kg} \approx 1{,}206\text{ kg}$$
> 
> **2. L'air est remplacé par de l'hélium à la même pression et température. Cela change-t-il la quantité de particules ? Que devient la masse de gaz ?**
> 
> *Résolution* :  
> - Selon la loi d'Avogadro-Ampère, le nombre de moles (et donc le nombre de particules $N$) reste **identique** ($n \approx 41{,}59\text{ mol}$).
> - La nouvelle masse de gaz avec de l'hélium ($M_{\text{He}} = 4\text{ g}\cdot\text{mol}^{-1}$) devient :
>   $$m_{\text{He}} = n \times M_{\text{He}} = 41{,}59 \times 4 \times 10^{-3}\text{ kg} \approx 0{,}166\text{ kg}$$
> 
> **3. Un ballon de volume $V_0 = 10\text{ litres}$ ($10^{-2}\text{ m}^3$) est gonflé à l'hélium. Quelle masse maximale l'enveloppe ne doit-elle pas dépasser pour s'élever dans l'air ?**
> 
> *Résolution* :  
> Pour que le ballon s'élève, la poussée d'Archimède exercée par l'air extérieur doit être supérieure au poids total du ballon (hélium + enveloppe) :
> $$\vec{F}_{\text{Archimède}} > P_{\text{total}} \implies \rho_{\text{air}} V_0 g > (m_{\text{He, ballon}} + m_{\text{enveloppe}}) g$$
> $$m_{\text{enveloppe}} < V_0 (\rho_{\text{air}} - \rho_{\text{He}})$$
> Masses volumiques à $293\text{ K}$ et $1\text{ atm}$ :
> - $\rho_{\text{air}} = 1{,}206\text{ kg}\cdot\text{m}^{-3}$
> - $\rho_{\text{He}} = 0{,}166\text{ kg}\cdot\text{m}^{-3}$
> $$m_{\text{enveloppe}} < 10^{-2} \times (1{,}206 - 0{,}166) = 10^{-2} \times 1{,}04 = 0{,}0104\text{ kg} = 10{,}4\text{ g}$$
> L'enveloppe doit donc peser moins de **$10{,}4\text{ g}$**.

---

#### 5. Détente d'un gaz parfait

##### Détente de Joule-Gay-Lussac (Détente libre dans le vide)

Considérons deux compartiments séparés par un robinet. L'un contient un gaz parfait ($T_0, P_0$), l'autre est vide. L'ensemble est entouré de parois rigides et parfaitement isolées thermiquement.

- **Isolation thermique** : $Q = 0$
- **Parois rigides / indéformables** : $W = 0$
- **Premier principe** :
  $$\Delta U = W + Q = 0$$

Pour un gaz parfait, $dU = C_V \, dT$. Ainsi :
$$\Delta U = C_V \Delta T = 0 \implies \Delta T = 0$$

> **Conclusion** : La détente de Joule-Gay-Lussac d'un gaz parfait s'effectue **sans variation de température** ($T_{\text{final}} = T_0$).

##### Détente de Joule-Thomson (Détente isenthalpique à travers une paroi poreuse)

Un fluide s'écoule de manière permanente à travers un détendeur ou un bouchon poreux (fritté), passant d'une haute pression $P_0, T_0$ à une basse pression $P_1 < P_0, T_1$. L'ensemble est calorifugé ($Q = 0$).

- **Côté haute pression** : Le piston pousse un volume $V_0$ sous la pression $P_0$.
  Work exercé : $W_0 = P_0 V_0$
- **Côté basse pression** : Le fluide repousse le piston d'un volume $V_1$ sous la pression $P_1$.
  Work exercé : $W_1 = -P_1 V_1$

Selon le premier principe :
$$\Delta U = U_1 - U_0 = W_0 + W_1 = P_0 V_0 - P_1 V_1$$
$$U_1 + P_1 V_1 = U_0 + P_0 V_0$$

On introduit la fonction d'état **Enthalpie** $H$ définie par :
$$H = U + P V$$

La détente de Joule-Thomson est une transformation **isenthalpique** :
$$H_1 = H_0 \implies \Delta H = 0$$

Pour un gaz parfait, l'enthalpie dépend uniquement de la température (2ᵈᵉ loi de Joule) :
$$\Delta H = C_P \Delta T$$
$$\Delta H = 0 \implies \Delta T = 0$$

> **Conclusion** : La détente de Joule-Thomson d'un gaz parfait s'effectue également **sans changement de température**.

---

#### 6. Représentation graphique des transformations

Les variables d'état $P, V, T$ sont liées par l'équation d'état $f(P,V,T) = 0$. En fixant une variable, on représente l'évolution du système dans le **diagramme de Clapeyron** $P(V)$.

###### Diagramme de Clapeyron $P(V)$

- **Isochore ($dV = 0$)** : Droite verticale.
- **Isobare ($dP = 0$)** : Droite horizontale.
- **Isotherme ($dT = 0$)** : Hyperbole d'équation $P = \frac{n RT}{V}$ (pente $-\frac{P}{V}$).
- **Adiabatique ($\delta Q = 0$)** : Courbe de Laplace $P V^\gamma = \text{constante}$ (pente $-\gamma \frac{P}{V}$ plus forte que celle de l'isotherme).

---

> [!EXAMPLE] Exemple d'application : Compression Isotherme
> La compression d'un gaz parfait ($n$ moles) est réalisée à l'aide d'un piston en contact avec un thermostat maintenant une température constante $T_0$. Le gaz occupe initialement le volume $V_0$ sous la pression $P_0 = 1{,}013 \times 10^5\text{ Pa}$. La pression finale est $P_F = 6 P_0$.
> 
> **1. Que vaut la variation d'énergie interne $\Delta U$ ? Quelle relation en déduit-on entre $W$ et $Q$ ?**
> 
> *Résolution* :  
> La transformation étant isotherme pour un gaz parfait :
> $$\Delta U = 0 \implies Q + W = 0 \implies Q = -W$$
> 
> **2. Quel doit être le volume final du gaz ? Exprimer le travail fourni sous forme d'intégrale.**
> 
> *Résolution* :  
> À température constante, $P_0 V_0 = P_F V_F$, donc :
> $$V_F = \frac{P_0 V_0}{P_F} = \frac{P_0 V_0}{6 P_0} = \frac{V_0}{6}$$
> L'expression intégrale du travail des forces de pression est :
> $$W = -\int_{V_0}^{V_F} P \, dV = -\int_{V_0}^{V_F} \frac{n R T_0}{V} \, dV$$
> 
> **3. Calculer cette intégrale. Quelle quantité de chaleur $Q'$ doit recevoir le thermostat ?**
> 
> *Résolution* :  
> $$W = -n R T_0 \ln\left(\frac{V_F}{V_0}\right) = -n R T_0 \ln\left(\frac{1}{6}\right) = n R T_0 \ln(6) > 0$$
> La quantité de chaleur reçue par le système est $Q = -W = -n R T_0 \ln(6) < 0$ (le système cède de la chaleur).  
> La quantité de chaleur $Q'$ reçue par la source de chaleur (thermostat) est :
> $$Q' = -Q = W = n R T_0 \ln(6)$$
## Exercices


## À retenir
-
## Travail à faire
- [x] Rendre l'exemple d'application p29 et p34 pour mercredi
- [x] Transfomer en concept
- [x] Comprendre tout le cours et faire des exos pour s'entrainer



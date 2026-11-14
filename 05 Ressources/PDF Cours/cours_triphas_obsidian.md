### Présentation

#### Avantages par rapport au monophasé
- Les machines triphasées ont des puissances de plus de 50% supérieures aux machines monophasées de même masse et donc leurs prix sont moins élevés (le prix est directement proportionnel à la masse de la machine).
- Lors du transport de l'énergie électrique, les pertes sont moindres en triphasé.

#### Distribution
La distribution se fait à partir de quatre bornes :
- Trois bornes de phase repérées par 1, 2, 3 ou A, B, C ou R, S, T ou U, V, W ;
- Une borne neutre N.

En France : $V \approx 230\text{ V}$, $U \approx 400\text{ V}$, $f = 50\text{ Hz}$.

![[ENER1 triphasé.pdf#page=2&rect=32,604,228,740|ENER1 triphasé, p.2]]

- $v_1, v_2, v_3$ : tensions simples ou étoilées entre les phases et le neutre.
- $u_{12}, u_{23}, u_{31}$ : tensions composées entre les phases.

---

### Étude des tensions simples

#### Observation à l'oscilloscope
- Les tensions sont déphasées de $\frac{2\pi}{3}$ l'une par rapport à l'autre ;
- Elles ont la même valeur efficace.

![[ENER1 triphasé.pdf#page=2&rect=234,604,491,739|ENER1 triphasé, p.2]]

> **Définition :**  
> Un système triphasé est équilibré lorsque les trois tensions possèdent la même valeur efficace et qu'elles sont déphasées de $\frac{2\pi}{3}$ l'une par rapport à l'autre.

#### Équations horaires
$$v_1(t) = V\sqrt{2}\sin(\omega t)$$
$$v_2(t) = V\sqrt{2}\sin\left(\omega t - \frac{2\pi}{3}\right)$$
$$v_3(t) = V\sqrt{2}\sin\left(\omega t - \frac{4\pi}{3}\right)$$

#### Vecteurs de Fresnel associés
On déduit des équations horaires les vecteurs suivants :

$$\vec{V}_1 \begin{pmatrix} V \\ 0 \end{pmatrix} ; \quad \vec{V}_2 \begin{pmatrix} V \\ -\frac{2\pi}{3} \end{pmatrix} ; \quad \vec{V}_3 \begin{pmatrix} V \\ -\frac{4\pi}{3} \end{pmatrix}$$

Le système est **équilibré direct** :
- **Équilibré** car la construction de Fresnel montre que $\vec{V}_1 + \vec{V}_2 + \vec{V}_3 = \vec{0} \implies v_1 + v_2 + v_3 = 0$.
- **Direct** car un observateur immobile verrait les vecteurs défiler devant lui dans l'ordre 1, 2, 3.

---

### Étude des tensions composées

#### Définition
Les tensions composées ont la même fréquence que les tensions simples.

$$u_{12} = v_1 - v_2 \implies \vec{U}_{12} = \vec{V}_1 - \vec{V}_2$$
$$u_{23} = v_2 - v_3 \implies \vec{U}_{23} = \vec{V}_2 - \vec{V}_3$$
$$u_{31} = v_3 - v_1 \implies \vec{U}_{31} = \vec{V}_3 - \vec{V}_1$$

#### Vecteurs de Fresnel associés
$$\vec{U}_1 \begin{pmatrix} U \\ \frac{\pi}{6} \end{pmatrix} ; \quad \vec{U}_2 \begin{pmatrix} U \\ -\frac{3\pi}{6} \end{pmatrix} ; \quad \vec{U}_3 \begin{pmatrix} U \\ -\frac{7\pi}{6} \end{pmatrix}$$

Si le réseau est équilibré : $\vec{U}_{12} + \vec{U}_{23} + \vec{U}_{31} = \vec{0} \iff u_{12} + u_{23} + u_{31} = 0$.

![[ENER1 triphasé.pdf#page=3&rect=213,87,489,271|ENER1 triphasé, p.3]]

Le système des trois tensions composées est équilibré direct.

#### Équations horaires et oscillogrammes
$$u_{12}(t) = U\sqrt{2}\sin\left(\omega t + \frac{\pi}{6}\right)$$
$$u_{23}(t) = U\sqrt{2}\sin\left(\omega t - \frac{\pi}{2}\right)$$
$$u_{31}(t) = U\sqrt{2}\sin\left(\omega t - \frac{7\pi}{6}\right)$$

![[ENER1 triphasé.pdf#page=4&rect=26,606,493,736|ENER1 triphasé, p.4]]

---

### Relation entre $U$ et $V$

$$U = 2V\cos(30^\circ) = 2V\frac{\sqrt{3}}{2}$$

$$\bbox[5px,border:2px solid black]{U = V\sqrt{3}}$$

![[ENER1 triphasé.pdf#page=4&rect=300,560,490,698|ENER1 triphasé, p.4]]

Cette relation est toujours vraie quelle que soit la charge.

---

### Récepteurs triphasés équilibrés

#### Définitions
- **Récepteurs triphasés :** ce sont des récepteurs constitués de trois dipôles identiques d'impédance $Z$.
- **Équilibré :** car les trois éléments sont identiques.
- **Courants par phase ($J$) :** ce sont les courants qui traversent les éléments $Z$ du récepteur triphasé.
- **Courants en ligne ($I$) :** ce sont les courants qui passent dans les fils du réseau triphasé.

Le réseau et le récepteur peuvent se relier de deux façons différentes : en étoile ou en triangle.

![[ENER1 triphasé.pdf#page=5&rect=30,591,240,735|ENER1 triphasé, p.5]]
![[ENER1 triphasé.pdf#page=5&rect=270,591,480,735|ENER1 triphasé, p.5]]

#### Théorème de Boucherot (rappel)
Les puissances active et réactive absorbées par un groupement de dipôles sont respectivement égales à la somme des puissances actives et réactives absorbées par chaque élément du groupement.

$$P = P_1 + P_2 + P_3 \quad \text{et} \quad Q = Q_1 + Q_2 + Q_3$$

Pour un récepteur équilibré ($P_1 = P_2 = P_3$ et $Q_1 = Q_2 = Q_3$) :
$$P = 3 P_1 \quad \text{et} \quad Q = 3 Q_1$$

Facteur de puissance : $k = \frac{P}{S}$.

---

### Couplage étoile ($\text{Y}$)

#### Montage
Comme il s'agit des mêmes impédances, $i_1 + i_2 + i_3 = 0$, donc $i_n = 0$. Le courant dans le fil neutre est nul. Le fil neutre n'est donc pas nécessaire pour un système triphasé équilibré.

![[ENER1 triphasé.pdf#page=6&rect=30,580,240,730|ENER1 triphasé, p.6]]
![[ENER1 triphasé.pdf#page=6&rect=270,580,480,730|ENER1 triphasé, p.6]]

#### Relations entre les courants
Les courants en ligne sont égaux aux courants par phase :
$$i_1 = j_1 ; \quad i_2 = j_2 ; \quad i_3 = j_3$$
$$I_1 = I_2 = I_3 = I = J$$

$$\bbox[5px,border:2px solid black]{I = J}$$

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
- Pour une phase : $P_{J1} = r I^2$
- Résistance vue entre deux bornes : $R = 2r \implies r = \frac{R}{2}$
- Pour le récepteur complet : $P_J = 3 P_{J1} = 3 r I^2 = \frac{3}{2} R I^2$

---

### Couplage triangle ($\Delta$)

#### Montage
Comme il s'agit des mêmes impédances, $i_1 + i_2 + i_3 = 0$ et $j_{12} + j_{23} + j_{31} = 0$. Ici, en aucun cas le fil neutre n'est nécessaire.

![[ENER1 triphasé.pdf#page=7&rect=30,570,240,730|ENER1 triphasé, p.7]]
![[ENER1 triphasé.pdf#page=7&rect=270,570,480,730|ENER1 triphasé, p.7]]

#### Relations entre les courants
$$i_1 = j_{12} - j_{31} \implies \vec{I}_1 = \vec{J}_{12} - \vec{J}_{31}$$
$$i_2 = j_{23} - j_{12} \implies \vec{I}_2 = \vec{J}_{23} - \vec{J}_{12}$$
$$i_3 = j_{31} - j_{23} \implies \vec{I}_3 = \vec{J}_{31} - \vec{J}_{23}$$

Le système est équilibré : $I_1 = I_2 = I_3 = I$ et $J_{12} = J_{23} = J_{31} = J$.

$$\bbox[5px,border:2px solid black]{I = J\sqrt{3} \iff J = \frac{I}{\sqrt{3}}}$$

![[ENER1 triphasé.pdf#page=8&rect=30,530,220,720|ENER1 triphasé, p.8]]

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
! [ [ENER1 triphasé.pdf#page=10&rect=30,550,230,710|ENER1 triphasé, p.10] ]

- Puissance lue sur le wattmètre : $P' = V I \cos\varphi$
- Puissance totale absorbée : $P = \sqrt{3} U I \cos\varphi = 3 P'$

#### Méthode des 2 Wattmètres
! [ [ENER1 triphasé.pdf#page=10&rect=260,550,480,710|ENER1 triphasé, p.10] ]

- Puissance active totale : $P = P_{W1} + P_{W2}$
- Puissance réactive totale : $Q = \sqrt{3} (P_{W1} - P_{W2})$

---

### Tableau récapitulatif

| Grandeur | Couplage Étoile ($\text{Y}$) | Couplage Triangle ($\Delta$) |
| :--- | :--- | :--- |
| **Tension par phase ($V$)** | $V = \frac{U}{\sqrt{3}}$ | $V = U$ |
| **Courant par phase ($J$)** | $J = I$ | $J = \frac{I}{\sqrt{3}}$ |
| **Déphasage** | $\varphi(\vec{I}, \vec{V})$ | $\varphi(\vec{J}, \vec{U})$ |
| **Puissance active ($P$)** | $P = \sqrt{3} U I \cos\varphi$ | $P = \sqrt{3} U I \cos\varphi$ |
| **Puissance réactive ($Q$)** | $Q = \sqrt{3} U I \sin\varphi$ | $Q = \sqrt{3} U I \sin\varphi$ |
| **Puissance apparente ($S$)** | $S = \sqrt{3} U I$ | $S = \sqrt{3} U I$ |
| **Pertes Joule ($P_J$)** | $P_J = 3 r I^2 = \frac{3}{2} R I^2$ | $P_J = 3 r J^2 = \frac{3}{2} R I^2$ |
| **Résistance équivalente ($R$)** | $R = 2r$ | $R = \frac{2}{3} r$ |

---

### Relèvement du facteur de puissance

#### Couplage des condensateurs en triangle
![[ENER1 triphasé.pdf#page=11&rect=30,550,220,720|ENER1 triphasé, p.11]]

- Tension aux bornes d'un condensateur : $U$
- Puissance réactive absorbée par un condensateur : $Q_{C1} = -C \omega U^2$
- Puissance réactive totale : $Q_C = 3 Q_{C1} = -3 C \omega U^2$

Capacité requise par condensateur :
$$\bbox[5px,border:2px solid black]{C_\Delta = \frac{P(\tan\varphi - \tan\varphi')}{3 \omega U^2}}$$

#### Couplage des condensateurs en étoile
En couplage étoile, la capacité requise est :
$$C_{\text{Y}} = \frac{P(\tan\varphi - \tan\varphi')}{\omega U^2}$$

> **Conclusion :**  
> $C_{\text{Y}} = 3 C_\Delta$. Le couplage en étoile est moins avantageux car il nécessite des condensateurs 3 fois plus volumineux et plus coûteux.

---

### Exercices d'application

#### Exercice 1
Donner les valeurs efficaces et les amplitudes des tensions simples et composées des réseaux suivants : $130/230\text{ V}$, $230/400\text{ V}$ et $20\text{ kV}$ entre phases.

#### Exercice 2 : Récepteur résistif (étoile / triangle)
![[ENER1 triphasé.pdf#page=13&rect=20,530,480,720|ENER1 triphasé, p.13]]

Trois résistances $R = 10\ \Omega$ identiques sont alimentées par un réseau $400\text{ V}$ (entre phases).
1. **Couplage étoile :** Déterminer la tension aux bornes de chaque résistance, la valeur efficace des courants de ligne, puis $P$, $Q$ et $S$. Quelle est la valeur du courant de neutre $i_N$ ?
2. **Couplage triangle :** Reprendre les calculs de tension, courants de phase, courants de ligne, et $P, Q, S$.
3. **Comparaison :** Comparer les puissances consommées dans les deux couplages.
4. **Impédances équivalentes :** Calculer la résistance $R_\Delta$ nécessaire en triangle pour consommer la même puissance qu'en étoile ($R_Y$).

#### Exercice 3 : Couplage d'un moteur
Sur la plaque signalétique d'un moteur asynchrone : $230\text{ V} / 400\text{ V} - 17\text{ A} / 10\text{ A} - \cos\varphi = 0{,}7$.
1. Déterminer le réseau nécessaire pour que le moteur soit câblé en étoile. Calculer $P, Q, S$ et le courant de ligne.
2. Recommencer pour le couplage triangle.

#### Exercice 4 : Récepteur $R-L$ en étoile
3 bobines identiques ($r, L = 0{,}1\text{ H}$) couplées en étoile sont alimentées par un réseau $400\text{ V}, 50\text{ Hz}$.
1. On mesure $R = 100\ \Omega$ à l'ohmmètre entre 2 fils de ligne avant couplage. En déduire $r$.
2. Calculer le courant de ligne $I$, les puissances $P, Q, S$ et le facteur de puissance.
3. Déterminer l'indication de deux wattmètres mesurant la puissance.

#### Exercice 5 : Récepteur $R-L$ en triangle
Mêmes bobines couplées en triangle sur un réseau $230\text{ V}, 50\text{ Hz}$.
1. On mesure $R' = 33{,}3\ \Omega$ entre deux bornes. En déduire $r$.
2. Calculer $I$, $P$, $Q$, $S$ et $\cos\varphi$.

#### Exercice 6 : Méthode des 2 wattmètres
Mesure sur récepteur triphasé équilibré passif : $P_1 = 500\text{ W}$, $P_2 = 0\text{ W}$.
1. Déterminer les puissances consommées et la nature du récepteur.
2. Sachant qu'il est couplé en étoile sur le réseau $230/400\text{ V}$, déterminer la valeur des éléments constituant chaque branche.

#### Exercice 8 : Installation complète & Compensation
Une installation $230/400\text{ V}$ comprend :
- Moteur $M_1$ : $P_1 = 3\text{ kW}, \cos\varphi_1 = 0{,}7$
- Moteur $M_2$ : $P_2 = 5\text{ kW}, \cos\varphi_2 = 0{,}75$
- 6 moteurs monophasés $230\text{ V}$ : $P_3 = 2\text{ kW}, \cos\varphi_3 = 0{,}8$
- 15 lampes $230\text{ V}$ : $P_4 = 100\text{ W}$

1. Répartir les charges pour équilibrer l'installation.
2. Calculer $P_{\text{total}}$, $Q_{\text{total}}$, $S_{\text{total}}$, le courant en ligne $I$ et le facteur de puissance global.
3. Calculer la capacité des 3 condensateurs en triangle pour relever le facteur de puissance à $0{,}93$.

---

### Annexe : Schémas d'installation

![[ENER1 triphasé.pdf#page=18&rect=20,40,480,750|ENER1 triphasé, p.18]]
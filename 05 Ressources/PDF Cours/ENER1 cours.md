### LES REGIMES SINUSOÏDAUX

### A - Valeur instantanée d'une tension

L'expression générale d'une tension sinusoïdale est donnée par :

$$u(t) = \hat{U} \cos(\omega t + \varphi)$$

Avec :
- $u(t)$ : valeur instantanée de la tension (en V)
- $\hat{U}$ : valeur maximale (amplitude) de la tension (en V)
- $\omega$ : pulsation de la tension (en $\text{rad}\cdot\text{s}^{-1}$)
- $\varphi$ : phase de la tension à l'instant initial $t = 0$ (en rad)
- $\omega t + \varphi$ : phase instantanée à l'instant $t$ (en rad)

**Relations importantes :**

$$\omega = 2 \pi f$$

$$T = \frac{1}{f}$$

Avec :
- $f$ : fréquence du signal (en Hz)
- $T$ : période du signal (en s)

---

### B - Valeur moyenne

La valeur moyenne $\overline{x}$ d'une grandeur périodique quelconque $x(t)$ de période $T$ se calcule par la relation :

$$\overline{x} = \frac{1}{T} \int_{T} x(t) \, \text{d}t$$

> **NB :** La valeur moyenne d'un signal purement sinusoïdal est nulle ($\overline{u} = 0$).

**Mesure :** La valeur moyenne d'une tension se mesure à l'aide d'un voltmètre numérique ou d'un voltmètre magnéto-électrique en position **DC (continu)** (pour une fréquence comprise entre $10\text{ Hz}$ et $5\text{ kHz}$).

---

### C - Valeur efficace

La valeur efficace $Y$ d'une grandeur périodique $y(t)$ se calcule par la relation :

$$Y^2 = \frac{1}{T} \int_{T} y^2(t) \, \text{d}t \quad \implies \quad Y = \sqrt{\frac{1}{T} \int_{T} y^2(t) \, \text{d}t}$$

Pour un signal **sinusoïdal uniquement**, la valeur efficace $U$ se déduit directement de la valeur maximale par :

$$U = \frac{\hat{U}}{\sqrt{2}}$$

**Mesure :** La valeur efficace de n'importe quelle tension se mesure à l'aide d'un voltmètre numérique **TRMS** (Root Mean Square) en position **AC + DC**.

---

### D - Représentation des grandeurs sinusoïdales

#### Représentation cartésienne (dulle en temps)

Les grandeurs sinusoïdales du temps s'écrivent :

$$u(t) = \hat{U} \cos(\omega t + \varphi_u)$$
$$i(t) = \hat{I} \cos(\omega t + \varphi_i)$$


![[Pasted image 20261102141819.png]]
Le **déphasage** $\varphi$ entre la tension $u(t)$ et le courant $i(t)$ est la différence entre leurs phases initiales respectives :

$$\varphi = \varphi_u - \varphi_i$$

- Si $\varphi = \varphi_u - \varphi_i > 0$ : la tension $u$ est en **avance** sur l'intensité $i$.
- Si $\varphi = \varphi_u - \varphi_i < 0$ : la tension $u$ est en **retard** sur l'intensité $i$.

Le déphasage peut également se déduire du décalage temporel (ou horaire) $\tau$ par la relation :

$$|\varphi| = \frac{2 \pi t}{T}$$

En choisissant l'origine des phases sur la tension ($\varphi_u = 0$) :
- $u(t) = \hat{U} \cos(\omega t)$
- $i(t) = \hat{I} \cos(\omega t - \varphi)$

*(où $\varphi$ représente le déphasage de $i$ par rapport à $u$)*.

#### Représentation de Fresnel
![[ENER1 cours.pdf#page=4&rect=158,609,434,814|ENER1 cours, p.4]]
Chaque grandeur sinusoïdale est représentée par un vecteur tournant (ou vecteur de Fresnel) dont la norme correspond à la valeur efficace (ou maximale) et l'angle par rapport à l'axe de référence correspond à la phase initiale $\varphi$.

Si la tension $u$ est prise comme origine des phases ($\vec{U}$ porté par l'axe de référence) :
- Pour $i_1 = \hat{I}_1 \cos(\omega t - \varphi_1)$ : $\vec{I}_1$ est déphasé de $\varphi_1$ en arrière (angle négatif $-\varphi_1$).
- Pour $i_2 = \hat{I}_2 \cos(\omega t + \varphi_2)$ : $\vec{I}_2$ est déphasé de $\varphi_2$ en avance (angle positif $+\varphi_2$).

---

### E - Étude de quelques dipôles récepteurs

#### 1. Résistance $R$

- **Déphasage ($\varphi = \varphi_u - \varphi_i$) :** $0\text{ rad}$ ($u$ et $i$ sont en phase)
- **Régime continu :** Comportement ohmique $U = R \cdot I$
- **Régime sinusoïdal :**
  - Instantané : $u(t) = R \cdot i(t)$
  - Amplitudes / Efficaces : $\hat{U} = R \cdot \hat{I} \quad \implies \quad U = R \cdot I$

#### 2. Condensateur parfait $C$

- **Déphasage ($\varphi = \varphi_u - \varphi_i$) :** $-\frac{\pi}{2}\text{ rad}$ ($i$ est en avance de $\frac{\pi}{2}$ sur $u$)
- **Régime continu :** Interrupteur ouvert ($I = 0$)
- **Régime sinusoïdal :**
  - Instantané : $i(t) = C \cdot \frac{\text{d}u(t)}{\text{d}t}$
  - Valeurs efficaces : $U = \frac{1}{C \omega} I$

#### 3. Bobine purement inductive $L$

- **Déphasage ($\varphi = \varphi_u - \varphi_i$) :** $+\frac{\pi}{2}\text{ rad}$ ($i$ est en retard de $\frac{\pi}{2}$ sur $u$)
- **Régime continu :** Court-circuit ($U = 0$)
- **Régime sinusoïdal :**
  - Instantané : $u(t) = L \cdot \frac{\text{d}i(t)}{\text{d}t}$
  - Valeurs efficaces : $U = L \omega I$

---

### F - Puissances en régime sinusoïdal

Soit un dipôle soumis à une tension $u(t)$ et traversé par un courant $i(t)$, déphasés d'un angle $\varphi = \varphi_u - \varphi_i$.

- **Puissance instantanée :**
  $$p(t) = u(t) \cdot i(t)$$

- **Puissance active $P$ (en Watts, W) :**
  $$P = U \cdot I \cos \varphi$$

- **Puissance réactive $Q$ (en Volt-Ampères Réactifs, VAR) :**
  $$Q = U \cdot I \sin \varphi$$

- **Puissance apparente $S$ (en Volt-Ampères, VA) :**
  $$S = U \cdot I$$

- **Facteur de puissance $k$ :**
  $$k = \cos \varphi = \frac{P}{S}$$

#### Théorème de Boucherot

Dans un groupement de dipôles, la puissance active totale et la puissance réactive totale sont respectivement égales à la somme algébrique des puissances actives et réactives absorbées par chaque élément :

$$P_{\text{tot}} = \sum P_i$$

$$Q_{\text{tot}} = \sum Q_i$$

$$S_{\text{tot}} = \sqrt{P_{\text{tot}}^2 + Q_{\text{tot}}^2}$$ (Théorème de pythagore)

#### Synthèse par dipôle

| Dipôle étudié             | $P \text{ (W)}$ | $Q \text{ (VAR)}$ | $S \text{ (VA)}$ | Facteur de puissance $k = \cos \varphi$ |
| :------------------------ | :-------------- | :---------------- | :--------------- | :-------------------------------------- |
| **Résistance ($R$)**      | $R I^2$         | $0$               | $R I^2$          | $1$                                     |
| **Condensateur ($C$)**    | $0$             | $-C \omega U^2$   | $C \omega U^2$   | $0$                                     |
| **Inductance pure ($L$)** | $0$             | $L \omega I^2$    | $L \omega I^2$   | $0$                                     |

- Si $Q > 0$ : le dipôle est **inductif**.
- Si $Q < 0$ : le dipôle est **capacitif**.
- Si $Q = 0$ : le dipôle est **purement résistif**.

---

### G - Utilisation des nombres complexes

L'utilisation de la notation complexe permet de simplifier l'étude des circuits en régime sinusoïdal permanent :

| Dipôle | Impédance complexe $\underline{Z}$ |
| :--- | :--- |
| **Résistance ($R$)** | $\underline{Z}_R = R$ |
| **Condensateur ($C$)** | $\underline{Z}_C = \frac{1}{j C \omega} = -j \frac{1}{C \omega}$ |
| **Inductance pure ($L$)** | $\underline{Z}_L = j L \omega$ |

#### Rappels sur les nombres complexes ($j^2 = -1$)

Soit $\underline{x} = a + j b$ :
- **Module :** $x = |\underline{x}| = \sqrt{a^2 + b^2}$
- **Argument :** $\varphi = \arg(\underline{x}) = \arctan\left(\frac{b}{a}\right)$


Opérations entre $\underline{x} = a + j b$ et $\underline{z} = c + j d$ :
- **Addition :** $\underline{x} + \underline{z} = (a + c) + j(b + d)$
- **Multiplication :** $\underline{x} \cdot \underline{z} = (ac - bd) + j(ad + bc)$
- **Division :** $\frac{\underline{x}}{\underline{z}} = \frac{(ac + bd) + j(bc - ad)}{c^2 + d^2}$

---

Arret ici

### H - Relèvement du facteur de puissance

#### Problématique économique

Pour une puissance active $P$ et une tension $U$ données, l'intensité du courant absorbé s'écrit :

$$I = \frac{P}{U \cos \varphi}$$

Pour diminuer les pertes par effet Joule dans les lignes d'alimentation tout en délivrant la même puissance utile $P$, il faut réduire $I$, et donc augmenter le facteur de puissance $\cos \varphi$ pour le rapprocher de 1.

Comme $\cos \varphi = \frac{P}{\sqrt{P^2 + Q^2}}$, plus la puissance réactive $Q$ est proche de 0, plus le facteur de puissance tend vers 1.

#### Méthode de compensation (Installation inductive $Q > 0$)

Pour corriger le déphasage d'une installation inductive ($Q > 0$), on connecte en parallèle une batterie de condensateurs d'une puissance réactive $Q_c < 0$, de manière à obtenir un nouveau déphasage $\varphi'$ tel que $0 < Q + Q_c < Q$.

Pour passer d'un facteur de puissance initial $\cos \varphi$ à un nouveau facteur de puissance cible $\cos \varphi_1$ ($\text{ou } \cos \varphi'$), la capacité $C$ du condensateur à rajouter en parallèle sous la tension $U$ se calcule selon la formule :

$$C = \frac{P (\tan \varphi - \tan \varphi_1)}{\omega U^2}$$
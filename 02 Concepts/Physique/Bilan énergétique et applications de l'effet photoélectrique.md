---
type: concept
matière: physique
tags:
  - concepts
  - physique
  - physique/ondes
  - physique/lumière
MOC:
  - "[[MOC Ondes]]"
  - "[[MOC Lumière]]"
date_creation: 2026-07-29
---
# Bilan énergétique et applications de l'effet photoélectrique

> [!info] Définition courte
> Le **travail d'extraction** ($W$) est l'énergie minimale à fournir à un matériau pour en extraire un électron. L'excédent d'énergie apporté par le photon est transféré à l'électron sous forme d'**énergie cinétique** ($E_c$).



## Explication intuitive

Lorsqu'un photon vient percuter un électron dans le métal :
1. Le photon cède l'intégralité de son énergie $E_{\text{photon}} = h\nu$.
2. L'électron utilise le travail d'extraction $W$ pour se détacher du matériau.
3. Le surplus d'énergie sert à propulser l'électron : c'est son énergie cinétique $E_c$.



## Aspect énergétique

### 1. Travail d'extraction ($W$)
* C'est l'énergie minimale pour extraire un électron. Son symbole est $W$ et son unité est le joule ($\text{J}$).
* Il dépend du matériau utilisé et se calcule via la fréquence seuil $\nu_s$ :
  $$W = h\nu_s$$

### 2. Énergie cinétique de l'électron
Si un photon de fréquence $\nu$ extrait un électron d'un matériau de fréquence seuil $\nu_s$ avec $\nu > \nu_s$, l'énergie cinétique $E_c$ vaut :
$$E_c = E_{\text{photon}} - W = h\nu - h\nu_s = h(\nu - \nu_s)$$

On peut également calculer la vitesse $v$ de l'électron émis grâce à la formule :
$$E_c = \frac{1}{2}m_e v^2$$
avec la masse de l'électron $m_e = 9{,}11 \times 10^{-31}\text{ kg}$.



## Applications (Interaction photon-matière)

### 1. Cellule photoélectrique
* **Description** : Constituée de deux électrodes (cathode/émetteur et anode/collecteur) enfermées dans un tube à vide ou rempli d'un gaz inerte.
* **Fonctionnement** : Éclairée par un rayonnement de fréquence $\nu > \nu_s$, la cathode émet des électrons collectés par l'anode.
* **Propriété** : L'intensité du courant électrique obtenu augmente avec le nombre de photons reçus, donc avec l'intensité de la source de rayonnement.

### 2. Dispositifs à semi-conducteurs
L'utilisation de semi-conducteurs en jonction PN exploite l'effet photoélectrique pour :
* **Cellules photovoltaïques** : Conversion de l'énergie lumineuse en énergie électrique.
* **Diodes électroluminescentes (DEL)**.



## Formules / Propriétés

> [!theorem] Énoncés formels
> * **Conservation de l'énergie** :
>   $$E_c = h(\nu - \nu_s)$$
> * **Calcul de la vitesse** :
>   $$v = \sqrt{\frac{2h(\nu - \nu_s)}{m_e}}$$



## Concepts liés

* [[Effet photoélectrique et modèle du photon]]

## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

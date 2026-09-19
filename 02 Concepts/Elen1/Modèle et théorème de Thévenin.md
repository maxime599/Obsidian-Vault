---
type: concept
tags:
  - concepts
  - Elen1
  - elen1/theoremes
  - flashcards/Elen1
MOC:
  - "[[MOC Theoremes]]"
date_creation: 2026-09-14
Ressources:
---

# Modèle et théorème de Thévenin

> [!info] Définition courte
> Le **théorème de Thévenin** :: affirme que tout dipôle linéaire vu de deux bornes peut être remplacé par un modèle équivalent constitué d'une source idéale de tension $E_{\text{th}}$ en série avec une résistance $R_{\text{th}}$.
<!--SR:!2026-09-20,2,230-->


## 1. Énoncé du théorème

Tout dipôle linéaire quelconque peut être remplacé entre ses bornes $A$ et $B$ par un **générateur équivalent de Thévenin** composé de :
- Un générateur idéal de tension de force électromotrice $E_{\text{th}}$.
- Une résistance interne $R_{\text{th}}$ associée en série.



## 2. Procédure de détermination

Pour déterminer les éléments $E_{\text{th}}$ et $R_{\text{th}}$ du modèle équivalent :

1. **Détermination de $E_{\text{th}}$ (Tension de Thévenin)**
?
   On effectue une mesure ou un calcul de la **tension à vide** entre les bornes $A$ et $B$ du dipôle (lorsque aucun courant ne sort des bornes).   $$E_{\text{th}} = U_{AB \text{ à vide}}$$
<!--SR:!2026-09-21,4,270-->

2. **Détermination de $R_{\text{th}}$ (Résistance de Thévenin)** :
?
On **éteint toutes les sources autonomes** du circuit (les sources de tension sont remplacées par des fils / courts-circuits, et les sources de courant par des interrupteurs ouverts).
$R_{\text{th}}$ correspond alors à la résistance équivalente vue entre les bornes $A$ et $B$ (ce que mesurerait un ohmmètre branché entre $A$ et $B$).
<!--SR:!2026-09-21,4,270-->

![[IMG_20260914_203011.jpg]]{transform="translate(-1.7%, -14.2%) rotate(0deg) scale(1)" aspect-ratio=531/398 width=531}
## Concepts liés

- [[Pont diviseur de tension]]
- [[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]
- [[Théorème de Norton]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
````
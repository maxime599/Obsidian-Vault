---
type: concept
tags:
  - concepts
  - Thermodynamique
  - flashcards/Thermodynamique
  - thermodynamique/entropie
MOC:
  - "[[MOC Entropie]]"
date_creation: 2026-09-18
Ressources:
  - "[[Thermodynamique chapitre III le second principe.pdf]]"
---

# Entropie et bilan entropique

> [!info] Définition courte
> L'**entropie** $S$ (en $\text{J}\cdot\text{K}^{-1}$) est une fonction d'état extinsive caractérisant le ==désordre d'un système==. Le bilan d'entropie sépare la variation globale entre le transfert d'entropie avec l'extérieur et la création interne d'entropie.
<!--SR:!2026-10-14,16,290-->


## 1. Propriétés fondamentales de l'entropie

- **Fonction d'état** : La variation $\Delta S = S_{\text{final}} - S_{\text{initial}}$ ne dépend uniquement que de ==l'état initial et de l'état final, et non du chemin suivi.==
- **Système isolé** : Lors d'une transformation irréversible au sein d'un système isolé, l'entropie ==augmente ($\Delta S > 0$)==. L'état d'équilibre correspond à la valeur **maximale** de l'entropie.
- **Cas d'une transformation réversible** : La variation infinitésimale d'entropie $dS$ s'exprime par ::$$dS = \frac{\delta Q}{T}$$ car il n'y a pas de création d'entropie
<!--SR:!2026-10-10,7,270-->


## 2. Bilan d'entropie d'un système fermé

Pour un système fermé en contact avec une source de chaleur (thermostat à la température $T_e$), $dS =$ ::$$dS = \delta S_e + \delta S_c = \frac{\delta Q_e}{T_e} + \delta S_c$$
<!--SR:!2026-10-08,4,230-->

En intégrant sur une transformation globale :

$$\Delta S = S_e + S_c$$

- **Entropie échangée $S_e$** (en integrant) :: $S_e = \int \frac{\delta Q_e}{T_e}$.
<!--SR:!2026-10-07,4,210-->
	Elle peut être positive, négative ou nulle (pour un système ==fermé isolé==, $S_e = 0$).
- **Entropie créée $S_c$** : Reflète l'irréversibilité interne du processus :
  - **Transformation réversible** : $S_c$ = ::$0$
<!--SR:!2026-10-10,12,270-->
  - **Transformation irréversible** : $S_c$ :: $>0$
<!--SR:!2026-10-09,10,230-->



## Concepts liés

- [[Second Principe de la thermodynamique et énoncés fondamentaux]]
- [[Variables d'état et équilibre thermodynamique]]
- [[Système thermodynamique et milieu extérieur]]
- [[Calcul de la variation d'entropie]]


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


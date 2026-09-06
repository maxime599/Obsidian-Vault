---
epoch: 1786014713181
modelKey: "qwen3.5:4b|ollama"
topic: "Ajouter tag terminal spécifique"



tags:
  - copilot-conversation
---

**user**: ajoute un tag #terminal_spé après le tag math dans le note [[Argument et forme trigonométrique d'un nombre complexe]]
[Context: Notes: 02 Concepts/Maths/Argument et forme trigonométrique d'un nombre complexe.md]
[Timestamp: 2026/08/06 13:11:53]

**ai**: Voici la mise à jour de votre note avec l'ajout du tag `#terminal_spé` :

```markdown
---
type: concept
matière: math
tags:
  - concepts
  - math
  - terminal_spé
  - math/nombrescomplexes
  - math/trigonométrie
MOC:
  - "[[MOC Nombres complexes]]"
  - "[[MOC Trigonométrie]]"
date_creation: 2026-07-28
---

# Argument et forme trigonométrique d'un nombre complexe

> [!info] Définition courte
> Tout complexe non nul $z$ admet une écriture $z=r(\cos\theta+i\sin\theta)$, où $r=|z|>0$ et $\theta$ est un argument de $z$, noté $\arg(z)\ [2\pi]$. C'est la **forme trigonométrique** de $z$.

## Explication intuitive

Dans le plan complexe, un complexe non nul est représenté par un vecteur. Son module donne la longueur du vecteur et son argument donne son angle orienté avec l'axe réel positif. Les arguments ne sont pas uniques : ils diffèrent tous d'un multiple de $2\pi$.

## Fonctionnement

Pour déterminer la forme trigonométrique de $z=a+ib\ne0$ :

1. Calculer $r=|z|=\sqrt{a^2+b^2}$.
2. Repérer le quadrant à partir des signes de $a$ et $b$.
3. Trouver un angle $\theta$ tel que $\cos\theta=\frac{a}{r}$ et $\sin\theta=\frac{b}{r}$.
4. Écrire $z=r(\cos\theta+i\sin\theta)$.

> [!example] Écrire $z=-1+i\sqrt3$ sous forme trigonométrique.
> $$|z|=\sqrt{1+3}=2.$$
> Le point est dans le deuxième quadrant et l'angle est $\frac{2\pi}{3}$. Ainsi :
> $$z=2\left(\cos\frac{2\pi}{3}+i\sin\frac{2\pi}{3}\right).$$

## Propriétés

> [!theorem] Modules et arguments d'un produit
> Pour $z,z'\ne0$ :
> $$|zz'|=|z|\,|z'|\qquad \arg(zz')\equiv\arg(z)+\arg(z')\ [2\pi]$$
> $$\arg\left(\frac{z}{z'}\right)\equiv\arg(z)-\arg(z')\ [2\pi].$$

Le conjugué conserve le module et oppose l'argument :
$$|\overline z|=|z|\qquad \arg(\overline z)\equiv-\arg(z)\ [2\pi].$$

## Concepts liés

- [[Nombres complexes et forme algébrique]]
- [[Conjugué et module d'un nombre complexe]]
- [[Forme exponentielle et formule d'Euler]]
- [[Cercle trigonométrique et angles remarquables]]
- [[Géométrie des nombres complexes]]

## 📚 Cours associés



<dataview_block>
<query_type>dataview</query_type>
<original_query>
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
</original_query>
<executed_result>
No results
</executed_result>
</dataview_block>

```
[Timestamp: 2026/08/06 13:12:55]

**user**: à l'aide du plugin dataview, modifie ma note [[🎓 Dashboard]] pour ajouter une section avec la liste des conceptes utilisé dans les cours de la dernière semaine dans chaque matière
[Context: Notes: 🎓 Dashboard.md, 01 Cours/Maths/2026-08-06 - Trigo.md]
[Timestamp: 2026/08/06 13:19:20]

**ai**: Voici le code Dataview à intégrer dans votre note `[[🎓 Dashboard]]` :

```dataview
LIST WITHOUT ID
file.link, file.name AS Titre du cours
FROM "01 Cours"
WHERE date >= date(today) - 7d AND !completed
SORT matiere ASC
```

**Explication :**
- **Filtrage par date** : `date >= date(today) - 7d` sélectionne les cours de la dernière semaine (y compris aujourd'hui).
- **Tri par matière** : `SORT matiere ASC` regroupe automatiquement les concepts par discipline.
- **Affichage** : Le bloc affiche le lien vers chaque note et son titre, ce qui vous permet d'accéder rapidement aux sections "Concepts liés" de ces cours pour identifier les notions utilisées.

Vous pouvez copier-coller ce code directement dans la section `## Notes` ou à côté des objectifs de votre note du jour.
[Timestamp: 2026/08/06 13:21:08]
---
semestre: S1
type de cours: TD
date: 2026-09-28T16:00:00
End Date: 2026-09-28T17:30:00
Calendar Title: "[[01 Cours/Elen-Ener/Amplificateur opérationnel ou AOP, Elen1 2026-09-28|Amplificateur opérationnel ou AOP, Elen1]]"
prof: Marc Jamond
tags:
  - cours
  - Elen1
Concepts:
  - "[[Montages de base à Amplificateur Opérationnel (AOP)]]"
Ressources:
  - "[[Fascicule TD ELEN1 CITISE.pdf]]"
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
# Amplificateur opérationnel ou AOP


## Objectifs

-

## Notes
Un Amplificateur opérationnel ou AOP réalise des opérations autour des signaux (comme un adition d'une sinosoïde et d'un courant continue), et permet de l'amplifier
Symbole :
![[Drawing 2026-09-28 16.05.09.excalidraw]]
### 2 modes de foncitonnement
- régime linéaire
- régime saturé

En régime linéaire, c'est un amplificateur de différence. La différence $\epsilon$ est $e^+ - e^-$

L'amplification de différence $Ad$ environ de $10^5$
$\epsilon$ est petit, sinon régime saturé
$V_{S} = Ad*(e^+ - e^-) = Ad*\epsilon$
$\epsilon$ étant très petit, on va considérer pour l'étude de nos montage que $\epsilon = e^+ - e^- = 0$
Donc que $e^+ = e^-$
$\implies$ on considère que il y a un fil entre $e^+$ et $e^-$

De plus, la structure interne d'un AOP fait que l'impédance (comme la résistance) des entrées $e^+$ et $e^-$ sont très grande
D'où les courant $I^+$ et $I^-$ sont très petit. On va même considérer qu'ils sont nuls


![[Drawing 2026-09-28 16.22.00.excalidraw]]
Si le circuit est connécté entre la sortie de l'AOP et son entrée enverseur : ce circuit se nomme "contre réaction" et alors l'
AOP fonctionne en régime linéaire pour lequel on peut écrire les hypothèses simplificatrices :
 $e^+ = e^- \implies \epsilon = 0$ 
 $I^+ = 0$  et  $I^- = 0$ 


## Exercices
![[Fascicule TD ELEN1 CITISE.pdf#page=9&rect=41,112,555,441|Fascicule TD ELEN1 CITISE, p.9]]

### Premier montage
Il y a Contre réaction $\implies e^+ = e^- \implies \epsilon = 0$ donc $I^- = 0$ et $I^+ = 0$
![[Drawing 2026-09-28 16.34.22.excalidraw]]
**2 Lois des mailles**
$M_{1} : V_{e}+\epsilon=U_{1} \implies V_{e}= U_{1}=0$
$M_{2} : V_{s}=U_{2}$

**3 Loi des noeuds**
$I_{1}+I_{2}=I^-$
$I_{1}+I_{2}= 0$

**4 Loi d'ohm**
$Ve = R_{1}I_{1}$, $V_{s} = R_{2}I_{2}$

**5 Calcul**
$V_{e} = R_{1}I_{1} = -R_{1}I_{2}\implies I_{1} = \frac{V_{e}}{R_{1}} = -\frac{Vs}{R_{2}}$
$V_{s} = R_{2}I_{2} =  -R_{2}I_{1} \implies I_{2} =-\frac{V_{e}}{R_{1}}= \frac{V_{s}}{R_{2}}$
Donc $-\frac{V_{s}}{V_{e}} = \frac{R_{2}}{R_{1}}$ ou $V_{s}=-V_{e} * \frac{R_{2}}{R_{1}}$, c'est un inverseur

ex : on veut une amplification de 10 $\implies \frac{R_{2}}{R_{1}}$ vaut 10
![[Drawing 2026-09-28 16.49.05.excalidraw]]
On choisi de manière arbitraire $R_{2} = 10k\ohm \implies R_{1} = 1k\ohm$ 


### 2ème montage
![[Drawing 2026-09-28 16.58.22.excalidraw]]
Il y a Contre réaction $\implies e^+ = e^- \implies \epsilon = 0$ donc $I^- = 0$ et $I^+ = 0$

Pont diviseur :
$e^- = V_{s}* \frac{R_{1}}{R_{1}+R_{2}}$
Donc $V_{e} = V_{s}* \frac{R_{1}}{R_{1}+R_{2}}$

## À retenir
-
## Travail à faire
- [x] Exos à finir sur feuille (exos 2 à faire avec le pont diviseur, pour l'ex 3 il faut trouver $Vs = Ve$ et trouver à quoi ça sert)
- [x] Transformer en concept



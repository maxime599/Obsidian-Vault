---
semestre:
type de cours:
date: 2026-11-24T14:09:21
End Date: 2026-11-24T15:39:21
Calendar Title: "[[01 Cours/Elen-Ener/Les schémas, Elen-Ener 2026-11-24|Les schémas, Elen-Ener]]"
prof:
tags:
  - cours
  - Elen-Ener
Concepts:
Ressources:
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
# Les schémas


## Objectifs

-

## Notes
![[Drawing 2026-11-24 14.07.07.excalidraw]]
**Intet ouvert**
- $U_{L}=0V$
- $U_{inter}=230V$

**Intet fermé**
- $U_{L}=230V$
- $U_{inter}=0V$

![[Drawing 2026-11-24 14.10.53.excalidraw]]

|             | NF                                       | NO                                       |
| ----------- | ---------------------------------------- | ---------------------------------------- |
| **Travail** | <font color="#ff0000">Non passant</font> | <font color="#00b050">Passant</font>     |
| **Repos**   | <font color="#00b050">Passant</font>     | <font color="#ff0000">Non passant</font> |

On souhait ammener une tension par une voie OU par une autre voie OU....
Pour cela, on utilise des NO passés en parallèles

On souhaite ammener une tension par une voie ET par une autre ET....
-> Donc on utilise des NO en série

On souhait supprimer une tension par une voie OU une autre OU....
-> NF en série

On souhaite suppimer une tension par une voie ET une autre ET...
-> NF en parallèles

### Exemple
Si on veut ammener trois phases à un moteur
![[Drawing 2026-11-24 14.32.01.excalidraw]]
Pour que le moteur continue à tourner quand on relache le bouton et s'arrête quand il n'y a plus de cournant, on utilise un <font color="#0070c0">Automaintient</font> qui dépend de K
Pour pouvoir couper à tout moment les circuit, on utilise un <font color="#ff0000">NF</font> 






![[Drawing 2026-11-24 14.45.19.excalidraw]]
Pour proteger l'installation, on utilise un contact de précoupure Q qui va couper le courant avant que l'on coupe le les fusibles (pour éviter d'avoir des éteincelle à ce niveau)

Protéction des individus, du matériel et de l'installation
![[Untitled circuit.lecircuit]]

## Exercices


## À retenir
-
## Travail à faire

- [ ] ajouter aux conceptes


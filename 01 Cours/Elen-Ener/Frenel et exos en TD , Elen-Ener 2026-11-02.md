---
semestre: S1
type de cours: TD
date: 2026-11-02T14:59:38
End Date: 2026-11-02T16:29:38
Calendar Title: "[[01 Cours/Elen-Ener/Frenel et exos en TD , Elen-Ener 2026-11-02|Frenel et exos en TD , Elen-Ener]]"
prof: Marc Jamond
tags:
  - cours
  - Elen-Ener
Concepts:
  - "[[Représentation de Fresnel et dipôles élémentaires (R, L, C)]]"
  - "[[Grandeur sinusoïdale (Valeurs instantanée, moyenne, efficace et déphasage)]]"
Ressources:
  - "[[TD ENER1.pdf]]"
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
# Frenel et exos en TD 


## Objectifs

-

## Notes
Pour une résistance, le courant est en phase avec la tension

Pour un condensateur, le courant est en avance sur la tension/la tension est en retard sur le courant
![[Drawing 2026-11-02 15.02.44.excalidraw]]


Pour une bobine, le courant est en retard sur la tension ou la tension est en avance sur le courant
![[Drawing 2026-11-02 15.05.17.excalidraw]]



## Exercices
### Ex1
#### 1 Schéma
![[Drawing 2026-11-02 15.08.01.excalidraw]]
#### 2
$U_{R}=Z_{R}*I = R*I = 100*240*10^{-3} = 24V$
$U_{L} = Z_{L}*I = L \omega*I = L*2 \pi f*I = 30V$

#### 3
$U(t)= U_{R}(t)+U_{L}(t)$, attention on ne peux pas écrire que $U=30+24$. Par contre, on peut écrire $\overrightarrow{U}=\overrightarrow{U_{R}} + \overrightarrow{U_{L}}$

#### 4
$\lVert \overrightarrow{U_{R}} \rVert = U_{R}$
$\lVert \overrightarrow{U_{L}} \rVert = U_{L}$

![[Drawing 2026-11-02 15.19.06.excalidraw]]
On le fait à l'échelle, puis on utilise un compas pour tracer "l'arrivée" de $\overrightarrow{U}$ puis on mesure $\lVert \overrightarrow{U} \rVert$
Déphasage $\varphi>0 \implies$ phase de $\lVert \overrightarrow{I} \rVert<0$
C'est un montage globalement inductif
 
#### 5
![[Drawing 2026-11-02 15.27.28.excalidraw]]
à partir du schéma précedent, on utiliser le théorème de Pythagore pour avoir la relation : 
$\lVert \overrightarrow{U} \rVert^2 = \lVert \overrightarrow{U_{R}} \rVert^2 + \lVert \overrightarrow{U_{L}} \rVert^2$
Donc $U^2 = U_{R}^2 + U_{L}^2$
Donc $(Z_{eq}*I)^2 = (Z_{R}*I)^2 + (Z_{L}*I)^2$
$\implies Z_{eq}^2 = Z_{R}^2+Z_{L}^2$
$\implies Z_{eq} =\sqrt{ Z_{R}^2+Z_{L}^2} = \sqrt{ R^2+(L \omega)^2} = 160\Omega$

Donc $U=Z_{eq}*I = 38.4V$





### Ex2
#### 1
![[Drawing 2026-11-02 15.41.09.excalidraw]]
#### 2
$U_{R}= Z_{R} * I = R * I =24V$
$U_{C} = Z_{C} * I = \frac{1}{C\omega} * I = \frac{1}{C * 2 * \pi * f} * I =38.2V$

#### 3
$U(t)= U_{R}(t)+U_{C}(t)$,
Et $\overrightarrow{U}=\overrightarrow{U_{R}} + \overrightarrow{U_{C}}$


#### 4 
![[Drawing 2026-11-02 15.48.07.excalidraw]]
Déphasage $\varphi<0 \implies$ phase de $\lVert \overrightarrow{I} \rVert>0$
C'est un montage globalement capacitif

#### 5 
$\lVert \overrightarrow{U} \rVert^2 = \lVert \overrightarrow{U_{R}} \rVert^2 + \lVert \overrightarrow{U_{C}} \rVert^2$
etc etc pour calculer $Z_{eq}$ puis $U$


### Ex3
#### 2 
$U_{C} = Z_{C} * I = \frac{1}{C\omega} * I = \frac{1}{C * 2 * \pi * f} * I =10.08V$
$U_{L} = Z_{L}*I = L \omega*I = L*2 \pi f*I = 10.74V$

#### 3 
$U(t)= U_{L}(t)+U_{C}(t)$
Et $\overrightarrow{U}=\overrightarrow{U_{L}} + \overrightarrow{U_{C}}$

#### 4   
![[Drawing 2026-11-02 15.58.29.excalidraw]]
Déphasage $\varphi>0 \implies$ phase de $\lVert \overrightarrow{I} \rVert<0$
C'est un montage inductif


#### 5
$\overrightarrow{U_{L}}$ et $\overrightarrow{U_{C}}$ sont en opposition de phase, donc on peut écrire $\lVert \overrightarrow{U} \rVert = \lVert \overrightarrow{U_{L}} \rVert - \lVert \overrightarrow{U_{C}} \rVert$ (le module du plus grand - le module du plus petit)
Donc $U = U_{L}-U_{C} = 10.74-10.08 = 0.66V$
$Z_{eq} * I = Z_{L} * I-Z_{C}*I$
$Z_{eq} = Z_{L}-Z_{C} = L\omega- \frac{1}{C\omega} = 35 \Omega$

Vérification : $U=Z_{eq}*I = 0.665V$  


## À retenir
-
## Travail à faire

- [x] Faire l'exo 4 sur un feuille et il le ramasse
- [x] Ajouter aux concepts


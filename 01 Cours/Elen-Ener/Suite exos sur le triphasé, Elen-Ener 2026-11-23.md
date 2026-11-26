---
semestre:
type de cours:
date: 2026-11-23T14:36:51
End Date: 2026-11-23T16:06:51
Calendar Title: "[[01 Cours/Elen-Ener/Suite exos sur le triphasé, Elen-Ener 2026-11-23|Suite exos sur le triphasé, Elen-Ener]]"
prof:
tags:
  - cours
  - Elen-Ener
Concepts:
  - "[[Systèmes triphasés (Tensions simples et composées)]]"
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
# Suite exos sur le triphasé


## Objectifs

-

## Notes


## Exercices
### Ex5
![[Pasted image 20261123143653.png]]
![[Drawing 2026-11-23 14.37.14.excalidraw]]
**1.**
$R=r//(r+r)= \frac{2}{2}r$
$\implies r=\frac{3}{2}R=50\Omega$
![[Drawing 2026-11-23 14.41.40.excalidraw]]
**2.**
$\lvert \underline{I_{1}} \rvert=\lvert \underline{I_{2}} \rvert=\lvert \underline{I_{3}} \rvert$
$\underline{Z}_{eq}=Z_{R}+Z_{L} = R+jL\omega=50+10\pi j=59e^{0.561j}$
$\lvert \underline{J} \rvert = \frac{\lvert \underline{U} \rvert}{\lvert \underline{Z}_{eq} \rvert}$ avec $J=\frac{I}{\sqrt{ 3 }}$
$\lvert \underline{I} \rvert = \frac{\lvert \underline{U} \rvert}{\lvert \underline{Z_{eq}} \rvert}*\sqrt{ 3 }=6.75A$

**3.**
$P=UI\sqrt{ 3 }\cos \varphi$
$=230*6.75*\sqrt{ 3 }*\cos(0.561) = 2277W$

$P = 3*P_{1l}$
$=3UJ\cos \varphi$
$=3*U \frac{I}{\sqrt{ 3 }}\cos \varphi$
$=2277W$

$P = \frac{3}{2}RI^2$


**4.**
$Q = UI\sqrt{ 3 }\sin(\varphi)$
$=1431VAR$

$Q = Q_{1l}*3$
$=3*UJ\sqrt{ 3 }$

$Q = 3L\omega J^2$

$Q = P\tan(\varphi)$

**5.**
$S=\sqrt{ P^{2} +Q^2}=UI\sqrt{ 3 } = \frac{P}{\cos \varphi}=\frac{Q}{\sin \varphi}$

**6.**
$K=\cos \varphi=\frac{P}{S}$



### Ex8
![[Pasted image 20261123150613.png]]{align=block-left}

![[Drawing 2026-11-23 15.06.47.excalidraw]]
$Q_{1}=P_{1}\tan \varphi_{1}=P_{1}\tan(\arccos(0.7))=3061VAR$
$Q_{2}=P_{2}\tan \varphi_{2}=P_{2}\tan(\arccos(0.75))=4410VAR$
$Q_{3}=P_{3}\tan \varphi_{3}=P_{3}\tan(\arccos(0.8))=4410VAR$

| Recepteur                | Puissance Active P (W) | Puissance Réactive Q (VAR) |
| ------------------------ | ---------------------- | -------------------------- |
| Moteur1                  | 3000                   | 3061                       |
| Moteur2                  | 5000                   | 4410                       |
| Les 6 moteurs monophasés | 6 * 2000=12000         | 6 * 1500=9000              |
| 15 Lampes                | 15 * 100=1500          | 0                          |
| **Total**                | 21500                  | 16471                      |
$S_{tot} = \sqrt{ P^2+Q^2 } = 2784 V.A$
$I= \frac{S}{U\sqrt{ 3 }}=39A$
$k=\cos \varphi= \frac{P}{S}=\frac{21500}{27084} = 0.794$

En france, pour 1000W, on autorise Q = 400VAR
Donc $\tan \varphi= \frac{Q}{P}=0.4 \implies \cos \varphi=0.928$

**Bilan des puissances**
Avant le relevement du $\cos \varphi$
- $P=21500V \quad Q=16471\text{VAR}$
Après le relèvement du $\cos \varphi$ à 0.928 ou $\tan \varphi$ à 0.4
- $P'=21500W \quad Q' = P*\tan \varphi = 8600\text{VAR}$
La batterie de condensateur devra fournir 
$Q_{C} = Q'-Q=-7871\text{VAR}$

Donc on ajoute trois condensateurs à notre système triphasé, sois en triangle sois en étoile
**En triangle :**
$Q_{C}=-3 C\omega U^2$
$C_{\Delta}= -\frac{Q_{C}}{3\omega U^2}= \frac{7871}{3*2*\pi *50*400^2} = 5.2 \cdot 10^{-5}F = 52µF$

**En étoile :**
$Q_{C}=-3 C\omega V^2$
$C_{\text{étoile}} = -\frac{Q_{C}}{3\omega V^2}$
$C_{\text{étoile}}= \frac{7871}{3*2*\pi*50*230^2}=157µF$

Donc notre nouveau S : 
$$S'_{T}=\sqrt{ 21500^2+8600^2 }=23156VA$$
$I'= \frac{S'_{T}}{U\sqrt{ 3 }}=33A$

## À retenir
-
## Travail à faire




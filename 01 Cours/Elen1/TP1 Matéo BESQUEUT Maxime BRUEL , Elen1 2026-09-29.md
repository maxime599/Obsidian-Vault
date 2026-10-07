---
semestre: S1
type de cours: TP
date: 2026-09-29T14:50:07
End Date: 2026-09-29T17:50:07
Calendar Title: "[[01 Cours/Elen1/TP1 Matéo BESQUEUT Maxime BRUEL , Elen1 2026-09-29|TP1 Matéo BESQUEUT Maxime BRUEL , Elen1]]"
prof:
tags:
  - cours
  - Elen1
Concepts:
  - "[[Instrumentation et appareils de mesure en électricité]]"
  - "[[Types de régime en électicité]]"
  - "[[Lois fondamentales de l'électricité (Kirchhoff et Ohm)]]"
Ressources:
  - "[[Elen1 TP N°1.pdf]]"
---
![[Q1avecoffset.bmp]]
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
# TP1 Matéo BESQUEUT Maxime BRUEL


## Questions préparatoires
### Q1
![[Elen1 TP N°1.pdf#page=2&rect=67,712,514,748|Elen1 TP N°1, p.2]]
#### Oscilloscope analogique

- Le signal électrique commande directement la déviation d'un faisceau d'électrons.
- Le faisceau forme une courbe sur un tube cathodique (CRT).
- Le signal est visualisé en temps réel, sans conversion numérique préalable
#### Oscilloscope numérique

- Le signal analogique est converti en valeurs numériques grâce à un convertisseur analogique-numérique (CAN).
- Les valeurs sont enregistrées et traitées par l'appareil.
- La courbe reconstruite est affichée sur un écran, généralement LCD ou similaire.



### Q2

![[Elen1 TP N°1.pdf#page=2&rect=67,674,520,710|Elen1 TP N°1, p.2]]
#### Trigger (Déclenchement)

Le Trigger est une fonction de l'oscilloscope qui permet de stabiliser l'affichage du signal en définissant une condition de déclenchement. L'acquisition ou l'affichage commence lorsque le signal atteint un niveau de tension déterminé, selon un front montant ou descendant.

#### Couplage continu (CC ou DC)

Le couplage continu laisse passer la composante continue et la composante alternative du signal. Il permet d'observer la tension totale, y compris son éventuelle valeur moyenne (offset).

#### Couplage alternatif (CA ou AC)

Le couplage alternatif bloque la composante continue du signal et laisse principalement passer sa composante alternative. Il permet d'observer les variations du signal autour de sa valeur moyenne.

#### Acquisition mono coup 

L'acquisition monocoup est un mode de fonctionnement qui permet de capturer et d'enregistrer un signal une seule fois, lorsqu'une condition de déclenchement est satisfaite. Elle est particulièrement utile pour analyser des événements non répétitifs ou très courts.

#### Câble coaxial

Un câble coaxial est un câble électrique constitué d'un conducteur central, d'un isolant, d'un blindage métallique et d'une gaine extérieure. Il permet de transporter des signaux électriques tout en limitant les perturbations électromagnétiques. En électronique, il est couramment utilisé pour relier un générateur de signaux à un oscilloscope.






### Q3

![[Elen1 TP N°1.pdf#page=2&rect=68,633,522,674|Elen1 TP N°1, p.2]]
![[Pasted image 20260917173152.png]]{width=586}






## Série 1 : Utilisation de l’oscilloscope – Couplage – Trigger
### Q1 : Visualisation signal sinus couplage CC
#### Q1.1 : Visualiser et relever le graphe de cette tension sur la voie 1 de l’oscilloscope à l’aide d’un câble BNC
![[Q1avecoffset 1.bmp]]{width=444}
Nous allons à l'aide d'un GBF, généré une tension sinusoïdale de fréquence 1KHz, de 2 V crête à crête sur la voie 1avec Offset de 1V


#### Q1.2 : Commenter ce graphe
Nous voyons que la tension varie de 0V à environ 2.48V, à une fréquence de 1kHz

---

### Q2 : Visualisation signal sinus couplage CC et CA
#### Q2.1 : Sur un même graphe, relever les graphes de la voie 1 (en couplage continu CC) et de la voie 2 (en couplage CA)
![[Q2.1CC,CA 1.bmp]]{align=block-left}



#### Q2.2 : Faire une conclusion
Nous voyons que le signal AC est décalé vers (le bas) de 1V par rapport au signal DC, ce qui correspond à l'offset, qui a été enlevé par l'AC

--- 

### Q3 : Visualisation signal sinus couplage CC et CA
#### Q3.1 : Faire de même avec un signal carré (même offset, fréquence 1000Hz puis 10Hz)


à 10 Hz:![[Q3.bmp]]{align=block-left}

à 1000Hz :![[Q3.1000Hz 2.bmp]]{align=block-left}

#### Q3.2 : Quel autre changement remarquez-vous et pourquoi ?

à 1khz, le signal AC est bien décallé de 1V vers le bas par rapport au signal DC. Mais à 10Hz, on constate que AC essaye tant bien que mal de supprimer la composante continue, mais il le fait mal. En conclusion, on n'utilisera presque jamais le couplage AC


### Q4 : Réglage du « trigger »
#### Q4.1 : Expliquer le rôle du trigger
Le Trigger est une fonction de l'oscilloscope qui permet de stabiliser l'affichage du signal en définissant une condition de déclenchement

#### Q4.2 : Expliquer la façon d’ajuster le trigger
On peut ajuster le triger celon la source ou celon la pente voulue (à revoir)



## Série 2 : Mesures automatiques
### Q5 : Régler le GBF : signal sinus de 100hz, 4 Vcc et Offset de 1 V
#### Q5.1 : Relever :
![[Q4thebest 1.bmp]]


Valeur crête : 3.04V
Valeur crête à crête : 4.08V
Valeur efficace : 1.75V
Valeur moyenne : 0.935V

#### Q5.2 : Commenter les mesures
Valeur crête et valeur crête à crête sont plutôt précises
Valeur efficace théorique = $\frac{3}{\sqrt{ 2 }}=2.12V$, ce qui est différent de la valeur efficace donnée par l'oscilloscope 
Pour la valeur moyenne théorique, est en cencé avoir 1V (ce qui correspond à l'offset), et l'osciloscope nous donne 0.935V


### Q6 : Changer la forme su signal précédent vers un signal carré
### Q6.1 : Rappeler la définition du temps de montée (ou de descente)
Le temps de montée correspond au temps mis par le signal pour passer de sa valeur minimale (pas la valeur la plus basse, mais 0 si nous n'avons pas de composante continue) à la valeur maximale. 

#### Q6.3 : Relever le temps de montée du signal pour différentes valeurs de bases de temps en abscisse 

5 ms / carreau : $16.00µs$![[Q6.3.5ms.bmp]]{align=block-left}
1 ms / carreau : $3.200µs$![[Q6.3.1ms 1.bmp]]{align=block-left}
1 $µs$ / carreau : 19.20ns![[Q6.3.1micros.bmp]]{align=block-left}
10ns / carreau : 18.76ns![[Q6.310ns.bmp]]{align=block-left}


#### Q6.4 : Pourquoi la mesure varie avec la base de temps ?
La mesure varie avec la base de temps car pour mesurer le temps de monté, l'osciloscope utilise ce qu'il voit à l'écran. Si il ne voit pas clairement la variation de la tension (donc si le temps par carreaux est élevé), il va nous donner une valeur érronée. Mais si on zoome, donc si on diminue le temps entre deux carreaux, il pourra voir clairement la tension monté progressivement, et donc nous donner une valeur correcte



#### Q6.5 : Expliquer comment réaliser une mesure correcte de temps de montée
Pour avoir une mesure correcte du temps de montée, il faut zoommer au maximum, tout en ayant toute la monté affiché sur l'écran

#### Q6.6 : Faire cette mesure (insérer un chronogramme avec les valeurs de base temps..)


#### Q6.7 : Réaliser cette mesure en utilisant les curseurs de l’oscilloscope (insérer un chronogramme faisant apparaître les curseurs).
![[Q6.7curseurs.bmp]]

On obtient un $\Delta T = 19.60ns$, ce qui est cohérent

#### Q7 : Acquisition mono-coup
#### Q7.1 : Relever l’oscillogramme de la mise sous tension![[Q7.1.bmp]]{align=block-left}

#### Q7.2 : Mesurer le temps de montée (plusieurs essais seront peut-être nécessaires pour régler correctement la base temps)
On mesure un temps de montée de 0.976ms![[Q7.1,2.bmp]]{align=block-left}
#### Q7.3 : Faire une conclusion de cette manipulation.
Conclusion : il ne peut pas y avoir de variation brusque de tension, il y a forcément un temps de montée non nul


### Q8 : Calculs
#### Q8.1 : En utilisant la loi des mailles et la loi des nœuds, donner l’expression littérale en fonction de E, R1, R2, R3 (sans remplacer par les valeurs numériques) des tensions (U1, U2, U3) et des courants (I1, I2, I3) associés aux résistances

![[Drawing 2026-09-29 16.51.12.excalidraw]]
**Loi des mailles**
$M_{1}: E=U_{1}+U_{3}$
$M_{2} : E=U_{2}+U_{3}$
$M_{3} : U_{1}=U_{2}$

**Lois des noeuds**
$i_{3}=i_{1}+i_{2}$

**Lois d'ohm**
$E=R_{1}i_{1}+R_{3}i_{3}$
$E=R_{2}i_{2}+R_{3}i_{3}$
$R_{1}i_{1}=r_{2}i_{2}$

**Pont diviseur**
$R_{12} = \frac{R_{1}*R_{2}}{R_{1}+R_{2}}$
$U_{3} = E* \frac{R_{3}}{R_{12}+R_{3}}$


**Calcul**
$$U_{3}=R_{3}i_{3} \implies i_{3}=\frac{U_{3}}{R_{3}} = E* \frac{R_{3}}{R_{3}(R_{12}+R_{3})} \implies \boxed{i_{3}= \frac{1}{R_{12}+R_{3}}}$$

$U_{1} = E-U_{3} = E-E* \frac{R_{3}}{R_{12}+R_{3}}$
$U_{2} = E-U_{3} = E-E* \frac{R_{3}}{R_{12}+R_{3}}$

$i_{1} = \frac{U_{1}}{R_{1}} = \frac{E-E* \frac{R_{3}}{R_{12}+R_{3}}}{R_{1}} = \frac{E \, R_{12}}{R_{12}\, R_{1}+ R_{1}\, R_{3}}$
$i_{2} = \frac{U_{1}}{R_{2}} = \frac{E-E* \frac{R_{3}}{R_{12}+R_{3}}}{R_{2}} = \frac{E \, R_{12}}{R_{12}\, R_{2}+ R_{2}\, R_{3}}$


#### Q8.2 : Faire les applications numériques
$R_{12}=\frac{1*10^3}{2} = 500\ohm$



$U_{3} = E* \frac{R_{3}}{R_{12}+R_{3}} = 5* \frac{220}{500+220} = 1.52V$
$U_{1} = E-U_{3} = 5-1.52 = 3.48$
$U_{2}=U_{1}=3.48$



$i_{1}= \frac{E \, R_{12}}{R_{12}\, R_{1}+ R_{1}\, R_{3}} = 3.48mA$
$i_{2}= \frac{E \, R_{12}}{R_{12}\, R_{2}+ R_{2}\, R_{3}} = 3.48mA$
$i_{3} = i_{1}+i_{2}=6.91mA$



- [x] Envoyer à matéo
- [x] Finir et rendre pour samedi
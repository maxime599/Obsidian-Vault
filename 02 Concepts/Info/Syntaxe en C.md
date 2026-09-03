---
type: concept
matière: Info
tags:
  - concepts
MOC:
  - "[[MOC Langage C]]"
date_creation: 2026-09-02
Ressources: "[[Info1_Slides.pdf]]"
---
## L'opérateur div : 

- Il permet d’obtenir le quotient dans la division du contenu d’une variable ou constante entière par celui d’une autre variable ou constante entière et non nulle ! 
- Syntaxe : nom_variable1 div nom_variable2 
- Cette opération retourne un résultat de type entier (le quotient des contenus des deux variables). 
- Ce résultat peut 8 être affecté à une troisième variable qui doit nécessairement être de type entier (appelons là quotient) : quotient←−nom_variable1 div nom_variable2

Ex : 1 div 2 retourne 0



## L'opérateur reste/modulo
- L’opérateur reste permet d’obtenir le reste dans la division du contenu d’une variable ou constante entière par celui d’une autre variable ou constante entière et non nulle ! 
- Syntaxe : nom_variable1 reste nom_variable2 
- Cette opération retourne un résultat de type entier (le reste dans la division euclidienne des contenus des deux variables). 
- Ce résultat peut 9 être affecté à une troisième variable qui doit nécessairement être de type entier (appelons là res 10) : res←−nom_variable1 reste nom_variable2





## Concepts liés

- [[Divisibilité dans Z]]
- [[Types de données élémentaires]]
- [[Variables et constantes en C]]
- 


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

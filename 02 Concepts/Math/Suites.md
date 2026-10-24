---
type: concept
matière: math
tags:
  - concepts
  - math
  - math/suite
MOC:
  - "[[MOC Suite]]"
date_creation: 2026-07-26
---

# Suites

> [!info] Une suite numérique est une fonction définie sur $\mathbb{N}$ ou une partie de $\mathbb{N}$ à valeurs dans $\mathbb{R}$ 
> Donc $\mathbb{N}\rightarrow\mathbb{R}$
> 		$u: n\mapsto u(n)=u_{n}$ 
```dataviewjs
const currentFile = app.workspace.getActiveFile();
const cache = app.metadataCache.getFileCache(currentFile);

if (cache && cache.headings) {
    let toc = "";
    for (let h of cache.headings) {
        // Optionnel : ignorer le tout premier titre niveau 1 si c'est le titre de la note
        if (h.level === 1) continue;
        
        // Calcul de l'indentation selon le niveau du titre (h2, h3, etc.)
        const indent = "    ".repeat(h.level - 2);
        toc += `${indent}- [[#${h.heading}|${h.heading}]]\n`;
    }
    dv.paragraph(toc);
} else {
    dv.paragraph("Aucun titre trouvé dans cette note.");
}
```


## Mode de génération d'une suite

### Suites du type $u_{n} = f(n)$ : suite explicite

*Exemple* : La suite $(u_{n})$ telle que $U_{n} =\sqrt{ n-1 }$ est def pour tout $n \geq 1$
Le terme de rang 2 est $U_{2} =\sqrt{ 2-1 } = 1$


### Suite du type $u_{n+1}=f(U_{n})$ : Suite définie par récurrence

*Exemple* : La suite $(u_{n})$ telle que $\begin{cases}U_{0} = 0.5\\U_{n+1}=\sqrt{ U_{n}+1 }\text{ pour tout }n\geq 0\end{cases}$
La donnée du $1^{er}$ terme et de la relation entre le terme suivant et le terme précédent (on parle de relation de récurrence) définit entièrement la suite $(U_{n})$ et de manière unique

On de que la suite est définie par récurrence





## Sens de variation
- $U_{n}\leq U_{n+1} \rightarrow$ La suite est **Croissante**
- $U_{n}\geq U_{n+1} \rightarrow$ La suite est **Décroissante**
- $U_{n}= U_{n+1} \rightarrow$ La suite est **Constante**




## Cas particuliers
### Suite arithmétique 
C'est une suite définie par récurrence par $U_{n+1}=U_{n}+r,~r\in\mathbb{R}$
**<u>Formule explicite :</u>** 
- $U_{n}=U_{o}+nr$ pour tout $n$ dans $\mathbb{N}$
-  $U_{n}=U_{o}+(n-p)r$ pour tout $n$ dans $\mathbb{N}$ tel que $n\geq p$
<u>Somme de termes consécutifs :</u>

$$=(\text{nb de termes})*\frac{(\text{premier terme}+\text{dernier terme})}{2}$$
$$S_n=\sum_{k=0}^{n}u_k=(n+1)\frac{u_0+u_n}{2}$$





### Suite géométrique  
C'est une suite définie par récurrence par $U_{n+1}=U_{n}*q,~q\in\mathbb{R}$
**<u>Formule explicite :</u>** 
- $U_{n}=U_{o}*q^n$ pour tout $n$ dans $\mathbb{N}$
-  $U_{n}=U_{o}*q^{n-p}$ pour tout $n$ dans $\mathbb{N}$ tel que $n\geq p$
<u>Somme de termes consécutifs :</u>

$$=(1^{er}\text{ termes})*\frac{1-q^{(\text{nb de terme)}}}{1-q}$$

$$S_n=u_0\frac{1-q^{n+1}}{1-q}$$




## Concepts liés

- [[Limite d'une suite]] 
- [[Théorème de comparaison pour les suites]]
- [[Théorème d'encadrement (des gendarmes)]]
- [[Sommes, changements d'indice et sommes télescopiques]]


## 📚 Cours associés

```dataview
TABLE date AS Date, matiere AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```


---
type: concept
matière:
tags:
  - concepts
MOC:
date_creation: <% tp.date.now("YYYY-MM-DD") %>
Ressources:
---

# <% tp.file.title %>

> [!info] Définition courte
> 







## Explication intuitive

Explique le concept avec tes propres mots.









## Fonctionnement

Explique comment ça marche étape par étape.

1. 
2. 
3. 








## Exemple simple

```

```




## Formules / Algorithmes / Propriétés

(si applicable)





## Concepts liés

- [[]] 


## 📚 Cours associés

```dataview
TABLE date AS Date, regexreplace(file.folder, ".*\/", "") AS Matière
FROM "01 Cours"
WHERE contains(file.outlinks, this.file.link)
SORT date_cours ASC
```

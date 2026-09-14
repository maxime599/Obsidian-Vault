
# :FarCalendarDays:Cours du jour 

```dataview
TABLE WITHOUT ID 
	link(file.path, split(file.name, ",")[0]) AS "Cours",
	regexreplace(file.folder, ".*\/", "") AS Matière, prof
FROM "01 Cours"
WHERE dateformat(date, "yyyy-MM-dd") = dateformat(date(today), "yyyy-MM-dd")
SORT date ASC
```


# :OuListCheck: À faire

```dataview
TASK
FROM "01 Cours"
WHERE !completed
GROUP BY regexreplace(file.folder, ".*/", "")
```
- [ ] Elen1 regarder vidéo
- [ ] préparer le tp

# Derniers concepts vus aujourd'hui
```dataview
TABLE WITHOUT ID
    regexreplace(file.folder, ".*\/", "") AS "Matière",
    link(file.path, split(file.name, ",")[0]) AS "Cours",
    concepts AS "Concepts liés"
FROM "01 Cours"
WHERE date >= date(today) - dur(0 days)
SORT date ASC
```


# Derniers concepts vus cette semaine 
```dataview
TABLE WITHOUT ID
    regexreplace(file.folder, ".*\/", "") AS "Matière",
    link(file.path, split(file.name, ",")[0]) AS "Cours",
    concepts AS "Concepts liés"
FROM "01 Cours"
WHERE date >= date(today) - dur(7 days) AND date < date(today) 
SORT date ASC
```



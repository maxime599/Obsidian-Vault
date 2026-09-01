
# :FarCalendarDays:Cours du jour 

```dataview
TABLE regexreplace(file.folder, ".*\/", "") AS Matière, prof
FROM "01 Cours"
WHERE dateformat(date, "yyyy-MM-dd") = dateformat(date(today), "yyyy-MM-dd")
SORT regexreplace(file.folder, ".*\/", "") ASC
```


# :OuListCheck: À faire

```dataview
TASK
FROM "01 Cours"
WHERE !completed
```



# Derniers concepts vus en cours
```dataview
TABLE WITHOUT ID
    rows.matiere AS "Matière",
    rows.file.link AS "Cours",
    rows.concepts AS "Concepts liés"
FROM "01 Cours"
FLATTEN concepts AS concepts
WHERE date >= date(today) - dur(7 days)
GROUP BY matiere
SORT matiere
```

| ETAPES     |   MON PROGRAMME ( s) | 10 EN-TETES ( s)  |
|------------|---------------------:|-------------------|
| clang++ -E |        0.487         |     1.062         |
| clang++ -c |        0.555         |     4.401         |
| complete   |        0.948         |     4.797         |


d'apres le tableau , nous pouvons voir que le temps de compilation complete est toujours superieur au autre. nous savons que clang++ -E s'arrete apres le preprocesseur , clang++ -c lui compile sans rien et renvoir un fichier objet .o ce qui ne renvoir pas un executable dans les 2 cas . tantdis que la compilation complete domine nous pouvons donc conclure que l'etape dominante est celle de l'editions de liens car elle est la seule etape qui n'est realiser que par la compilation complete.

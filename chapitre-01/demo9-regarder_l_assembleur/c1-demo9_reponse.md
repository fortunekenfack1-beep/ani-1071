Grace a l'instruction ;
``` chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ -s bonjour.cpp
````
nous avons creer un fichier appeler bonjour.s  reperer ces differents parties 
* l'etiquette main : main:
* l'appel a printf : callq	__mingw_printf
* la valeur de retour : xorl	%eax, %eax
  le fichier bonjour.s represente l'assembleur lisible.

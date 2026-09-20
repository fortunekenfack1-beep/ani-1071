Grace a l'instruction ;
``` chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ -S bonjour.cpp
````
nous avons creer un fichier appeler bonjour.s  reperer ces differents parties 
* l'etiquette main :
 ```main:                                   # @main
.seh_proc main
# %bb.0:
	pushq	%rbp
	.seh_pushreg %rbp
	subq	$48, %rsp
	.seh_stackalloc 48
	leaq	48(%rsp), %rbp
	.seh_setframe %rbp, 48
	.seh_endprologue
	callq	__main
	movl	$0, -4(%rbp)
	leaq	.L.str(%rip), %rcx
```
* l'appel a printf :
 ```
  callq	__mingw_printf
```
* la valeur de retour : xorl	%eax, %eax

 le fichier bonjour.s represente l'assembleur lisible.

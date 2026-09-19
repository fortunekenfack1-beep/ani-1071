en compilant avec -c  on observe que la compilation se termine avec succes car dans cette situation le compilateur travaille seul et voir donc que la declaration int calculer () ; suffit pour renvoyer un entier .
dans le second cas en compilant sans -c on observe ce message d'erreur :  undefined reference to `calculer()'
clang++: error: linker command failed with exit code 1 (use -v to see invocation) cela est du au fait que sans -c le compilateur travaille avec editeur  de liens car apres le travaille du compilateur , il appel l'editeur de liens pour qu'il fasse egalement son travail et ses ainsi qu'il ne trouve pas le contenu de la fonction et signale une erreur .
en resume dans le premier cas c'est le compilateur qui parle et dans le second l'editeur de liens .

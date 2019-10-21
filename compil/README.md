# Quelques commandes

Compilation d'un binaire :

    g++ main.cpp 

Compilation d'un fichier objet :

    g++ -c foo.cpp

Compilation multi-fichiers :

    g++ main.cpp foo.cpp

Compilation multi-fichiers par objet :

    g++ -c *.cpp
    g++ *.o

Compilation librairie statique :

    g++ *.o
    ar -r libtest.a *.o

Inspecter une librairie statique :

    nm -a libtest.a

Compilation binaire avec librairie :

    g++ main.cpp libtest.a

ou 

    g++ main.cpp -L. -ltest

Compilaton librairie dynamique :

    g++ -o libtest.so -shared *.o
    
Compilation avec chemin d'inclusion :

    g++ -I<path> main.cpp

Compilation avec link d'une librairie :

    g++ -L<path> main.cpp -l<lib>
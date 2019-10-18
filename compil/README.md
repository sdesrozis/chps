# Quelques commandes

* compilation d'un binaire

    g++ main.cpp 

* compilation d'un fichier objet 

    g++ -c foo.cpp

* compilation multi-fichiers

    g++ main.cpp foo.cpp

* compilation multi-fichiers par objet

    g++ -c *.cpp
    g++ *.o

* compilation librairie statique

    g++ *.o
    ar -r libtest.a *.o

* inspecter une librairie statique

    nm -a libtest.a

* compilation binaire avec librairie

    g++ main.cpp libtest.a
ou 

    g++ main.cpp -L. -ltest)

* compilaton librairie dynamique

    g++ -o libtest.so -shared *.o


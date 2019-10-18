# Kit de survie `git` et `CMake`

## Pour démarrer avec `git` 

Quelques ressources :
* Par [wikipedia](https://fr.wikipedia.org/wiki/Git)
* Le [site officiel du projet](https://git-scm.com/)
* dont la [documentation](https://git-scm.com/doc)
* Un [petit guide](https://rogerdudler.github.io/git-guide/index.fr.html)

Ce qui est nécessaire pour ce cours :

### Cloner un dépôt

Pour créer une copie locale d'un dépôt `git` distant :

    git clone https://git[lab|hub].com/<path/to/repository>

### Ajouter / retirer

Pour ajouter un fichier dans l'index de la base :

    git add <path/to/local/file>

Pour retirer un fichier de l'index de la base :

    git rm <path/to/local/file>

### Valider

Pour valider des changements de la base (en local) :

    git commit -m"<message>"

### Envoyer

Pour envoyer les changements (validés) sur le serveur :

    git push

### Mettre à jour

Pour mettre à jour la copie locale :

    git pull

## Pour démarrer avec `CMake`

Quelques ressources :
* Par [wikipedia](https://fr.wikipedia.org/wiki/CMake)
* Le [site officiel du projet](https://cmake.org/)
* dont la [documentation](https://cmake.org/cmake/help/latest/)
* Un [petit guide](http://sirien.metz.supelec.fr/depot/SIR/TutorielCMake/index.html)
* et un [autre officiel](https://cmake.org/cmake-tutorial/)

> La version utilisée ici est la dernière RC 3.16.

### Fichier principal

Voici par exemple un fichier `CMakeLists.txt` permettant la compilation d'un executable `<exe>` avec la norme `c++17` à partir d'une liste de fichiers `<files>` : 

    cmake_minimum_required(VERSION 3.16)

    project(<project> VERSION 1.0 LANGUAGES CXX)

    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    add_executable(<exe> <files>)
 
> Notons qu'il est nécessaire de définir un nom de projet `<projet>` ainsi qu'une version.

### Ajout d'un chemin d'inclusion

Pour ajouter un chemin d'inclusion `<path>` dans la compilation d'un executable `<exe>` :

    target_include_directories(<exe> PRIVATE <path>)

### Ajout d'un librairie 

Pour ajouter une librairie `<library>` à l'édition des liens d'un executable `<exe>` (préalablement défini) :

    target_link_libraries(<exe> <library>)

### Détection des packages

Si le système est administré correctement, i.e. les modules sont dans `/usr/lib` et `/usr/include`, on peut utiliser la commande `find_package`.

Par exemple, pour importer le package `filesystem` de `boost` :

    find_package(Boost 1.67 REQUIRED COMPONENTS filesystem)
    
et pour lier cela à un executable `<exe>` (préalablement défini) :

    target_link_libraries(<exe> Boost::filesystem)
                          
Autre exemple, pour importer les librairies `Python3` :

    find_package(Python3 COMPONENTS Development NumPy)

et pour lier cela à un executable `<exe>` (préalablement défini) :

    target_link_libraries(<exe> Python3::Python Python3::NumPy)

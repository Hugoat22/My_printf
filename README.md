# 🖨️ my_printf

Implémentation personnalisée de la fonction **`printf`** en C.

Ce projet consiste à recréer une version simplifiée de `printf` sans utiliser la fonction standard de la bibliothèque C. L'objectif est de comprendre le fonctionnement du formatage des chaînes et la gestion des différents types de données.

---

# 📌 Objectifs du projet

- Comprendre le fonctionnement interne de `printf`
- Manipuler les **variadic functions (`stdarg.h`)**
- Implémenter différents **flags de format**
- Gérer l'affichage de plusieurs types de données
- Travailler la modularité du code en C

---

# ⚙️ Fonctionnement

La fonction principale du projet est :

```c
int my_printf(const char *format, ...);
```

Elle analyse la chaîne format et remplace les spécificateurs de format par les valeurs correspondantes passées en argument.

Exemple :

```c
my_printf("Hello %s, number %d\n", "world", 42);
```

Sortie :

```bash
Hello world, number 42
```

📄 Description des fichiers
Fichier	Description
my_printf.c	Fonction principale qui parse la chaîne de format
flag_char.c	Gestion du flag %c
flag_str.c	Gestion du flag %s
flag_str_print.c	Impression de chaînes
flag_int.c	Gestion des entiers %d
flag_int_sig.c	Gestion des entiers signés
flag_binary.c	Conversion en binaire %b
flag_octal.c	Conversion en octal %o
flag_hex_min.c	Hexadécimal minuscule %x
flag_hex_maj.c	Hexadécimal majuscule %X
flag_pointeur.c	Affichage des pointeurs %p
flag_pourcentage.c	Affichage du caractère %

🧾 Spécificateurs supportés
Flag	Description
%c	caractère
%s	chaîne de caractères
%d	entier
%i	entier signé
%b	binaire
%o	octal
%x	hexadécimal minuscule
%X	hexadécimal majuscule
%p	pointeur
%%	affiche %

👨‍💻 Auteur

Projet réalisé dans le cadre d'un apprentissage du langage C et de la programmation système.

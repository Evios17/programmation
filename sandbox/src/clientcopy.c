//Préprocessus principaux
#include <stdio.h>

//Préprocessus pour socket
#include <string.h>

//Palette de couleur
#define RESET               "\x1b[0m"
#define NOIR                "\x1b[30m"
#define NNOIR               "\x1b[1;30m"
#define ROUGE               "\x1b[31m"
#define NROUGE              "\x1b[1;31m"
#define VERT                "\x1b[32m"
#define NVERT               "\x1b[1;32m"
#define JAUNE               "\x1b[33m"
#define NJAUNE              "\x1b[1;33m"
#define BLEU                "\x1b[34m"
#define NBLEU               "\x1b[1;34m"
#define MAGENTA             "\x1b[35m"
#define NMAGENTA            "\x1b[1;35m"
#define CYAN                "\x1b[36m"
#define NCYAN               "\x1b[1;36m"
#define BLANC               "\x1b[37m"
#define NBLANC              "\x1b[1;37m"

//Palette d'arrière plan
#define SROUGE               "\x1b[41m"
#define SVERT                "\x1b[42m"
#define SJAUNE               "\x1b[43m"
#define SBLEU                "\x1b[44m"
#define SMAGENTA             "\x1b[45m"
#define SCYAN                "\x1b[46m"
#define SBLANC               "\x1b[47m"



void menu() {
  puts("");
  puts("╦══════════════════════════════════════════════════════════════╦");
  puts("╬                          " VERT "BlackShip" RESET "                           ╬");
  puts("╬══════════════════════════════════════════════════════════════╬");
  puts("╬ " NNOIR "Description :" RESET "                                                ╬");
  puts("╬                                                              ╬");
  puts("╬ " NNOIR " - Bienvenu dans BlackShip, un bataille navale solo ou " RESET "      ╬\n╬ " NNOIR "   multi joueurs jouable dans un terminal en ligne" RESET "           ╬");
  puts("╬ " NNOIR "   de commande." RESET "                                              ╬");
  puts("╬ " NNOIR " - Ce jeu a été réalisé en C dans le cadre d'un projet" RESET "       ╬\n╬ " NNOIR "   d'apprentissage universitaire." RESET "                            ╬");
  puts("╩══════════════════════════════════════════════════════════════╩");

  puts("");
  puts("Veuillez choisir votre mode de jeux :");
  puts(NNOIR "[" VERT "1" NNOIR "] Lancer une partie en solo");
  puts("[" VERT "2" NNOIR "] Lancer une partie en multi-joueurs" RESET);

  int num1;
  puts("");
  printf("=> "JAUNE);
   scanf("%d", &num1); 

  puts(""RESET);
  puts("Veuillez choisir votre une option :");
  puts(NNOIR"[" VERT "1" NNOIR "] Héberger la partie");
  puts("[" VERT "2" NNOIR "] Rejoindre une partie" RESET);

  int num2;
  puts("");
  printf("=> "JAUNE);
  scanf("%d", &num2);
  puts(""RESET);
}


int main(void){
  menu();

  return 0;
}
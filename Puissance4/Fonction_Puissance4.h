#ifndef DEF_PUISSANCE
#define DEF_PUISSANCE

#define LARGEUR 7
#define HAUTEUR 6
#define J1 'X'
#define J2 'O'
#define UNDER '_'
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int NouvellePartie(int partie, char **Tab_Puissance, int Saisie, int Base);
int OccurenceChaine(char **Tab_Puissance);
int Condition(char **Tab_Puissance, int Saisie, int Base);
int VerifCase(char **Tab_Puissance, int Base, int Saisie);

#endif
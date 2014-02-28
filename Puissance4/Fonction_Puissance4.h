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
#include<stddef.h>

int OccurenceChaine(char (*Tab_Puissance)[7]);
int Condition(char (*Tab_Puissance)[7], int Saisie, int Base);
int VerifCase(char (*Tab_Puissance)[7], int Base, int Saisie);
void AffichagePuissance4(char (*Tab_Puissance)[7]);

#endif
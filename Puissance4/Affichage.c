#include"Affichage.h"


int Affichage(int choix, int confirmation, int partie)
{
	do
	{
		printf("\n\n               ----------------------------------------------------\r\n");						
		printf("               |     Que voulez-vous faire ?                      |  \r\n");			
		printf("               ----------------------------------------------------\r\n");
		printf("               ----- Quitter                               [0]----- \r\n");
		printf("               ----- Nouvelle Partie                       [1]----- \r\n");
		printf("               ----- Charger une partie                    [2]----- \r\n");
		printf("               ----- Regle du jeu                          [3]----- \r\n");
		partie = 0;
		if(partie = 1)
		{
		printf("               ----- Sauvegarder la partie                 [4]----- \r\n");
		printf("               ----- Reprendre la partie                   [5]----- \r\n");
		}
		printf("               ----------------------------------------------------\r\n");
		scanf("%d", &choix);
		switch(choix)
		{
		case 0 :
				return 0;
		case 1 :

				printf("Vous vous vraiment faire une nouvelle partie ?\n(0 = Non / 1 = Oui) : ");
				scanf("%d", &confirmation);
				if (confirmation == 1)
				{
					choix=1;
					return choix;
					break;
				}
				else if (confirmation == 0)
				{
					system("pause");
					system("cls");
					break;
				}
				
				break;
		case 2 : 
					choix=2;
					return choix;
					break;
		case 3 :
				printf("Le but du Puissance 4 est d'aligner 4 pions sur une grille comptant 6 rangees et 7 colonnes.");
				printf("\nChaque joueur dispose de 21 pions d'une couleur .");
				printf("\nTour a tour les deux joueurs placent un pion dans la colonne de leur choix,");
				printf("\nle pion coulisse alors jusqu'a la position la plus basse possible dans ladite colonne a la suite de quoi");
				printf("\nc'est a l'adversaire de jouer. Le vainqueur est le joueur");
				printf("\nqui realise le premier un alignement (horizontal, vertical ou diagonal)"); 
				printf("\nd'au moins quatre pions de sa couleur. Si, alors que toutes les cases de la grille de jeu sont remplies,"); 
				printf("\naucun des deux joueurs n'a realise un tel alignement, la partie est declaree nulle.\n\n");
				system("pause");
				system("cls");
				choix=3;
				return choix;
				break;
		case 4 :
				choix=4;
				return choix;
				break;
		case 5 : 
				choix=5;
				return choix;
				break;
		default :
				printf("Mauvais choix\r\n");
				system("pause");
				break;
		}
	
	} while (choix != 0);
	printf("Au revoir !");
	printf("\r\n__________________________________________\r\n");
	system("pause");
}
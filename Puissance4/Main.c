#include"Main.h"


int main()
	{
	int i=0;
	int j=0;
	int choix = 0;
	int partie = 0;
	int confirmation = 0;
	char **Tab_Puissance[6][7] = {{0}};
	int Saisie = 0;
	int Base = 0;
	printf("Bienvenue !");
	system("pause");
	system("cls");


	//j = 0;
	//partie = 1; 
	//do
	//{
	//	for (i = 0; i < HAUTEUR; i++){
 //			Tab_Puissance[i][j] = UNDER;
	//	}
	//	i = 0;
	//	j++;
	//} while (j < LARGEUR);


	//i=0;
	//j=0;
	//
	//	
	//for (i = 5; i >= 0; i--){
	//	for (j = 6; j >= 0 ; j--)
	//	{
	//		printf("|%c", Tab_Puissance[i][j]);
	//	}
	//	printf("|\n");
	//	j=0;
	//}

	Affichage(choix, confirmation, partie);

	if(choix = 1);
	{
		int i = 0;
		int j = 0;
	

		j = 0;
		partie = 1; 
		do
		{
			for (i = 0; i < HAUTEUR; i++){
				Tab_Puissance[i][j] = UNDER;
			}
			i = 0;
			j++;
		} while (j < LARGEUR);


		do
		{
			for (i = 5; i >= 0; i--){
				for (j = 6; j >= 0 ; j--)
				{
					printf("|%c", Tab_Puissance[i][j]);
				}
				printf("|\n");
				j=0;
			}
			//AffichagePuissance4(Tab_Puissance);
			printf("|7|6|5|4|3|2|1|\n");
		
			printf("\nAu Joueur 1 de jouer : ");
			scanf("%d", &Saisie);
			Saisie = Saisie - 1;
			VerifCase(Tab_Puissance, Base, Saisie);
			Tab_Puissance[Base][Saisie] = J1;
			Condition(Tab_Puissance, Saisie, Base);

			system("pause");
			system("cls");

			for (i = 5; i >= 0; i--){
				for (j = 6; j >= 0 ; j--)
				{
					printf("|%c", Tab_Puissance[i][j]);
				}
				printf("|\n");
				j=0;
			}
			printf("|7|6|5|4|3|2|1|\n");
			printf("\nAu Joueur 2 de jouer : ");
			scanf("%d", &Saisie);
			Saisie = Saisie - 1;
			VerifCase(Tab_Puissance, Base, Saisie);
			Tab_Puissance[Base][Saisie] = J2;
			Condition(Tab_Puissance, Saisie, Base);
			system("pause");
			system("cls");
		} while (OccurenceChaine(Tab_Puissance) == 1 || Condition(Tab_Puissance, Saisie, Base) == 1);
	}
}
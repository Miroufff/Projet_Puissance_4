#include"Fonction_Puissance4.h"

int NouvellePartie(int partie, char **Tab_Puissance, int Saisie, int Base)
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
		printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[5][0], Tab_Puissance[5][1], Tab_Puissance[5][2], Tab_Puissance[5][3], Tab_Puissance[5][4], Tab_Puissance[5][5], Tab_Puissance[5][6]);
		printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[4][0], Tab_Puissance[4][1], Tab_Puissance[4][2], Tab_Puissance[4][3], Tab_Puissance[4][4], Tab_Puissance[4][5], Tab_Puissance[4][6]);
		printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[3][0], Tab_Puissance[3][1], Tab_Puissance[3][2], Tab_Puissance[3][3], Tab_Puissance[3][4], Tab_Puissance[3][5], Tab_Puissance[3][6]);
		printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[2][0], Tab_Puissance[2][1], Tab_Puissance[2][2], Tab_Puissance[2][3], Tab_Puissance[2][4], Tab_Puissance[2][5], Tab_Puissance[2][6]);
		printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[1][0], Tab_Puissance[1][1], Tab_Puissance[1][2], Tab_Puissance[1][3], Tab_Puissance[1][4], Tab_Puissance[1][5], Tab_Puissance[1][6]);
		printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[0][0], Tab_Puissance[0][1], Tab_Puissance[0][2], Tab_Puissance[0][3], Tab_Puissance[0][4], Tab_Puissance[0][5], Tab_Puissance[0][6]);
		printf("|1 |2 |3 |4 |5 |6 |7 |\n");
		
		printf("\nAu Joueur 1 de jouer : ");
		scanf("%c", Saisie);
		Saisie = Saisie - 1;
		VerifCase(Tab_Puissance, Base, Saisie);
		Tab_Puissance[Base][Saisie] = J1;
		Condition(Tab_Puissance, Saisie, Base);

		printf("\nAu Joueur 2 de jouer : ");
		scanf("%c", Saisie);
		Saisie = Saisie - 1;
		VerifCase(Tab_Puissance, Base, Saisie);
		Tab_Puissance[Base][Saisie] = J2;
		Condition(Tab_Puissance, Saisie, Base);
		system("pause");
		system("cls");
	} while (OccurenceChaine(Tab_Puissance) == 1 || Condition(Tab_Puissance, Saisie, Base) == 1);
}

int OccurenceChaine(char **Tab_Puissance)
{
	int i = 0;
	int j = 0;
	int valeur = 0;

	while (i < HAUTEUR && j < LARGEUR)
	{
		while (Tab_Puissance[i][j] == UNDER)
		{

			valeur++;
			j++;
			if(valeur > 0)
			{
				return 1;
			}
		}
	i++;
	}
	return 0;
}

int Condition(char **Tab_Puissance, int Saisie, int Base)
{
	int i = 0;
	int j = 0;
	int point = 0;
	
	if (Tab_Puissance[Base][Saisie] == Tab_Puissance[Base][Saisie + i])
	{
		do
		{
			point++;
			i++;
		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base][Saisie + i]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;
		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base][Saisie - i]) && (point <4));
	}
	
	if (point == 4)
	{
		return 1;
	}

	point = 0;
	
	if (Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie])
	{
		do
		{
			point++;
			i++;
		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;
		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base - i][Saisie]) && (point <4));
	}

	if (point == 4)
	{
		return 1;
	}

	point = 0;

	if (Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie])
	{
		do
		{
			point++;
			i++;
		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;
		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base - i][Saisie]) && (point <4));
	}
	
	if (point == 4)
	{
		return 1;
	}

	point = 0;

	if (Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie + i])
	{
		do
		{
			point++;
			i++;

		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie + j]) && (point <4));

		i = 0;
		j = 0;
		do
		{
			point++;
			i++;

		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base - i][Saisie - j]) && (point <4));
	}
		
	if (point == 4)
	{
		return 1;
	}

	point = 0;

	if (Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie])
	{
		do
		{
			point++;
			i++;
			j++;

		} while((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base + i][Saisie - i]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;
			j++;

		} while ((Tab_Puissance[Base][Saisie] == Tab_Puissance[Base - i][Saisie + i]) && (point <4));
	}
	if (point == 4)
	{
		return 1;
	}
}

int VerifCase(char **Tab_Puissance, int Base, int Saisie)
{
	Base = 0;
	while (Tab_Puissance[Base][Saisie] == UNDER)
	{
		if (Tab_Puissance[Base][Saisie] != 'X' || Tab_Puissance[Base][Saisie] != 'O')
		{
			return 1;
		}
		else
		{
			Base = Base + 1;
		}
	}
}

#include"Fonction_Puissance4.h"

//int NouvellePartie(int partie, char **Tab_Puissance, int Saisie, int Base)
//{
//	
//}

void AffichagePuissance4(char (*Tab_Puissance)[7])
{
	int i=5;
	int j=6;
		
	for (i = 5; i >= 0; i--){
		for (j = 6; j >= 0 ; j--)
		{
			printf("|%c", Tab_Puissance[i][j]);
		}
		printf("|\n");
		j=6;
	}
}

//printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[5][0], Tab_Puissance[5][1], Tab_Puissance[5][2], Tab_Puissance[5][3], Tab_Puissance[5][4], Tab_Puissance[5][5], Tab_Puissance[5][6]);
//printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[4][0], Tab_Puissance[4][1], Tab_Puissance[4][2], Tab_Puissance[4][3], Tab_Puissance[4][4], Tab_Puissance[4][5], Tab_Puissance[4][6]);
//printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[3][0], Tab_Puissance[3][1], Tab_Puissance[3][2], Tab_Puissance[3][3], Tab_Puissance[3][4], Tab_Puissance[3][5], Tab_Puissance[3][6]);
//printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[2][0], Tab_Puissance[2][1], Tab_Puissance[2][2], Tab_Puissance[2][3], Tab_Puissance[2][4], Tab_Puissance[2][5], Tab_Puissance[2][6]);
//printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[1][0], Tab_Puissance[1][1], Tab_Puissance[1][2], Tab_Puissance[1][3], Tab_Puissance[1][4], Tab_Puissance[1][5], Tab_Puissance[1][6]);
//printf("|%c|%c|%c|%c|%c|%c|%c|\n", Tab_Puissance[0][0], Tab_Puissance[0][1], Tab_Puissance[0][2], Tab_Puissance[0][3], Tab_Puissance[0][4], Tab_Puissance[0][5], Tab_Puissance[0][6]);

int OccurenceChaine(char (*Tab_Puissance)[7])
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

int Condition(char (*Tab_Puissance)[7], int Saisie, int Base)
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
	return 0;
}

int VerifCase(char (*Tab_Puissance)[7], int Base, int Saisie)
{
	Base = 0;
	do
	{
		if (Tab_Puissance[Base][Saisie] != UNDER)
		{
			Base = Base + 1;
		}
		else
		{
			return 1;
		}
	} while (Tab_Puissance[Base][Saisie] != UNDER);
	return 0;
}

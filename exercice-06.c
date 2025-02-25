/*
question : Ecrire un programmme en langage C qui lit deux tableau d' entiers A et B et leur dimenton N et M 
au clavier et qui ajoute les elements de B àla fin de A .

algorithme ajouter_les_elements_B_a_la_fin_de_A
variable
	A : tableau entier 100 ;
	B : tableau entier 100 ;
	N,M,i,j : entier ;
debut
	i <- 0 ;
	faire
		i++ ;
		si (i >  3 )
			fin ;
		sinon
			ecrire (" Veuillez choisir la dimenton du tableau compirs entre  1 à 100 \n\n");
			ecrire (" Veuiller entrer la dimention du premier tableau : ");
			lire ("%d", &N);
			ecrire (" Veuiller entrer la dimention du deuxieme tableau : ");
			lire ("%d", &M);
		}	
	}tantque((((N< 1) || (N >100)) && ((M < 1) || (M >100))) || (((N > 0 || (N <=100)) && ((M < 1) || (M >100))) || (((N< 1) || (N >100)) && ((M >= 1) || (M <=100)))));

	ecrire (" \n\n Du premier tableau , Veuillez sairir des nombres :\n");
	for ( i <-  0 ; i < N ; i++)
		ecrire (" \tA[",i,"] = ");
		lire (A[i]);
	finpour

	ecrire ("\n\n Les elements dans le tableau A sont :");

	pour ( i <-  0 ; i < N ; i++)
		printf ("\n\tA[",i,"] =", A[i]);
	finpour

	ecrire (" \n\n Du deuxieme tableau , Veuillez saire des nombres :\n");

	for ( j <-  0 ; j < M ; j++)
		ecrire (" \tB[",j,"] = ");
		scanf (B[j]);
	finpour

	ecrire ("\n\n Les elements dans le tableau B sont:");

	pour ( j <-  0 ; j < M ; j++)
		printf ("\n\tB[",j,"] =",B[j]);
	finpour

	i <-  N ;
	pour ( j <-  0 ; j <= M -1; j++ )
		A[i] <-  B[j];
		i++ ;
	finpour

	ecrire (" \n\n Les elements dans le tableau A devient  : ");

	pour ( i <-  0 ; i <= (N + M -1) ; i++)
		ecrire ("\n\tA[",i,"] =",A[i] );
	finpour

fin

*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
		//int T[100] ;
	int A[100] ;
	int B[100];
	int N,M,i,j;//,k;

	i = 0 ;
	do
	{
		i++ ;
		if (i >  3 )
		{
			exit (0);
		}
		else 
		{
			printf (" Veuillez choisir la dimention du tableau compirs entre  1 à 100 \n\n");
			printf (" Veuiller entrer la dimention du premier tableau : ");
			scanf ("%d", &N);
			printf (" Veuiller entrer la dimention du deuxieme tableau : ");
			scanf ("%d", &M);
		}	
	}while((((N< 1) || (N >100)) && ((M < 1) || (M >100))) || (((N > 0 || (N <=100)) && ((M < 1) || (M >100))) || (((N< 1) || (N >100)) && ((M >= 1) || (M <=100)))));

	printf ("\n Du premier tableau , Veuillez sairir des nombres :\n");
	for ( i = 0 ; i < N ; i++)
	{
		printf (" \tA[%d] = ", i);
		scanf ("%d",&A[i]);
	}
	printf ("\n\n Les elements dans le tableau A sont :");
	for ( i = 0 ; i < N ; i++)
	{
		printf ("\n\tA[%d] = %d", i , A[i]);
	}

	printf (" \n\n Du deuxieme tableau , Veuillez saire des nombres :\n");
	for ( j = 0 ; j < M ; j++)
	{
		printf (" \tB[%d] = ", j);
		scanf ("%d",&B[j]);
	}
	printf ("\n\n Les elements dans le tableau B sont:");
	for ( j = 0 ; j < M ; j++)
	{
		printf ("\n\tB[%d] = %d", j , B[j]);
	}

	i = N ;
	for ( j = 0 ; j <= M -1; j++ )
	{
		A[i] = B[j];
		i++ ;
	}

	printf (" \n\n Les elements dans le tableau A devient  : ");

	for ( i = 0 ; i <= (N + M -1) ; i++)
	{
		printf ("\n\tA[%d] = %d", i , A[i] );
	}
	return (0);
}
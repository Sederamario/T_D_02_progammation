/*
question : Ecrire un porgramme en langage C qui la determine la plus grande et la plus patite valeur dans 
un tableau d' entier A . afficher ensuite la valeur et la position du maximum et du minimum . Si le tableau 
contient plusieur maxima ou minima , le programme retiendra la position du  premier maximum ou minimum
rencontré 

algorithme  
variable 
		T : tableau entier 50 ;
		i , a , max , min , position1 , position2 : entier ;
		
debut 
	
	i <- 0 ;
	faire  
		i++ ;
		si ( i > 3)
			fin;
		sinon
			ecrire (" Veuillez choisir la dimention compris entre 1 à 50\n\n");
			ecrire (" Choisser une dimention :");
			lire (a);
		}
	}tantque ((a < 1) ou (a >50)) ;

	pour ( i <- 0 ; i < a ; i++)
		ecrire ("\tA[",i,"]=");
		scanf (A[i]);
	finpour

	ecrire ("\n Vous avez choisis ",a," dimention , ce sont :\n" );
	
	pour ( i <- 0 ; i < a ; i++)
		ecrire ("\tA[",i,"] = ", A[i],"\n");
	finpour
	
	min <- A[0] ;
	pour ( i <- 1 ; i < a ; i++)
		si (A[i]  < min )
			min  <- A[i] ;
			position1 <- i ;
		finsi
	finpour

		max <- A[0] ;
	pour ( i <- 1 ; i < a ; i++)
		si (A[i] > max )
			max <- A[i] ;
			position2  <- i ;
		finsi
	finpour

	ecrire (" \n Le  minimum de cet tableau est ",min," et il est dans la position ", position1 );
	ecrire ("\n\n Le maximum de cet tableau est ",max," et il est dans la position ", position2 );

fin

*/
#include <stdio.h>
#include <stdlib.h>
/*
#define taille 50
*/
int main ()
{
	int A[50] ; /* int T[taille] ; */
	int i , a , max , min , position1 , position2;

	i=0 ;
	do 
	{
		i++ ;
		if ( i > 3)
		{
			exit (0);
		}
		else 
		{
			printf (" Veuillez choisir la dimention compris entre 1 à 50\n");
			printf (" Choisser une dimention :");
			scanf ("%d", &a);
		}
	}while ((a < 1) || (a >50)) ;

	for ( i = 0 ; i < a ; i++)
	{
		printf ("\tA[%d]=",i);
		scanf ("%d",&A[i]);
	}

	printf ("\n Vous avez choisis %d dimention , ce sont :\n", a );
	
	for ( i = 0 ; i < a ; i++)
	{
		printf ("\tA[%d] = %d\n", i , A[i]);
	}
	
	min = A[0] ;
	for ( i = 1 ; i < a ; i++)
	{
		if (A[i]  < min )
		{
			min = A[i] ;
			position1 = i ;
		}
	}

		max = A[0] ;
	for ( i = 1 ; i < a ; i++)
	{
		if (A[i] > max )
		{
			max = A[i] ;
			position2  = i ;
		}
	}

	printf (" \n Le  minimum de cet tableau est %d et il est dans la position %d  ", min , position1 );
	printf ("\n\n Le maximum de cet tableau est %d et il est dans la position %d  ", max , position2 );

	return (0);
}
/*
Question :rangeer ensuit les elements du tableau T dans l'ordre inverse . Aficher le tableau résultant .

algorithme Afichage_des_elements_du_tableau_T_dans_l'_ordre_inverse_Aficher_le_tableau_résultant .
variable 
		T : tableau entier 50 ;
		j , i , a : entier ;

debut 
	i <- 0 ;
	faire 
		i++ ;
		si (i >  3 )
			fin;
		else
			ecrire (" Veuillez choisir la dimention compris entre 1 à 50 .\n\n");
			ecrire (" Veuillez saisir votre choix sur la dimention du tableau : ");
			lire (a);
		finsi

	}tantque ((a < 1) ou (a >50)) ;
	
	pour ( i <- 0 ; i < a ; i++)
		ecrire ("\tT[",i,"]=");
		lire (T[i]);
	finpour

	ecrire("\n Vous avez choisis ",a," dimention ce sont :\n");
	
	pour ( i <- 0 ; i < a ; i++)
		ecrire ("\t",T[i]);
	finpour
 
	ecrire ("\n\n Le tableau T à l' ordre inverse est :\n");

	si (( a % 2) = 0 )

		j <- a - 1 ;
		pour ( i <- 0 ; i <(a/2)  ; i++)
			temp  <- T[i] ;
			T[i] <- T[j] ;
			T[j] <- temp ;
			j--;
	 	finpour
	else 
	 	j <- a - 1 ;
	 	pour ( i <- 0 ; i < (( a - 1)/2) + 1 ; i++)
	 		if ( i = j )
	 			T[i] = T[j];
	 		else 
	 			temp  <- T[i] ;
				T[i] <- T[j] ;
				T[j] <- temp ;
	 		finsi
	 		j--;
	 	finpour
	finsi

	pour ( i <- 0 ; i < a ; i++)
		printf (" \tT[",i,"] =",T[i] );
	finpour

fin 

*/
#include <stdio.h>
#include <stdlib.h>
/*
#define taille 50
*/
int main ()
{
	int T[50] ; /* int T[taille] ; */
	int i , a , j , temp  ;

	i = 0 ;
	do
	{
		i++ ;
		if (i >  3 )
		{
			exit (0);
		}	
		printf ("Veuillez choisir la dimention compris entre 1 à 50 .\n\n");
		printf ("Veuillez saisir votre choix sur la dimention du tableau : ");
		scanf ("%d", &a);

	}while ((a < 1) || (a >50)) ;

	for ( i = 0 ; i < a ; i++)
	{
		printf ("\tT[%d]=",i);
		scanf ("%d",&T[i]);
	}
	printf ("\n Vous avez choisis %d dimention, ce sont :\n", a );
	
	for ( i = 0 ; i < a ; i++)
	{
		printf ("\t%d ",T[i]);
	}

	printf ("\n\n Le tableau T à l' ordre inverse est: \n");

	if (( a % 2) == 0 )
	{

		j = a - 1 ;
		for ( i = 0 ; i <(a/2)  ; i++)
		{
			temp  = T[i] ;
			T[i] = T[j] ;
			T[j] = temp ;
			j--;
	 	}
	}
	else 
	{
	 	j = a - 1 ;

	 	for ( i = 0 ; i < (( a - 1)/2) + 1 ; i++)
	 	{
	 		if ( i == j )
	 		{
	 			T[i] == T[j];
	 		}
	 		else 
	 		{
	 			temp  = T[i] ;
				T[i] = T[j] ;
				T[j] = temp ;
	 		}
	 		j--;
	 	}
	}

	for ( i = 0 ; i < a ; i++)
	{
		printf (" \tT[%d] = %d", i , T[i]);
	}

	return (0);
}

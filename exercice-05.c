/*
Question :rangeer ensuit les elements du tableau T dans l'ordre inverse . Aficher le tableau résultant .

algorithme Afichage_des_elements_du_tableau_T_dans_l'_ordre_inverse_Aficher_le_tableau_résultant .
variable 
		T : tableau entier 50 ;
		TF : tableau entier 50 ;
		i , a : entier ;

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

	j <- a - 1 ;
	pour ( i <- 0 ; i < a ; i++ )
			TF[j] <- T[i] ;
			j-- ;
	finpour

	ecrire ("\n\n Le tableau T à l' ordre inverse est :\n");

	pour ( j <- 0 ; j < a ; j++ )
			ecrire("\t",TF[j] );
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
	int TF[50] ; /* int TF[taille] ; */
	int i , a , j ;
	
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
	j = a - 1 ;
	for ( i = 0 ; i <= a ; i++)
	{
		TF[j] = T[i] ;
		j--  ;
 	}
 	printf ("\n\n Le tableau T à l' ordre inverse est : \n");

 	for ( j = 0 ; j < a ; j++)
 	{
 		printf ("\t%d",TF[j]);
 	}

	return (0);
}
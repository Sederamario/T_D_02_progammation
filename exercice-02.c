/*
question: Afficher la valeur maximum du tableau T et indiquer sa position 

algorithme  Afficher_la_valeur_maximum_indiquer_sa_position 
variable 
		T : tableau entier 100 ;
		i , a , max , position : entier ;
		
debut 

	i <-  0 ;
	fiare
		i++ ;
		si (i >  3 )
			fin ;
		else	
			ecrire (" Veuillez choisir la dimention compris entre 1 à 50 .\n\n");
			ecrire (" Veuillez saisir votre choix sur la dimention du tableau : ");
			lire (a);
		finsi
	tantque ((a < 1) ou (a >50)) ;

	pour (i <-  0 ; i < a ; i++ )
		 ecrire ("\tT [",i,"] = ");
		 lire ( T[i]);
	finpour 

	printf ("\n Vous avez choisis ",a," dimention, ce sont :\n");
	
	pour ( i <-  0 ; i < a ; i++)
		ecrire ("\t",T[i]);
	finour

	max <- T[0] ;
	pour (i <-  0 ; i < a ; i++)
		si( T[i] > maax ) 
			max <- T[i];
			position <- i ; 
	finpour 

	ecrire (" \n Le maximum de cet tableau est ",max ,"et il est dans la position ", position);

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
	int i , a , max , position ;

	i = 0 ;
	do
	{
		i++ ;
		if (i >  3 )
		{
			exit (0);
		}	
		printf (" Veuillez choisir la dimention compris entre 1 à 50 .\n\n");
		printf (" Veuillez saisir votre choix sur la dimention du tableau : ");
		scanf ("%d", &a);

	}while ((a < 1) || (a >50)) ;

	for ( i = 0 ; i < a ; i++)
	{
		printf ("T[%d]=",i);
		scanf ("%d",&T[i]);
	}

	printf ("\n Vous avez choisis %d dimention, ce sont :\n", a );
	
	for ( i = 0 ; i < a ; i++)
	{
		printf ("\t%d",T[i]);
	}

	max = T[0] ;
	for ( i = 1 ; i < a ; i++)
	{
		if (T[i] > max )
		{
			max = T[i] ;
			position  = i  ;
		}
	}
	
	printf (" \n\n Le maximum de cet tableau est %d et il est dans la position %d  ", max , position );
	
	return (0);

}
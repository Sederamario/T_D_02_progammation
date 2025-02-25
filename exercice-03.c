/*
question : effacer ensuite tooutes les concurens de la valeure zero dans le tableau T et 
tasser les elements restants.

algorithme effacement_des_concures_de_la_valeur_0_et_tasser_les_elements_restants 
variable 
		T : tableau entier 50 ;
		i , a : entier ;

debut 

	i <- 0 ;
	faire
		i++ ;
		si (i >  3 )
			fin ;
		else
			ecrire (" Veuillez choisir la dimention compris entre 1 à 50 .\n\n");
			ecrire (" Veuillez saisir votre choix sur la dimention du tableau : ");
			lire (a);
		finsi
	tantque ((a < 1) ou (a >50)) ;
	
	pour ( i <- 0 ; i < a ; i++)
		ecrire ("\tT[",i,"]=");
		lire (T[i]);
	finpour

	ecrire ("\n Vous avez choisis ",a," dimention, ce sont :\n");
	
	pour ( i <-  0 ; i < a ; i++)
		ecrire (\tT[i] );
	finpour

	ecrire ("\n\n Le nouveau tableau sans la valeure de zero sont : \n");
	
	pour ( i <- 0 ; i < a ; i++ )
		si ( T[i] <>  0 )
			ecrire (\tT[i]);
		finsi
	finpour

fin

*/
#include <stdio.h>
#include<stdlib.h>
/*
#define taille 50
*/
int main ()
{
	int T[50] ; /* int T[taille] ; */
	int i , a  ;

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
		printf ("\tT[%d]=",i);
		scanf ("%d",&T[i]);
	}

	printf ("\n Vous avez choisis %d dimention, ce sont :\n", a );
	
	for ( i = 0 ; i < a ; i++)
	{
		printf ("\t%d",T[i]);
	}

	printf (" \n\n Le nouveau tableau sans la valeure de zero sont : \n");
	
	for ( i = 0 ; i < a ; i++ )
	{
		if ( T[i] != 0 )
		{
			printf ("\t%d",T[i]);
		}
	}

	return (0);
}
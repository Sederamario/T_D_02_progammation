/*tableau de 50 dimention, remplissage de tableau, somme des element du tableau 

algorithme somme_des_entiers_1_a_50_dimentions 
variable 
		T : tableau entier 50 ;
		i , a : entier ;
		s : eniter ;
debut

	i <- 0 ; 
	fiare
		i++ ;
		si (i > 3)
			fin ;
		else 
			ecrire (" Veuillez choisir la dimention compris entre 1 à 50 .\n\n");
			ecrire (" Veuillez saisir votre choix sur la dimention du tableau : ")
			lire (a);
		finsi 
	tantque ((a < 1) ou (a >50)) ;

	printf (" \n\n Veuillez entrer des nombres : \n");

	pour (i <- 0 ; i < a ; i++ )
		 ecrire ("\tT [",i,"] = ");
		 lire ( T[i]);
	finpour 

	ecrire ("\n\n Vous avez choisis ",a ,"dimention, ce sont :\n");

	pour ( i <- 0 ; i < a ; i++)
		ecrire  ("\t",T[i]);
	finpour

	s <- 0 ;
	pour (i <-  0 ; i < a ; i++)
		s <- s + T[i];
	finpour 
	ecrire ("\n\n La somme de ces nombres est ", s);

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
	int i , a , s ;

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

	printf (" \n\nVeuillez entrer des nombres :\n");

	for ( i = 0 ; i < a ; i++)
	{
		printf ("\tT[%d]=",i);
		scanf ("%d",&T[i]);
	}

	printf ("\nVous avez choisis %d dimention ce sont :\n", a);

	for ( i = 0 ; i < a ; i++)
	{
		printf ("\t%d",T[i]);
	}

	s = 0;
	for ( i = 0 ; i < a ; i++)
	{
		s = s + T[i];
	}
	printf ("\n\nLa sommes de ces nombres est %d",s );

	return (0);
}
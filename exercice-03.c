/*
question : Metter tous les valeures zeros à la fin du tableau T et puis afficher le tableau T .

algorithme   Metter_tous_les_valeures_zeros_a_la_fin_du_tableau_T_et_puis_afficher_le_tableau_T .
variable 
		T : tableau entier 50 ;
		i , j , a : entier ;

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
	
	j <- 0 ;
	pour ( i <- 0 ; i < a ; i++ )
		if ( T[i]  <> 0 ) 
			T[j]  <- T[i] ;
			j++ ; 
		 finsi
	finpour 

	pour ( i <- j ; i < a ; i++ )
		T[i] <- 0 ;
	finpour

	pour ( i <- 0 ; i < a ; i++)
		ecrire (" T[",i,"] =",T[i] );
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
		
	j = 0 ;
	for ( i = 0 ; i < a ; i++ )
	{
		if ( T[i]  != 0 ) 
		{
			T[j]  = T[i] ; 
	
			j++ ; 
		 }
	}

	for ( i = j ; i < a ; i++ )
	{
		T[i] = 0 ;
	}

	for( i = 0 ; i < a ; i++)
	{
		printf (" T{%d} = %d ", i , T[i]);
	}

	return (0);
}

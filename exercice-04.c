/*

question :copier ensuite toutes les composants strictements positives dans un dausieme tableau TPOS 
et toutes les valeurs strictements negatifs dans un trosieme tableau TNEG. Afficher le tableau TPOS et PNEG .

algorithme somme_des_entiers_1_a_50_dimentions 
variable 
		T : tableau entier 50 ;
		TPOS: tableau entier 50 ;
		TNEG: tableau entier 50 ;
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
		scanf (T[i]);
	finpour

	ecrire("\n Vous avez choisis ",a," dimention, ce sont :\n");
	
	pour ( i <- 0 ; i < a ; i++)
		ecrire ("\t",T[i]);
	finpour

	ecrire (" \n\n Le nouveau tableau sans la valeure de zero sont : \n");

	pour ( i <- 0 ; i < a ; i++ )
		si ( T[i] <> 0 )
			printf (\tT[i]);
		finsi
	finpour

	j <- 0 ;
	ecrire ("\n\n Les valeurs negatifs dans cet tableau sont :\n ");
	pour ( i <- 0 ; i < a ; i++ )
		si ( T[i] < 0 )
			TNEG[j] <- T[i] ;
			printf ("\tTNEG[",j,"]=",TNEG[j],"\n");
			j++ ;
		finsi
	finpour

	k <- 0 ;
	ecrire ("\n Les valeurs positifs dans cet tableau sont :\n ");
	pour ( i <- 0 ; i < a ; i++ )
		si ( T[i] > 0 )
			TPOS[k] <- T[i];
			ecrire ("\tTPOS[",k,"]=",TPOS[k],"\n");
			k++ ;
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
	int TPOS[50] ;
	int TNEG[50] ;
	int i , a , k , j , max , position1, position2 ;

		i = 0 ;
	do
	{
		i++ ;
		if (i >  3 )
		{
			exit (0);
		}	
		printf (" Veuillez choisir la dimention compris entre 1 à 50 .\n\n");
		printf (" Veuillez saisir votre choix sur le dimention du tableau : ");
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

	j = 0 ;
	printf (" \n\n Les valeurs negatifs dans cet tableau :\n ");
	for ( i = 0 ; i < a ; i++ )
	{
		if ( T[i] < 0 )
		{
			TNEG[j] = T[i] ;
			printf ("\tTNEG[%d]= %d \n", j , TNEG[j]);
			j++ ;
		}
	}

	k = 0 ;
	printf ("\n Les valeurs positifs dans cet tableau :\n ");
	for ( i = 0 ; i < a ; i++ )
	{
		if ( T[i] > 0 )
		{
			TPOS[k] = T[i];
			printf ("\tTPOS[%d]=%d \n ", k , TPOS[k]);
			k++ ;
		}
	}

	return (0);
}
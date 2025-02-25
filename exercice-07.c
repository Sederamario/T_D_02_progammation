/*
Question : Ecrire un programme en lengage C qui calcule la produite scalaire de deux vecteur U et V (de meme dimention )

algorithme produit_scalaire_de_deux_vecteurs_U_et_V
variable   
		U : tableau entier 100 ;;
		V : tableau entier 100 ;
		N,i,j,k,s : entier ;

debut 
	i <- 0 ;
	faire  
		i++;
		si ( i > 3)
			fin ;
		sinon
			ecrire (" Veuillez choisir le nombre d'élément du tableau compirs entre  1 à 100 \n");
			ecrire (" Veuillez  entrer la dimention du tableau : ");
			lire (N);		
		finsi
	}tantque ((N < 1) ou (N >50)) ;

	ecrire ("\n Veuillez saisir les coordonées du vecteur U  :\n");

	pour ( i <- 0 ; i < N ; i++)
		ecrire ("\tU[",i,"] = ");
		scanf (U[i]);
	finpour

	ecrire ("\n Les coordonées du vecteur U sont  :");

	pour ( i <- 0 ; i < N ; i++)
		ecrire  ("\n\tU[",i+1,"] =", U[i]);
	finpour

	ecrire ("\n\n Veuillez saisir les coordonées du vecteur V :\n");
	
	pour ( j <- 0 ; j < N ; j++)
		ecrire (" \tV[",j,"] = ");
		lire (V[j]);
	finpour

	ecrire ("\n Les coordonées du vecteur V sont :");

	pour ( j <- 0 ; j < N ; j++)
		ecrire ("\n\tV[",j+1,"] = ", V[j]);
	finpour

	s <- 0 ;
	for ( k <- 0 ; k < N ; k++ )
	{
		s <- s + (U[k] * V[k]) ;
	}
	printf (" \n\n Le produit scalaire de vecteur U et V est ", s );

fin
*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int U[100] ;
	int V[100];
	int N,i,j,k,s;
	i = 0 ;
	do 
	{
		i++;
		if ( i > 3)
		{
			exit (0);
		}
		else
		{
			printf (" Veuillez choisir la dimention du tableau compirs entre  1 à 100 \n");
			printf (" Veuillez  entrer la dimention du tableau : ");
			scanf ("%d", &N);		
		}
	}while ((N < 1) || (N >50)) ;
	
	printf ("\n Veuillez saisir les coordonées du vecteur U  :\n");

	for ( i = 0 ; i < N ; i++)
	{
		printf ("\tU[%d] = ", i);
		scanf ("%d",&U[i]);
	}

	printf ("\n Les coordonées dans le vecteur U sont  :");

	for ( i = 0 ; i < N ; i++)
	{
		printf ("\n\tU[%d] = %d", i + 1 , U[i]);
	}

	printf ("\n\n Veuillez saisir les coordonées du vecteur V :\n");
	
	for ( j = 0 ; j < N ; j++)
	{
		printf (" \tV[%d] = ", j);
		scanf ("%d",&V[j]);
	}

	printf ("\n Les coordonées dans le vecteur V sont :");

	for ( j = 0 ; j < N ; j++)
	{
		printf ("\n\tV[%d] = %d", j + 1, V[j]);
	}

	s = 0 ;
	for ( k = 0 ; k < N ; k++ )
	{
		s = s + (U[k] * V[k]) ;
	}
	printf (" \n\n Le produit scalaire de vecteur U et V est %d ", s );

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 18:12:17 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/12 18:58:54 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ( int argc, char** argv )
{
	int nombreMystere = 0, nombreEntre = 0;
	int dif;
	int MAX = 0, MIN = 1;
	int compteur;

	dif	= 0;
	compteur = 0;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

	/* La boucle du programme. Elle se répète tant que l'utilisateur
	   n'a pas trouvé le nombre mystère */
	if (MAX == 0)
	{
		printf("choisissez la difficulté");
		scanf("%d", &dif);
	}
	if (dif == 1)
		MAX = 100;
	if (dif == 2)
		MAX = 1000;
	if (dif == 3)
		MAX = 10000;
	do
	{
		// On demande le nombre
		printf("Quel est le nombre ? ");
		scanf("%d", &nombreEntre);

		// On compare le nombre entré avec le nombre mystère

		if (nombreMystere > nombreEntre)
			printf("C'est plus !\n\n");

		else if (nombreMystere < nombreEntre)
			printf("C'est moins !\n\n");
		else
			printf ("Bravo, vous avez trouve le nombre mystere en %d coups  !!!\n\n", compteur);
		compteur++;
	} while (nombreEntre != nombreMystere);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 18:12:17 by mmercier          #+#    #+#             */
/*   Updated: 2014/12/15 00:19:22 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
	int nombreMystere = 0, nombreEntre = 0;
	int dif;
	int MAX = 100, MIN = 1;
	int compteur;
	int intrejouer;

	dif	= 0;
	compteur = 0;
	intrejouer = 1;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

	while (intrejouer == 1)
	{
		while (dif == 0 && dif != 1 && dif !=2 && dif !=3)
		{
			printf("choisissez la difficulte\n");
			scanf("%d", &dif);
			if (dif > 3)
			{
				printf ("choisir un chiffre entre 1 et 3\n");
				dif = 0;
			}
		}
		if (dif == 1)
			MAX = 100;
		if (dif == 2)
			MAX = 1000;
		if (dif == 3)
			MAX = 10000;
		
		nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
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
		intrejouer = 0;
		dif = 0;
		while (intrejouer !=1 && intrejouer !=2)
		{
			printf("voulez vous rejouer? 1 pour oui 2 pour non\n");
			scanf("%d", &intrejouer);
			if (intrejouer == 0 || intrejouer > 2)
				printf("Erreur\n");
		}
	}

	return (intrejouer);
}

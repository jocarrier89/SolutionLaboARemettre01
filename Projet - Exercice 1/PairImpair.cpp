//But: �crire un programme qui d�termine si un entier est pair ou impair
//Auteur: Jonathan Carrier
//Date: 10-09-2020


#include <iostream> // On indique au programme le coffre � outil qu'il utilisera pour interagir avec l'utilisateur


void main()            // Indique l'emplacement du texte du programme principal
{
	setlocale(LC_ALL, "");             // Ceci converti correctement les caract�res accentu�s sur la console Windows

	// ici, c'est le d�but du programme o� l'on d�clare les variables

	int nombre1;
	int somme;

	// le programme invite l'utilisateur � entrer la donn�e en nombre1

	std::cout << "Veuillez entrer un nombre entier : ";
	
	// le programme va lire les informations entr�es au clavier par l'utilisateur

	std::cin >> nombre1;

	// Le programme divise le nombre par deux pour d�terminer s'il est pair

	somme = nombre1 % 2;

    // Le programme divise le nombre en 2 pour v�rifier si son modulo est de plus de 0

	if ( somme == 1)        //Si le modulo du nombre est de 1 il est impair
	{
		
		std::cout << nombre1 << " est un nombre impair";

    }

	else //Si le modulo du nombre est de 0 le nombre est pair
	{
		std::cout << nombre1 << " est un nombre pair";

	}
	 /*                       PLAN DE TEST
	                           Pair                             Impair
	     1                                                         x
	     7                                                         x
	     6                      x
	     8                      x
	     12345678               x
	 
	 */

}
//But: Afficher des nombres verticalement
//Auteur: Jonathan Carrier
//Date: 10-09-2020


#include <iostream> // intègre le coffre à outils pour communiquer avec l'utilisateur


void main() // Liste les paramètres éventuels
{
	setlocale(LC_ALL, ""); // Permet d'intégrer les caractères accentués	

	int number;   // Dénote les multiples variables du programme
	
	

	std::cout << "Veuillez entrez un nombre contenant 5 chiffres : "; // Le message qui apparait à l'écran de l'utilisateur

	std::cin >> number;     // Représente la variable entrée par l'utilisateur
	
	int numero5 = number  % 10  ;  // le modulo de number devrait donner le chiffre recherché
	int numero4 = number / 10 % 10 ; // la variable divisé en 10 modulo 10 devrait donner le chiffre de la dizaine
	int numero3 = number / 100  % 10 ; // devrait donner le chiffre de la centaine
	int numero2 = number / 1000 % 10 ; //devrait donner le chiffre des milliers
	int numero1 = number / 10000  ; // devrait donner le chiffre de la centaine de millier&
	
	if (number>=10000) // si le chiffre est en dessous de 10 000, automatiquement il contiendra moins de 5 chiffres
	{
		std::cout << numero1  << std::endl; // veut terminer une ligne par chacune des variables
		std::cout << numero2  << std::endl;
	    std::cout << numero3  << std::endl;
		std::cout << numero4  << std::endl;		
		std::cout << numero5  << std::endl;
	}
	else // SI, ne fonctionne pas, alors :
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres"; // lorsque le chiffre ne contient pas 5 chiffres, ce message apparait.

	}

	


}
#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>
int main()
{
	std::map<std::string, int> mymap;

	std::string mystring;
	int puntuacion;

	while (true) 
	{
		std::cout << "Introduce el nombre del jugador o escribe -Exit- para salir " << std::endl;
		std::cin >> mystring;
		if (mystring == "Exit")
			break;
		std::cout << "Introduce la puntuacion del jugador" << std::endl;
		std::cin >> puntuacion;

		mymap.insert(std::pair<std::string, int>(mystring, puntuacion));


	}

	std::cout << std::endl << "****************LEADERBOARD****************" << std::endl;

	for (auto it = mymap.begin(); it != mymap.end(); ++it)
	{
		std::cout << it->first << " "<<it->second<<std::endl;
	}


    return 0;
}


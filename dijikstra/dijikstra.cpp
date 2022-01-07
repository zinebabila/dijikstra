// dijikstra.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Graphe.h"


int main()
{

	Graphe A(6);
	A.addSommet(1, 2, 1);
	A.addSommet(1, 3, 2);
	A.addSommet(2, 1, 1);
	A.addSommet(2, 4, 5);
	A.addSommet(2, 5, 1);
	A.addSommet(3, 1, 2);
	A.addSommet(3, 4, 2);
	A.addSommet(3, 5, 3);
	A.addSommet(4, 2, 5);
	A.addSommet(4, 3, 2);
	A.addSommet(4, 5, 2);
	A.addSommet(4, 6, 2);
	A.addSommet(5, 2, 1);
	A.addSommet(5, 3, 3);
	A.addSommet(5, 4, 2);
	A.addSommet(5, 6, 1);
	A.addSommet(6, 4, 2);
	A.addSommet(6, 5, 1);
	A.Dijkstra(1, 3);


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

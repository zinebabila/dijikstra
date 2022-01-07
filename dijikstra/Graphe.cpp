#include "Graphe.h"

Graphe::Graphe(int nbr_sommet)
{
	this->n = nbr_sommet;
}

void Graphe::addSommet(int u, int v, int dist)
{
	this->mp[u].push_back(make_pair(v, dist));
}
int* cree_tabD(int nmbr, int max)
{

    int* dist = new int[nmbr];
    for (int i = 1; i <= nmbr; i++)
    {
        dist[i] = max;
    }
    return dist;
}
void Graphe::Dijkstra(int depart, int des)
{
    int* dist = cree_tabD(this->n,100); // creation de tableau de sistance
    int* prec =cree_tabD(this->n, 0); // creation de tableau des precedents (0 pas de precedents )

    set<pair<int, int> > ensemble; 
    ensemble.insert(make_pair(0, depart)); // ensemble de depart
    dist[depart] = 0;

    while (!ensemble.empty()) // tanque il y a des sommets à traiter
    { 
        pair<int, int> now = *ensemble.begin();
        ensemble.erase(ensemble.begin());

        int sommet = now.second; 
        int distance = now.first; 

        const vector<pair<int, int> >& Suivants = this->mp[sommet]; // on prend les suivants de chaque sommets

        for (auto to : Suivants) 
        {
            // to.second est la distance entre le sommet courants et les autres sommets suivants
            if (distance + to.second < dist[to.first])
            { // si il y a une distance plus petites on suprimme l'ancienne paire 
                ensemble.erase(make_pair(dist[to.first], to.first));
                dist[to.first] = distance + to.second; // modification de distance
                prec[to.first] = sommet; // modification de precedent
                ensemble.insert(make_pair(dist[to.first], to.first)); // insertion de nouveau pair
            }
            
        }
       
    }
    // affichage du plus court chemin
    cout << "le plus court chemin entre " << depart << " et " << des << endl;
    int i = des; 
    // tanque le sommet a des precedents 
    while (prec[i]!=0)
    {
        cout << i << "(" << dist[i] << ") --> ";
        i = prec[i];
    }
    // affichage de points de départ
    cout << i << "(" << dist[i] << ") " << endl;
}
void Graphe::Print()
{
    for (auto to : this->mp)
    { 
        cout << "--->le sommet " << to.first << endl;
        for (auto i : to.second)
            cout << "le sommet " << i.first << " distance " << i.second << endl;
    
    }
       

}

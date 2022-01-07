#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <fstream>
#include <map>
#include <set>
using namespace std;

class Graphe
{
private:
    int n;
    map<int, vector<pair<int, int> > > mp;
public:
    Graphe(int nbr_sommet);
    void addSommet(int u, int v, int dist);
    void Dijkstra(int u, int des);
    void Print();

};


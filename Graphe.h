#ifndef GRAPHE_H
#define GRAPHE_H
#include "node.h"
#include <string>
#include <vector>

using namespace std;
class Graphe
{
    public:
        Graphe();
        Graphe(vector<Node> nodes);
        void addNode(Node N);
        vector<Node> getNoeuds();
        void addArc(Node A,Node B);
        Graphe deleteNode(int i);

        //string Adj(string inf_node,int i);
        int size_graph();
        int SearchNoeudByInfo(string info);
        void DFS(int j);
        //void Arcs_to_strings(vector<string> art_points);
        int CFC();
        vector<Node> art_point();
        //void to_png();
        void Arcs_to_strings(vector<Node> art_points);

    protected:

    private:
        vector<Node> noeuds;
        vector<bool> visite;
};

#endif // GRAPHE_H


#include "Graphe.h"
#include <fstream>
#include <iostream>

Graphe::Graphe()
{

}
Graphe::Graphe(vector<Node> nodes)
{
    noeuds=nodes;
}
void Graphe::addNode(Node N)
        {
            noeuds.push_back(N);
        }
void Graphe::addArc(Node A,Node B)
        {
            int a=SearchNoeudByInfo(A.getInfo());
            int b=SearchNoeudByInfo(B.getInfo());
            noeuds[a].addSuccessor(B);
            noeuds[b].addSuccessor(A);
        }
vector<Node> Graphe::getNoeuds(){return noeuds;}

Graphe Graphe::deleteNode(int i){
    vector<Node> ns=noeuds;

    string info=noeuds[i].getInfo();

    ns.erase(ns.begin()+i);

    //std::cout << "je suis la ns" << ns[2].getInfo()<< std::endl;
    Graphe g(ns);

    return g;

}
int Graphe::size_graph(){return noeuds.size();}
int Graphe::SearchNoeudByInfo(string info){
    for(int i=0;i<noeuds.size();i++){
        if(noeuds[i].getInfo()==info){
            return i;
        }
    }
}
void Graphe::DFS(int j){
    noeuds[j].setVisited();

    for(int i=0; i<noeuds[j].getSuccessor().size();i++){

        int n=SearchNoeudByInfo(noeuds[j].getSuccessor()[i].getInfo());
        if(!noeuds[n].isVisited()){

            DFS(n);
        }

    }

}

int Graphe::CFC(){
    int nombre=0;
    for(int i=0;i<noeuds.size();i++){

        noeuds[i].unVisited();


    }
    for(int i=0;i<noeuds.size();i++){

        if(!noeuds[i].isVisited()){

            DFS(i);
            nombre++;
        }
    }
    return nombre;
}

vector<Node> Graphe::art_point(){
    vector<Node> articul={};

    for(int i=0;i<noeuds.size();i++){

        Graphe g1=deleteNode(i);
        std::cout << g1.CFC() <<CFC()<< std::endl;
        if (g1.CFC()>CFC()){
            articul.push_back(noeuds[i]);

        }

    }

    return articul;
}


void Graphe::Arcs_to_strings(vector<Node> art_points)
{
    ofstream myfile("./graph.dot");
    vector<string> dejaTrit={};

    myfile << "graph G { \n";
    for (int i=0;i<noeuds.size();i++)
    {

        myfile << noeuds[i].getInfo() <<"\n";
        for(int j=0;j<noeuds[i].getSuccessor().size();j++){
            bool trait=false;
            dejaTrit.push_back(noeuds[i].getInfo());
            for(int c =0; c<dejaTrit.size();c++){
                if(noeuds[i].getSuccessor()[j].getInfo()==dejaTrit[c]) {trait=true;break;}
            }
             if(!trait){

                 myfile << noeuds[i].getInfo()<<"--"<<noeuds[i].getSuccessor()[j].getInfo() <<"\n";
             }
        }
    }


    for (int i=0;i<art_points.size();i++) {
        myfile << art_points[i].getInfo() << " [fillcolor=green,style=filled]" << "\n";
    }

    myfile << "}";
    myfile.close();
}

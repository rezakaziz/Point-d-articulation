#include "node.h"

Node::Node()
{

}

Node::Node(string inf)
{
    info=inf;
    visite=false;
}

Node::Node(string inf, vector<Node> Succs)
{
    info=inf;
    Successors=Succs;
    visite=false;
}

void Node::setInfo(string inf)
{
    info=inf;
}

void Node::setVisited(){
    visite=true;
}
void Node::unVisited(){
    visite=false;
}
bool Node::isVisited(){
    return visite;
}

void Node::addSuccessor(Node S)
{
    Successors.push_back(S);
}
void Node::addSuccessors(vector<Node> S)
{
    Successors=S;
}

string Node::getInfo(){return info;}
vector<Node> Node::getSuccessor(){return Successors;};

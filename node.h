#ifndef NODE_H
#define NODE_H
#include <string>
#include <vector>
using namespace std;
class Node
{
public:
    Node();
    Node(string inf);
    Node(string inf, vector<Node> Succs);
    void setInfo(string inf);
    void setVisited();
    void unVisited();
    bool isVisited();
    void addSuccessor(Node S);
    void addSuccessors(vector<Node> S);
    string getInfo();
    vector<Node> getSuccessor();
private:
    string info;
    bool visite;
    vector<Node> Successors;
};

#endif // NODE_H

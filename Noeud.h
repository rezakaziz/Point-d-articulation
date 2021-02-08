/*#ifndef NOEUD_H
#define NOEUD_H

#include <string>
#include <vector>


class Noeud
{
public:
    Noeud(string inf);
    Noeud(string inf, vector<Noeud> Succs);

    void setInfo(string inf);
    void setVisited();
    bool isVisited();
    void addSuccessor(Noeud S);
    void addSuccessors(vector<Noeud> S);
    string getInfo();
    vector<Noeud> getSuccessor();
    private:
        string info;
        bool visite;
        vector<Noeud> Successors;
};
#endif // NOEUD_H
*/

#include "fenetre.h"
#include "ui_fenetre.h"
#include <iostream>
#include <string.h>




using namespace std;

void split(const string& s, char c,vector<Node>& v) {
   string::size_type i = 0;
   string::size_type j = s.find(c);
   if (j == string::npos)
      v.push_back(s.substr(i, s.length()));
   while (j != string::npos) {
        Node n(s.substr(i, j-i));
      v.push_back(n);
      i = ++j;
      j = s.find(c, j);

      if (j == string::npos)
         v.push_back(s.substr(i, s.length()));
   }
}
void split(const string& s, char c,vector<string>& v) {
   string::size_type i = 0;
   string::size_type j = s.find(c);
   if (j == string::npos)
      v.push_back(s.substr(i, s.length()));
   while (j != string::npos) {

      v.push_back(s.substr(i, j-i));
      i = ++j;
      j = s.find(c, j);

      if (j == string::npos)
         v.push_back(s.substr(i, s.length()));
   }
}

void Fenetre::AddNoeudClicked()
{
    string noeudsStr;
    noeudsStr=ui->noeudListe->toPlainText().toUtf8().constData();
    vector<Node> noeuds;
    split(noeudsStr,',',noeuds);
    for(int i=0;i<noeuds.size();i++)g.addNode(noeuds[i]);

}
void Fenetre::AddArcClicked()
{
    string ArcStr;
    ArcStr=ui->ArcListe->toPlainText().toUtf8().constData();
    vector<string> arcs;
    split(ArcStr,',',arcs);
    for(int i=0;i<arcs.size();i++){
        vector<string> noeuds;
        split(arcs[i],'-',noeuds);
        int n1=g.SearchNoeudByInfo(noeuds[0]);
        int n2=g.SearchNoeudByInfo(noeuds[1]);
        g.addArc(g.getNoeuds()[n2],g.getNoeuds()[n1]);
    }
}
void Fenetre::SolutionClick(){
    vector<Node> art=g.art_point();

    g.Arcs_to_strings(art);

    std::system(".\\debug\\graph\\dot -Tpng .\\graph.dot -o graph.png");
    ui->GrapheIm->setPixmap( QPixmap( ".\\graph.png" ) );

    ui->GrapheIm->setScaledContents( true );
    ui->GrapheIm->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

   /* QPixmap *pixmap_img = new QPixmap(".\\graph.png");
         ui->GrapheIm->setPixmap(*pixmap_img);
*/

    //std::system(".\\graph.png");

}
Fenetre::Fenetre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fenetre)
{
    ui->setupUi(this);

    connect(ui->AddNoeud, SIGNAL(clicked()), this, SLOT(AddNoeudClicked()));
    connect(ui->AddArc, SIGNAL(clicked()), this, SLOT(AddArcClicked()));
    connect(ui->Solution, SIGNAL(clicked()), this, SLOT(SolutionClick()));
}

Fenetre::~Fenetre()
{
    delete ui;
}

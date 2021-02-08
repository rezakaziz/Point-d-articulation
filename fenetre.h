#ifndef FENETRE_H
#define FENETRE_H

#include <QDialog>
#include "Graphe.h"
namespace Ui {
class Fenetre;
}

class Fenetre : public QDialog
{
    Q_OBJECT

public:
    explicit Fenetre(QWidget *parent = nullptr);

    ~Fenetre();
public slots:
    void AddNoeudClicked();
    void AddArcClicked();
    void SolutionClick();
private:
    Ui::Fenetre *ui;
    Graphe g;
};

#endif // FENETRE_H

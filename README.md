# Point-d-articulation
Il s'agit d'un TP pour la programmation des graphes. Dans le cadre de ce TP il nous ai demandé d'implementer un algorithme pour la recherche des points d'articulation d'un graphe. Un point d'articulation est un noeud telque si on l'enleve on augmente le nombre de composantes connexe.
J'ai choisi de realiser ce TP en C++ pour des raisons d'apprentissage.
# Comment ca marche?
Ce TP est realisé en utilisant Qt et graphviz pour l'affichage de graphe.
Pour cela on entre la liste des noeuds separé par des virgules (ou bien entrer un noeud a la fois) puis appuyer sur AddNoeud. apres ca on entre la liste des arcs sous la forme N1-N2 (séparé par des virgules ou ajouter un arc a la fois) puis appuyer sur addArc. Une fois c'est fait on appuie sur generer solution et on voit notre graphe s'afficher avec les pooint d'articulation coloré en vert.

# Point-d-articulation

## Description
Ce projet est un TP réalisé dans le cadre de l'apprentissage de la **programmation des graphes**. Il s'agit d'implémenter un algorithme pour trouver les **points d'articulation** d'un graphe en **C++**, en utilisant **Qt** pour l'interface utilisateur et **Graphviz** pour l'affichage visuel du graphe.

Un **point d'articulation** est un nœud d'un graphe tel que si on le retire, le nombre de **composantes connexes** du graphe augmente.

---

## Fonctionnalités
- Ajout interactif des **nœuds** du graphe.
- Ajout des **arcs** entre les nœuds.
- Affichage visuel du graphe avec **Graphviz**.
- Identification et mise en évidence des **points d'articulation** (colorés en vert).

---

## Technologies utilisées
- **Langage** : C++
- **Framework** : Qt
- **Visualisation** : Graphviz

---

## Installation
1. Assurez-vous d'avoir installé **Qt** et **Graphviz** sur votre machine.
2. Clonez le projet :
   ```bash
   git clone <lien_du_repository>
   cd Point-d-articulation
   ```
3. Compilez le projet avec votre environnement Qt.
4. Exécutez l'application.

---

## Utilisation
1. **Ajout des nœuds** : 
   - Entrez les noms des nœuds séparés par des virgules (par exemple : `A,B,C`) ou un nœud à la fois.
   - Cliquez sur **AddNoeud**.
2. **Ajout des arcs** :
   - Entrez les arcs sous la forme `N1-N2` séparés par des virgules (par exemple : `A-B,B-C`) ou un arc à la fois.
   - Cliquez sur **AddArc**.
3. **Génération de la solution** :
   - Cliquez sur **Générer solution**.
   - Le graphe s'affichera avec les **points d'articulation** colorés en vert.

---

## Exemple
### Entrée :
- **Nœuds** : `A,B,C,D,E`
- **Arcs** : `A-B,B-C,C-D,C-E`

### Résultat :
Le graphe affichera les nœuds `B` et `C` en vert, car ce sont les points d'articulation.

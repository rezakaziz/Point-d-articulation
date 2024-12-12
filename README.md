# Articulation Points

## Description
This project is a practical assignment for learning **graph programming**. It involves implementing an algorithm to find **articulation points** in a graph using **C++**, with **Qt** for the user interface and **Graphviz** for visualizing the graph.

An **articulation point** is a node in a graph such that if it is removed, the number of **connected components** in the graph increases.

---

## Features
- Interactive addition of **nodes** to the graph.
- Addition of **edges** between nodes.
- Visual display of the graph using **Graphviz**.
- Identification and highlighting of **articulation points** (colored in green).

---

## Technologies Used
- **Language**: C++
- **Framework**: Qt
- **Visualization**: Graphviz

---

## Installation
1. Ensure that **Qt** and **Graphviz** are installed on your machine.
2. Clone the project:
   ```bash
   git clone <repository_link>
   cd Point-d-articulation
   ```
3. Compile the project using your Qt environment.
4. Run the application.

---

## Usage
1. **Adding nodes**:
   - Enter the names of the nodes separated by commas (e.g., `A,B,C`) or add one node at a time.
   - Click **AddNoeud**.
2. **Adding edges**:
   - Enter edges in the form `N1-N2` separated by commas (e.g., `A-B,B-C`) or add one edge at a time.
   - Click **AddArc**.
3. **Generate solution**:
   - Click **Generate Solution**.
   - The graph will be displayed with **articulation points** highlighted in green.

---

## Example
### Input:
- **Nodes**: `A,B,C,D,E`
- **Edges**: `A-B,B-C,C-D,C-E`

### Result:
The graph will display nodes `B` and `C` in green, as they are the articulation points.

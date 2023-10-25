#include <iostream>
#include <vector>
#include "Graph.hpp"
#include "Vector.hpp"

int main() {
    Graph graph;

    // Adicione alguns pontos ao gráfico
    Vector2 point1 = {2, 3};
    Vector2 point2 = {5, 1};
    Vector2 point3 = {8, 4};
    graph.AddPoint(point1);
    graph.AddPoint(point2);
    graph.AddPoint(point3);

    // Exiba o gráfico na tela
    graph.DisplayGraph();

    return 0;
}
// Graph.h
#include "Vector.hpp"
#ifndef GRAPH_HPP
#define GRAPH_HPP


// Definição da classe Graph
class Graph {
public:
    Vector2 size;
    Vector2 points[9]; // Tamanho máximo do gráfico é 9X9
    int count;

    // Construtor
    Graph();

    // Método para adicionar um novo ponto ao gráfico
    void AddPoint(Vector2 point);

    // Método para exibir o gráfico em forma de arte ASCII
    void DisplayGraph();
};

#endif // GRAPH_H
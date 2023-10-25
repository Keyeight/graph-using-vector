#include <iostream>
#include <vector>
#include "Vector.hpp"
#include "Graph.hpp"

    // Construtor
    Graph::Graph() {
        count = 0;
        size.x = 9;
        size.y = 9;
    }

    // Método para adicionar um novo ponto ao gráfico
    void Graph::AddPoint(Vector2 point) {
        if (count < 10) {
            this->points[count] = point;
            count++;
        }
    }

    // Método para exibir o gráfico em forma de arte ASCII
    void Graph::DisplayGraph() {
        for (int i = size.y; i >= 0; i--) {
            std::cout << i;
            for (int j = 0; j <= size.x; j++) {
                bool isPoint = false;
                for (int k = 0; k < count; k++) {
                    if (points[k].x == j && points[k].y == i) {
                        isPoint = true;
                        break;
                    }
                }
                if (isPoint) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
        std::cout << " ";
        for (int j = 0; j <= size.x; j++) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
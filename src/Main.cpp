/**
 * @file        Main.cpp
 * @author      Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @author      Tayanne Ferreira da Rocha (tayaneferreiradarocha@gmail.com)
 * @brief       Implements interface between user and algorithm.
 * @version     0.1
 * @date        2019-06-10
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include "../include/Graph.h"

using namespace graphs;

int main()
{
    // [1] Creating dummy vertices and edges
    
    Vertex v1(1);
    Vertex v2(2);
    Vertex v3(3);
    Vertex v4(4);
    Vertex v5(5);

    // [2] Adding adjacent vertices
    
    v1.add_adjacent_vertex(v2);
    v1.add_adjacent_vertex(v3);
    v1.add_adjacent_vertex(v4);
    v1.add_adjacent_vertex(v5);

    v2.add_adjacent_vertex(v3);
    v2.add_adjacent_vertex(v4);
    v2.add_adjacent_vertex(v5);

    v3.add_adjacent_vertex(v4);
    v3.add_adjacent_vertex(v5);

    v4.add_adjacent_vertex(v5);

    // [3] Adding vertices to vector

    std::vector<Edge> edges;
    std::vector<Vertex> vertices;
    vertices.push_back(v1);
    vertices.push_back(v2);
    vertices.push_back(v3);
    vertices.push_back(v4);
    vertices.push_back(v5);

    // [4] Creating the graph

    Graph graph(edges, vertices);

    // [5] Tests session

    // Finding maximum degree and changing it.
    auto max_degree = graph.find_maximum_degree();
    max_degree->identifier = 6;
    auto max_degree_reforged = graph.find_maximum_degree();
    std::cout << max_degree_reforged->identifier << std::endl;
}
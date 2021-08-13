//
// Created by tieu on 8/13/2021.
//

#ifndef KRUSKAL_SFML_START_HPP
#define KRUSKAL_SFML_START_HPP


#include <SFML/Graphics.hpp>
#include <Graph.hpp>

class Start {
public:
    Start();

    Start(std::string filePath);

    void loop();

    void readGraphFromFile(const std::string& filePath);

    const Graph &getGraph() const;


private:
    int count;

    sf::RenderWindow window;

    Graph graph;

    std::vector<Node> tempNode;
//    std::vector<sf::Text> tempNode;

    sf::Font font;

    sf::Text text;

    int mouseInsideNode(int mouseX, int mouseY);

};


#endif //KRUSKAL_SFML_START_HPP

#ifndef NETWORK_H
#define NETWORK_H

#include <vector>
#include <utility>
#include <string>

class Network {
private:
    std::vector<std::pair<double, std::string>> nodes_fog;

public:
    // Construtor padrão
    Network();

    // Construtor com parâmetros
    Network(int num_nodes_fog);

    // Getter para nodes_fog
    std::vector<std::pair<double, std::string>> getNodesFog() const;

    // Setter para nodes_fog
    void setNodesFog(const std::vector<std::pair<double, std::string>>& nodes);

    //Métodos para classificação dos nós
    void setClassNodes(int num_nodes_relevant, int num_nodes_neutral, int num_nodes_blocked);
};

#endif // NETWORK_H

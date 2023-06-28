#include "network.h"

// Construtor padrão
Network::Network() {}

// Construtor com parâmetros
Network::Network(int num_nodes_fog){
    nodes_fog.resize(num_nodes_fog, {0.0, ""});
}

// Getter para nodes_fog
std::vector<std::pair<double, std::string>> Network::getNodesFog() const {
    return nodes_fog;
}

// Setter para nodes_fog
void Network::setNodesFog(const std::vector<std::pair<double, std::string>>& nodes) {
    nodes_fog = nodes;
}

//Metodo para ordenar vecto a partir do valor da recompensa
 bool sortNodes(const std::pair<double, std::string>& a, const std::pair<double, std::string>& b){
    return a.first > b.first;
 }

//Métodos para classificação dos nós
void Network::setClassNodes(int num_nodes_fog, int num_nodes_relevant, int num_nodes_neutral, int num_nodes_blocked){
    //TODO: receber os idices de inicio de cada grupo direto
    std::sort(nodes_fog.begin(), nodes_fog.end(), sortNodes);
    for(int i=0; i<num_nodes_fog; i++){ 
        if(i<num_nodes_relevant){
            nodes_fog[i] = std::make_pair(0,"R");
        }
        if (i>=num_nodes_relevant && i<num_nodes_relevant+num_nodes_neutral){
            nodes_fog[i] = std::make_pair(0,"N");
        } 
        if (i >= num_nodes_relevant+num_nodes_neutral) {
            nodes_fog[i] = std::make_pair(0,"B");
        }
    }
}



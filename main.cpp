#include <iostream>
#include <random>
#include "classes/parameters/parameters.h"
#include <utility>

// Função que retorna um número aleatório entre min e max (inclusive)
int getRamdomNode(int min, int max) {
    std::random_device rd;  // Obtém uma seed de randomização do dispositivo
    std::mt19937 gen(rd()); // Inicializa o gerador com a seed

    std::uniform_int_distribution<> dis(min, max); // Define a distribuição dos números

    return dis(gen); // Retorna um número aleatório gerado pela distribuição
}

int main(int argc, char* argv[]){
    /* Lendo os parâmetros da simulação*/
        if (argc != 12) {
        std::cout << "Erro: número incorreto de parâmetros. São necessários 11 parâmetros." << std::endl;
        return 1;
    }

    // Lê os argumentos da linha de comando e inicializa variavel de parametros
    Parameters parameters;

    parameters.setNumNodesFog(std::stoi(argv[1]));
    parameters.setNumRounds(std::stoi(argv[2]));

    parameters.setNumNodesRelevant(std::stoi(argv[3]));
    parameters.setNumNodesNeutral(std::stoi(argv[4]));
    parameters.setNumNodesBlocked(std::stoi(argv[5]));

    parameters.setAddRewardRelevant(std::stod(argv[6]));
    parameters.setAddRewardNeutral(std::stod(argv[7]));
    parameters.setAddRewardBlocked(std::stod(argv[8]));

    parameters.setRoundRewardRelevant(std::stod(argv[9]));
    parameters.setRoundRewardNeutral(std::stod(argv[10]));
    parameters.setRoundRewardBlocked(std::stod(argv[11]));
    /* ------------------------------ */
    std::cout<<"ola mundo, to correndo atrás do prejuízo"<<std::endl;

    /* Define um vetor com o parametro recebido que representa o número de nós na rede*/
    std::vector<std::pair<double, std::string>> nodes_fog(parameters.getNumNodesFog(), std::make_pair(0, ""));  // Declarando o vetor com tamanho definido da rede
    
    /* iterando sobre todos os rounds */
    for (int i = 0; i <= parameters.getNumRounds(); i++) {
        int sorted_to_add = getRamdomNode(0,parameters.getNumRounds());
        std::cout << "nó sorteado: "<< sorted_to_add <<std::endl;
    }
    
    return 0;
}
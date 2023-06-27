#include <iostream>
#include <random>
#include "classes/parameters.h"
#include<vector>

// Função que retorna um número aleatório entre min e max (inclusive)
int gerarNumeroAleatorio(int min, int max) {
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

    // Lê os argumentos da linha de comando e converte para os tipos apropriados
    int nodesFog = std::stoi(argv[1]);
    int rounds = std::stoi(argv[2]);
    int nodesRelevant = std::stoi(argv[3]);
    int nodesNeutral = std::stoi(argv[4]);
    int nodesBlocked = std::stoi(argv[5]);
    double rewardRelevant = std::stod(argv[6]);
    double rewardNeutral = std::stod(argv[7]);
    double rewardBlocked = std::stod(argv[8]);
    double roundRewardRelevant = std::stod(argv[9]);
    double roundRewardNeutral = std::stod(argv[10]);
    double roundRewardBlocked = std::stod(argv[11]);

    // Cria um objeto da classe Parameters com os valores lidos da linha de comando
    Parameters parameters(nodesFog, rounds, nodesRelevant, nodesNeutral, nodesBlocked,
                          rewardRelevant, rewardNeutral, rewardBlocked,
                          roundRewardRelevant, roundRewardNeutral, roundRewardBlocked);
    /* ------------------------------ */
    std::cout<<"ola mundo, to correndo atrás do prejuízo"<<std::endl;
    int numero = gerarNumeroAleatorio(1, 100); // Exemplo de uso: gera um número entre 1 e 100
    std::cout << "Número aleatório: " << numero << std::endl;
    
    return 0;
}
#include "parameters.h"

// Construtor padrão
Parameters::Parameters() :
    num_nodes_fog(0),
    num_rounds(0),
    num_nodes_relevant(0),
    num_nodes_neutral(0),
    num_nodes_blocked(0),
    add_reward_relevant(0.0),
    add_reward_neutral(0.0),
    add_reward_blocked(0.0),
    round_reward_relevant(0.0),
    round_reward_neutral(0.0),
    round_reward_blocked(0.0)
{}

// Construtor com parâmetros
Parameters::Parameters(int nodesFog, int rounds, int nodesRelevant, int nodesNeutral, int nodesBlocked,
                       double rewardRelevant, double rewardNeutral, double rewardBlocked,
                       double roundRewardRelevant, double roundRewardNeutral, double roundRewardBlocked) :
    num_nodes_fog(nodesFog),
    num_rounds(rounds),
    num_nodes_relevant(nodesRelevant),
    num_nodes_neutral(nodesNeutral),
    num_nodes_blocked(nodesBlocked),
    add_reward_relevant(rewardRelevant),
    add_reward_neutral(rewardNeutral),
    add_reward_blocked(rewardBlocked),
    round_reward_relevant(roundRewardRelevant),
    round_reward_neutral(roundRewardNeutral),
    round_reward_blocked(roundRewardBlocked)
{}

// Getters
int Parameters::getNumNodesFog() const {
    return num_nodes_fog;
}

int Parameters::getNumRounds() const {
    return num_rounds;
}

int Parameters::getNumNodesRelevant() const {
    return num_nodes_relevant;
}

int Parameters::getNumNodesNeutral() const {
    return num_nodes_neutral;
}

int Parameters::getNumNodesBlocked() const {
    return num_nodes_blocked;
}

double Parameters::getAddRewardRelevant() const {
    return add_reward_relevant;
}

double Parameters::getAddRewardNeutral() const {
    return add_reward_neutral;
}

double Parameters::getAddRewardBlocked() const {
    return add_reward_blocked;
}

double Parameters::getRoundRewardRelevant() const {
    return round_reward_relevant;
}

double Parameters::getRoundRewardNeutral() const {
    return round_reward_neutral;
}

double Parameters::getRoundRewardBlocked() const {
    return round_reward_blocked;
}

// Setters
void Parameters::setNumNodesFog(int nodesFog) {
    num_nodes_fog = nodesFog;
}

void Parameters::setNumRounds(int rounds) {
    num_rounds = rounds;
}

void Parameters::setNumNodesRelevant(int nodesRelevant) {
    num_nodes_relevant = nodesRelevant;
}

void Parameters::setNumNodesNeutral(int nodesNeutral) {
    num_nodes_neutral = nodesNeutral;
}

void Parameters::setNumNodesBlocked(int nodesBlocked) {
    num_nodes_blocked = nodesBlocked;
}

void Parameters::setAddRewardRelevant(double rewardRelevant) {
    add_reward_relevant = rewardRelevant;
}

void Parameters::setAddRewardNeutral(double rewardNeutral) {
    add_reward_neutral = rewardNeutral;
}

void Parameters::setAddRewardBlocked(double rewardBlocked) {
    add_reward_blocked = rewardBlocked;
}

void Parameters::setRoundRewardRelevant(double roundRewardRelevant) {
    round_reward_relevant = roundRewardRelevant;
}

void Parameters::setRoundRewardNeutral(double roundRewardNeutral) {
    round_reward_neutral = roundRewardNeutral;
}

void Parameters::setRoundRewardBlocked(double roundRewardBlocked) {
    round_reward_blocked = roundRewardBlocked;
}



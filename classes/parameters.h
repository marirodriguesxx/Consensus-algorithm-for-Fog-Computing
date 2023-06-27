#ifndef PARAMETERS_H
#define PARAMETERS_H

class Parameters {
private:
    int num_nodes_fog;
    int num_rounds;
    int num_nodes_relevant;
    int num_nodes_neutral;
    int num_nodes_blocked;
    double add_reward_relevant;
    double add_reward_neutral;
    double add_reward_blocked;
    double round_reward_relevant;
    double round_reward_neutral;
    double round_reward_blocked;

public:
    // Construtor padrão
    Parameters();

    // Construtor com parâmetros
    Parameters(int nodesFog, int rounds, int nodesRelevant, int nodesNeutral, int nodesBlocked,
               double rewardRelevant, double rewardNeutral, double rewardBlocked,
               double roundRewardRelevant, double roundRewardNeutral, double roundRewardBlocked);

    // Getters
    int getNumNodesFog() const;
    int getNumRounds() const;
    int getNumNodesRelevant() const;
    int getNumNodesNeutral() const;
    int getNumNodesBlocked() const;
    double getAddRewardRelevant() const;
    double getAddRewardNeutral() const;
    double getAddRewardBlocked() const;
    double getRoundRewardRelevant() const;
    double getRoundRewardNeutral() const;
    double getRoundRewardBlocked() const;

    // Setters
    void setNumNodesFog(int nodesFog);
    void setNumRounds(int rounds);
    void setNumNodesRelevant(int nodesRelevant);
    void setNumNodesNeutral(int nodesNeutral);
    void setNumNodesBlocked(int nodesBlocked);
    void setAddRewardRelevant(double rewardRelevant);
    void setAddRewardNeutral(double rewardNeutral);
    void setAddRewardBlocked(double rewardBlocked);
    void setRoundRewardRelevant(double roundRewardRelevant);
    void setRoundRewardNeutral(double roundRewardNeutral);
    void setRoundRewardBlocked(double roundRewardBlocked);
};

#endif // PARAMETERS_H

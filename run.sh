#!/bin/bash
# conceder permissão: chmod +x run.sh
#executar o script: ./run.sh

# Define os valores das variáveis
nodesFog=10
rounds=5

nodesRelevant=3
nodesNeutral=4
nodesBlocked=2

rewardRelevant=0.5
rewardNeutral=0.2
rewardBlocked=0.1

roundRewardRelevant=1.5
roundRewardNeutral=1.0
roundRewardBlocked=0.5

# Chama o programa e passa as variáveis como argumentos
./simulation $nodesFog $rounds $nodesRelevant $nodesNeutral $nodesBlocked $rewardRelevant $rewardNeutral $rewardBlocked $roundRewardRelevant $roundRewardNeutral $roundRewardBlocked


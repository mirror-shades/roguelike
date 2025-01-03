#pragma once
#include <vector>
#include <string>
#include "player.h"
#include "monster.h"
#include "environment.h"
#include <functional>

struct BattleTurn
{
    int attackerId;
    std::string moveName;
    std::vector<int> targetIds;
    std::string action;
    std::string result;
};

class Battle
{
public:
    std::function<void(AnimationState, int, int, float)> onAnimationRequested;
    void executePlayerMove(Monster &attacker, Monster &target, int moveIndex);
    void executeAIMove(Monster &attacker, std::vector<Monster> &playerTeam, std::vector<Monster> &enemyTeam);
    void deinit(Player &player);

private:
    std::vector<BattleTurn> battleHistory;
    int findIndexInTeam(const Monster &monster, const std::vector<Monster> &team);
    void addTurn(BattleTurn turn);
    void clearBattleHistory();
    BattleTurn getLastTurn();
    std::vector<BattleTurn> getBattleHistory();
    float getTypeEffectiveness(ElementType moveType, ElementType targetType);
    int calculateMoveDamage(const Monster &attacker, const Monster &target, const Move &move);
    void restoreMonsters(Player &player);
};

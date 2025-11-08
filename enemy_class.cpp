#include <iostream>
#include "string_functions.h"
#include "character_classes.h"

// Enemy Class
//

void Enemy::m_attack1 (Player& player)
{
  player.health -= (ATTACK1*ENEMY_ADVANTAGE);
}

void Enemy::m_attack2 (Player& player)
{
  player.health -= (ATTACK2*ENEMY_ADVANTAGE);
}

void Enemy::m_attack3 (Player& player)
{
  player.health -= (ATTACK3*ENEMY_ADVANTAGE);
}

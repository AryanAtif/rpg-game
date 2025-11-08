#include <iostream>
#include "string_functions.h"
#include "character_class.h"

const int HEALTH = 100;
const int ENEMY_ADVANTAGE = 1;
const int ATTACK1 = 5;
const int ATTACK2 = 15;
const int ATTACK3 = 25;


// Character class

Character::Character()
{
  health = HEALTH;
  attack2_count = 0;
  attack3_count = 0;
}

void Character::m_put_health()
{
  std::cout << health;
}

void Character::m_reduce_health(int damage)
{
  health -= damage;
}

#include <iostream>
#include "string_functions.h"
#include "character_class.h"
#include "player_class.h"
#include "enemy_class.h"
//////////////////// Player class

// Player input/output
void Player::m_get_name ()
{
  std::cout << "What shall I call you: ";
  std::getline(std::cin, player_name);
}

void Player::m_get_class ()
{
  std::cout << "and you are a: ";
  std::cin >> player_class;
  player_class = capitialize(player_class);
}

void Player::m_put_name ()
{
  std::cout << player_name;
}
void Player::m_put_class()
{
  std::cout << player_class;
}

// Player attacks

void Player::m_attack1(Enemy& enemy)
{
  if(player_class == "SOLDIER")
  {
    m_shoot_gun(enemy);
  }
  else if (player_class == "ARCHER")
  {
    m_shoot_arrow(enemy);
  }
}

void Player::m_attack2(Enemy& enemy)
{
  if (attack2_count < 3)
  {
    if(player_class == "SOLDIER")
    {
      m_launch_rocket(enemy);
      attack2_count++;
    }
    else if (player_class == "ARCHER")
    {
      m_shoot_flame_arrow(enemy);
      attack2_count++;
    }
  }
  else
  {
    std::cout << "Reached the limit for the attack 2" << std::endl;
    m_attack1(enemy);
  }
}

void Player::m_attack3(Enemy& enemy)
{
  if (attack3_count < 1)
  {
    if(player_class == "SOLDIER")
    {
      m_call_in_airstrikes(enemy);
      attack3_count++;
    }
    else if (player_class == "ARCHER")
    {
      m_shoot_nuclear_arrow(enemy);
      attack3_count++;
    }
  }
  else
  {
    std::cout << "Reached the limit for the attack 3" << std::endl;
    m_attack2(enemy);
  }
}


///////////////////// Soldier Class class (haha)

void Soldier::m_shoot_gun(Enemy& enemy)
{
  enemy.reduce_health(ATTACK1);
}

void Soldier::m_launch_rocket(Enemy& enemy)
{
 //TODO: Add a possible debuff here
 enemy.reduce_health(ATTACK2);
}

void Soldier::m_call_in_airstrikes(Enemy& enemy)
{
  //TODO: Add a possible debuff here as well
  enemy.reduce_health(ATTACK3);
}

// Archer Class class (haha 2)
//
void Archer::m_shoot_arrow (Enemy& enemy)
{
  enemy.reduce_health(ATTACK1);
}

void Archer::m_shoot_flame_arrow (Enemy& enemy)
{
  enemy.reduce_health(ATTACK2);
}
void Archer::m_shoot_nuclear_arrow (Enemy& enemy)
{
  enemy.reduce_health(ATTACK3);
}


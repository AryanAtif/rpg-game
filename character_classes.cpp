#include <iostream> 
#include "character_classes.h"

const int HEALTH = 100;
const int ENEMY_ADVANTAGE = 1;
const int ATTACK1 = 5;
const int ATTACK2 = 15;
const int ATTACK3 = 25;


// Character class 

Character::Character()
{
  health = HEALTH; 
  attack2_count{0};
  attack3_count{0};
}

//////////////////// Player class 

// Player input/output
void m_get_player_name::Player ()
{
  std::cout << "What shall I call you: ";
  std::getline(std::cin, player_name);
}

void m_get_player_class::Player ()
{
  std::cout << "and you are a: ";
  std::cin >> player_class;
  player_class = capitialize(player_class);
}

void m_put_player_name::Player ()
{
  std::cout << player_name;
}
void m_put_player_class::Player ()
{
  std::cout << player_class;
}
void m_put_player_health::Player ()
{
  std::cout << health;
}

// Player attacks

void m_attack1(Enemy enemy)
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

void m_attack2(Enemy enemy)
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

void m_attack3(Enemy enemy)
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

void m_shoot_gun::Soldier(Enemy enemy)
{
  enemy.health -= ATTACK1;
}

void m_launch_rocket::Soldier(Enemy enemy)
{
 //TODO: Add a possible debuff here
 enemy.health -= ATTACK2;
}

void m_call_in_airstrikes::Soldier(Enemy enemy)

  //TODO: Add a possible debuff here as well
  enemy.health -= ATTACK3;
}

// Archer Class class (haha 2)
//
void m_shoot_arrow::Archer (Enemy enemy)
{
  enemy.health -= ATTACK1;
}

void m_shoot_flame_arrow::Archer (Enemy enemy)
{
  enemy.health -= ATTACK2;
}
void m_shoot_nuclear_arrow::Archer (Enemy enemy)
{
  enemy.health -= ATTACK3;
}

// Enemy Class
//
void m_put_enemy_health::Enemy()
{
  std::cout << health;
}

void m_attack1::Enemy (Player player)
{
  player.health -= (ATTACK1*ENEMY_ADVANTAGE);
}

void m_attack2::Enemy (Player player)
{
  player.health -= (ATTACK2*ENEMY_ADVANTAGE);
}

void m_attack3::Enemy (Player player)
{
  player.health -= (ATTACK3*ENEMY_ADVANTAGE);
}




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
}

//////////////////// Player class 

// Player input/output
void m_get_player_name::Player ()
{
  std::cout << "The soldier shall be called: ";
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
void m_put_player_health::Player ()
{
  std::cout << health;
}

// Player attacks

void m_attack1(Enemy enemy)
{

}

///////////////////// Soldier Class class (haha)

void m_shoot_gun::Soldier(Enemy enemy_character)
{
  enemy_character.health -= ATTACK1;
}

void m_launch_rocket::Soldier(Enemy enemy_character)
{
 //TODO: Add a possible debuff here
 enemy_character.health -= ATTACK2;
}

void m_call_in_airstrikes::Soldier(Enemy enemy_character)
{
  //TODO: Add a possible debuff here as well
  enemy_character.health -= ATTACK3;
}

// Archer Class class (haha 2)
//
void m_shoot_arrow::Archer (Enemy enemy_character)
{
  enemy_character.health -= ATTACK1;
}

void m_shoot_flame_arrow::Archer (Enemy enemy_character)
{
  //TODO: Add a possible debuff here
  enemy_character.health -= ATTACK2;
}
void m_shoot_nuclear_arrow (Enemy enemy_character)
{
  //TODO: Add a possible debuff here as well
  enemy_character.health -= ATTACK3;
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




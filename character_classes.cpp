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

// Player class 

void get_player_name::Player ()
{
  std::cout << "The soldier shall be called: ";
  std::getline(std::cin, player_name);
}

void get_player_class::Player ()
{
  std::cout << "and you are a: ";
  std::cin >> player_class;
  player_class = capitialize(player_class);
}

void put_player_name::Player ()
{
  std::cout << player_name;
}
void put_player_health::Player ()
{
  std::cout << health;
}


// Soldier Class class (haha)
//
void shoot_gun::Soldier(Enemy enemy_character)
{
  enemy_character.health -= ATTACK1;
}

void launch_rocket::Soldier(Enemy enemy_character)
{
 //TODO: Add a possible debuff here
 enemy_character.health -= ATTACK2;
}

void call_in_airstrikes::Soldier(Enemy enemy_character)
{
  //TODO: Add a possible debuff here as well
  enemy_character.health -= ATTACK3;
}

// Archer Class class (haha 2)
//
void shoot_arrow::Archer (Enemy enemy_character)
{
  enemy_character.health -= ATTACK1;
}

void shoot_flame_arrow::Archer (Enemy enemy_character)
{
  //TODO: Add a possible debuff here
  enemy_character.health -= ATTACK2;
}
void shoot_nuclear_arrow (Enemy enemy_character)
{
  //TODO: Add a possible debuff here as well
  enemy_character.health -= ATTACK3;
}

// Enemy Class
//

void attack1::Enemy (Player player)
{
  player.health -= (ATTACK1*ENEMY_ADVANTAGE);
}

void attack2::Enemy (Player player)
{
  player.health -= (ATTACK2*ENEMY_ADVANTAGE);
}

void attack3::Enemy (Player player)
{
  player.health -= (ATTACK3*ENEMY_ADVANTAGE);
}




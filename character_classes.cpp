#include <iostream> 
#include "character_classes.h"

// Character class 

Character::Character()
{
  health = 100; 
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

// Soldier Class class (haha)
//
void shoot_gun::Soldier(Enemy enemy_character)
{
  enemy_character.health -= 5;
}

void launch_rocket::Soldier(Enemy enemy_character)
{
 //TODO: Add a possible debuff here
 enemy_character.health -= 15;
}

void call_in_airstrikes::Soldier(Enemy enemy_character)
{
  //TODO: Add a possible debuff here as well
  enemy_character.health -= 25;
}

// Archer Class class (haha 2)
//
void shoot_arrow::Archer (Enemy enemy_character)
{
  enemy_character.health -= 5;
}

void shoot_flame_arrow::Archer (Enemy enemy_character)
{
  //TODO: Add a possible debuff here
  enemy_character.health -= 15;
}
void shoot_nuclear_arrow (Enemy enemy_character)
{
  //TODO: Add a possible debuff here as well
  enemy_character.health -= 25;
}




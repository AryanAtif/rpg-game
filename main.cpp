#include <iostream>
#include "string_functions.h"
#include "character_classes.h"

void attack1(Player player, Enemy enemy); //attack on the player
void attack1(Enemy enemy, Player player);

void attack2(Player player, Enemy enemy);
void attack2(Enemy enemy, Player player);

void attack3(Player player, Enemy enemy);
void attack3(Enemy enemy, Player player);


int main()
{
  // TODO: Title
  //
  // Take the player's name and their class as input
  //
  // Ask player for their first move
  //  // if attack1, allow
  //  // if attack2, check if it's been done three times before, if not then allow, otherwise don't.
  //  // if attack3, check if player's health is 50% of the opponent, if yes, and if not done before, allow the attack3, otherwise not.
  // Enemy attacks
  //  // 40 percent chance for attack1
  //  // 10 percent chance for the attack2, but if not done three time before
  //  // 50 percent chance for the attack3, but if enemy's health is 50% of the player, and haven't done before.
  //
  // The one that reaches zero health looses.
  // Show stats after the game (e.g. number of hits by the player and by the enemy, number of attack1, 2 and 3, time taken to beat the
  // enemy)
  //
  //
  return 0;
}

void attack1(Enemy enemy, Player player)
{
  std::cout << "The Giant lands down his fist on ";
  // name
  std::cout << "-5 HP for the player. You're health is now: ";
  enemy.attack1(player); 

}

#include <iostream>
#include "string_functions.h"
class Character
{
  private:
    std::string character_name;
  protected: 
    int health;
  public:
    Character () : health(100)
    {
    }
};

class Player public: Character
{
  private:
    std::string player_name;
    std::string player_class; // class here means the wizard class or the knight class
  
  public:


    void get_player_name()
    {
      std::cout << "The soldier shall be called: ";
      std::getline(std::cin, player_name);
    }
    void get_player_class()
    {
      std::cout << "and you are a: ";
      std::cin >> player_class;

      player_class = capitialize(player_class);
    }

};


class Soldier public : Player
{
  public:

    // Attack functions
    //
    void shoot(Enemy enemy_character)
    {
      enemy_character.health -= 5;
    }

    void launch_rocket(Enemy enemy_character)
    {
      //TODO: Add a possible debuff here
      enemy_character.health -= 15;
    }

    void call_in_airstrikes(Enemy enemy_character)
    {
      //TODO: Add a possible debuff here as well
      enemy_character.health -= 25;
    }
};


class Enemy

int main()
{

}

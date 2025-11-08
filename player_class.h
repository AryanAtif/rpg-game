#ifndef 
#define PLAYER_CLASS_H
#include "character_class.h"

class Enemy; // forward declaration to stay safe from the mutual dependancy of enemy and the player classes

class Player : public Character
{
  private:
    std::string player_name;
    std::string player_class; // class here means the wizard class or the knight class

  public:
    void m_get_name();
    void m_get_class();
    void m_put_name();
    void m_put_class();
    // Attacks
    //
    void m_attack1(Enemy& enemy);
    void m_attack2(Enemy& enemy);
    void m_attack3(Enemy& enemy);
};

class Soldier : public Player
{
  public:

    // Attack functions
    //
    void m_shoot_gun(Enemy& enemy_character);
    void m_launch_rocket(Enemy& enemy_character);
    void m_call_in_airstrikes(Enemy& enemy_character);
};


class Archer : public Player
{
  public:

    // Attack functions
    //
    void m_shoot_arrow (Enemy& enemy_character);
    void m_shoot_flame_arrow (Enemy& enemy_character);
    void m_shoot_nuclear_arrow (Enemy& enemy_character);
};

#endif 

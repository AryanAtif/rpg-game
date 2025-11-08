#ifndef 
#define ENEMY_CLASS_H
#include "character_class.h"

class Player; // forward declaration to stay safe from the mutual dependancy of the enemy and the player clasess.

class Enemy : public Character
{
  public:
    // Attacks
    //
    void m_attack1 (Player& player);
    void m_attack2 (Player& player);
    void m_attack3 (Player& player);
};

#endif

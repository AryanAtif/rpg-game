#ifndef CHARACTER_CLASSES_H
#define CHARACTER_CLASSES_H

extern const int HEALTH;
extern const int ENEMY_ADVANTAGE;
extern const int ATTACK1;
extern const int ATTACK2;
extern const int ATTACK3;


class Character
{
  private:
    std::string character_name;
  protected: 
    int health;
    int attack2_count;
    int attack3_count;
  public:
    Character ();//: health(100)
    void m_put_health();
};

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

};


class Enemy : public Character
{
  public:
    // Attacks
    //
    void m_attack1 (Player player);
    void m_attack2 (Player player);
    void m_attack3 (Player player);
};



class Soldier : public Player
{
  public:

    // Attack functions
    //
    void m_shoot_gun(Enemy enemy_character);
    void m_launch_rocket(Enemy enemy_character);
    void m_call_in_airstrikes(Enemy enemy_character);
};


class Archer : public Player
{
  public:

    // Attack functions
    //
    void m_shoot_arrow (Enemy enemy_character);
    void m_shoot_flame_arrow (Enemy enemy_character);
    void m_shoot_nuclear_arrow (Enemy enemy_character);
};
#endif


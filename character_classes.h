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
  public:
    Character ();//: health(100)
};

class Player public: Character
{
  private:
    std::string player_name;
    std::string player_class; // class here means the wizard class or the knight class
  
  public:
    void get_player_name();
    void get_player_class();
    void put_player_name();
    void put_player_health();

};


class Soldier public : Player
{
  public:

    // Attack functions
    //
    void shoot_gun(Enemy enemy_character);
    void launch_rocket(Enemy enemy_character);
    void call_in_airstrikes(Enemy enemy_character);
};


class archer public : Player
{
  public:

    // Attack functions
    //
    void shoot_arrow (Enemy enemy_character);
    void shoot_flame_arrow (Enemy enemy_character);
    void shoot_nuclear_arrow (Enemy enemy_character);
};

class Enemy
{
  public:
    void put_health();
    // Attacks
    //
    void attack1 (Player player);
    void attack2 (Player player);
    void attack3 (Player player);
};

#endif


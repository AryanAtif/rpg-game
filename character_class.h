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
    void m_reduce_health(int damage);
};
#endif

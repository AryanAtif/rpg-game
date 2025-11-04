#include <iostream>


class Character
{
  private:
    std::string character_name;
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
      std::cout << "and you are a: "
      std::cin >> player_class;

      player_class = capitialize(player_class);
    }

};

int main()
{

}

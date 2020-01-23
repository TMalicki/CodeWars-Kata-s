#include <stdexcept>

class Guesser
{
public:
    Guesser(int number, int lives)
      : number(number), lives(lives)
    { }
    bool guess(int n)
    {
      if(lives>0){
        if(n == number) return true;
        else{
          lives--;
          return false;
        }
      }
      else throw std::overflow_error("too big");
    }
private:
    int number, lives;
};

using namespace std;

// MonsterGroup := { type, hitpoints, number, damage }
typedef tuple<string, int, int, int> MonsterGroup;

string who_would_win(const MonsterGroup &mon1, const MonsterGroup &mon2)
{
  //cout << get<0>(mon1);
  int number[2] {get<2>(mon1), get<2>(mon2)};
  int hp[2] {get<1>(mon1), get<1>(mon2)};
  int atk[2] {get<3>(mon1), get<3>(mon2)};
  
  //std::cout << "Monster 1: " << "Amount: " << number[0] << " HP: " << hp[0] << std::endl;
  //std::cout << "Monster 2: " << "Amount: " << number[1] << " HP: " << hp[1] << std::endl;  
  
  while(number[0] > 0 && number[1] > 0)
  {
   //if(hp[1] > 0)  
   //{
      std::cout << "Before Attack - Monster 1: " << "Amount: " << number[0] << " HP: " << hp[0] << std::endl;
      std::cout << "Before Attack - Monster 2: " << "Amount: " << number[1] << " HP: " << hp[1] << std::endl;
      
      hp[1] -= atk[0]*number[0];
      
        int temp = 0;
        while(hp[1] <= 0)
        {
          temp = hp[1];
          number[1]--; 
          
          hp[1] = get<1>(mon2); 
          hp[1] += temp;
        }
        std::cout << "After Attack - Monster 2: " << "Amount: " << number[1] << " HP: " << hp[1] << std::endl;
    //  }
   //}
   //if(hp[0] > 0) 
   //{
      hp[0] -= atk[1]*number[1];
     
        //int temp = 0;
        while(hp[0] <= 0)
        {
          temp = hp[0];
          number[0]--; 
          
          hp[0] = get<1>(mon1); 
          hp[0] += temp;
        }
        std::cout << "After Attack - Monster 1: " << "Amount: " << number[0] << " HP: " << hp[0] << std::endl;
      //}
   //}  
  }
  std:: cout << "\n\n";
  std::string winner;
  
  if(number[0] <= 0)
  {
    winner = to_string(number[1]) + " " + get<0>(mon2) + "(s)" + " won";
  }
  else if(number[1] <= 0)
  {
    winner = to_string(number[0]) + " " + get<0>(mon1) + "(s)" + " won";
  }
  return winner;
}

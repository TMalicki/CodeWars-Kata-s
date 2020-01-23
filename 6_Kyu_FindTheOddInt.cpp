#include <vector>

int findOdd(const std::vector<int>& numbers){
  int odded = 0;
  int counter = 0;
  
  for(int i = 0;i<numbers.size();i++)
  {
    odded = numbers[i];
    
    for(int j = 0;j<numbers.size();j++)
    {
      if(numbers[i] == numbers[j]) counter++;
    }
    
    if(counter%2 != 0) break;
    counter = 0;
  }
  
  return odded;
}

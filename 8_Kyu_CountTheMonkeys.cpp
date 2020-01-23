#include <vector>

std::vector<int> MonkeyCount(int n) {
  // your code here
  
  std::vector<int> monkey;
  for(int i = 1;i<=n;i++)
  {
  
    monkey.push_back(i);
    
  }
  return monkey;
}

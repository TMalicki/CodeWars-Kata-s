#include <string>

bool is_uppercase(const std::string &s) {

bool flag = true;

  for(int i = 0;i<s.size();i++)
  {
    if(s[i] > 96 && s[i] < 123) flag = false; 
  }

  return flag; // TODO
}

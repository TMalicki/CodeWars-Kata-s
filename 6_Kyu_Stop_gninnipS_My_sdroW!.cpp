#include <bits/stdc++.h> 

std::string spinWords(const std::string &str)
{
  std::stringstream s(str);
  std::string temp;
  std::string fin = "";
  
  while(s >> temp)
  { 
    if(temp.size() >= 5)
    {
      std::reverse(temp.begin(),temp.end()); 
    }
    fin += temp;
    fin += " ";
  }  
  
  fin.pop_back();
  return fin;
}

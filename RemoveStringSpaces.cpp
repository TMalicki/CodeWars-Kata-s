#include <bits/stdc++.h> 

using namespace std;

std::string no_space(std::string x)
{
  stringstream s(x);
  string word;
  string fin;
  
  s >> word;
  fin = word;
  
  while(s >> word)
  {  
    fin += word;  

  }
    return fin;
}

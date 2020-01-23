#include <bits/stdc++.h>

using namespace std;

int find_short(std::string str)
{
  stringstream s(str);
  string temp;
  int size;
  
  s>>temp;
  size = temp.size();
  
  while(s>>temp){
    if(size > temp.size()) size = temp.size();
  }
  return size;
}

#include <string>
using namespace std ; 

string reverseString (string str )
{
std::string temp = str;
int size = str.size();

   for(int i = 0;i<size;i++)
   {
     temp[i] = str[size-i-1];
   }
   
  return temp;
}

#include <string>
#include <vector>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  size_t pos = 0;
  vector<char> vowel {'a', 'e', 'i', 'o', 'u'};
  
  for(int i = 0;i<vowel.size();i++)
  {
    while(pos<inputStr.size())
    {
      pos = inputStr.find(vowel[i], pos);
      if(pos != string::npos) 
      {
        std::cout <<  pos << std::endl;
        num_vowels++;
        pos++;
      }
    }
    pos = 0;
  }
  
  return num_vowels;
}

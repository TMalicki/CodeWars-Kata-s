#include <vector>
using namespace std;

int solution(int number) 
{
    vector<int> three;
    vector<int> five;
    
    cout << number;
    for(int i = 1; i<number;i++){
      if(3*i < number) three.push_back(3*i);
      if(5*i < number) five.push_back(5*i);
    }
    
    for(int i = 0;i<three.size();i++){
    for(int j = 0;j<five.size(); j++){
      if(three[i] == five[j]) three.erase(three.begin()+i);
      }
    }
    
    
    long sum = 0;
    for(int i = 0;i<three.size();i++)
    sum += three[i];
    
    for(int i = 0;i<five.size();i++)
    sum += five[i];
    
    cout << sum;
    return sum;
}

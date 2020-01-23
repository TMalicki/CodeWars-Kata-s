using namespace std;

string arbitrate(const string& input, int n){
  
  int pos = n;
  string temp = input;
  
  for(int i = 0;i<n;i++)
  {
    if(input[i] == '1' && pos > i) pos = i;
  }
  
  for(int i = 0;i<n;i++)
  {
    if(i == pos) temp[i] = '1';
    else temp[i] = '0';
  }
  return temp;
}

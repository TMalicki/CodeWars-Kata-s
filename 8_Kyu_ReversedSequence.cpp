std::vector<int> reverseSeq(int n) {
  
  using namespace std;
  
  vector<int> V;
  
  while(n > 0) {
  V.push_back(n);
  n--;
  }
  
  return V;
}

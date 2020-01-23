long long rowSumOddNumbers(unsigned n){
  

  int all = 0, ans = 0;
  for(int t = 1 ; t <= n ; t ++){
    all += t;
  }
  int start = all * 2 - 1;
  for(int t = 0 ; t < n ; t ++){
    ans += start;
    start -= 2;
  }
  return ans;

}

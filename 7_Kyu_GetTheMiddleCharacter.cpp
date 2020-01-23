std::string get_middle(std::string input) 
{
  std::string ans;
  
  if(input.size()%2 == 0)
  {
    int mid1 = input.size()/2;
    int mid2 = mid1+1;  
    
		ans = std::string() + input[mid1 - 1] + input[mid2 - 1];
  }
  else
  {
    int mid = input.size()/2+1;
    
		ans = std::string() + input[mid - 1];
  }
  
  return ans;
}

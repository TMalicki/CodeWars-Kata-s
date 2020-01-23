std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
  using std::vector;
  vector<int> ret;
  for(int i = 0;i<numbers.size();i++)
  {
    if(numbers[i]%divisor == 0) ret.push_back(numbers[i]);
  }
    return ret;
}

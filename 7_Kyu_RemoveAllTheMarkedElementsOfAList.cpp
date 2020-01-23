#include <vector>

std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {

std::vector<int> clearValues;
bool flag = 0;

for(int i = 0;i<integers.size();i++)
{
  for(int j = 0;j<values.size();j++)
  {
    if(integers[i] == values[j]) flag = 1;
  }
  if(flag == 0)  clearValues.push_back(integers[i]);
  flag = 0;
}

  return clearValues;
}

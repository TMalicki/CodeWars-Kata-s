std::vector<int> maps(const std::vector<int> & values) {

std::vector<int> temp = values;

for(int i = 0;i<temp.size();i++)
{
  temp[i] *= 2;
}


  return temp;
}

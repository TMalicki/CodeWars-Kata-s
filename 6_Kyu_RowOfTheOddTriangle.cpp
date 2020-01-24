#include <vector>

std::vector<unsigned long long> odd_row(unsigned long long n) {

std::vector<unsigned long long> searched_line(n);

for(unsigned int i = 0; i < n; i++)
{
  searched_line[i] = ((n + ((n-1)*(n-1)))) + 2*i;   
}

  return searched_line;
}

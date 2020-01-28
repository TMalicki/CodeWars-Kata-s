int testit(int n)
{
int counter = 0;
  while(n)
  {
    if(n%2 != 0) counter++;
    n/=2;
  }
    return counter;
}

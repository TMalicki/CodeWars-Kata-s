int maxMultiple(int divisor, int bound) 
{
int temp = 0;
int i = 0;

  while(temp<=bound || temp<=0)
  {
    temp = divisor*i;
    i++;
  }
  temp = divisor*(i-2);
  
  return temp;
}

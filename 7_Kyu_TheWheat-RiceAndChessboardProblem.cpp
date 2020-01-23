unsigned int squaresNeeded(long long n)
{
  long long temp = 0;
  long long temp1 = 0;
  
  std::cout << "Rice: " << n << std::endl;
  
  unsigned int square = 0;
  
  while(temp<n)
  {
    if(temp == 0) 
    {
      temp += 1;
      temp1 += 1;
    }
    else 
    {
      temp1 *= 2;
      temp += temp1;
    }
    square++;
  }
  
  std::cout << "Temp: " << temp << "Square: " << square << std::endl;
  return square;
}

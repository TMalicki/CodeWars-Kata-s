long int findNextSquare(long int sq) {
  
  long int value = 1;
  
  while(((sq/value) != value) && ((value*value) <= sq))  
  {
    value++; 
  }
  
  if(sq%value == 0) return ((value+1)*(value+1));
  else return -1;
}

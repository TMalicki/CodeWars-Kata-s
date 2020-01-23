bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
  bool truth;
  
  if(distance_to_pump <= mpg*fuel_left) truth = true;
  else truth = false;
  
  
  return truth;
}

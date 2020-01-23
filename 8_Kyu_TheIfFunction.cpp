void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
  if(value == false) func2();
  if(value == true) func1();
}

int digital_root(int n)
{
  std::cout << "Liczba: " << n;
	int sum = n;
  int temp = sum;
  int temp2 = sum;
  int multip = 1;
  
	while (sum >= 10)
	{
		multip = 1;
		temp = sum;
		temp2 = sum;
		sum = 0;

		while (temp >= 10)
		{
			temp /= 10;
			multip++;
		}

		for (int i = 0; i < multip; i++)
		{
			sum += temp2 % 10;
			temp2 /= 10;
		}
	}

  std::cout << std::endl << std::endl << "Suma: " << sum;
	return sum;

}

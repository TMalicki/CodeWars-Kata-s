using namespace std;
long eliminate_unset_bits(string number){
  
	string bitNum = "";
	long temp = 0;

	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] == '1') bitNum += "1";
	}
	cout << bitNum;

	if (bitNum.size() == 0) temp = 0;
	else {
		temp = 1;
		for (int i = 1; i < bitNum.size(); i++)
		{
			long powered = 1;
			for (int j = 0; j < i; j++) powered *= 2;
			temp += powered;
		}
	}
	return temp;
}

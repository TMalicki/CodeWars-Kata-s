#include <vector>

using namespace std;

int minSum(vector<int>passed)
{
	int size = passed.size();
	vector<int> sorted;
	int minim = 1000;
	int sum = 0;
	int flag = 0;

	while (sorted.size() != size)
	{
		for (int i = 0; i < passed.size(); i++)
		{
			if (minim > passed[i])
			{
				minim = passed[i];
				flag = i;
			}
		}
		passed.erase(passed.begin() + flag);
		sorted.push_back(minim);
		minim = 1000;
	}

	for (int i = 0; i < (size / 2); i++)
	{
		sum += (sorted[i] * sorted[size - i - 1]);
	}

	return sum;
}

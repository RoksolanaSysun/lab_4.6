#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S;
	int k, i;
	S = 0;
	k = 1;
	i = k;
	while (k <= 20)

	{
		double inner_sum = 0;
		i = k;
		while (i <= 40 - k)

		{
			inner_sum += i * i;
			i++;

		}
		S += (1 + sqrt(inner_sum)) / (k * k);
		k++;

	}
	cout << S << endl;
	S = 0;
	k = 1;

	do
	{
		double inner_sum = 0;
		i = k;
		do
		{
			inner_sum += i * i;
			i++;
		} while (i <= 40 - k);
		S += (1 + sqrt(inner_sum)) / (k * k);
		k++;
	} while (k <= 20);
	cout << S << endl;
	S = 0;
	for (k = 1; k <= 20; k++)

	{
		double inner_sum = 0;
		for (int i = k; i <= 40 - k; i++)

		{
			inner_sum += i * i;

		}
		S += (1 + sqrt(inner_sum)) / (k * k);

	}
	cout << S << endl;
	S = 0;
	for (k = 20; k >= 1; k--)

	{
		double inner_sum = 0;
		for (int i = k; i <= 40 - k; i++
			)

		{
			inner_sum += i * i;
		}
		S += (1 + sqrt(inner_sum)) / (k * k);
	}
	cout << S << endl;
	return 0;
}


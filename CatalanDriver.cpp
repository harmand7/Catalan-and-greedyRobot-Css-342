
#include <iostream>

using namespace std;

int CatalanCalc(int CN);

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cout << "Error: Not correct number of arguments" << endl;
		
	}
	int n = atoi(argv[1]);
		if (n >= 0)
		{
			cout << "The Catalan Number is: " << CatalanCalc(n) << endl;
		}
		else
		{
			cout << "Catalan Number cant be smaller than 0... seriously bro?" << endl;
		}
}

int CatalanCalc(int N)
{
	int total = 0;
	if (N == 0 || N == 1)
	{
		return 1;
	}
	for (int i = 1; i <= N; i++)
	{
		total += CatalanCalc(i-1)*CatalanCalc(N - i);
	}
	return total;
}

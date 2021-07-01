#include <iostream>
using namespace std;
int silnia(int n)
{
	int res = 1;

	while (n > 0) {
		res = res * n;
		n--;
	}
	return res;
}
int main()
{
	int n, d;
	cin >> d;
	if (d < 1 || d > 30) return 0;
	for (int i = 0; i < d; i++)
	{
		cin >> n;
		if (n < 0 || n> 1000000000) return 0;
		else if (n <= 9)
		{
			int w = silnia(n);
			cout << (w % 100) / 10 << " " << w % 10 << endl;
		}
		else if (n >= 10)
		{
			cout << "0" << " " << "0" << endl;
		}
	}
	return 0;
}

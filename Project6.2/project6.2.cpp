//Lab_6.2
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Random(int* a, int n, int Low, int High)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % (High - Low + 1) + Low;
}

void Print(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(3) << a[i] << " ";
	cout << "\n";
}

int Sum(int* a, const int n)
{
	int S = 0;
		for (int i = 0; i < n; i++)
			if(i % 2 != 0)
			S += a[i];
	return S;
}
int main()
{
	srand((unsigned)time(NULL)); 

	  const int n = 10;
	int a[n];
	int Low ;
	int High;
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;
	Random(a, n, Low, High);
	Print(a, n);
	cout << "S = " << Sum(a, n) << endl;
	return 0;
}


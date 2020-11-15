#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int Sum(int* a, const int size, int i, int S)
{
	if (a[i] % 2 == 0)
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 5;
	int a[n];
	int Low = -5;
	int High = 5;
	Create(a, n, Low, High);
	Print(a, n, 0);
	cout << "S = " << Sum(a,n,0,0) << endl;
	return 0;
}


//Arslan Sadovinov: 09-063. Homework for Islamurov islam Rinatovich 20.10.20.
//First task
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

//��� ������ �� �������� � ����������� ������� ����� ��� ������ ������� �������
//For my own convenience and comfortable analysis, I solved using simple functions

void create(int*x, int N)
{
	int i;
	for (i = 0; i < N; i++)
	{
		cout << "x[" << i << "]= ";
		cin >> x[i];
	}
}
/////
void show(int* x, int N)
{
	int i;
	unsigned j = 0;
	for (i = 0; i < N; i++)
		if (x[i] < 0)
			swap(x[i], x[j++]);
	for (i = 0; i < N; i++)
		cout << x[i] << ' ';
}
/////
int main()
{
	int N;
	cout << "Enter size of array ";
	cin >> N;
	int* a = new int[N];
	cout << "Enter array ";
	create(a, N);
	cout << "Array a: ";
	show(a, N);
	cout << endl;
	system("pause");
	return 0;
}

/*#include<iostream>
using namespace std;

void alexsandar(int p[], int size)
{
	int temp;
	for (int n = 0; n < size; n++)
		for (int m = 0; m < size - 1; m++)
			if (*(p + m) > *(p + m + 1))
			{
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
}

int main()
{
	int size, a;
	int* p = new int[size];
	cin >> size;
	for (int i = 0; i < size; i++)
		cin >> *(p + i);
	cout  << endl << "ÊäÈëÊý×é" << endl;
	cin >> a;
	cout << "p[" << a - 1 << "] = " << *(p + a - 1) << endl;
	alexsandar(p, size);
	for (int b = 0; b < size; b++)
		cout << *(p + b) << " ";
	cout << endl;
	delete p;
	system("pause");
	return 0;
}
*/




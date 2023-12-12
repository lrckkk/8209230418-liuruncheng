/*#include<iostream>
using  namespace std;
int main()
{
	int a[10];
	for (int n = 0; n < 10; n++)
	{
		cin >> a[n];
    }
	for (int i = 0; i < 10; i++)
	{
		for (int n = 0; n <= 10; n++)
		{
			if (i == n)
			{
				continue;
			}
			if (a[i] == a[n])
			{
				if (i < n)
				{
					cout << a[i]<<" ";
				}
				break;
			}
			if(n==10)
			{
				cout << a[i]<<" ";
			}
        }

	}
}
*/
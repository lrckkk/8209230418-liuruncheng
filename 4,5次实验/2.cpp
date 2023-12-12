/*#include<iostream>
#include<iomanip>
using namespace std;

bool is_prime1(int number)
{
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		if (number % divisor == 0)
		{
			return false;
		}
	}
	return true;
}
bool is_prime2(int num)
{
	if (num <= 1)
	{
		cout << "FALSE" << endl;
		goto label;
	}

	for (int i = 2; i < num; i++)
	{

		if ((num % i) == 0)
		{
			cout << "FALSE" << endl;
			goto label;

		}
	}
	cout << "TRUE" << endl;
label:

	const int changshu = 200;
	const  int line = 10;
	int a = 0;
	int b = 2;
	while (a < 200)
	{
		if (is_prime1(b))
		{
			a++;
		
		if (a % line == 0)
		{
			cout <<setw(5)<< b<< endl;
		}
		else
			cout <<setw(5)<< b;
	    }
	    b++;
     }





 return num;

}
int main()
{
	int a;
	
	cout << "请输入一个数字：" << endl;
	cin >> a;
	is_prime2(a);




}
*/
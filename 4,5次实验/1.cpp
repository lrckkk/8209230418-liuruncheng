/*#include<iostream>
using namespace std;
void  math(int &refa, int &refb)
{

	int c;
	c = (refa > refb) ? refa : refb;
	do
	{
		c = c--;
	} while (!(refa % c == 0 && refb % c == 0));
	int f, g;
	f = refa, g = refb;
	refb = (f * g) / c;
	refa = c;

	

}

int main()
{
	cout << "请输入两个数字" << endl;
	int a, b;
	cin >> a >> b;
	math(a, b);
	cout << "最大公约数：" << a << endl << "最小公倍数:" << b;
}
*/
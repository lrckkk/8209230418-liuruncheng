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
	cout << "��������������" << endl;
	int a, b;
	cin >> a >> b;
	math(a, b);
	cout << "���Լ����" << a << endl << "��С������:" << b;
}
*/
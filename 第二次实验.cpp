/*#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入字符: " << endl;
	cin >> a;
	if (a >= 97 && a <= 122)
		cout << char(a - 32) << endl;
	else
		cout << a + 1 << endl;
}
*/

/*#include<iostream>
using namespace std;
int main()
{
	float x;
	float y;
	cout << "enter the number" << endl;
	cin >> x;
	if (x > 0)

	if (x >= 5 && x < 10)
			cout << "y=" << x * x << endl;
	else if (x>=1&&x<5)
		cout << "y=" << 2 / (4 * x) + 1 << endl;
	else
		cout << "y=" << 3 - (2 * x) << endl;
      
	    else
		cout << "不考虑0和负数" << endl;
	return 0;
	 }*/
/*#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形的三条边：" << endl;
	cin >> a >> b >>c;
	if (a < (b + c) && b < (a + c) && c < (a + b))
		
	
	 {if (a == b || b == c || c == a)
		cout << "这是等腰三角形"<< "它的周长为" << a + b + c <<endl;
	    
	    
	 else
		 
	    cout  <<"这不是等腰三角形" <<"它的周长为" << a + b + c << endl;
	
	}
	
	else 
		cout<< "三边不合理" << endl;
	return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
	cout << "请输入两个数：" << endl;
	int a, b;
	cin >> a >> b;
	cout << "加减乘除？" << endl;
	char k;
	cin >> k;
	switch (k)
	{
	case '+':
		cout << a + b;
		break;

	case '-':
		cout << a - b;
		break;

	case '*':
		cout << a * b;
		break;

	case '/':

		if (b == 0)
		{
			cout << "0不能为除数";
			break;
		}
		else
		{
			cout << a / b;
			break;
		}
	case'%':
		cout << a % b;
		break;
	}






}
*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input_str;
	cout << "请输入一行字符:" << endl;
	string s;
	int letters = 0;
	int spacing = 0;
	int number = 0;
	int others = 0;
	getline(cin, input_str);
	for (char c : input_str)
	{
		if (isalpha(c))
			letters++;
		else if (isspace(c))
			spacing++;
		else if (isdigit(c))
			number++;
		else
			others++;
	}
	cout << "英文字母的个数为" << letters << endl;
	cout << "空格的个数为" << spacing << endl;
	cout << "数字的个数为" << number << endl;
	cout << "其他字符的个数为" << others << endl;
	return 0;
}
*/
/*#include<iostream>
using namespace std;
int zuidagongyueshu(int a, int b)
{
	int c;
	c = (a > b )? a : b;
	do
	{
		c = c--;
	} 
	while (!(a % c == 0 && b % c == 0));
	return c;
}
int zuixiaogongbeishu(int a, int b)
{
	int f;
	f = (a > b) ? a : b;
	do
	{
		f = f++;
	} while (!(f%a==0 && f % b == 0));
	return f;
}
int main()
{
	cout << "请输入两个正整数：" << endl;
	int a,b;
	cin >> a >> b;
	cout << "最大公约数：" << zuidagongyueshu(a, b) << endl;
	cout << "最小公倍数：" << zuixiaogongbeishu(a, b) << endl;
	return 0;
	}
*/
/*#include<iostream>
using namespace std;
int main()
{
	int x;
	x = 1;
	int y;
	y = 1;
	do {
		++y;
		do {
			
			cout << "*" ;
			x++;

		} while (x!= y);
		x = 1;
		cout << endl;
	
	
	} while (y !=6);

}
*/
/*#include<iostream>
using namespace std;
int main() {
	double a = 0; double Xn = 0; double x = 0;
	cout << "请输入a的值：" << endl;
	cin >> a;
	Xn = 0.5 * (a + 1);
	x = 0.5 * (Xn + a / Xn);
	while (x - Xn > 0.00005 || x - Xn < -0.00005)
	{
		Xn = x;
		x = 0.5 * (x + a / x);
	}
	cout << "a的算数平方根是" << x;
	return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
	int x = 1;
	int y;
	int n = 2;
	do
	{
		if (n == 2)
		{
			n++;
			y = 2;
		}
		if (n >= 2)
		{
			y = 2*y + 2;
			x++;

		}




	} while (y < 100);
	cout<< y * 0.8 / x << endl;


 }
 */








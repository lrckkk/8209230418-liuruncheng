/*#include<iostream>
using namespace std;
int main()
{
	int k=0;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
*/
/*#include<iostream>
#include<iomanip>
using namespace std;
const float pi = 3.14;
float yuanzhui(float a, float b)//定义圆锥体积计算函数
{
	float v;
	v = (1.0 / 3.0) * pi * a * a * b;
	return v;
}
int main()
{
	float a;
	float b;
	cout << "请输入圆锥底的半径" << endl;
	cin >> a;
	cout << "请输入圆椎的高" << endl;
	cin >> b;
	cout <<"体积大约为："<< yuanzhui(a, b) << endl;
	
}
*/
/*#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "bool length:" << sizeof(bool) << endl;


}*/

/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; 
	system("pause");
	return 0;
}
*/
/*#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
	double x = 142.49;
	int y;
	y=int (x) ;
	cout << y << endl;




}
*/
/*#include<iostream>
#include<iomanip>
using namespace std;
float sheshidu(float a)//定义转换函数
{
	float v;
	v = (a - 32.0) / 1.8;
	return v;

}
int main()
{
	float b;
	cout << "请输入华氏度：" << endl;
	cin >> b;
	cout << "您输入的华氏度转化为摄氏度后是:" << setprecision(4) << sheshidu(b) << endl;
	return 0;
}
*/








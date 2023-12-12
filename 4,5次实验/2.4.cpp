/*#include<iostream>
#include<string>
using namespace std;
void KFC(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 1; i < size1+1; i++)
	{
		list3[i] = list1[i];     //数组一移入数组三
	}
	for (int k = (1 + size1); k < ((size1 + size2)+1); k++)
	{

		list3[k] = list2[k - size1];     //数组二部分
	}
	for (int m = 1; m < (size1 + size2); m++)        //数组三排序部分
		for (int b = 1; b < (size1 + size2); b++)
			if (list3[b] > list3[b + 1])
			{
				int temp = list3[b];
				list3[b] = list3[b + 1];
				list3[b + 1] = temp;
			}
			
	for (int a = 1; a < ((size1 + size2)+1); a++)
		cout << list3[a] << "  ";

}

int main()
{
	cout << "请输入第一个数组长度"<<endl;
    int size1;
	cin >> size1;
	cout << "请输入第二个数组长度" << endl;
	int size2;
	cin >> size2;
	
	int list1 [80];
	cout << "请输入第一个数组" << endl;
	for (int i = 1; i < 80; i++)
	{
		cin >> list1[i];
		if (cin.get() == '\n')
		{
			for (int k = i + 1; k < 80; k++)
				list1[k] = 0;
			    break;

		}
	}
	int list2[80];
	cout << "请输入第二个数组" << endl;
	for (int i = 1; i < 80; i++)
	{
		cin >> list2[i];
		if (cin.get() == '\n')
		{
			for (int k = i + 1; k < 80; k++)
				list2[k] = 0;
			break;

		}
	}
	int list3[80];
	cout << endl;
	KFC(list1, size1, list2, size2, list3);
}
*/
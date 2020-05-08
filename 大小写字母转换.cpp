#include<iostream>
using namespace std;
//将小写字母转换为大写字母，并输出它们的ASCII码及其原字符
int main()
{
	cout << "2019113681周聪杰" << endl;				//输出学号姓名
	char a = 0;
	cout << "请输入一个小写字母：";
	cin >> a;
	cout << "输入的小写字母是：" << a << ",    其ASCII码是：" << (int)a << endl;
	//输出第一行，强制类型转换输出ASCII码
	a -= 32;//大写字母比小写字母小32，注意A的ASCII码是65
	cout << "对于的大写字母是：" << a << ",    其ASCII码是：" << (int)a;
	//输出第二行，强制类型转换输出ASCII码
	return 0;
}
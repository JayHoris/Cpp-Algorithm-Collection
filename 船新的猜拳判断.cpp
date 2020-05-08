#include<iostream>
using namespace std;
//可继续的猜拳_第三章课后实验p4
int main()
{
	cout << "2019113681周聪杰" << endl;
	void result(int s);//声明用于判断胜负的函数
	char A;
	do
	{
		int a, b, s;
		cout << "**********新一局**********" << endl
			<< "\t1.出剪子\n"
			<< "\t2.出石头\n"
			<< "\t3.出布\n"
			<< "***************************" << endl
			<< "请输入甲乙的猜拳代码：\n";
		cin >> a >> b;
		s = a * 10 + b;	//用整形s来存储甲乙的猜拳情况，这一步很巧妙！极大简化代码
		if (a == b)
			cout << "平局";//判断二者相等时，输出平局
		else
			result(s);//调用函数
		cout << endl << "是否继续比赛?:Y/N" << endl;
		cin >> A;
	} while (A == 'Y' || A == 'y');//判断是否继续下一场
	if (A == 'N' || A == 'n') cout << "比赛结束";
	return 0;
}
void result(int s)
//判断胜负的函数
{
	switch (s)
	{
	case 12:cout << "乙赢：石头胜剪子"; break;
	case 13:cout << "甲赢：剪子胜布"; break;
	case 21:cout << "甲赢：石头胜剪子"; break;
	case 23:cout << "乙赢：布胜石头"; break;
	case 31:cout << "甲赢：剪子胜布"; break;
	case 32:cout << "乙赢：布胜石头"; break;		//用switch选择各种情况
	default: cout << "甲乙中出了一个内鬼！！"; break;
	}
}

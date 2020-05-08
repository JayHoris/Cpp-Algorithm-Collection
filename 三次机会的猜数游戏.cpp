#include<iostream>
#include<cstdlib>
using namespace std;
//三次机会的猜数游戏，并给出大小提示
int main()
{
	cout << "2019113681周聪杰" << endl;
	int num, gess;
	num = 1 + rand() % 100;
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入猜数（1~100）";
		cin >> gess;
		if (gess == num)
		{
			cout << "恭喜！中奖了！";
			break;
		}
		gess > num ? cout << "数值大了\n" : cout << "数值小了\n";
		if (i == 2)
		{
			cout <<"被猜数是"<<num<<endl<< "谢谢参与。";
		}
	}

	return 0;
}
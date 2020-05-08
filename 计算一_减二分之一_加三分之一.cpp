#include<iostream>
using namespace std;
//计算1-1/2+3/1-1/4……-1/100
int main()
{ 
	cout << "2019113681周聪杰" << endl;
	int sign=1;
	double term, sum = 0;
	for (int i = 1; i <=100; i++)
	{
		term = 1.0 / (double)i;//注意强制类型转换
		sum += sign * term;//注意！计算项值不带符号，求和才带符号！！养成良好习惯
		sign *= -1;
	}
	cout << sum;
	return 0;
}
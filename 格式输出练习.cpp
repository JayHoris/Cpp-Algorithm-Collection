#include<iostream>
#include<iomanip>//格式输出的语句分为set开头和cout开头的，凡是set开头的语句都需要iomanip
#include<string>
using namespace std;
//格式输出成绩单_实验2-1
void main()
{
	cout << "2019113681周聪杰" << endl;         //输出学号姓名
	double a, b, c, aver;
	string name, num;							//变量声明
	cout << "请输入学号和姓名：";
	cin >> num >> name;
	cout << "请输入三门课成绩：";
	cin >> a>>b>>c;							//输入相关信息
	cout << fixed;
	cout.precision(2);							//控制输出精度
	aver = (a + b + c) / 3;
	//setw(n)默认右对齐，故不需setioflags(ios::right)
	cout << setw(13) << "学号" << setw(12) << "姓名" << setw(12) << "高等数学" << setw(12) << "普通物理" << setw(12) << "大学英语" << endl
		<< setw(13) << num << setw(12) << name << setw(12) << a << setw(12) << b << setw(12) << b << endl;
	//格式输出
	//一个中文字符在输出时占两个宽度
	cout << "该同学的三门课程平均成绩为：" << aver;
}
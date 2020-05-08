#include<iostream>
using namespace std;
//输入年月日，判断是本年的哪一天，p104
int  main()
{
    int year, month, day, sum_day = 0;
    cout << "请分别输入年月日：";
    cin >> year >> month >> day;
    switch (month)
        {
        case 12: sum_day += 30;
        case 11: sum_day += 31;
        case 10: sum_day += 30;
        case 9: sum_day += 31;
        case 8: sum_day += 31;
        case 7: sum_day += 30;
        case 6: sum_day += 31;
        case 5: sum_day += 30;
        case 4: sum_day += 31;
        case 3: sum_day += 28;
        case 2: sum_day += 31;
        case 1: sum_day += 0;
        }
    //利用switch的特性求和
    sum_day = sum_day + day;
    if (month > 2)
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//判断是否是闰年
            sum_day++;
    cout << "这是" << year << "年的第" << sum_day << "天" << endl;
    return 0;
}
#include <iostream>

#include <array>

using namespace std;

void lianxi51();

void lianxi52();

void lianxi53();

void lianxi54();

void lianxi55();

const int ArSize = 101;

int main()
{
	lianxi55();






	system("pause");

	return 0;
}

void lianxi51()

{
	int first, end;

	cout << "请输入两个整数：" << endl;

	cin >> first;

	cin >> end;

	int a;

	if (first>end)

	{
		a = first;

		first = end;

		end = a;

	}

	int b=0 ;
    
	for (; first <=end;first++)

	{
		b = b + first;

	}

	cout << b << endl;


}

void lianxi52()

{
	array <long double , ArSize>arr;

	arr[0] = arr[1] = 1LL;

	for (int i = 2; i < ArSize;i++)

	{
		arr[i] = i*arr[i - 1];

	}

	 for (int i = 0; i < ArSize;i++)
	 {
		cout << i << "! = " << arr[i] << endl;

	 }
	




}
void lianxi53()

{
	cout << "请输入一个数字： " << endl;

	long double shuzi;

	long double he = 0;

	cin >> shuzi;
    
	while (shuzi)

	{

		he = he + shuzi;

		cout << "到目前为止输入数的和：" << he << endl;

		cin >> shuzi;

		

	}

	cout << "输入结束！！！！" << endl;


}
void lianxi54()

{  

	double Daphne = 100;

	double Cleo = 100;

	int years = 0;

	do 

	{
		Daphne = Daphne+10;

		Cleo = Cleo*(1 + 0.05);

		years++;
	}


	while (Daphne > Cleo);

	 cout << "在 " << years << "年后Cleo的钱比Daphne多" << endl;


}

void lianxi55()

{
	char * months[12] = { "1月", "2月", "3月", "4月", "5月", "6月", "7月", "8月", "9月", "10月", "11月", "12月" };

	int books[12];

	int total=0;

	for (int i = 0; i<12; i++)

	{
		cout << "请输入" << months[i] << "这个月的销售量" << endl;

		cin >> books[i];

	}

	for (int i = 0; i < 12;i++)

	{

		total = total + books[i];


	}

	cout << "一年总共销售的书本是：" << total << endl;






}
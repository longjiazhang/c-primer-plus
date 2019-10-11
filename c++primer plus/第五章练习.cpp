#include <iostream>

#include <array>

#include <string>

#include <cstring>

using namespace std;

void lianxi51();

void lianxi52();

void lianxi53();

void lianxi54();

void lianxi55();

void lianxi56();

void lianxi57();

void lianxi58();

void lianxi59();

void lianxi10();

const int ArSize = 101;

struct car 
{
	string name_of_product;

	int years;

};

int main()
{
	lianxi10();

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

void lianxi56()	  

{
	char * months[3][12] =
	{ 
		{ "1月", "2月", "3月", "4月", "5月", "6月", "7月", "8月", "9月", "10月", "11月", "12月" },
		{ "1月", "2月", "3月", "4月", "5月", "6月", "7月", "8月", "9月", "10月", "11月", "12月" },
		{ "1月", "2月", "3月", "4月", "5月", "6月", "7月", "8月", "9月", "10月", "11月", "12月" }
	
	};

	int books[3][12];

	int total[3] = { 0, 0, 0 };

	for (int a =0; a <3;a++)
	{
	
		cout << "请输入第  " << a+1 << "  年的每月销售量" << endl;

		cout << endl;

		cout << endl;


	  for (int i = 0; i < 12; i++)

	 {
		cout << "请输入" << months[a][i] << "这个月的销售量" << endl;

		cin >> books[a][i];

	 }

	for (int i = 0; i < 12; i++)

	{

		total[a] = total[a] + books[a][i];

	}

	cout << "一年总共销售的书本是：" << total[a] << endl;

	}

	int all=0;

	for (int b = 0; b < 3;b++)

	{
		all = all + total[b];

	}

	cout << "三年的总销售额是:  " << all << endl;

}


void lianxi57()

{
   
	cout << "How many cars do you wish to catalog ?" << endl;

	int shulaing;

	cin >> shulaing;

	car * duixiang = new car[shulaing];

	for (int i = 0; i < shulaing;i++)

	{
		cout << "Car #" << i + 1 << endl;

		cout << "Please enter the make: " << endl;

		cin >> duixiang[i].name_of_product;

		cin.get();

		cout << "Please enter the year made: " << endl;

		cin >> duixiang[i].years;

	}

	cout << "Here is your Hornet" << endl;

	for (int i = 0; i < shulaing;i++)
	{

		cout << duixiang[i].years << "   " << duixiang[i].name_of_product << endl;

	}

	delete[] duixiang;

}

void lianxi58()

{
	cout << "Enter words (to stop, type the word done" << endl;

	char danci[100];

	static char stop[] = "done";

	int shuliang = 0;

	
   do

   {
	   cin >> danci;

	   shuliang++;


   } 
   
   while ( strcmp(danci,stop));

   cout << "You entered a total of " << shuliang-1 << "  words" << endl;

}

void lianxi59()
{
	cout << "Enter words (to stop, type the word done" << endl;

	string danci;

	static string s1 = "done";

	int shuliang = 0;


	do

	{
		cin >> danci;

		shuliang++;

	}

	while (s1!=danci);

	cout << "You entered a total of " << shuliang - 1 << "  words" << endl;

}

void lianxi10()

{
	cout << "请输入一个值：" << endl;

	int  zhi=0;

	cin >> zhi;

	for (int i = 1; i <= zhi;i++)

	{


		for (int a = 1; a <= zhi-i;a++)

		{

			cout << "  .  ";


		}

		for (int a = 1; a <=  i; a++)

		{

			cout << "  *  ";


		}

		cout << endl;

		cout << endl;


	}







}
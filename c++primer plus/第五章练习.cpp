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

	cout << "����������������" << endl;

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
	cout << "������һ�����֣� " << endl;

	long double shuzi;

	long double he = 0;

	cin >> shuzi;
    
	while (shuzi)

	{

		he = he + shuzi;

		cout << "��ĿǰΪֹ�������ĺͣ�" << he << endl;

		cin >> shuzi;

		

	}

	cout << "���������������" << endl;


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

	 cout << "�� " << years << "���Cleo��Ǯ��Daphne��" << endl;


}

void lianxi55()

{
	char * months[12] = { "1��", "2��", "3��", "4��", "5��", "6��", "7��", "8��", "9��", "10��", "11��", "12��" };

	int books[12];

	int total=0;

	for (int i = 0; i<12; i++)

	{
		cout << "������" << months[i] << "����µ�������" << endl;

		cin >> books[i];

	}

	for (int i = 0; i < 12;i++)

	{

		total = total + books[i];


	}

	cout << "һ���ܹ����۵��鱾�ǣ�" << total << endl;






}
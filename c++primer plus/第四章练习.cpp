#include <iostream>
#include <string>
#include <cstring>
#include <ctime>


using namespace std;

const int arr_size = 20;

struct student 

{
	char firstname[arr_size];

	char lastname[arr_size];

	int   age;

	char grade;

};

struct student2

{
	string firstname2;

	string lastname2;

	int   age2;

	string  grade2;

};

struct CandyBar

{
	char type[20];

	double weight;

	int ka;

};

struct pisa

{
	string name;

	int  changdu;

	double di;

	double weight;

};

void lianxi1();

void lianxi2();

void lianxi3();

void lianxi4();

void lianxi5();

void lianxi6();

void lianxi7();

void lianxi8();

void lianxi9();

/*int main()

{

	//lianxi1();

	//lianxi2();

	//lianxi3();

	//lianxi4();

	//lianxi5();

	//lianxi6();

	//lianxi7();

	lianxi8();

	//lianxi9();

	


}	 */

void lianxi1()
{
	student firstone;

	cout << "������ĵ�һ�����֣�" << endl;

	cin.getline(firstone.firstname, arr_size);

	cout << "����������һ�����֣� " << endl;

	cin.getline(firstone.lastname, arr_size);

	cout << "����������䣺" << endl;

	cin >> firstone.age;

	cout << "������ĳɼ���" << endl;

	cin >> firstone.grade;

	cout << "Name:  " << firstone.firstname << "," << firstone.lastname << endl;

	cout << "Grade:  " << char(firstone.grade + 1) << endl;

	cout << "Age:  " << firstone.age << endl;

}

void lianxi2()

{
	student2 firsttwo;

	cout << "������ĵ�һ�����֣�" << endl;

	getline(cin, firsttwo.firstname2);

	cout << "����������һ�����֣� " << endl;

	getline(cin, firsttwo.lastname2);

	cout << "����������䣺" << endl;

	cin >> firsttwo.age2;//�����޷�����ɼ�������Ϊ��ȡ����֮�󰴻س������ɵĻ��з���������������У������getline�������о���Ϊ��һ�����У���һ��cin.get()���ߣ�cin>>first.age2).get()

	cin.get();

	cout << "������ĳɼ���" << endl;

	getline(cin, firsttwo.grade2);

	cout << "Name:  " << firsttwo.firstname2 << "," << firsttwo.lastname2 << endl;

	cout << "Grade:  " << firsttwo.grade2 << endl;

	cout << "Age:  " << firsttwo.age2 << endl;


}

void lianxi3()
{
	cout << "�����������  " << endl;

	char firstname[20];

	cin.getline(firstname, 20);

	cout << "����������ԣ�  " << endl;

	char nextname[20];

	cin.getline(nextname, 20);

	strcat(nextname, ", ");	//ʵ���ַ�����ƴ��

	strncat(nextname, firstname, 20);  //��src��ָ�ַ�����ǰn���ַ���ӵ�dest��ָ�ַ����Ľ�β����������dest��ָ�ַ�����β��'\0'���Ӷ�ʵ���ַ���������

	cout << "Here's the information in a single string: " << nextname << endl;


}

void lianxi4()
{
	cout << "�����������  " << endl;

	string firstname;

	getline(cin,firstname);

	cout << "����������ԣ�  " << endl;

	string nextname;

	getline(cin,nextname);

	
	string fujia = ", ";

	string fullname = firstname + fujia + nextname;

	cout << "Here's the information in a single string: " << fullname << endl;


}

void lianxi5()

{
	CandyBar snack = { "Mocha Munch", 2.3, 350 };

	cout << snack.type << endl;

	cout << snack.weight << endl;

	cout << snack.ka << endl;

}

void lianxi6()
{
	CandyBar pa[3] = { "abc", 2.3, 350, "cbd", 2.5, 340, "dbd", 2.9, 200 };

	cout << pa[0].weight << pa[0].type << pa[0].ka << endl;

	cout << pa[1].weight << pa[1].type << pa[1].ka << endl;

	cout << pa[2].weight << pa[2].type << pa[2].ka << endl;

}

void lianxi7()
{
	pisa one;

	cout << "���������ƣ�  " << endl;

	getline(cin, one.name);

	cout << "���������Ƶĳ��ȣ� " << endl;

	cin >> one.changdu;

	cin.get();

	cout << "������������ֱ��:  " << endl;
	
	cin >> one.di;

	cin.get();

	cout << "������������������  " << endl;

	cin >> one.weight;

	cout << one.name << endl;

	cout << one.changdu << endl;

	cout << one.di << endl;

	cout << one.weight << endl;

}

void lianxi8()

{
	pisa * pa = new pisa;

	cout << "���������Ƶĳ��ȣ� " << endl;

	cin >> pa->changdu;

	cout << "���������ƣ�  " << endl;

	cin.get();

	getline(cin, pa->name);

	cout << "������������ֱ��:  " << endl;

	cin.get();

	cin >> pa->di;

	cin.get();

	cout << "������������������  " << endl;

	cin >> pa->weight;

	cout <<pa->changdu << endl;

	cout << pa->weight << endl;

	cout << pa->di << endl;

	cout << (*pa).name << endl;	 //����ط�Ҫ������

	clock_t time = clock();

	time = time / CLOCKS_PER_SEC;

	cout << time << endl;

}

void lianxi9()
{
	CandyBar *pa = new CandyBar;//�����ָ�뵱����������ʹ��

	pa[0] = { "zhan", 20.0, 3 };

	pa[1] = { "zhassn", 20.3, 4 };

	pa[2] = { "zhassn", 20.4,6 };

	cout << pa[0].weight << pa[0].type << pa[0].ka << endl;

	cout << pa[1].weight << pa[1].type << pa[1].ka << endl;

	cout << pa[2].weight << pa[2].type << pa[2].ka << endl;

	delete pa;
																						
}
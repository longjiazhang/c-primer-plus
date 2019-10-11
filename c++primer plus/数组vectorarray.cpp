/************************************************************************************
无论是数组还是vector或者array都可使用标准数组表示法访问各个元素。array对象和数组存储在相同的内存区域中即栈中
而vector对象存储在另一个区域中（自由存储区或堆），array可以将一个对象赋值给另外一个对象，数组需逐个赋值

***************************************************************************************/

#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;


struct fish
{
	char type[30];

	int height;

	double changdu;


};


/*int main()

{
	//char actor[30];

	//short betsie[100];

	//float chuck[13];

	//long double dipsea[64];

	array<char, 30>actor;

	array<short, 100>betsie;

	array <float, 13> chuck;

	array<long double, 64> dipsea;

	int zhengshu[5] = { 1, 3, 5, 7, 9 };

	int even;

	even = zhengshu[0];

	cout << even << endl;

	even = zhengshu[4];

	cout << even << endl;

	char shuzu[] = "cheeseburger";

	string shuzu1 = "waldorfsalad";

	fish one =
	{
		"goldfish",

		 30,

	    2.44
	};

	enum response{yes=1,no=0,maybe=2};

	double ted=10.1;

	double *ted1 = &ted;

	cout << *ted1 << endl;

	float treacle[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	float * pa = treacle;

	cout << *(pa ) << endl;

	cout << *(pa + 9) << endl;

	cout << "输入一个正整数：" << endl;

	
	fish *ps = &one;

	cout << ps->changdu << endl;

	cout << ps->height << endl;

	cout << ps->type << endl;

	//double al[4] = { 1.2, 3.4, 3.6, 4.8 };

	//vector<double>a2(4);//vector声明数组

	//a2[0] = 1.0 / 3.0;

	//a2[1] = 1.0 / 5.0;

	//a2[2] = 1.0 / 7.0;

	//a2[3] = 1.0 / 9.0;

	//array <double,4> a3 = { 3.14, 2.71, 1.62, 1.41 };  //array声明数组

	//array <double,4> a4 = a3;

	//cout << "al[2]: " << al[2] << " at " << &al[2] << endl;	  

	//cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;

	//cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;

	//cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	//al[-2] = 20.2;	//这将被转换为*（al-2)=20.2,意思是找到al指向的地方，向前以两个double元素，并将20.2存储到目的地

	////a2.at(-2) = 20.2;  //使用at（）将在运行期间捕获非法索引，程序默认中断，使用这种方式则运行时间更长

	//a3.at(2) = 20.3;

	//cout << "al[-2]: " << al[-2] << " at " << &al[-2] << endl;

	//cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;

	//cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	system("pause");

	return 0;



}
*/
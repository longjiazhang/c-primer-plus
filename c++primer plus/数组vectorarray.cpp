/************************************************************************************
���������黹��vector����array����ʹ�ñ�׼�����ʾ�����ʸ���Ԫ�ء�array���������洢����ͬ���ڴ������м�ջ��
��vector����洢����һ�������У����ɴ洢����ѣ���array���Խ�һ������ֵ������һ�����������������ֵ

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

	cout << "����һ����������" << endl;

	
	fish *ps = &one;

	cout << ps->changdu << endl;

	cout << ps->height << endl;

	cout << ps->type << endl;

	//double al[4] = { 1.2, 3.4, 3.6, 4.8 };

	//vector<double>a2(4);//vector��������

	//a2[0] = 1.0 / 3.0;

	//a2[1] = 1.0 / 5.0;

	//a2[2] = 1.0 / 7.0;

	//a2[3] = 1.0 / 9.0;

	//array <double,4> a3 = { 3.14, 2.71, 1.62, 1.41 };  //array��������

	//array <double,4> a4 = a3;

	//cout << "al[2]: " << al[2] << " at " << &al[2] << endl;	  

	//cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;

	//cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;

	//cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	//al[-2] = 20.2;	//�⽫��ת��Ϊ*��al-2)=20.2,��˼���ҵ�alָ��ĵط�����ǰ������doubleԪ�أ�����20.2�洢��Ŀ�ĵ�

	////a2.at(-2) = 20.2;  //ʹ��at�������������ڼ䲶��Ƿ�����������Ĭ���жϣ�ʹ�����ַ�ʽ������ʱ�����

	//a3.at(2) = 20.3;

	//cout << "al[-2]: " << al[-2] << " at " << &al[-2] << endl;

	//cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;

	//cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	system("pause");

	return 0;



}
*/
#include <iostream>
using namespace  std;

struct antarctica_years_end
{
	int year;

};

/*int main()

{
	antarctica_years_end s01, s02, s03;

	s01.year = 2013;

	antarctica_years_end * pa = &s02;//声明一个结构指针，并把s02的地址赋给指针pa

	pa->year = 2014;

	antarctica_years_end trio[3];  //声明一个结构数组

	trio[0].year = 2015;  //把第一个值改为2015

	cout << trio->year << endl;	 //这里应该输出2015

	const antarctica_years_end *arp[3] = { &s01, &s02, &s03 };	//声明一个结构指针数组

	cout << arp[1]->year << endl; //arp[1]存放的是s02的地址，输出2014

	const antarctica_years_end * * ppa = arp;	//声明结构指针，*ppa是一个结构指针，存放的是数组arp首个元素的地址，又因为arp首个元素是指针所以ppa是指针

	auto ppb = arp;	//

	cout << (*ppa)->year << endl;	//输出2013

	cout << (*(ppb + 1))->year << endl;	  //输出2014

	system ("pause");

	return 0;



				

}
*/
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

	antarctica_years_end * pa = &s02;//����һ���ṹָ�룬����s02�ĵ�ַ����ָ��pa

	pa->year = 2014;

	antarctica_years_end trio[3];  //����һ���ṹ����

	trio[0].year = 2015;  //�ѵ�һ��ֵ��Ϊ2015

	cout << trio->year << endl;	 //����Ӧ�����2015

	const antarctica_years_end *arp[3] = { &s01, &s02, &s03 };	//����һ���ṹָ������

	cout << arp[1]->year << endl; //arp[1]��ŵ���s02�ĵ�ַ�����2014

	const antarctica_years_end * * ppa = arp;	//�����ṹָ�룬*ppa��һ���ṹָ�룬��ŵ�������arp�׸�Ԫ�صĵ�ַ������Ϊarp�׸�Ԫ����ָ������ppa��ָ��

	auto ppb = arp;	//

	cout << (*ppa)->year << endl;	//���2013

	cout << (*(ppb + 1))->year << endl;	  //���2014

	system ("pause");

	return 0;



				

}
*/
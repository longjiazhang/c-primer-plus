#include <iostream>
const double * f1(const double ar[], int n);  //�������ص���double�͵ĵ�ַ

const double *f2(const double[], int);

const double *f3(const double *, int);

/*int main()

{
	using namespace  std;

	double av[3] = { 1112.3, 1542.6, 2227.9 };	 //����һ����3��doubleԪ�ص�����

	const double * (*pl)(const double *, int) = f1;	//����ָ�룬*pl�ͺ���fl��ͬ���Ĺ���

	auto p2 = f2;  //c++11�Զ������ƶ�

	cout << "Using pointers to functions :\n";

	cout << "Address Valus\n";

	//	(*pl)(av, 3)��ʾ����fl(av, 3) ,Ӧ��������av�ĵ�һ��Ԫ�صĵ�ַ
	//	 *(*pl)(av, 3)��ʾ����ֵ��(*pl)(av, 3)Ϊ��ַ�����һ��*��ʾֵ��Ӧ��1112.3

	cout << (*pl)(av, 3) << " : " << *(*pl)(av, 3) << endl;	

	//	p2(av, 3)�� *p2(av, 3)ͬ���淵������ar�ĵڶ���Ԫ�ص�ַ��ֵ

	cout << p2(av, 3) << " : " << *p2(av, 3) << endl;

	//����ָ������

	const double * (*pa[3])(const double *, int) = { f1, f2, f3 };

	//pb��pa��ͬ���͵�����

	auto pb = pa;

	cout << "\nUsing an array of pointers to functions:\n";

	cout << "Address Value\n";

	//��������ĵ�ַ�Ͷ�Ӧ��ֵ

	for (int i = 0; i < 3;i++)

	{
		cout << pa[i](av, 3) << " : " << *pa[i](av, 3) << endl;

	}

	cout << "\nUsing a pointer to a pointer to a function:\n";

	cout << "Adress Value\n";

	for (int i = 0; i < 3;i++)

	{
		cout << pb[i](av, 3) << "  :  " << *pb[i](av, 3) << endl;

	}

	cout << "\nUsing pointers to an array of pointers:\n";

	cout << "Address Value\n";

	//����Ӧ�����Ϊpcȥ������������pa�ĵ�ַ

	auto pc = &pa;

	//�����һ��Ԫ�صĵĵ�ַ�͵�һ��Ԫ�ص�ֵ

	cout << (*pc)[0](av, 3)<< " : " << *(*pc)[0](av, 3) << endl;

	//	pd��һ��ָ�룬ָ���������Ԫ�ص�����

	const double *(*(*pd)[3])(const double *, int) = &pa;

	// (*pd)[1](av, 3)��ʾ�ڶ�Ԫ�صĵ�ַ��pdb=�ڶ���Ԫ�صĵ�ַ

	const double *pdb = (*pd)[1](av, 3);

	//�����ַ��ֵ

	cout << pdb << " : " << *pdb << endl;

	// (*(*pd)[2](av, 3))��ʾ���ú��������ص�ַ��*(*(*pd)[2])(av, 3)��ʾֵ

	cout << (*(*pd)[2](av, 3)) << " : " << *(*(*pd)[2])(av, 3) << endl;

	getchar();

	return 0;

}  */

const double *f1(const double ar[], int n)
{
	return ar;
}

const double *f2(const double ar[], int n)
{
	return ar + 1;

}

const double *f3(const double ar[], int n)
{
	return ar + 2;
}
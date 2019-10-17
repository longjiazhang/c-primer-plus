#include <iostream>
const double * f1(const double ar[], int n);  //函数返回的是double型的地址

const double *f2(const double[], int);

const double *f3(const double *, int);

/*int main()

{
	using namespace  std;

	double av[3] = { 1112.3, 1542.6, 2227.9 };	 //创建一个含3个double元素的数组

	const double * (*pl)(const double *, int) = f1;	//函数指针，*pl和函数fl有同样的功能

	auto p2 = f2;  //c++11自动类型推断

	cout << "Using pointers to functions :\n";

	cout << "Address Valus\n";

	//	(*pl)(av, 3)表示的是fl(av, 3) ,应该是数组av的第一个元素的地址
	//	 *(*pl)(av, 3)表示的是值，(*pl)(av, 3)为地址，则加一个*表示值，应是1112.3

	cout << (*pl)(av, 3) << " : " << *(*pl)(av, 3) << endl;	

	//	p2(av, 3)和 *p2(av, 3)同上面返回数组ar的第二个元素地址和值

	cout << p2(av, 3) << " : " << *p2(av, 3) << endl;

	//函数指针数组

	const double * (*pa[3])(const double *, int) = { f1, f2, f3 };

	//pb和pa是同类型的数组

	auto pb = pa;

	cout << "\nUsing an array of pointers to functions:\n";

	cout << "Address Value\n";

	//返回数组的地址和对应的值

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

	//这里应该理解为pc去的是整个数组pa的地址

	auto pc = &pa;

	//输出第一个元素的的地址和第一个元素的值

	cout << (*pc)[0](av, 3)<< " : " << *(*pc)[0](av, 3) << endl;

	//	pd是一个指针，指向包含三个元素的数组

	const double *(*(*pd)[3])(const double *, int) = &pa;

	// (*pd)[1](av, 3)表示第二元素的地址，pdb=第二个元素的地址

	const double *pdb = (*pd)[1](av, 3);

	//输出地址和值

	cout << pdb << " : " << *pdb << endl;

	// (*(*pd)[2](av, 3))表示调用函数，返回地址，*(*(*pd)[2])(av, 3)表示值

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
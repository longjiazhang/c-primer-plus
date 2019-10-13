#include <iostream>
#include <fstream>//头文件fstream定义了一个用于处理输出的ofstream类

/*int main()
{
	using namespace std;
    
	char automobile[50];

	int year;

	double a_price;

	double b_price;

	ofstream outfile;//定义一个打开文本文件的对象，可以像cout那样使用

	outfile.open("automobile.txt");//可以在目录下创建automobile.txt文本 ，如果已经有这个文件，则程序会清空里面的东西。

	cout << "Enter the make and model of automobile:  "<<endl;

	cin.getline(automobile, 50);   //读入一行的数据到数组中

	cout << "Enter the model year:  ";

	cin >> year;

	cout << "Enter the original asking price:  ";

	cin >> a_price;

	b_price = 0.913*a_price;

	cout << fixed;//cout<<fixed 表示用一般的方式输出浮点数

	cout.precision(2); //精确显示小数点后两位

	cout.setf(ios_base::showpoint);//强制显示浮点数小数点后的0

	cout << "Make and model:  " << automobile << endl; 

	cout << "Year:  " << year << endl;

	cout << "Was asking $" << a_price << endl;

	cout << "Now asking $" << b_price << endl;

	outfile << fixed;

	outfile.precision(2);

	outfile.setf(ios_base::showpoint);

	outfile << "Make and model:  " << automobile << endl;

	outfile << "Year:  " << year << endl;

	outfile << "Was asking $" << a_price << endl;

	outfile << "Now asking $" << b_price << endl;

	outfile.close();

	system("pause");

	return 0;

}
*/
#include <iostream>
#include <fstream>
#include <cstdlib>

/*const int SIZE = 60;

int main()

{
	using namespace std;

	char filename[SIZE];

	ifstream inFile;//定义一个输入的对象

	cout << "Enter name of data file:  ";

	cin.getline(filename, SIZE); //输入要打开数据的文本的名称

	inFile.open(filename);

	if (!inFile.is_open())	//判断文件是否打开

	{
		cout << "Can't open the file " << filename << endl;

		cout << "program terminating. \n";

		exit(EXIT_FAILURE);//exit在头文件cstdlib下，用来终止程序

	}

	double value;

	double sum = 0.0;

	int count = 0;

	inFile >> value; //读入数据

	while (inFile.good()) //判断文件时否打开  is_open 只表示文件的打开，good则表示最后一次读入数据是否成功

	{
		++count;

		sum += value;

		inFile >> value;   //读入数据

	}

	if (inFile.eof())  //检查是否到文件末尾

	{
		cout << "End of file reached. \n";

	}
	else if (inFile.fail())	//判断读取文件时是否数据类型错误

	{
		cout << "Input terminated by data mismatch.\n";
	}
	else //其他未知情况报错

		cout << "Input terminated for unknown reason. \n";

	if (count==0)  //如果没有数据则显示没有数据

	{
		cout << "No data processed. \n";
	}

	else
	{
		cout << "Items read :" << count << endl;

		cout << "Sum ;" << sum << endl;

		cout << "average :" << sum / count << endl;
	}

	inFile.close();	//关闭文件

	system("pause");

	return 0;

}
*/
#include <iostream>
#include <fstream>
#include <cstdlib>

/*const int SIZE = 60;

int main()

{
	using namespace std;

	char filename[SIZE];

	ifstream inFile;//����һ������Ķ���

	cout << "Enter name of data file:  ";

	cin.getline(filename, SIZE); //����Ҫ�����ݵ��ı�������

	inFile.open(filename);

	if (!inFile.is_open())	//�ж��ļ��Ƿ��

	{
		cout << "Can't open the file " << filename << endl;

		cout << "program terminating. \n";

		exit(EXIT_FAILURE);//exit��ͷ�ļ�cstdlib�£�������ֹ����

	}

	double value;

	double sum = 0.0;

	int count = 0;

	inFile >> value; //��������

	while (inFile.good()) //�ж��ļ�ʱ���  is_open ֻ��ʾ�ļ��Ĵ򿪣�good���ʾ���һ�ζ��������Ƿ�ɹ�

	{
		++count;

		sum += value;

		inFile >> value;   //��������

	}

	if (inFile.eof())  //����Ƿ��ļ�ĩβ

	{
		cout << "End of file reached. \n";

	}
	else if (inFile.fail())	//�ж϶�ȡ�ļ�ʱ�Ƿ��������ʹ���

	{
		cout << "Input terminated by data mismatch.\n";
	}
	else //����δ֪�������

		cout << "Input terminated for unknown reason. \n";

	if (count==0)  //���û����������ʾû������

	{
		cout << "No data processed. \n";
	}

	else
	{
		cout << "Items read :" << count << endl;

		cout << "Sum ;" << sum << endl;

		cout << "average :" << sum / count << endl;
	}

	inFile.close();	//�ر��ļ�

	system("pause");

	return 0;

}
*/
#include <iostream>
#include <fstream>//ͷ�ļ�fstream������һ�����ڴ��������ofstream��

/*int main()
{
	using namespace std;
    
	char automobile[50];

	int year;

	double a_price;

	double b_price;

	ofstream outfile;//����һ�����ı��ļ��Ķ��󣬿�����cout����ʹ��

	outfile.open("automobile.txt");//������Ŀ¼�´���automobile.txt�ı� ������Ѿ�������ļ����������������Ķ�����

	cout << "Enter the make and model of automobile:  "<<endl;

	cin.getline(automobile, 50);   //����һ�е����ݵ�������

	cout << "Enter the model year:  ";

	cin >> year;

	cout << "Enter the original asking price:  ";

	cin >> a_price;

	b_price = 0.913*a_price;

	cout << fixed;//cout<<fixed ��ʾ��һ��ķ�ʽ���������

	cout.precision(2); //��ȷ��ʾС�������λ

	cout.setf(ios_base::showpoint);//ǿ����ʾ������С������0

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
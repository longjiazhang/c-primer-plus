#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

void lianxi61();

void lianxi62();

int main()

{
	lianxi61();

	system("pause");

	return 0;
	
}

void lianxi61()

{
	char words;

	cin >> words;

	while (words != '@')//��������ַ�������@ʱ

	{
		if(!isdigit(words))	//����ַ���������ʱ

		{
			if (isupper(words))	//����ַ��Ǵ�д

			{
				words = tolower(words);	 //תΪСд

				cout << words ;
			}
			else
			{
				words = toupper(words);	//תΪ��д

				cout << words ;
			}

			cin >> words;
			
		}

		else
			cin >> words;
	}

}

void lianxi62()

{
	array<double, 10> arr;	 //��ģ��array����һ������

	int counts = 0;	//����������������м���

	double total=0.0; //��ʾ���������ܺ�

	int shuliang = 0;  //������ʾ����ƽ�����ĸ���

	cin >> arr[0];	 //�������Ž�������

	while (!cin.fail())	 //���������ͶԵ�ʱ��

	{
		counts++;

		if (counts>=10)

		{
			break;//������10ʱ����
		}
		
		cin >> arr[counts];
	}

	for (int i = 0; i < counts;i++)

	{

		total += arr[i];	//���������������ĺ�
	
	}

	double average = 0;	//����ƽ����

	average = total / counts;

	for (int i = 0; i < counts;i++)	 //����ƽ�������1

	{
		if (arr[i]>average)

		{
			shuliang++;
		}
	}

	if (counts==0)

	{
		cout << "progranm terminating" << endl;
	 	
	}
	else

	{

	cout << "��Щ����ƽ��ֵ�ǣ�  " << average << endl;

	cout << "������ " << shuliang << " ��������ƽ��ֵ" << endl;
		
	cout << "progranm terminating" << endl;

	}
}
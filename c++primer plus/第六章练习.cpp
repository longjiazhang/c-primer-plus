#include <iostream>
#include <array>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ostream>
#include <cstdlib>

using namespace std;

void lianxi61();

void lianxi62();

void lianxi63();

void lianxi64();

void lianxi65();

void lianxi66();

void lianxi67();

void lianxi68();

void lianxi69();

const int strsize = 20;

struct juanzhu
{
	string name;

	double money;
};

struct  bop
{
	char fullname[strsize];

	char title[strsize];

	char bopname[strsize];

	int preference;
};


int main()

{
	lianxi69();

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

void lianxi63()

{
	cout << "Please enter one of the following choices:" << endl;

	cout << "c) carnivore              p) pianist    " << endl;
	cout << "t)  tree                  g) game       " << endl;

	char choice;

	cin >> choice;

	while (choice)

	{
		switch (choice)
		{ 
		case 'c':  cout << "������" << endl;
			break;

		case 'p': cout << "����С�ɰ�" << endl; 
			break;

		case 't': cout << "����һ����" << endl;
			break;

		case 'g': cout << "һ������Ϸ��" << endl;
			break;

		default: 	cout << "Please enter one of the following choices:" << endl;

			cout << "c) carnivore              p) pianist    " << endl;
			cout << "t)  tree                  g) game       " << endl;
			break;
		}

		cin >> choice;

	}	   
}

void lianxi64()

{
	bop members[5] = {
		{ "wimp Macho", "jiaoshou", "yisheng", 1 },
		{"Raki Rhodes", "jingca", "fuqin",2},
		{ "Celia Laiter", "hushi", "muqin",3 } ,
		{ "Hoppy Hipman", "chushi", "gege",4 },
		{ "pat hand", "gongren", "didi",5 }
	};

	cout << "Benevolent Order of Programmers Report:" << endl;

	cout << "a. display by name             b. display by title" << endl;

	cout << "c. display by bopname          d. display by preference" << endl;

	cout << "q. quit" << endl;

	cout << "Enter your choice: " << endl;

	char choice;

	cin >> choice;

	while (choice)
	
	{
		switch (choice)

		{
		case  'a':
			for (int i = 0; i < 5;i++)
			{
				cout << members[i].fullname << endl;
			}
			break;
		case 'b':
			for (int i = 0; i < 5; i++)
			{
				cout << members[i].bopname<< endl;
			}
			break;
		case'c':
			for (int i = 0; i < 5; i++)
			{
				cout << members[i].title << endl;
			}
			break;
		case 'd':
			for (int i = 0; i < 5; i++)
			{
				cout << members[i].preference << endl;
			}
			break;

		case 'q': cout << "BYE!" << endl;
			
			break;

		default:

			cout << "Benevolent Order of Programmers Report:" << endl;

			cout << "a. display by name             b. display by title" << endl;

			cout << "c. display by bopname          d. display by preference" << endl;

			cout << "q. quit" << endl;

			cout << "Enter your choice: " << endl;

			break;
		}

		cin >> choice;
		
	}

}

void lianxi65()
{
	cout << "������������룺 " << endl;

	double shouru;

	cin >> shouru;

	double suodeishui = 0;

	while (!cin.fail()&&shouru>0)

	{
		if (shouru<=5000)

		{
			cout << "����˰Ϊ��" << suodeishui << endl;
		}
		else  if (5001<=shouru&&shouru<=15000)
		{

			suodeishui = (shouru - 5000)*0.1;

			cout << "����˰Ϊ��" << suodeishui << endl;

		}
		else if (15001<=shouru&&shouru<=35000)

		{
			suodeishui =( 10000 * 0.1 )+ ((shouru - 15000)*0.15);

			cout << "����˰Ϊ��" << suodeishui << endl;
		
		}
		else if (35000<shouru)

		{
			suodeishui = (10000 * 0.1) + (20000 * 0.15) + ((shouru-35000)*0.2);

			cout << "����˰Ϊ��" << suodeishui << endl;
		}
		cin >> shouru;
	}

}

void lianxi66()

{

	int numebrs = 0;

	cout << "����������ߵ���Ŀ��" << endl;

	cin >> numebrs;

	while (numebrs<0)
	{
		cout << "���������룺" << endl;
		cin.clear();
		cin.get();
		cin >> numebrs;
	}
	
	

	int renshu=0;

	int renshu1 = 0;

	juanzhu *person = new juanzhu[numebrs];

	for (int i = 0; i < numebrs;i++)

	{
		cout << "��������ߵ�������" << endl;

		cin >> person[i].name;

		cout << "����������ߵľ�" << endl;

		cin >> person[i].money;

		while (!cin.good()||person[i].money<0)
		{
			cout << "���������룺" << endl;
			cin.clear();
			cin.get();
			cin >> person[i].money;
		}

	}
	cout << "         Grand        Patrons          " << endl;

	for (int i = 0; i < numebrs; i++)

	{
		if (person[i].money>10000)

		{

			cout << "Nmae:     " << person[i].name << "    Money:     " << person[i].money << endl;

			renshu++;

		}
	
	}
	if (renshu == 0)

	{
		
		cout << "NONE" << endl;

		cout << endl;

	}

		cout << "             Patrons          " << endl;

		for (int i = 0; i < numebrs; i++)

	{

		if (person[i].money<10000)
		
		{
			cout << "Nmae:     " << person[i].name << "      Money:     " << person[i].money << endl;

			renshu1++;
		}

		

	}
	if (renshu1 == 0)

		{
			cout << "NONE" << endl;

		}

}
void lianxi67()

{
	cout << "Enter words (q to quit)" << endl;

	char shuru[20];

	cin >> shuru;

	int counts = 0;

	int counts_yuanyin = 0;

	int counts_fuyin = 0;

	int others = 0;

	
   while (shuru [0])

   {
   
	   if (shuru[0] == 'q'&&strlen(shuru) == 1)
	   {
		   break;
	   }
	  if (isalpha(shuru[0]))

	 {
		counts++;

		if (shuru[0] == 'a' || shuru[0] == 'e' || shuru[0] == 'i' || shuru[0] == 'o' ||shuru[0] == 'u')

		{
			counts_yuanyin++;
		}

		else
			counts_fuyin++;	

	 }
	  else


	others++;

	cin >> shuru;

   }

	cout << "һ�����룺" << counts_yuanyin << "Ԫ����ĸ" << endl;

	cout << "һ�����룺" << counts_fuyin << "������ĸ" << endl;

	cout << "һ�����룺" << others << "�Ǹ�����Ԫ������" << endl;
}

const int SIZE = 20;
void lianxi68()

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

   char value;

   int count = 0;

	inFile >> value; //��������

	while (inFile.good()) //�ж��ļ�ʱ���  is_open ֻ��ʾ�ļ��Ĵ򿪣�good���ʾ���һ�ζ��������Ƿ�ɹ�

	{
		++count;

		inFile >> value;   //��������

	}

	if (inFile.eof())  //����Ƿ��ļ�ĩβ

	{
		cout << "End of file reached. \n";

	}

	cout << "һ����  " << count << "  ���ַ�" << endl;
}

void lianxi69()

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

		int numebrs = 0;

		inFile >> numebrs;

		inFile.get();
		
		int renshu = 0;

		int renshu1 = 0;

		juanzhu *person = new juanzhu[numebrs];

		for (int i = 0; i < numebrs; i++)

		{
			getline(inFile,person[i].name);

		    inFile >> person[i].money;

		    inFile.get();

		}  
		cout << "         Grand        Patrons          " << endl;

		for (int i = 0; i < numebrs; i++)

		{
			if (person[i].money>10000)

			{

				cout << "Nmae:     " << person[i].name << "    Money:     " << person[i].money << endl;

				renshu++;

			}

		}
		if (renshu == 0)

		{

			cout << "NONE" << endl;

			cout << endl;

		}

		cout << "             Patrons          " << endl;

		for (int i = 0; i < numebrs; i++)

		{

			if (person[i].money < 10000)

			{
				cout << "Nmae:     " << person[i].name << "      Money:     " << person[i].money << endl;

				renshu1++;
			}

		}
		if (renshu1 == 0)

		{
			cout << "NONE" << endl;

		}

}


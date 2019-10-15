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

	while (words != '@')//当输入的字符不等于@时

	{
		if(!isdigit(words))	//如果字符不是数字时

		{
			if (isupper(words))	//如果字符是大写

			{
				words = tolower(words);	 //转为小写

				cout << words ;
			}
			else
			{
				words = toupper(words);	//转为大写

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
	array<double, 10> arr;	 //用模板array定义一个数组

	int counts = 0;	//用来对输入的数进行计数

	double total=0.0; //表示输入数的总和

	int shuliang = 0;  //用来表示大于平均数的个数

	cin >> arr[0];	 //输入数放进数组里

	while (!cin.fail())	 //当数据类型对的时候

	{
		counts++;

		if (counts>=10)

		{
			break;//当大于10时跳出
		}
		
		cin >> arr[counts];
	}

	for (int i = 0; i < counts;i++)

	{

		total += arr[i];	//求数组中所有数的和
	
	}

	double average = 0;	//定义平均数

	average = total / counts;

	for (int i = 0; i < counts;i++)	 //大于平均数则加1

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

	cout << "这些数的平均值是：  " << average << endl;

	cout << "其中有 " << shuliang << " 个数大于平均值" << endl;
		
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
		case 'c':  cout << "你是猪" << endl;
			break;

		case 'p': cout << "你是小可爱" << endl; 
			break;

		case 't': cout << "你是一颗树" << endl;
			break;

		case 'g': cout << "一起玩游戏吧" << endl;
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
	cout << "请输入你的输入： " << endl;

	double shouru;

	cin >> shouru;

	double suodeishui = 0;

	while (!cin.fail()&&shouru>0)

	{
		if (shouru<=5000)

		{
			cout << "所得税为：" << suodeishui << endl;
		}
		else  if (5001<=shouru&&shouru<=15000)
		{

			suodeishui = (shouru - 5000)*0.1;

			cout << "所得税为：" << suodeishui << endl;

		}
		else if (15001<=shouru&&shouru<=35000)

		{
			suodeishui =( 10000 * 0.1 )+ ((shouru - 15000)*0.15);

			cout << "所得税为：" << suodeishui << endl;
		
		}
		else if (35000<shouru)

		{
			suodeishui = (10000 * 0.1) + (20000 * 0.15) + ((shouru-35000)*0.2);

			cout << "所得税为：" << suodeishui << endl;
		}
		cin >> shouru;
	}

}

void lianxi66()

{

	int numebrs = 0;

	cout << "请输入捐献者的数目：" << endl;

	cin >> numebrs;

	while (numebrs<0)
	{
		cout << "请重新输入：" << endl;
		cin.clear();
		cin.get();
		cin >> numebrs;
	}
	
	

	int renshu=0;

	int renshu1 = 0;

	juanzhu *person = new juanzhu[numebrs];

	for (int i = 0; i < numebrs;i++)

	{
		cout << "输入捐献者的姓名：" << endl;

		cin >> person[i].name;

		cout << "请输入捐献者的捐款：" << endl;

		cin >> person[i].money;

		while (!cin.good()||person[i].money<0)
		{
			cout << "请重新输入：" << endl;
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

	cout << "一共输入：" << counts_yuanyin << "元音字母" << endl;

	cout << "一共输入：" << counts_fuyin << "辅音字母" << endl;

	cout << "一共输入：" << others << "非辅音和元音单词" << endl;
}

const int SIZE = 20;
void lianxi68()

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

   char value;

   int count = 0;

	inFile >> value; //读入数据

	while (inFile.good()) //判断文件时否打开  is_open 只表示文件的打开，good则表示最后一次读入数据是否成功

	{
		++count;

		inFile >> value;   //读入数据

	}

	if (inFile.eof())  //检查是否到文件末尾

	{
		cout << "End of file reached. \n";

	}

	cout << "一共有  " << count << "  个字符" << endl;
}

void lianxi69()

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


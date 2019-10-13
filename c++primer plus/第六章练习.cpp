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
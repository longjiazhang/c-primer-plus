#include<iostream>

struct box

{
	char maker[40];

	float height;

	float width;

	float length;

	float volume;

};

double lianxi71(double x, double y);

void lianxi72();

void lianxi73();

const int size = 10;

void xianshi( int grades[],int );

int shuru(int chengji[],int);

double average(int[],int );

void show(box show1);

void show2(box *show1);

void lianxi74();

void lianxi75();

void lianxi76();

long double probability(unsigned numbers, unsigned picks);

unsigned long long jiecheng(int i);

int Fill_array(double  ar[], int size);

void Show_array(double arr[], int size);

double * Reverse_array(double ar[], int size);




int main()

{
	/*double x, y;

	std::cout << "请输入两个数： " << std::endl;

	std::cin >> x;

	std::cin >> y;

	while (x!=0&&y!=0)
	{

	double jiguo= lianxi71(x, y);

	std::cout << "调和平均数为：" <<jiguo<< std::endl;

	std::cin >> x;

	std::cin >> y;

	}*/

	lianxi76();

	system("pause");

	return 0;

}

double lianxi71(double x, double y)

{

	double pingjunshu = 2.0*x*y / (x + y);

	return pingjunshu;

}

void lianxi72()

{

	int golf[size];

	double pingjun;

	int shu = shuru(golf, size);

	xianshi(golf, shu);

	pingjun = average(golf, shu);

	std::cout << "平均数为：" << pingjun << std::endl;

}

int shuru(int chengji[], int shulaing)

{
	std::cout << "请输入10个成绩：" << std::endl;

	double temp;

	int i ;

	for (i = 0; i < shulaing;i++)

	{
		std::cin >> temp;

		if (!std::cin)

		{
			std:: cin.clear();

			while (std::cin.get() != '\n')

			{
				continue;
			}
			break;

		}

		else if (temp<0)
		{
			break;
		}

		chengji[i] = temp;
	}

	return i;

}

void xianshi(int grades[], int shulaing)

{
	for (int i = 0; i < shulaing;i++)

	{
		std::cout << grades[i] << std::endl;
	}
}

double average(int shuru1[], int size)

{
	double total = 0.0;

	for (int i = 0; i < size;i++)

	{
		total += shuru1[i];
	}

	double aver = total / size;

	return aver;
}

void show(box show1)

{
	std::cout << show1.height << std::endl;

	std::cout << show1.length << std::endl;

	std::cout << show1.maker << std::endl;

	std::cout << show1.volume << std::endl;

	std::cout << show1.width << std::endl;
}

void lianxi73()

{
	box duixiang1 = { "zhanglongjia", 175, 50, 180, 130 };

	show(duixiang1);

	show2(&duixiang1);
}

void show2(box *show1)

{

	std::cout << show1->height << std::endl;

	std::cout << show1->length << std::endl;

	std::cout << show1->maker << std::endl;

	std::cout << show1->volume << std::endl;

	std::cout << show1->width << std::endl;

}

void lianxi74()

{
	const int total = 47;

	const int choices = 5;

	std::cout << "You have one chance in " << probability(total, choices) << " of winning \n";
}

long double probability(unsigned numbers, unsigned picks)

{
    long double result = 1.0;

	long double n;

	unsigned p;

	for (n = numbers, p = picks; p > 0;n--,p--)

	{
		result = result*n / p;
	}

	long double a = 27.0;

	result = result * a;

	return result;

}

void lianxi75()

{
	int i = 0;

	std::cin >> i;

 unsigned	long long  jieguo1;

	while (i)
	{
		jieguo1 = jiecheng(i);

		std::cout << "该参数的阶乘是：" << jieguo1 << std::endl;

		std::cin >> i;

	}

}

unsigned long long jiecheng(int i)

{
	unsigned long long jieguo = 0;

	if (i == 0)
	{
		return 1;
	}

	else
		jieguo = i*jiecheng(i - 1);

	return jieguo;
}

void lianxi76()

{
	double shuzu[20];

	int size = Fill_array(shuzu, 20);

	Show_array(shuzu, size);

	double *arr=Reverse_array(shuzu, size);

	for (int i = 0; i < size;i++)
	{
		std::cout << arr[i] << "    ";
	}

}

int Fill_array(double ar[], int size)

{
	double temp;

	

	int i=0 ;

	for (i; i < size;i++)

	{
		std::cin >> temp;

		if (temp&&temp!=0)

		{
			ar[i] = temp;
		}

		else
		{
			break;
		}
	}

	return i;

}

void Show_array(double arr[], int size)

{
	for (int i = 0; i < size;i++)

	{
		std::cout << arr[i] << "     ";
	}

	std::cout << std::endl;

}

double * Reverse_array(double ar[], int size)

{
	double zhongjian;

	for (int i = 1; i < size/2 ;i++)

	{
		zhongjian = ar[i];

	   ar[i] = ar[size -1 - i];

	   ar[size - 1 - i] = zhongjian;
		
	}

	return ar;

	
}


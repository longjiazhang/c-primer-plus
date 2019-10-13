#include <iostream>
#include <cctype>

using namespace std;

/*int main()

{

	cout << "Enter text for analysis , and type @ to terminate input .\n";

	char ch;

	int zimu_or_shuzi = 0;//表示字母或数字

	int zimu = 0; //表示字母

	int kongzizhifu = 0;//表示控制字符

	int shuzi = 0; //表示数字

	int kongge_dayinzifu = 0;//表示除空格之外的打印字符

	int xiaoxiezimu = 0; //表示小写字母

	int dayinzifu = 0; //表示打印字符包括空格

	int biaodianfuhao = 0;//表示标点符号

	int kongge = 0;//表示空格、进纸、换行符、回车等

	int daxiezimu = 0;	//表示大写字母

	int shiliujinzhi = 0; //表示十六进制的字符

	cin.get(ch);

	while (ch!='@')

	{
		if (isdigit(ch))

		{
			shuzi++;

		}
	
		else if (islower(ch))

		{
			xiaoxiezimu++;
		}
		
		else if (ispunct(ch))

		{
			biaodianfuhao++;
		}
		else if (isspace(ch))

		{
			kongge++;
		}
		else if (isupper(ch))

		{
			daxiezimu++;
		}
	
		cin.get(ch);	

	}

	cout << "转为大写   "  <<tolower(ch) << endl;

	cout <<"转为小写  "<< toupper(ch) << endl;

	cout << "字母或数字:   " << zimu_or_shuzi << endl;

	cout << "字母:   " << zimu << endl;

	cout << "控制字符:   " << kongzizhifu << endl;

	cout << "数字:   " << shuzi << endl;

	cout << "除空格之外的打印字符:    " << kongge_dayinzifu << endl;

	cout << "小写字母:    " << xiaoxiezimu << endl;

	cout << "打印字符:   " << dayinzifu << endl;

	cout << "标点符号:  " << biaodianfuhao << endl;

	cout << "空格:  " << kongge << endl;

	cout << "大写字母:  " << daxiezimu << endl;

	cout << "十六进制字符:   " << shiliujinzhi << endl;
	
	system("pause");

	return 0;

}  */
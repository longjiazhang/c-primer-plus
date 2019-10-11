/************************************************************************************

		new 和 delete 的使用
		这里new和delete分开使用，这样做不好，最好放在一起，但这样做是可以的
		
***************************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;
char * getname(void);

/*int main()

{
	char*name;

	name = getname();

	cout << name << "  at   " << (int *)name << "\n";

	delete[] name;

	name = getname();

	cout << name << "  at   " << (int *)name << "\n";

	delete[] name;

	system("pause");

	return 0;


}

char * getname()

{
	char temp[80];

	cout << "Enter last name:    ";

	cin >> temp;

	char * pn = new char[strlen(temp) + 1];//包括空字符串所以加1

	strcpy(pn, temp);//使用strcpy将temp中的字符串复制到新的内存块中

	return pn;

}	 */

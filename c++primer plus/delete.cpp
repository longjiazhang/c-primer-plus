/************************************************************************************

		new �� delete ��ʹ��
		����new��delete�ֿ�ʹ�ã����������ã���÷���һ�𣬵��������ǿ��Ե�
		
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

	char * pn = new char[strlen(temp) + 1];//�������ַ������Լ�1

	strcpy(pn, temp);//ʹ��strcpy��temp�е��ַ������Ƶ��µ��ڴ����

	return pn;

}	 */

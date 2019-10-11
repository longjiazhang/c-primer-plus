#include <iostream>


using namespace std;

void texin2();

void texin3();

void texin4();

/*int main()
{


	texin4();

	system("pause");

	return 0;


}  */

void texin1()
{

	char ch;

	cout << "Enter characters;enter# to quit:\n";

	cin >> ch;

	int count = 0;

	while (ch != '#')
	{
		cout << ch;

		++count;

		cin >> ch;

	}

	cout << endl << count << "characters read\n";

}

void texin2()

{
	char ch;

	cout << "Enter characters;enter# to quit:\n";

	cin .get(ch) ;

	int count = 0;

	while (ch != '#')
	{
		cout << ch;

		++count;

		cin.get(ch);

	}

	cout << endl << count << "characters read\n";

}
void texin3()
{
	char ch;

	cout << "Enter characters;enter# to quit:\n";

	cin.get(ch);

	int count = 0;

	while (cin.fail()==false)
	{
		cout << ch;

		++count;

		cin.get(ch);

	}

	cout << endl << count << "characters read\n";

}

void texin4()

{
	char ch;

	cout << "Enter characters;enter# to quit:\n";

	cin.get(ch);

	int count = 0;

	while (cin )
	{
		cout << ch;

		++count;

		cin.get(ch);

	}

	cout << endl << count << "characters read\n";




}
#include <iostream>

double betst(int);

double pam(int);

void estimate(int lines, double(*pf)(int));

/*int main()

{
	int code;

	std::cout << "How many lines of code do you need? ";

	std::cin >> code;

	std::cout << "Here Betsy's estimate:\n";

	estimate(code, betst);

	std::cout << "Here 's Pam's estimate:\n";

	estimate(code, pam);

	getchar();

	return 0;
} */

double betst(int ins)

{
	return 0.03*ins + 0.0004*ins*ins;
}

double pam(int ins)

{
	return 0.05*ins;
}

void estimate(int lines, double(*pf)(int))

{
	std::cout << lines << "lines will take";

	std::cout << (*pf)(lines) << " hour(s)\n";
}
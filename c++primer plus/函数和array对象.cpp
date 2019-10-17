#include <iostream>
#include <array>
#include <string>

const int seasons = 4;

const std::array<std::string, seasons> snames =
{ "Spring", "summer", "fall", "winter" };

void fill(std::array<double, seasons> *pa);

void show(std::array<double, seasons> da);

/*int main()

{
	std::array<double, seasons> expenses;

	fill(&expenses);

	show(expenses);

	system("pause");

	return 0;
} */

void fill(std::array<double, seasons> *pa)

{
	for (int i = 0; i < seasons;i++)

	{
		std::cout << "Enter " << snames[i] << " expenses : ";

		std::cin >> (*pa)[i];
	}
}

void show(std::array<double, seasons> da)
{
	double total=0.0;

	std::cout << "\nEXPESES\n";

	for (int i = 0; i < seasons;i++)

	{
		std::cout << snames[i] << ": $ " << da[i]<<std::endl;

		total += da[i];

	}
	
	std::cout << "Total Expenses: $ " << total << std::endl;

}
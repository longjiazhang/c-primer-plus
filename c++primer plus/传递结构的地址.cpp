#include <iostream>
#include <cmath>

struct rect
{
	double x;

	double y;

};

struct polar

{
	double distance;

	double angle;
};

void rect_to_polar(const rect *pxy, polar *pda);

void show_polar(const polar*pda);

/*int main()

{
	rect rplace;

	polar pplace;

	std::cout << "Enter the x and y values:";

	while (std::cin>>rplace.x>>rplace.y)

	{
		rect_to_polar(&rplace, &pplace);

		show_polar(&pplace);

		std::cout << "Next two numbers (q to quit):";
	}

	std::cout << "Done.\n";

	system("pause");

	return 0;

} */

void show_polar(const polar*pda)
{
	const double Rad_to_deg = 57.2977951;

	std::cout << "distance = " << pda->distance;

	std::cout << ", angle = " << pda->angle*Rad_to_deg;

	std::cout << " degrees\n";

}

void rect_to_polar(const rect *pxy, polar *pda)
{
	pda->distance =
		sqrt(pxy->x*pxy->x + pxy->y*pxy->y);

	pda->angle = atan2(pxy->y, pxy->x);
}
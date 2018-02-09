// CST116SRS04
// Triangle

/*
Istructions:
Create a project named "Triangle" that calculates the sides and angles of a triangle.
Prompt the user for the configuration type of a triangle to solve: AAA, AAS, ASA, SAS, SSA, SSS.

https://www.mathsisfun.com/algebra/trig-solving-triangles.html

Prompt the user to enter the values they know based upon their selection of triangle configuration.
Display all possible values for the triangle sides and angles. If the sides are only proportional (case AAA), note that in the answer.
All angles are to be in degrees (not radians).
If a solution is not possible, output "Unsolvable".
For AAA, you only need to prompt for 2 angles. Calculate the 3rd.
Tips:
Work on one type of triangle at a time.
Note in your README.md any solutions you couldn't complete in time.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

int main()
{
	
	std::string triangle;
	std::cout << " Choose what triangle you want to solve: AAA, AAS, ASA , SAS, SSA, or SSS: " ;
	std::cin >> triangle;

	double sideA, sideB, sideC, angleA, angleB, angleC;
	const double PI = 3.141592;

	if (triangle == "AAA")
	{
		std::cout << " An AAA triangle is when we know the values of all the angles, but no sides. " << '\n';
		std::cout << " We will only find values of the third angle when we already know the first two angles. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';

		std::cout << " Enter angleA value = ";
		std::cin >> angleA;
		std::cout << " Enter angleB value = ";
		std::cin >> angleB;

		angleC = 180 - angleA - angleB;
		std::cout << " angle C = " << angleC;

	}
	else if (triangle == "AAS")
	{
		std::cout << " An AAS triangle is when we know the values of two angles and one side that is not between those two angles. " << '\n';
		std::cout << " We need to find values of the two sides and the other angle. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';

		std::cout << " Enter angleA value = ";
		std::cin >> angleA;
		std::cout << " Enter angleC value = ";
		std::cin >> angleC;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;

		std::cout << '\n' << " We have calculated the values for the third angle and the other two sides: " << '\n';
		angleB = 180 - angleA - angleC;
		std::cout << " angleB = " << angleB << '\n';

		sideA = sideC * (sin(angleA*(PI / 180))) / sin(angleC*PI / 180);
		std::cout << " sideA = " << sideA << std::endl;
		sideB = sideC * (sin(angleB*(PI / 180))) / sin(angleC*PI / 180);
		std::cout << " sideB = " << sideB << std::endl;
	}

	else if (triangle == "ASA")
	{
		std::cout << " An ASA triangle is when we know the values of two angles and the value of a side that is between those two angles. " << '\n';
		std::cout << " We need to find values of the third angle and the other two sides. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';

		std::cout << " Enter angleA value = ";
		std::cin >> angleA;
		std::cout << " Enter angleB value = ";
		std::cin >> angleB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;

		std::cout << '\n' << " We have calculated the values for the third angle and the other two sides: " << '\n';
		angleC = 180 - angleA - angleB;
		std::cout << " angleC = " << angleC << '\n';

		sideA = sideC / (sin(angleC*(PI / 180))) * sin(angleA*(PI / 180));
		std::cout << " sideA = " << sideA << std::endl;
		sideB = sideC / (sin(angleC*(PI / 180))) * sin(angleB*(PI / 180));
		std::cout << " sideB = " << sideB;
	}
	else if (triangle == "SAS")
	{
		std::cout << " An SAS triangle is when we know the values of two sides the angle that is between them " << '\n';
		std::cout << " We need to find values of the third side and the other two angles. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';

		std::cout << " Enter angleA value = ";
		std::cin >> angleA;
		std::cout << " Enter sideB value = ";
		std::cin >> sideB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;

		sideA = sqrt(((sideB*sideB) + (sideC*sideC)) - (2 * sideB*sideC*(cos(angleA*(PI / 180)))));
		std::cout << " sideA = " << sideA << std::endl;

		angleB = asin((sin(angleA*(PI / 180)) * sideB) / sideA) * (180/PI);
		std::cout << " angleB = " << angleB << std::endl;
		angleC = 180 - angleA - angleB;
		std::cout << " angleC = " << angleC;
		 
	}
	else if (triangle == "SSA")
	{
		std::cout << " An SSA triangle is when we know the values of two sides and one angle that is not between those two sides. " << '\n';
		std::cout << " We need to find values of the two other angles and the other side. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';

		std::cout << " Enter angleB value = ";
		std::cin >> angleB;
		std::cout << " Enter sideB value = ";
		std::cin >> sideB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;


		angleC = asin((sideC*(sin(angleB *(PI / 180))) / (sideB))) * (180/PI);
		std::cout << " angleC = " << angleC << std::endl;
		angleA = 180 - angleB - angleC;
		std::cout << " angleA = " << angleA;
		
	}
	else if (triangle == "SSS")
	{
		std::cout << " An SSS triangle is when we know values of all three sides but want to find out the values of all three angles. " << '\n';
		std::cout << " We need to find values of all three sides. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';

		std::cout << " Enter sideA value = ";
		std::cin >> sideA;
		std::cout << " Enter sideB value = ";
		std::cin >> sideB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;

		angleA = acos(((sideB*sideB) + (sideC*sideC) - (sideA*sideA)) / (2*sideB*sideC)) * (180/PI);
		std::cout << " angleA = " << angleA << std::endl;
		angleB = acos(((sideC*sideC) + (sideA*sideA) - (sideB*sideB)) / (2 * sideC*sideA)) * (180 / PI);
		std::cout << " angleB = " << angleB << std::endl;
		angleC = 180 - angleA - angleB;
		std::cout << " angleC = " << angleC;

	}
	return 0;
}

 
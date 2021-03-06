// CST116SRS04
// Triangle


#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::string triangle;
	std::cout << " Solving for missing sides and angles of a triangle. " << '\n';
	std::cout << " Choose what triangle you want to solve: AAA, AAS, ASA , SAS, SSA, or SSS: " ;
	std::cin >> triangle;

	double sideA, sideB, sideC, angleA, angleB, angleC;
	const double PI = 3.141592;

	if (triangle == "AAA")
	{
		std::cout << " A AAA triangle is when we know the values of all the angles, but not the sides. " << '\n';
		std::cout << " We will only find values of the third angle when we already know the first two angles. **" << '\n';
		std::cout << " ** Because we need values of at least one side to find out how big the triangle is. ** "<< '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';
		//User input
		std::cout << " Enter angleA value in degrees = ";
		std::cin >> angleA;
		std::cout << " Enter angleB value in degrees = ";
		std::cin >> angleB;
		//Calculations, results, output
		std::cout << '\n' << " We have calculated the other angle: " << '\n';
		angleC = 180 - angleA - angleB;
		std::cout << " angleC = " << angleC << " degrees";

	}
	else if (triangle == "AAS")
	{
		std::cout << " An AAS triangle is when we know the values of two angles and one side that is not between those two angles. " << '\n';
		std::cout << " We need to find values of the two sides and the other angle. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';
		//User input
		std::cout << " angleA value in degrees = ";
		std::cin >> angleA;
		std::cout << " angleC value in degrees = ";
		std::cin >> angleC;
		std::cout << " sideC value = ";
		std::cin >> sideC;
		//Calculations, results, output
		std::cout << '\n' << " We have calculated the values for the third angle and the other two sides: " << '\n';
		angleB = 180 - angleA - angleC;
		std::cout << " angleB = " << angleB <<  " degrees" << '\n';
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
		//User input
		std::cout << " Enter angleA value in degrees = ";
		std::cin >> angleA;
		std::cout << " Enter angleB value in degrees = ";
		std::cin >> angleB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;
		//Calculations, results, output
		std::cout << '\n' << " We have calculated the values for the third angle and the other two sides: " << '\n';
		angleC = 180 - angleA - angleB;
		std::cout << " angleC = " << angleC << " degrees " << '\n';
		sideA = sideC / (sin(angleC*(PI / 180))) * sin(angleA*(PI / 180));
		std::cout << " sideA = " << sideA << std::endl;
		sideB = sideC / (sin(angleC*(PI / 180))) * sin(angleB*(PI / 180));
		std::cout << " sideB = " << sideB;
	}
	else if (triangle == "SAS")
	{
		std::cout << " An SAS triangle is when we know the values of two sides the angle that is between them. " << '\n';
		std::cout << " We need to find values of the third side and the other two angles. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';
		//User input
		std::cout << " Enter angleA value in degrees = ";
		std::cin >> angleA;
		std::cout << " Enter sideB value = ";
		std::cin >> sideB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;
		//Calculations, results, output
		std::cout << '\n' << " We have calculated the values for the third side and the other two angles. " << '\n';
		sideA = sqrt(((sideB*sideB) + (sideC*sideC)) - (2 * sideB*sideC*(cos(angleA*(PI / 180)))));
		std::cout << " sideA = " << sideA << std::endl;
		angleB = asin((sin(angleA*(PI / 180)) * sideB) / sideA) * (180/PI);
		std::cout << " angleB = " << angleB << " degrees " << std::endl;
		angleC = 180 - angleA - angleB;
		std::cout << " angleC = " << angleC << " degrees ";
		 
	}
	else if (triangle == "SSA")
	{
		std::cout << " An SSA triangle is when we know the values of two sides and one angle that is not between those two sides. " << '\n';
		std::cout << " We need to find values of the two other angles and the other side. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';
		//User Input
		std::cout << " Enter angleB value in degrees = ";
		std::cin >> angleB;
		std::cout << " Enter sideB value = ";
		std::cin >> sideB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;
		//Calculations, results, output
		std::cout << '\n' << " We have calculated the values of the other two angles and the third side. " << '\n';
		angleC = asin((sideC*(sin(angleB *(PI / 180))) / (sideB))) * (180/PI);
		std::cout << " angleC = " << angleC << " degrees " << std::endl;
		angleA = 180 - angleB - angleC;
		std::cout << " angleA = " << angleA << " degrees " << std::endl;
		sideA = (sin(angleA *(PI / 180)) * 8) / (sin(angleB *(PI / 180)));
		std::cout << " sideA = " << sideA;
		
	}
	else if (triangle == "SSS")
	{
		std::cout << " An SSS triangle is when we know values of all three sides but want to find out the values of all three angles. " << '\n';
		std::cout << " We need to find values of all three sides. " << '\n' << '\n';
		std::cout << " Please enter values at the given prompts: " << '\n';
		//User input
		std::cout << " Enter sideA value = ";
		std::cin >> sideA;
		std::cout << " Enter sideB value = ";
		std::cin >> sideB;
		std::cout << " Enter sideC value = ";
		std::cin >> sideC;
		//Calculations, results, output
		std::cout << '\n' << " We have calculated all three angles. " << '\n';
		angleA = acos(((sideB*sideB) + (sideC*sideC) - (sideA*sideA)) / (2*sideB*sideC)) * (180/PI);
		std::cout << " angleA = " << angleA << " degrees " << std::endl;
		angleB = acos(((sideC*sideC) + (sideA*sideA) - (sideB*sideB)) / (2 * sideC*sideA)) * (180 / PI);
		std::cout << " angleB = " << angleB << " degrees " << std::endl;
		angleC = 180 - angleA - angleB;
		std::cout << " angleC = " << angleC << " degrees ";

	}
	return 0;
}

 
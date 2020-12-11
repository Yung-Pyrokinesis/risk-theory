#include <iostream>
#include <cmath>
//my lab 3 , variant 9 

float function(float R[3], float P[3])
{
	return sqrt(R[0]*P[0] + R[1]*P[1] + R[2]*P[2]  +5)/15;
}

int main()
{	

	float R[3][4];
	float P[3];

	R[0][0] = 10;
	R[0][1] = -5;
	R[0][2] = -5;
	
	R[1][0] = -5;
	R[1][1] = -5;
	R[1][2] = 10;
	
	R[2][0] = 1.5;
	R[2][1] = 1.5;
	R[2][2] = 0;
	
	R[3][0] = 0;
	R[3][1] = 0;
	R[3][2] = 0;
	
	P[0] = 0.5;
	P[1] = 0.1;
	P[2] = 0.4;
	
	
	
	std::cout << "U(I) = " << function(R[0],P) <<std::endl;
	std::cout << "U(II) = " << function(R[1],P) <<std::endl;
	std::cout << "U(III) = " << function(R[2],P) <<std::endl;
	std::cout << "U(IV) = " << function(R[3],P) <<std::endl;
	
	std::cout << "Nayefektyvnishym bude 1 rishennya" <<std::endl;
	

	
	return 0;
}


#include <iostream>
#include <cmath>
//my lab 2 , variant 9 
int main()
{
	int cash = 24;
	
	double X_AT[2], P_AT[2];
	double X_Bank[2], P_Bank[2];
	double M_XAT, M_XBank;
	double W_XAT, W_XBank;
	
	X_AT[1] = 0.208 * cash + cash;
	X_AT[2] = -cash;
	P_AT[1] = 0.5;
	P_AT[2] = 0.5;
	
	X_Bank[1] = 0.04 * cash + cash;
	X_Bank[2] = cash;
	P_Bank[1] = 0.99;
	P_Bank[2] = 0.01;
	
	M_XAT = X_AT[1] * P_AT[1] + X_AT[2] * P_AT[2];
	M_XBank = X_Bank[1] * P_Bank[1] + X_Bank[2] * P_Bank[2];
	
	std::cout << "Matematychni spodivannya: " << std::endl;
	std::cout <<"M_XAT = "<< M_XAT << std::endl; 
	std::cout <<"M_XBank = "<< M_XAT << std::endl<< std::endl;
	
	W_XAT = pow((X_AT[1]-M_XAT),2) * P_AT[1] + pow((X_AT[2]-M_XAT),2) * P_AT[2];
	W_XBank = pow((X_Bank[1]-M_XBank),2) * P_Bank[1] + pow((X_Bank[2]-M_XBank),2) * P_Bank[2];
	
	std::cout << "Otsinyuyemo ryzyk yak velychynu variatsiyi: " << std::endl;
	std::cout <<"W-_XAT = "<< W_XAT << std::endl; 
	std::cout <<"W-_XBank = "<< W_XBank << std::endl<< std::endl;
	
	std::cout << "Oskil'ky W-_XAT > W-_XBank, to rekomenduyemo Bank" << std::endl<< std::endl;
	std::cout << "Mezhi, v yakykh povynna znakhodytys' lyudyna yaka khoche nadiyno investuvaty, na moyu dumku tse: bezryzykoviy zoni, zona dopustymoho ryzyku i zona krytychnoho ryzyku" << std::endl;
	
	
	
	
	
}


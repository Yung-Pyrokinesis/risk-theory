#include <iostream>
#include <cmath>
//var 9 , lab 6

using namespace std;
int main()
{   
    float Fminus[4][2] = {{8, 10},
						{12, 8},
						{10, 8},
						{4, 12},
						};
    float Fplus[4][2] = {{100, 160},
						{120, 140},
						{110, 150},
						{150, 120},
						};
						
	float u1 = 0.25, u2 = 0.75, l = 0.7, p1 = 0.3, p2 = 0.3, p3 = 0.25, p4 = 0.15;
	float HLminus[4], HLplus[4];
	for(int i=0; i<4; i++)
	{
		HLminus[i] = l*max(Fminus[i][0],Fminus[i][1])+(1-l)*(Fminus[i][0]*p1 + Fminus[i][1]*p2);
		HLplus[i] = l*min(Fplus[i][0],Fplus[i][1])+(1-l)*(Fplus[i][0]*p1 + Fplus[i][1]*p2);
		
	}
	
	cout << "Optimal choice HL+ : " << max(max(HLplus[0],HLplus[1]),max(HLplus[3],HLplus[4])) << endl;
	cout << "Optimal choice HL- : " << min(min(HLminus[0],HLminus[1]),min(HLminus[3],HLminus[4])) << endl;
	
	return 0;

}

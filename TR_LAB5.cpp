#include <iostream>
#include <cmath>
//my lab 5 , variant 9 
int main()
{
	int F[5][4] = { {6, 7, 8, 2},
					{4, 3, 5, 4},
					{8, 3, 4, 3},
					{5, 9, 3, 2},
					{7, 4, 6, 4}
					};
	
	int max=F[0][0];
	int min,max1,max_i;
	
	for(int i=0 ; i < 5 ; i++)
		for(int j=0 ; j < 4 ; j++)
			if(F[i][j] > max)
				max = F[i][j];
	
	std::cout << "a) maksymal'nyy dokhid vid prodazhu tovariv: "<<max<<std::endl;
	
	
	for(int i=0 ; i < 5 ; i++){
		min = F[i][0];
		for(int j=1 ; j < 4 ; j++){
			if(F[i][j] <  min)
				min = F[i][j];
		}
		if(i==0){
			max1=min;
			max_i=i;
		}
		if(min>max1){
			max1=min;
			max_i=i;
		}
	}
	
	std::cout << "b) minimal'nyy ryzyk:"<<std::endl<<"	ryadok: "<<max_i<<std::endl<<"	chyslo: "<<max1<<std::endl;
}


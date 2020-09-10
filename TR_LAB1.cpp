#include<iostream>
//#include<math.h>

using namespace std;

int main(){
  
  int point_scale;	//шкала баллов
  int rain_home, rain_forest , sun_home, sun_forest; 	//  ѕƒ
  double p_rain,p_sun; //веро€тности
  
  cout << "Enter point scale : " ;	//¬ведите шкалу баллов
  cin >> point_scale;
  
  cout << "Enter the probability of rain (0 to 1): " ;	//¬ведите веро€тность дожд€ (от 0 до 1):
  cin >> p_rain;

  cout << "Enter the probability of sun (0 to 1): " ;	//¬ведите веро€тность солнца (от 0 до 1):
  cin >> p_sun;
  
  cout << "Enter the Efficiency in the forest in the rain (1 >= , <="<<point_scale<<" ) : " ;	//¬ведите  ѕƒ в лесу под дождем 
  cin >> rain_forest;

  cout << "Enter the Efficiency in the home in the rain (1 >= , <="<<point_scale<<" ) : " ;		//¬ведите  ѕƒ в дома под дождем 
  cin >> rain_home;
  
  cout << "Enter efficiency in the home during sunny weather (1 >= , <="<<point_scale<<" ) : " ;	//Ёффективность дома в солнечную погоду
  cin >> sun_home;
  
  cout << "Enter efficiency in the forest during sunny weather (1 >= , <="<<point_scale<<" ) : " ;	//Ёффективность в лесу в солнечную погоду
  cin >> sun_forest;
  
  cout << endl;
  
  cout << "Efficiency in home : " << p_sun * sun_forest + p_sun * sun_home << endl;		//Ёффективность в домашних услови€х:
  cout << "Efficiency in forest : " << p_rain * rain_forest + p_rain * rain_home ; 		//Ёффективность в лесу:
 return 0;
}

#include<iostream>
//#include<math.h>

using namespace std;

int main(){
  
  int point_scale;	//����� ������
  int rain_home, rain_forest , sun_home, sun_forest; 	// ���
  double p_rain,p_sun; //�����������
  
  cout << "Enter point scale : " ;	//������� ����� ������
  cin >> point_scale;
  
  cout << "Enter the probability of rain (0 to 1): " ;	//������� ����������� ����� (�� 0 �� 1):
  cin >> p_rain;

  cout << "Enter the probability of sun (0 to 1): " ;	//������� ����������� ������ (�� 0 �� 1):
  cin >> p_sun;
  
  cout << "Enter the Efficiency in the forest in the rain (1 >= , <="<<point_scale<<" ) : " ;	//������� ��� � ���� ��� ������ 
  cin >> rain_forest;

  cout << "Enter the Efficiency in the home in the rain (1 >= , <="<<point_scale<<" ) : " ;		//������� ��� � ���� ��� ������ 
  cin >> rain_home;
  
  cout << "Enter efficiency in the home during sunny weather (1 >= , <="<<point_scale<<" ) : " ;	//������������� ���� � ��������� ������
  cin >> sun_home;
  
  cout << "Enter efficiency in the forest during sunny weather (1 >= , <="<<point_scale<<" ) : " ;	//������������� � ���� � ��������� ������
  cin >> sun_forest;
  
  cout << endl;
  
  cout << "Efficiency in home : " << p_sun * sun_forest + p_sun * sun_home << endl;		//������������� � �������� ��������:
  cout << "Efficiency in forest : " << p_rain * rain_forest + p_rain * rain_home ; 		//������������� � ����:
 return 0;
}

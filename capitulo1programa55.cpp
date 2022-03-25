/* suponer que toda la gente duerme alrededor de 1/3 de 
del tiempo (8 horas de 24). Calcular cuantas horas ha dormido
una persona durante su vida. Un año tiene 365 dias (no considerar años bisiestos).*/
#include<iostream>
using namespace std;
int main()
{
	int edad =0;
	int dias =0;
	int diasDurmiendo =0;
	
	cout<<"ingresa tu edad: "<<endl;
	cin>>edad;
	
	dias = edad *365;
	diasDurmiendo = dias/3;
	
	cout<<"llevas durmiendo "<< diasDurmiendo<<" dias durante tu vida."<<endl;
	
	return 0;
	
} 

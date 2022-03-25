/* Encontrar el promedio de n numeros. insertar en primer 
lugar el valor de n, segido por los n numeros.*/
#include <iostream>
using namespace std;
int main(){
	int numerosRegistrados;
	int acumulador;
	int contador;
	
	acumulador =0;
	contador =0;
	numerosRegistrados=1;
	
	cout<<"Ingrese los numeros, para dejar de ingresar presione 0 "<<endl;
	while (numerosRegistrados >0 ){
		cin >> numerosRegistrados;
		acumulador+=numerosRegistrados;
		contador++;
	}
	cout<< "El promedio de los numeros es: "<<acumulador/contador<< endl;

	return 0;
}





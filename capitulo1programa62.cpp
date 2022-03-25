#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numeros[] = {75,88,84,70,65,99,91,76,43,69};
	int suma = 0;
	int promedio =0;
	
	for(int i =0; i<10; i++){
		suma+=numeros[i];
	}
	
	cout<<"La media de los numeros es: "<<suma/10<<endl;
	
	getch();
	return 0;
}

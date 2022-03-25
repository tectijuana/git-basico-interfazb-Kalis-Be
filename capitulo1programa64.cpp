/*Calcular n factorial: n!=1X2X3...(n-1)X n 
donde n es cualquier entero del 1 al 7.*/

#include <iostream>
using namespace std;

int main(){
int i;
int fact=1;
int numero;

cout<< "ingresa un numero del 1 al 7: " <<endl; 
cin>> numero;

if (numero<0) {fact =0;}
else if (numero==0) {fact=1;}
else {
for (i = 1; i <= numero; i++){
fact = fact*i;
}
}
cout<<" El Factorial de "<< numero<< " es: " << fact << endl;

return 0;
}

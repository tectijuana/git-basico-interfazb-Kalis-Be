#include<iostream>
using namespace std;
main(){
 int n;//cantidad de notas
 float a,c=0,prom;
 cout<<"ingrese la cantidad de notas: ";cin>>n;
 for(int i=0;i<n;i++){
 cout<<"ingrese la nota "<<i+1<<": ";cin>>a;//el valor de a varia en cada ciclo
 c=c+a;
 }
 prom=c/n;
 cout<<"el promedio es: "<<prom;
}

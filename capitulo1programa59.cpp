#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
 int a;
 for(int i = 0; i < 10; i++){
 a = rand()%10 - 6;
 cout << "El absoluto de " << a << " es " << abs(a) << endl;
 }
 return 0;
}

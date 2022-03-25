#include <iostream>
#include <algorithm>
using namespace std;

const int size = 20;
int main()
{
    int datos[size] = {2, 3, 4, 2, 
        3, 4, 9, 1, 7, 8,0,21,33,56,43,98,12,32,56,55};
    sort(datos, datos + size);
    cout << "Datos ordenados: ";
    for (int i = 0; i != size; ++i)
        cout << datos[i] << " ";

    return 0;
}

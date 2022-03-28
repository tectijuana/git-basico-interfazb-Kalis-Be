/* se dispone una lista que contiene los examenes de grado
finales para una clase de 20 alumnos.
contar las calificaciones anakp de 65 e imprimir este numero*/


#include<iostream>
using namespace std;
int main()
{
        int cali =0,rep=0;


                for(int i=0; i<20;i++)
                {
                cout<<"ingresa tu calificacion: "<<endl;
                cin>>cali;
                        if(cali<65 || cali==65)
                        {
                        rep++;
                        }
                }


        cout<<" alumnos en peligro de reprobar : "<< rep<<" "<<endl;

        return 0;

}

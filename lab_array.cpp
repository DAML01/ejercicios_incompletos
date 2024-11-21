#include <iostream>
using namespace std;
int main(){
    /*crear un programa que pida al usuario u nnumero entero y permita llenar un arreglo
    de Cáracteres con esa cantidad de datos. Utilizando Switch Case para determinar cuantas veces se repetira cada vocal*/
    int N;

    cout<<"porfavor ingrese el tamaño de su arreglo";
    cin>>N;

    char Arreglo[N], letra;

     for (int i=0; i<= N; i++)
     {
        cin>>Arreglo;
        switch (Arreglo[N])
        {
            case ('a'):
            {
            if(Arreglo[i]=='a')
                {
                   cout<<"a se repite:"; cout<<Arreglo[i] <<endl; 
                }
                
             }
             break;

             case ('e'):
             {
                if(Arreglo[i]=='e')
                {
                    cout<<"e se repite:"; cout<<Arreglo[i]; 
                }
             }
             break;

             case('i'):
             {
                if(Arreglo[i]=='i')
                {
                    cout<<"i se repite:"; cout<<Arreglo[i];
                }
             }
             break;

             case('o'):
             {
                if(Arreglo[i]=='o')
                {
                    cout<<"o se repite:"; cout<<Arreglo[i];
                }
             }
             break;

             case('u'):
             {
                if(Arreglo[i]=='u')
                {
                    cout<<"u se repite:"; cout<<Arreglo[i];
                }
             }
            break;

             default:
             {
                cout<<"no se repite ninguna vocal"<<endl;
             }
              break;
        }
     }
    return 0;
}
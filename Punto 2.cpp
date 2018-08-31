// APLICACION NUMERO PARES E IMPARES

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    int sumPar = 0;
    int sumImpar = 0;

    cout <<"APLICACION PARA SUMAR NUMERO PARES E IMPARES" << endl;
    cout << "       INGRESE UN NUMERO ENTERO" << endl;
    cout <<"\n";
    cin >> num;

    for (int n=0 ; n<=num ; n++)
    {
        if (n % 2 == 0)
            sumPar = sumPar + n;

        else
            sumImpar = sumImpar + n;
    }


    cout << "LA SUMA DE LOS NUMEROS PARES HASTA " << num << " ES IGUAL A: " << sumPar << endl;
    cout <<"\n";
    cout << "LA SUMA DE LOS NUMEROS IMPARES HASTA " << num << " ES IGUAL A: " << sumImpar << endl;
    cout <<"\n";
    cout <<"\n";

}

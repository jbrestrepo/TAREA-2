//COMPUTE POW

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int potencia (int b, int e);

int main()
{
   int base, exp;
   cout << "           COMPUTE POW" << endl;
   cout << "Ingrese Un Numero Entero Para La Base" << endl;
   cin >> base;
   cout << "\n";
   cout << "Ingrese Un Numero Entero Para El Exponente" << endl;
   cin >> exp;
   cout << "\n";

   cout << "El Resultado De " << base << "  A la " << exp << " Es: " << potencia (base, exp);
   cout << "\n";

   return 0;
}


int potencia (int b, int e)
{
    if (e >= 1)
        return (b * potencia (b,(e-1)));

    else
      return 1;
}


//COMPARACION DE ENTEROS

#include <iostream>
#include <string>

using namespace std;

int comparation (int a, int b);

int main()
{
    int number1, number2, mayor;

    cout <<"   INT NUMBERS" << endl;
    cout << "Enter First Number" << endl;
    cin >> number1;
    cout << "\n";
    cout << "Enter Second Number" << endl;
    cin >> number2;
    cout << "\n";

    mayor = comparation(number1, number2);

    cout << "Biggest Number Is: " << mayor << endl;
    cout << "\n";

    return 0;
}

int comparation (int a, int b)
{
    int counter;
    int mayor=0;

    for (counter =0; counter <= 2; counter++)
    {
        if (a >= b)
        mayor = a;
    else
        mayor = b;
    }
    return mayor;
}


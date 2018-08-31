//INT NUMBERS x 6

#include <iostream>
#include <string>

using namespace std;

int comparation (int a, int b);

int main()
{
    int number1, number2,number3, number4, number5, number6;
    int mayor1, mayor2,mayor3, mayor12, mayorM;

    cout << " INT NUMBERS x 6" << endl;
    cout << "Enter First Number" << endl;
    cin >> number1;
    cout <<"\n";
    cout << "Enter Second Number" << endl;
    cin >> number2;
    cout <<"\n";
    cout << "Enter Third Number" << endl;
    cin >> number3;
    cout <<"\n";
    cout << "Enter Fourth Number" << endl;
    cin >> number4;
    cout <<"\n";
    cout << "Enter fifth Number" << endl;
    cin >> number5;
    cout <<"\n";
    cout << "Enter sixth Number" << endl;
    cin >> number6;
    cout <<"\n";

    mayor1 = comparation(number1, number2);
    mayor2 = comparation(number3, number4);
    mayor3 = comparation(number5, number6);
    mayor12 = comparation(mayor1, mayor2);
    mayorM = comparation(mayor3, mayor12);

    cout << "Biggest Number Is:" << mayorM << endl;
    cout <<"\n";


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

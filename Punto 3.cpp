// Problem FIZZBUZZ

#include <iostream>
#include <string>

using namespace std;

void fizzbuzz ();

int main()
{
    cout << "      HELLO" << endl;
    cout << "   THIS IS FIZZBUZZ" <<endl;
    cout << "PRESS ENTER TO CONTINUE";
    cin.get();
    cout << "\n";
    cout << "\n";


    fizzbuzz();
    cout << "FIN"<<endl;
    cout << "\n";
    cout << "\n";
}

void fizzbuzz()
{

    for (int n=1 ; n < 101 ; n++)
        {
            if (n % 3 == 0 && n % 5 == 0)

            cout << "fizzBuzz" << endl;

            else if (n % 3 == 0)

            cout << "Fizz" <<endl;

            else if (n % 5 == 0)

            cout << "Buzz" <<endl;

            else

            cout << n <<  endl;
        }
}

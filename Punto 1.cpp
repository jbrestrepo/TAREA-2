//SCORE APP

#include <iostream>
#include <string>

using namespace std;

int main()
{
  char note;

  cout << "          SCORE APP" << endl;
  cout << " Ingrese La Nota En Mayuscula " << endl;
  cin >> note;
  cout << "\n";

 switch (note)
 {
    case 'A':
        cout << "EXCELLENT!!! PERFECT SCORE " <<endl;
        cout << "\n";
        break;

    case 'B':
        cout << "GOOD!! Good score" << endl;
        cout << "\n";
        break;

    case 'C':
        cout << "Good: needs improvement " << endl;
        cout << "\n";
        break;

    case 'D':
        cout << "Bad: you failed " << endl;
        cout << "\n";
        break;

    case 'F':
        cout <<" BAD: WORST SCORE " << endl;
        cout << "\n";
        break;

    default:
        cout << "SORRY!! ENTER A VALID SCORE " << endl;
        cout << "\n";
        break;
 }
}


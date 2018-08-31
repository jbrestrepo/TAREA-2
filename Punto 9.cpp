#include <iostream>
#include <string>

using namespace std;

void exchange (int& a, int& b);
void exchange (float& a, float& b);
void exchange (string& s1, string s2);
void choose (char c);

int main()
{
    char c;

    cout << "EXCHANGE APP" << endl;
    cout << "Press 'I' To Exchange Int Numbers" << endl;
    cin >> c;
    cout << "Press 'F' To Exchange Float Numbers" << endl;
    cin >> c;
    cout << "Press 'S' To Exchange String" << endl;
    cin >> c;

    choose (c);




    return 0;
}

void exchange (int& a, int& b)
{
    int num1, num2;

    num1 = b;
    num2 = a;

    cout << "NOW!!!" << endl;
    cout << "The First Int Number Is: " << num1 << endl;
    cout << "The Second Int Number Is: " << num2 << endl;
 }

void exchange (float& a, float& b)
{
    float num1, num2;

    num1 = b;
    num2 = a;

    cout << "NOW!!!" << endl;
    cout << "The First Float Number Is: " << num1 << endl;
    cout << "The Second Float Number Is: " << num2 << endl;

}

void exchange (string& s1, string s2)
{
    string phr1, phr2;

    phr1 = s2;
    phr2 = s1;

    cout << "NOW!!!" << endl;
    cout << "The Firs Phrse Is: " << s1 << endl;
    cout << "The Second Phrase Is: " << s2 << endl;

}

void choose (char c)
{
    switch (c)
    {
        case 'I':

            int Num1, Num2;
            cout << "Exchange Int Numbers" << endl;
            cout << "Enter First Int Number" << endl;
            cin >> Num1;
            cout << "Enter Second Int Number" << endl;
            cin >> Num2;
            exchange (Num1, Num2);

            break;

        case 'F':

            float fl1, fl2;
            cout << "Exchange Float Numbers" << endl;
            cout << "Enter First Float Number" << endl;
            cin >> fl1;
            cout << "Enter Second Float Number" << endl;
            cin >> fl2;
            exchange (fl1, fl2);

            break;

        case 'S':

            float str1, str2;
            cout << "Exchange String" << endl;
            cout << "Enter First String" << endl;
            cin >> str1;
            cout << "Enter Second String" << endl;
            cin >> str2;
            exchange (str1, str2);

            break;
    }
}




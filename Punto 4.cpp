// PYRAMID APP

#include <iostream>
#include <string>

using namespace std;

void pyramid (char c, int a);

int main()
{
  char symbol;
  int size;

  cout <<"   PYRAMID CREATOR " << endl;
  cout <<"  Enter a Character " <<endl;
  cin >> symbol;
  cout << "\n";
  cout <<" Enter a Pyramid Size"<<endl;
  cin >> size;
  cout << "\n";

  pyramid (symbol,size);
  cout <<" FINISH!!!!" << endl;
  cout << "\n";
  cout << "\n";

  return 0;
}

void pyramid (char c, int a)
{
  int valor=a;

 for(int i=1;i<=valor;i++)
 {
    for(int n=1;i>=n;n++)
    {
     cout<< c;
    }

    cout<<"\n";
 }
}

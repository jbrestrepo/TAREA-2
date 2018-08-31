// VOCAL AND CONSONANT COUNTER

#include <iostream>
#include <string>

using namespace std;

void vocalCounter (string a);
void consonantCounter (string b);


int main()
{
  string phrase;
  
  cout << "VOCAL AND CONSONANT COUNTER";
  cout <<"    ENTER THE PHRASE " << endl;
  getline(cin,phrase);
  cout <<"\n";
  
  vocalCounter (phrase);
  consonantCounter (phrase);
  
  cout <<"     EN LA FRASE: "<< phrase;
    
  return 0;
}

void vocalCounter (string a)
{
  int vocalcounter = 0;     
    
  for(char c : a)
 {
	if (c == 'a' || c == 'A')
	    vocalcounter++;
	
	else if (c == 'e' || c == 'E')
	    vocalcounter++;
	
	else if (c == 'i' || c == 'I')
	    vocalcounter++;
	
	else if (c == 'o' || c == 'O')
	    vocalcounter++;
	
	else if (c == 'u' || c == 'U')
	    vocalcounter++; 
    
 }
	
 cout <<"EL NUMERO DE VOCALES ES:" << vocalcounter <<endl;
 cout <<"\n";
  
}

void consonantCounter (string b)
{
 int consonantcounter = 0;   
  
  for(char c : b)
 {
	if (c == 'b' || c == 'B')
	    consonantcounter++;
	
	else if (c == 'c' || c == 'C')
	    consonantcounter++;
	
	else if (c == 'd' || c == 'D')
	    consonantcounter++;
	
	else if (c == 'f' || c == 'F')
	    consonantcounter++;
	
	else if (c == 'g' || c == 'G')
	    consonantcounter++; 
	    
	else if (c == 'h' || c == 'H')
	    consonantcounter++;
	
	else if (c == 'j' || c == 'J')
	    consonantcounter++;
	
	else if (c == 'k' || c == 'K')
	    consonantcounter++;
	
	else if (c == 'l' || c == 'L')
	    consonantcounter++;
	
	else if (c == 'm' || c == 'M')
	    consonantcounter++; 
	
	else if (c == 'n' || c == 'N')
	    consonantcounter++;
	
	else if (c == 'p' || c == 'P')
	    consonantcounter++;
	
	else if (c == 'q' || c == 'Q')
	    consonantcounter++;
	
	else if (c == 'r' || c == 'r')
	    consonantcounter++;
	
	else if (c == 's' || c == 'S')
	    consonantcounter++;
	    
	else if (c == 't' || c == 'T')
	    consonantcounter++;
	
	else if (c == 'v' || c == 'V')
	    consonantcounter++;
	
	else if (c == 'w' || c == 'W')
	    consonantcounter++;
	
	else if (c == 'x' || c == 'X')
	    consonantcounter++;
	
	else if (c == 'y' || c == 'Y')
	    consonantcounter++;
	    
	else if (c == 'z' || c == 'Z')
	    consonantcounter++; 
 }  
    
 cout << "EL NUMERO DE CONSONANTES ES:" << consonantcounter << endl;
 cout <<"\n";
}

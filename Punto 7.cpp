//CAMBIAR FRASE EN LETRAS MINUSCULAS A LETRAS MAYUSCULAS

#include <iostream>
#include <string>

using namespace std;

string change (string word);

int main()
{
    string phrase, Mphrase;

    cout <<"CAMBIAR FRASE EN LETRAS MINUSCULAS A LETRAS MAYUSCULAS" << endl;
    cout <<"\n";
    cout <<"     Ingrese Una Frase En Letras Minusculas" << endl;
    cout <<"               Sin Simbolos" << endl;
    cout <<"\n";
    cout <<"\n";

    getline(cin, phrase);

    cout <<"\n";
    cout <<"\n";
    cout <<"\n";

    Mphrase = change (phrase);
    cout <<"Su Frase Es: " << phrase << "  =   " << Mphrase << endl;
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";

    return 0;

}

string change (string word)
{
    string PHRASE;
    int counter = 0;
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    char A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;


    for (char ch : word)
    {
        if ( ch == 'a' )
            {
            a = 65;
            A = char(a);
            PHRASE = PHRASE + A;
            counter++;
            }

        else if (ch == 'b')
            {
            b= 66;
            B = char(b);
            PHRASE = PHRASE + B;
            counter++;
            }

        else if (ch == 'c')
            {
            c= 67;
            C = char(c);
            PHRASE = PHRASE + C;
            counter++;
            }

        else if (ch == 'd')
            {
            d=68;
            D = char(d);
            PHRASE = PHRASE + D;
            counter++;
            }
        else if (ch == 'e')
            {
            e=69;
            E = char(e);
            PHRASE = PHRASE + E;
            counter++;
            }

        else if (ch == 'f')
            {
            f=70;
            F = char(f);
            PHRASE = PHRASE + F;
            counter++;
            }

        else if (ch == 'g')
            {
            g=71;
            G = char(g);
            PHRASE = PHRASE + G;
            counter++;
            }

        else if (ch == 'h')
            {
            h=72;
            H = char(h);
            PHRASE = PHRASE + H;
            counter++;
            }

        else if (ch == 'i')
            {
            i=73;
            I = char(i);
            PHRASE = PHRASE + I;
            counter++;
            }

        else if (ch == 'j')
            {
            j=74;
            J = char(j);
            PHRASE = PHRASE + J;
            counter++;
            }

        else if (ch == 'k')
            {
            k=75;
            K = char(k);
            PHRASE = PHRASE + K;
            counter++;
            }

        else if (ch == 'l')
            {
            l=76;
            L = char(l);
            PHRASE = PHRASE + L;
            counter++;
            }

        else if (ch == 'm')
            {
            m=77;
            M = char(m);
            PHRASE = PHRASE + M;
            counter++;
            }

        else if (ch == 'n')
            {
            n=78;
            N = char(n);
            PHRASE = PHRASE + N;
            counter++;
            }

        else if (ch == 'o')
            {
            o=79;
            O = char(o);
            PHRASE = PHRASE + O;
            counter++;
            }

        else if (ch == 'p')
            {
            p=80;
            P = char(p);
            PHRASE = PHRASE + P;
            counter++;
            }

        else if (ch == 'q')
            {
            q=81;
            Q = char(q);
            PHRASE = PHRASE + Q;
            counter++;
            }

        else if (ch == 'r')
            {
            r=82;
            R = char(r);
            PHRASE = PHRASE + R;
            counter++;
            }

        else if (ch == 's')
            {
            s=83;
            S = char(s);
            PHRASE = PHRASE + S;
            counter++;
            }

        else if (ch == 't')
            {
            t=84;
            T = char(t);
            PHRASE = PHRASE + T;
            counter++;
            }

        else if (ch == 'u')
            {
            u=85;
            U = char(u);
            PHRASE = PHRASE + U;
            counter++;
            }

        else if (ch == 'v')
            {
            v=86;
            V = char(v);
            PHRASE = PHRASE + V;
            counter++;
            }

        else if (ch == 'w')
            {
            w=87;
            W = char(w);
            PHRASE = PHRASE + W;
            counter++;
            }

        else if (ch == 'x')
            {
            x=88;
            X = char(x);
            PHRASE = PHRASE + X;
            counter++;
            }

        else if (ch == 'y')
            {
            y=89;
            Y = char(y);
            PHRASE = PHRASE + Y;
            counter++;
            }

        else if (ch == 'z')
            {
            z=90;
            Z = char(z);
            PHRASE = PHRASE + Z;
            counter++;
            }

        else if (ch == ' ')
            PHRASE = PHRASE + " ";
            counter++;
    }

    return PHRASE;
 }


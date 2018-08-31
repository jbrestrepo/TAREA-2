//MOVIMIENTO DE PROYECTILES

#include <iostream>
#include <string>
#include <cmath>

#define g 9.81
#define pi 3.14

using namespace std;

double timeFlight (double vel, double an);
double maxHeight (double vel, double an);
double horizRange (double vel, double an);
void results (double t, double h, double r);

int main()
{
    double veli, ang, time, height, range;

    cout <<"  MOVIMIENTO DE PROYECTILES" << endl;
    cout <<"Ingrese La Velocidad Inicial Del Proyectil en m/s" << endl;
    cin >> veli;
    cout << "\n";
    cout <<"Ingrese El Angulo De Salida Del Proyectil" << endl;
    cin >> ang;
    cout << "\n";

    time = timeFlight (veli, ang);
    height = maxHeight (veli, ang);
    range = horizRange (veli, ang);

    results (time, height, range);

    return 0;
}

double timeFlight (double vel, double an)
{
    double tf = 0;
    tf = ( ( (2*vel) * ( sin(an*(pi / 180 )))) /g);
    return tf;
}

double maxHeight (double vel, double an)
{
    double hg, senoCua;

    senoCua = pow (( sin(an*(pi / 180 ))),2);
    hg = ( ( (vel*vel) * (senoCua)) /(2*g));

    return hg;
}

double horizRange (double vel, double an)
{
    double rg, dobSen;
    dobSen = ( sin(2 * (an*(pi / 180 ))));

    rg =  ( (2*vel) * (dobSen) /g);

    return rg;
}

void results (double t, double h, double r)
{
   cout <<"El Tiempo De Vuelo Del Proyectil Es:    " << t << "seg" << endl;
   cout << "\n";
   cout <<"La Maxima Altura Alcanzada Es:    " << h <<"mts" << endl;
   cout << "\n";
   cout <<"El Maximo Alcanze Horizontal fue:    " << r << "mts" <<endl;
   cout << "\n";
}

//Margarita Vega Galindez
//programa que calcula la velocidad y el tiempo

#include <iostream>
using namespace std;
int main ()
{
  float velocidad=0, distancia=0, tiempo=0;
  cout<<"Difgite distancia en metros:"<<endl;
  cin>>distancia;
  cout<<"Digite  tiempo en segundos:"<<endl;
  cin>>tiempo;
  velocidad=distancia/tiempo;
  cout<<"la velocidad es:"<<velocidad<<"m/s";
  return 0;
  }

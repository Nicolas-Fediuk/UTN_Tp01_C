/*Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla
a cuantas d�as y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y
2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y
0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y
20 horas.*/

#include <iostream>
using namespace std;
 int main(){

int hora,dia,horas;

cout<<"ingrese las horas:"<<endl;
cin>>hora;

dia=hora/24;

horas=hora-(dia*24);

cout<<"las horas ingresada equivale a: "<<dia<<" dia"<<" y "<<horas<<" horas"<<endl;

return 0;}

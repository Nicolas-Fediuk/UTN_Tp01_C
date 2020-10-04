/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000
de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la
cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a
pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de
$ 23.000.*/

#include <iostream>
using namespace std;

int main(){

int autos,total;

cout<<"ingrese la cantidad vendida de autos por el empleado: "<<endl;
cin>>autos;

total=(autos*2000)+15000;

cout<<"su sueldo a pagar en total es de: "<<"$"<<total<<endl;

return 0;}

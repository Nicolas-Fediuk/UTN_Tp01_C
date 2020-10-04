/*Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de
descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a
pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar
será de $ 800. */

#include <iostream>
using namespace std;

int main (){

int importe,descuento;
float descuento1,total;

cout<<"ingrese importe:"<<endl;
cin>>importe;

cout<<"ingrese descuento:"<<endl;
cin>>descuento;

descuento1=(importe*descuento)/100;

total=importe-descuento1;

cout<<"total con descuento: "<<"$"<<total<<endl;

return 0;}

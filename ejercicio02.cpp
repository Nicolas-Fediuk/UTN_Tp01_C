/*Hacer un programa que solicite por teclado que se ingresen dos números y luego
guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los
valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.*/

#include <iostream>
using namespace std;

int main (){

int a,b,c,d;

cout<<"ingrese el primer valor:"<<endl;
cin>>a;

c=a;

cout<<"ingrese el segundo valor:"<<endl;
cin>>b;

d=b;

d=a;

c=b;

cout<<"primer valor cambiado: "<<c<<endl;

cout<<"segundo valor cambiado: "<<d<<endl;

return 0;}

 /*Hacer un programa para ingresar por teclado una cantidad de cantidad de minutos y
mostrar por pantalla a cuantos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1
día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0
día, 6 horas y 0 minutos.*/

#include <iostream>
using namespace std;

int main (){

int minu,dias,minutos,horas,minutos2;

cout<<"ingrese la cantidad de minutos a calcular:"<<endl;
cin>>minu;

dias=minu/1440;

minutos=dias*24;

horas=(minu/60)-minutos;

minutos2=minu-(minutos*60)-(horas*60);

cout<<"los minutos ingresados equivalen a: "<<dias<<"dia"<<", "<<horas<<"hs"<<", "<<minutos2<<"min"<<endl;

return 0;}

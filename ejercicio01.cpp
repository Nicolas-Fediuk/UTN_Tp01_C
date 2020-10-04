/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un
operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le
corresponda. */

#include <iostream>
using namespace std;

int main (){

int pago, hora, sueldo;

cout<<"ingrese el pago por hora:"<<endl;
cin>>pago;

cout<<"ingrese la hora trabajada:"<<endl;
cin>>hora;

sueldo=pago*hora;

cout<<"su sueldo es: "<<"$"<<sueldo<<endl;

return 0;}

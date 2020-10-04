/*Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación
y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.*/

#include <iostream>
using namespace std;

int main (){

int asientos_d , pasajes_v,a_disponibles;
float p_asientos_d,p_asientos_o;

cout<< "ingrese la cantidad asientos disponibles del avion:" << endl;
cin>>asientos_d;

cout<<"ingrese pasajes vendidos:"<<endl;
cin>>pasajes_v;

a_disponibles=asientos_d-pasajes_v;

p_asientos_d=(float)a_disponibles*100/asientos_d;

p_asientos_o=(float)pasajes_v*100/asientos_d;

cout<<"porcentaje de asientos disponibles: "<<p_asientos_d<<"%"<<endl;

cout<<"porcentaje de asientos ocupados: "<<p_asientos_o<<"%"<<endl;

return 0;}

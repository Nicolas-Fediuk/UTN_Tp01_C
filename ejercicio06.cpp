/*Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
cada una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por
semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
$ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.*/

#include <iostream>
using namespace std;

int main (){

int r1,r2,r3,r4,total, promedio;
float p_r1,p_r2,p_r3,p_r4;

cout<<"ingrese recaudacion de la semana 1:"<<endl;
cin>>r1;

cout<<"ingrese recaudacion de la semana 2:"<<endl;
cin>>r2;

cout<<"ingrese recaudacion de la semana 3:"<<endl;
cin>>r3;

cout<<"ingrese recaudacion de la semana 4:"<<endl;
cin>>r4;

total=r1+r2+r3+r4;

promedio= total/4;

cout<<"promedio mensual de ventas: "<<promedio<<endl;

p_r1=(float)r1/total*100;

p_r2=(float)r2/total*100;

p_r3=(float)r3/total*100;

p_r4=(float)r4/total*100;

cout<<"porcentaje de recaudacion de la semana 1: "<<p_r1<<"%"<<endl;

cout<<"porcentaje de recaudacion de la semana 2: "<<p_r2<<"%"<<endl;

cout<<"porcentaje de recaudacion de la semana 3: "<<p_r3<<"%"<<endl;

cout<<"porcentaje de recaudacion de la semana 4: "<<p_r4<<"%"<<endl;

return 0;}

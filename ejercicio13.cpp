/* Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir
el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrara por pantalla que se deberán entregar 2
billetes de $ 1.000, 1 billete de $ 500 y 0 billetes de $ 200 y $ 100. SIGUE 
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrara por pantalla que se deberán entregar 3
billetes de $ 1.000, 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrara por pantalla que se deberán entregar 1
billete de $ 200, 1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos
múltiplo de $ 100 ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.*/

#include <iostream>
using namespace std;

int main(){

int monto,mil,quini,dos,cien,e1,e2,e3,e4;

cout<<"ingrese el importe a retirar:"<<endl;
cin>>monto;

mil=monto/1000;

e1=monto%1000;

quini=e1/500;

e2=e1%500;

dos=e2/200;

e3=e2%200;

cien=e3/100;

cout<<"cantidad de billete de mil: "<<mil<<endl;

cout<<"cantidad de billete de quinientos: "<<quini<<endl;

cout<<"cantidad de billete de doscientos: "<<dos<<endl;

cout<<"cantidad de billete de cien: "<<cien<<endl;

return 0;}

/*Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de
las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.*/

#include <iostream>
using namespace std;

int main (){

int v_a,v_b,v_c,total;
float p_a,p_b,p_c;

cout<<"ingrese cantidad vendidad del alfajor a:"<<endl;
cin>>v_a;

cout<<"ingrese cantidad vendidad del alfajor b:"<<endl;
cin>>v_b;

cout<<"ingrese cantidad vendidad del alfajor c:"<<endl;
cin>>v_c;

total=v_a+v_b+v_c;

p_a=(float)v_a*100/total;

p_b=(float)v_b*100/total;

p_c=(float)v_c*100/total;

cout<<"porcentaje de ventas del alfajor a: "<<p_a<<"%"<<endl;

cout<<"porcentaje de ventas del alfajor b: "<<p_b<<"%" <<endl;

cout<<"porcentaje de ventas del alfajor c: "<<p_c<<"%" <<endl;

return 0;}

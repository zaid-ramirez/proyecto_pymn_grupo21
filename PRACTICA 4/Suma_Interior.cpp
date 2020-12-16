/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int Aux(int v[3]){
    int i, suma=0;
    for(i=0; i<3; i++)
    {
       suma=suma+v[i];
    }
  return suma;
}
int main(){
    int v[3], i, suma;
    for(i=0; i<3; i++)
    {
    printf("ingrese los valores del vector:", i);
    scanf("%i", &v[i]);
    }

    suma= Aux(v);

    printf("La suma de los valores del vector es: %i", suma);
}
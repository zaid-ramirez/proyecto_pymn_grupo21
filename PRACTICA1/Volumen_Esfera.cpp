/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main(){
    float radio, volumenEsfera;
    printf("Hola buen dia, ingrese el radio de la esfera");
    scanf("%f", &radio);
       volumenEsfera = (4* M_PI* pow(radio,3))/3;
       printf("\nEl volumen de la esfera es %f metros c%cbicos.\n\n", volumenEsfera, 163);
    return 0;
}
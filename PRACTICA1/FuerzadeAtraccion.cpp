/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float W, m, g;
    g= 9.8;
    printf("Hola buen dia, ingresa tu masa");
    scanf("%f", &m);
    W = (m*g);
    printf("\n Su fuerza de atraccion(w) es de: %.2f", W);

    return 0;
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
  int c1, c2, i=0;
  do {
    printf("Indtroduzca un numero entero: \n");
    scanf ("%d", &c1);
    printf("Introduzca un numero entero: \n");
    scanf("%d", &c2);
    if (c1!=c2){
      i=i+1;
      c2=c1;
    } else {
    printf("Error, codigo invalido\n");
    break;
    }
  } while(i<4);
  return 0;
}
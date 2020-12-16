/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main() {
  int n2=0,a,z, numero ;
  int binario[100];
  binario[0]=0;

  printf("Introduzca un numero que sea entero:\n");
  scanf("%d", &numero);

  for (a=0; a<100; a++) {
    binario[a]=numero%2;
    numero=numero/2;
    if (numero==0)
    break;
  }

  for (z=a; z>=0; z--) {
    printf("%d", binario[z]);
  }

  getch();
  return 0;
}
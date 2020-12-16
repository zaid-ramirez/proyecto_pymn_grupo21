/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main(){
	int edad;
	printf("Hola, Porfavor Ingrese su edad");
	scanf("%d",&edad);
	printf("Tu edad es %i años.\n",edad);
	if (edad>=18){

		printf("Eres mayor de edad.\n");
	}
	else{
		printf("Eres menor de edad.\n");
	}

	return 0;
}
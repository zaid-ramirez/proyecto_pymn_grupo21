/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
int i,bin;
i=0;
printf("Indique el numero a conocer su residuo binario" );
scanf("%i",&i );
while (i!=0) {
	bin= i%2;
	i= bin%2;

	printf("%i\n",bin );
}
}
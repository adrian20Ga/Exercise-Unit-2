#include <stdio.h>

void swapTwoNumbers(int *a, int *b) //hacemos uso de funcion swapTwonumbers
{
	int me= *a; // variable me ahora es puntero
	*a= *b; // puntero en otro puntero 
	*b= me; //se asigna valor a puntero
}

int  main(void) {
	int x=69, y=23;
	printf("The first number %d  The second number: %d \n", x,y);
	swapTwoNumbers(&x, &y); // We call the function //
	printf("The numbers swapped are: %d %d \n", x,y);
	return 0;
}

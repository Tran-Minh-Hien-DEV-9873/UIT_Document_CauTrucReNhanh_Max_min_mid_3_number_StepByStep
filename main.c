#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=3,b=10,c=4;
	int max,min,mid;
	
	max = a; 
	if(a < b)
	{
		max = b;
		min = a;
	}
	
	min = a;
	if(a > b)
	{
		max = a;
		min = b;
	}
	
	mid = (a+b+c)%(min+max);
	mid = (a+b+c)-(min+max);
	
	printf("Max la: %d \n", max);
	printf("Min la: %d \n", min);
	printf("Mid la: %d \n", mid);

	return 0;
}

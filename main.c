#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sumTwo (int a, int b)
{
	int result;
	
	result = a+b;
	
	return result;
}

int square (int n)
{
	int result;
	
	result = n*n;
	
	return result;
}

int get_max (int x, int y)
{
	
	if (x > y)
		return x;
	else
		return y;
	
}


int main(int argc, char *argv[]){
	
	printf("sum two result is %i\n", sumTwo(2,3));
	printf("square result is %i\n", square(5));
	printf("getmax result is %i\n", get_max(10,13));



	return 0;
}	


#include <stdio.h>
#include <stdlib.h>


#define PI 3.1415926abc//预处理
#define ADD (2+3)
#define MAX(a,b) (a > b ? a : b) // if a > b; return a; else b;三步运算符。


int main()
{

	/*int a,b,c;

	a * PI;

	b + PI;

	C / PI;*/

//	printf("%d\n",ADD * ADD);

	int i = 5, j = 3;

	printf("i = %d\t j = %d\n",i,j);
	printf("%d\n",MAX(i++,j++));
	printf("i = %d\t j = %d\n",i,j);
	

	exit(0);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = NULL;

	p = malloc(sizeof(int));//内存释放
	
	if(p=NULL)
		 exit(1);

	printf("hello world!\n");
		
	exit(0);
}

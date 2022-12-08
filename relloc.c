#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=NULL;
    p = (int *)malloc(10 *sizeof(int));
    p = (int *)realloc(p,15*sizeof(int));
	printf("%d",p);
    free(p);
    return 0;
}

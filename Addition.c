/*
Algorithm:
    start
        take the number of elements from user
        Allocate the memory to them
        take the numbers from user
        Add the numbers
        display the result
    end
*/
///////////////////////////////////////////////////////////////////////////////////
////
//Application name: Addition of N numbers
//input : Numbers
//output: Addition of the input numbers
//Author: Harshad Hanumant Bhandare
//Date :18/09/2022
/////////////////////////////////////////////////////////////////////////////////////
////
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *Arr=NULL;//pointer to hold address of array
    int iSize =0;
    int i=0;
    int iSum=0;

    printf("Enter the how many elements you want?");
    scanf("%d",&iSize);
    
    Arr = (int *)malloc(iSize*sizeof(int));//dynamic memory allocation using malloc
    printf("Memory allocation successfull\n");
    
    printf("Enter Elements\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<iSize;i++)
    {
        iSum=iSum + Arr[i];
    }
    printf("ADDITION of Numbers is %d\n",iSum);
    free(Arr);
    printf("Memory dellocates succesfully");
    return 0;
}











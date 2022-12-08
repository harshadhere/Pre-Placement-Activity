#include<stdio.h>
int Addition(int C,int D)
{
    int Ans = C + D;

    printf("Inside Addition");

    return Ans;
}


int main()
{

  int A = 11, B= 21,Ret = 0;

   Ret = Addition(A,B);

   printf("Addition is : %d",Ret);


    return 0;
}
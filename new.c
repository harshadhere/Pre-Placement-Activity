#include<stdio.h>

int Addition(int iValue1,int iValue2)
{
    auto int iOutput = 0;

    iOutput= iValue1+ iValue2;

    return iOutput;
}

int main()
{
    auto int iNo1;
    
    auto int iNo2;

    auto int iAns=0;
    printf("ENter the number first :\n");
    scanf("%d",&iNo1);
    printf("ENter the number second :\n");
    scanf("%d",&iNo2);


    iAns=Addition(iNo1,iNo2);

    printf("Addition is:%d\n",iAns);
}
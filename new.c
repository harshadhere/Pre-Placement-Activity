#include<stdio.h>

int Addition(int iValue1,int iValue2)
{
    auto int iOutput = 0;

    iOutput= iValue1+ iValue2;

    return iOutput;
}

int main()
{
    auto int iNo1=10;
    
    auto int iNo2=11;

    auto int iAns=0;

    iAns=Addition(iNo1,iNo2);

    printf("Addition is:%d\n",Ans);
}
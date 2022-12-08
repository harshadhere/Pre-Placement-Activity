#include<stdio.h>
#include<conio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo==0)
    {
        return 1;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo >0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;

    }
    return iCnt;
}
int main()
{
    int value,iRet;
    scanf("%d",&value);
    iRet = CountDigits(value);
    printf("The Digits are",iRet);
    return 0;
}
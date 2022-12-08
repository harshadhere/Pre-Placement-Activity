/*Start
     Accept the number from users
     check the number is prime or not
       if number is prime print 
          print number is prime
       else 
          number is not prime
  End
*/
#include<stdio.h>
#include<stdbool.h>
bool Primes(int value)
{
    int count;
    for(int i=1;i<value;i++)
    {
        if(value % i==0)
        {
            count++;
        }
        
    }
    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    }
        
}
 
int main()
{
    int iValue;
    bool iRet;
    printf("Enter the number you want to check is prime or not : \n");
    scanf("%d",&iValue);
    iRet = Primes(iValue);
    if(iRet==true)
    {
        printf("%d  is prime Number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number \n",iValue);
    }
    return 0;
}
#include<stdio.h>
void strUpper(char *str)
{
     while (*str != '\0')
     {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
     }

     
}
int main
{

    char Arr[39]
    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);
    strUpper(Arr);


   printf("String after conversion is : %s",Arr)
    return 0;

}
#include<iostream>
#include<string.h>
using namespace std;
int strlenx(char str[])
{
int iCnt=0;
while(*str!='\0')
{
    iCnt++;
    str++;
}
return iCnt;

}
int main()
{
char arr[20];
int iRet=0;
cout<<"enter first name"<<"\n";
cin>>arr;
iRet=strlenx(arr);
cout<<"length of name"<<iRet<<"\n";
return  0;
}
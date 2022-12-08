#include<iostream>
using namespace std;
int Addi(int i,int j)
{
    int ans = 0;
    ans = i+j;
    return ans;
}
float Addf(float i,float j)
{
    float ans = 0;
    ans = i+j;
    return ans;
}

int main()
{
    int a=20,b=30,iret=0;
    float x=90.0f,y=67.07f,z=88.6f,fret =0.0f;
    iret = Addi(a,b);
    fret=Addf(x,y);
    cout<<"Addition of integers :"<<iret<<endl;
    cout<<"Addition of float is  :"<<fret;

    return 0;
}

#include<iostream>
using namespace std;

template <class T>
T Add(T i,T j)
{
    T ans;
    ans = i+j;
    return ans;
}


int main()
{
    int a=20,b=30,iret=0;
    float x=90.0f,y=67.07f,fret =0.0f;
    double p=90.0,q=67.07,dret =0.0;
    iret = Add(a,b);
    fret=Add(x,y);
    dret= Add(p,q);
    cout<<"Addition of integers :"<<iret<<endl;
    cout<<"Addition of float is  :"<<fret<<"\n";
     cout<<"Addition of double is  :"<<dret<<"\n";


    return 0;
}

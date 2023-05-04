#include<iostream>
using namespace std;
float area(float radius,float pi=3.14)
{
    float ans=0.0f;
    ans=pi*radius*radius;
    return ans;

}
int main()
{
    float r=0.0f;
    float fret=0.0f;
    cout<<"enter the radius"<<"\n";
    cin>>r;
    fret=area(r);
    cout<<"area of circle"<<fret<<"\n";
    fret=area(r,7.10);
    cout<<"area of circle"<<fret<<"\n";
    
}
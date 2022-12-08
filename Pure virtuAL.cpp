#include<iostream>
using namespace std;
class circle
{ 
    public :
    float PI;
    float Radius;

    circle()
    {
        PI=3.14;
        Radius=0.0;
    }
    circle(float A,float B)
    {
        PI=A;
        PI=B;
    }
    void display()
    {
        cout<<"Value of radius is : "<<Radius<<"\n";
    }
    virtual float Area()=0;
    virtual float Circumference() = 0;
    

};
int main()
{
    return 0;
}
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
        Radius=10.40;
    }
    circle(float A,float B)
    {
        PI=A;
        Radius=B;
    }
    void display()
    {
        cout<<"Value of radius is : "<<Radius<<"\n";
    }
    virtual float Area()=0;
    virtual float Circumference() = 0;
    

};
class Harry:public circle
{
    public:
     Harry():circle() //Base member initialization
     {

     }
     Harry(float X,float Y):circle(X,Y)
     {

        
    
     }
     float Area()
     {
        float ans = PI * Radius * Radius;
        return ans;
     }
     float Circumference()
     {
        float ans =0.0;
        ans= 2 * PI * Radius;
        return ans;
     }

};
int main()
{
    Harry h1;
    Harry h2;
    float fret=0.0;
     fret= h2.Area();
     cout<<"Value of area is : "<<fret<<"\n";
   fret= h2.Circumference();
   cout<<"Valur of circumference is : "<<fret<<"\n";

    return 0;
}
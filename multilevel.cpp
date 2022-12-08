#include<iostream>
using namespace std;
class Base
{
    public :
       int A,B;
       protected:
       int l;
       Base()
       {
        cout<<"Inside Base constructor\n";
       }
       ~Base()
       {
       cout<<"Inside base:\n";
       }
       void fun()
       {
        cout<<"Inside fun\n";
       }

};
class derived:public Base
{
    public:
    int x,y;
    derived()
    {
        cout<<"Inside derived constructor\n";

    }
    ~derived()
    {
        cout<<"Inside derived destructor\n";
    }
    void gun()
    {
        cout<<"Inside gun function\n" ,;
    
    }
};

class Derivedx:public derived
{
    public :
    int i,j;
    Derivedx()
    {
        cout<<"Inside Derivedx constructor\n";
    }
    ~Derivedx()
    {
        cout<<"Inside derivedx destructor\n";
    }
    void sun()
    {
        cout<<"Inside sun\n";
    }

};
int main()
{
    cout<<"Size if Base"<<sizeof(Base)<<"\n";
    cout<<"Size if Base"<<sizeof(derived)<<"\n";
    cout<<"Size if Base"<<sizeof(Derivedx)<<"\n";
  Derivedx s1;
    s1.gun();
    s1.fun();
    s1.sun();
    

  

    return 0;
}
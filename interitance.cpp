#include<iostream>
using namespace std;
class Demo
{
    public:
    int A,B;
    

    Demo()
    {
A=11;
B=21;

        cout<<"inside demo constructor"<<"\n";

    }
    void fun()
    {
        cout<<"inside fun of demo"<<"\n";

    }
     };
    class Hello:public Demo
    {
        public:
        int X,Y;
        Hello()
        {
            X=20;
            Y=50;
             cout<<"inside hello constructor"<<"\n";
        }
        void gun()
        {
             cout<<"inside fun of gun"<<"\n";
        }
    };
    int main()
    {
        Hello hobj;
        hobj.fun();
        hobj.gun();
        cout<<hobj.A<<"\n";
        cout<<hobj.B<<"\n";
        cout<<hobj.X<<"\n";
        cout<<hobj.Y<<"\n";
        return 0;
    }
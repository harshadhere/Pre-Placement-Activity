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
     ~Demo()
    {
      cout<<"inside Demo destructor"<<"\n";
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
         ~Hello()
        {
            
             cout<<"inside Hello destructor"<<"\n";
        }
        void gun()
        {
             cout<<"inside gun of hello"<<"\n";
        }
    };
    class PPA:public Hello
    {
        public:
        int I,J;
        PPA()
        {
            I=31;
            J=60;
             cout<<"inside PPA constructor"<<"\n";
        }
        ~PPA()
        {
            X=20;
            Y=50;
             cout<<"inside PPA destructor"<<"\n";
        }
             
        void sun()
        {
             cout<<"inside sun of ppa"<<"\n";
        }
    };
    int main()
    {
        cout<<"inside main"<<"\n";
        cout<<"size of demo"<<sizeof(Demo)<<"\n"; 
        cout<<"size of Hello"<<sizeof(Hello)<<"\n";
        cout<<"size of PPA"<<sizeof(PPA)<<"\n";
        
               PPA pobj;

        pobj.fun();
        pobj.gun();
        pobj.sun();

        cout<<pobj.A<<"\n";
        cout<<pobj.B<<"\n";
        cout<<pobj.X<<"\n";
        cout<<pobj.Y<<"\n";
        cout<<pobj.I<<"\n";
        cout<<pobj.J<<"\n";
        cout<<"end of main"<<"\n";
        return 0;
    }
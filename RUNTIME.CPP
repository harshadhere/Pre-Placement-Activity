#include<iostream>
using namespace std;

class Base 
{
    public:
        int A,B;
        void fun()
        {
            cout<<"Base fun \n";
        }
        virtual void gun()
        {
            cout<<"Base gun \n";
        } 
        virtual void sun()
        {
            cout<<"Base sun \n";
        }
        virtual void run()
        {
            cout<<"Base run \n";
        }
};

class derived : public Base
{
    public:
        int X,Y;
        void gun()
        {
            cout<<"Derived gun \n";
        }
        virtual void run()
        {
            cout<<"Derived run \n";
        }
        virtual void mun()
        {
            cout<<"Base mun \n";
        }
};

int main()
{
    //cout<<"SIZE OF BASE CLASS : "<<sizeof(Base)<<"\n";
    //cout<<"SIZE OF DERIVED CLASS : "<<sizeof(derived)<<"\n";
    Base *bp = NULL;
    derived dobj;
    
    bp = & dobj;    //upcasting

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun();

    return 0;
}
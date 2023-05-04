#include<iostream>
using namespace std;
class Base
{
    public:
    int A,B;
    void fun()    //function defination
     {
        cout<<"Base Fun\n";
     } ;
     virtual void gun(){cout<<"base gun\n";};
          virtual void run(){cout<<"base run\n";};

};
class derived:public Base
{
    public:
    void fun()    //function defination
     {
        cout<<"Insideee Fun\n";
     }

};

    int main()
{

    Base *bp = NULL;
    derived dobj;
    bp = & dobj;
   
    bp -> fun();


    return 0;
}
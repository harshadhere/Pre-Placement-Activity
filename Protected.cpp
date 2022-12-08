#include<iostream>
using namespace std;
class Base
{
    public:
    int A;
    //private:
    //int j;
    protected:
    int l;
    public:
     Base ()
     {
        A=20;
        l=30;
     }
};
class derived:public Base
{
    public :
    void fun()
    {
    cout<<"Value of A "<<A;
    //cout<<"Value of B "<<j<<endl;
    cout<<"value of i "<<l;
    }
}; 
int main()
{
    derived d1;
    d1.fun();
    return 0;
}
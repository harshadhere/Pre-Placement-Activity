#include<iostream>
using namespace std;
class Base
{
    public:
    int A;;
    private:
    int j;
    protected:
    int l;
    public:
     Base ()
     {
        A=20;
        j=30;
        l=30;
     }
};
class derived:public Base
{
    cout<<"Value of A "<<A<<endl;
    cout<<"Value of B "<<j<<endl;
    cout<<"value of i "<<l<<endl;
}; 
int main()
{
     derived d1;
   
   
    return 0;
}
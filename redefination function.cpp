#include<iostream>
using namespace std;
class base
{ 
    public:
    int a,b;
     public :
     void fun()
     {
        cout<<"Inside Fun\n";
     }
     void gun(int a)
     {
        cout<<"Function with 1 parameter\n";
     }
     void gun(int a,int b)
     {
        cout<<"Function with 2 parameter\n";
     }
};
class derived:public base
{
   public:
   int x,y;
   public:
   void sun()
   {
    cout<<"Derived sun\n";
   }
   void fun()
   {
    cout<<"Derived fun\n";
   }

};
int main()
{
    derived obj;
    obj.fun();
    obj.gun(11);
    obj.gun(11,22);
    obj.sun();
      
      return 0;
}



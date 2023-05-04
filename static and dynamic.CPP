#include<iostream>
using namespace std;
class base
{
    public :
    int a,b;
    void fun() {cout<<"Base fun\n";}
   virtual  void gun() {cout<<"Base gun\n";}
    virtual void sun() {cout<<"Base sun\n";}

    
};

class derived:public base
{
    public :
       int x,y;
          void gun() {cout<<"derived gun\n";}
          void run() {cout<<"derived run\n";}
           //virtual void mun() {cout<<"derived mun\n";}

};
int main()
{
    cout<<"Size of base class: "<<sizeof(base)<<"\n";
    cout<<"Size of derived class: "<<sizeof(derived)<<"\n";
  base *bp = NULL;
    /*derived dobj;
    bp = &dobj;*/
    bp = new derived;//up casting
    bp->fun();
    bp->gun();
    bp->sun();
   return 0;
}
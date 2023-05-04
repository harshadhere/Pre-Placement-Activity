#include<iostream>
using namespace std;
class base
{
    public :
    int a,b;

    
};

class derived:public base
{
    public :
       int x,y;

};
int main()
{
    base * bp=NULL;
    derived * dp= NULL;
     base bobj;
    derived dobj;
   
    bp = &bobj;   //NO CASTING
    dp = &dobj;   //NO CASTING
    bp = &dobj;   //UPCASTING
   //////dp = &bobj;   //DOWNCASTING WHICH IS NOT ALLOWED
    
   
    return 0;
}
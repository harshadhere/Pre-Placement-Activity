#include<iostream>
using namespace std;
class Demo
{
   private:
    int A,B;
   public:
    Demo(int i=0,int k=0)
    {
     A=i;
     B=k;

    }
    void display()
    {
        cout<<A<<endl;
        cout<<B<<endl;
    }
    
    friend Demo operator +(Demo, Demo);
    friend Demo operator -(Demo, Demo);
    friend Demo operator *(Demo, Demo);
    
   
    
};
Demo operator +(Demo obj1,Demo obj2)
{
    cout<<"Inside Operator"<<"\n";
    return Demo(obj1.A+obj2.A,obj1.B+obj2.B);

}

Demo operator -(Demo obj1,Demo obj2)
{
    cout<<"Inside - Operator"<<"\n";
    return Demo(obj1.A-obj2.A,obj1.B-obj2.B);

}

Demo operator *(Demo obj1,Demo obj2)
{
    cout<<"Inside Operator"<<"\n";
    return Demo(obj1.A*obj2.A, obj1.B*obj2.B);

}

int main()
{

    Demo ans(0,0);
      Demo x(10,20);
      Demo y(30,40);
      ans =x + y;
      ans.display();
      ans =x - y;
      ans.display();
      ans =x * y;
      ans.display();
      //cout<<ans.A<<"\n"<<ans.B<<"\n";
      
      //x.display();
      //y.display();
    return 0;
}
